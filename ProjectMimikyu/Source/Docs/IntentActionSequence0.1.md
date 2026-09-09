**Intent Action Sequence 0.1 — implementation and verification**

Normal Trainer MoveTo now passes through a non-ticking `UPokemonIntentSequenceComponent` owned by `APokemon_Parent`. It creates one `NavigateToLocation` action for the entire retained navigation request. Navigation still owns all internal Walk / Jump / Walk segments. The implementation and 32 native tests pass in UE 5.8.1; manual PIE acceptance remains unperformed.

**SOURCE-INSPECTED — baseline lifecycle.** Work started from local commit `59672521b6e766f03564dff42c52153ebca7535f`, “Composite Navigation 0.3”. The existing local Lucario data-asset change was left untouched.

Before this change, `ATrainerCharacter::ServerCommandPokemonMove_Implementation` checked the selected Pokémon and `CanAct()`, then called `UPokemonNavigationComponent::RequestPlayerMoveToLocation` directly. Navigation created `FAgentNavigationRequest::RequestId`, retained the original clicked destination, and checked ground projection/pathfinding. Its bool could be false for a partial/rejected ground route while the newly created request remained retained for special traversal. Composite Navigation discovered and executed local segments under that same ID. A successful intermediate landing discarded local planning assumptions and resumed navigation; only final destination acceptance cleared the retained request. There was no terminal native result delegate to a higher-level owner.

The jump executor reports a completed landing after CharacterMovement installs grounded post-landing movement. `HandleJumpFinished` already rejects old request IDs. Replacement retires ownership before cancelling preparation; an existing airborne jump remains under the jump executor until it finishes. Dodge starts navigation suspension only after successful ability activation and calls resume at `EndDodge`. Neither is a completed MoveTo.

The attack path was inspected separately. `ServerCallCommand_Implementation` validates the selected move and Pokémon, sets the command target from aim data, and calls the existing command flow. `UPokemonCommandComponent::TryCallCommand` validates moveset/cooldown/active state, sets `ActivePokemonMove`, creates `ActiveTrainerCommandId`, resets attack-jump consumption, and updates command/blackboard state. `AttackEnded` invalidates that ID, clears move momentum, charging, active move and target state, restores movement speed, and broadcasts `OnAttackEnd`; `ClearActiveMove` also invalidates the command ID.

`UAT_CombatApproach` creates its own navigation request inside the ability, copies the command ID into `ParentAttackCommandId`, supplies melee/contact and target data, and checks that its submitted navigation ID still belongs to it. Its range/contact completion and destruction clear only its owned navigation request. The melee BT task performs its existing AI MoveTo and ability activation; the ranged task performs its existing ability activation. Both finish through `OnAttackEnd`. GAS activation, hit/miss resolution, command target ownership, melee geometry, and attack-jump consumption remain in those existing systems.

**IMPLEMENTED — coordinator and types.** The runtime path is:

`Trainer server Move → Pokémon IntentSequenceComponent → SubmitMoveToIntent → NavigateToLocation adapter → navigation → internal composite segments → navigation terminal result → action result → intent result`

The component is constructed as a default subobject on every `APokemon_Parent`, with `GetIntentSequenceComponent()` as its accessor. Submission and cancellation require authority. The existing Trainer guards remain in place. The coordinator does not tick, poll movement, subscribe to jump segment completion, or take over combat state.

| Type / field | Contract |
| --- | --- |
| `EPokemonIntentActionType` | `NavigateToLocation` only in 0.1 |
| `EPokemonIntentActionState` | `Pending`, `Running`, `Succeeded`, `Failed`, `Interrupted` |
| `EPokemonIntentSequenceState` | `Idle`, `Running`, `Succeeded`, `Failed`, `Interrupted` |
| `FPokemonIntentActionSpec` | Action type, destination, and special-traversal permission |
| `FPokemonIntentActionRecord` | Spec, ActionId, ExecutorRequestId, state, and reason |
| `FPokemonIntentSequence` | IntentId, ordered records, ActiveActionIndex, state, and reason |
| `IntentId` | One entire high-level MoveTo intent |
| `ActionId` | One action inside that intent; distinct from both other IDs |
| `ExecutorRequestId` | The actual `FAgentNavigationRequest::RequestId` owned by navigation; unchanged in meaning |

`SubmitMoveToIntent(Destination, bAllowSpecialTraversal)` creates exactly one action. Its returned GUID identifies the created intent even if executor submission immediately fails; an invalid GUID means no intent was installed for that call, such as invalid caller/input or supersession before installation. The small internal `SubmitSequence` path accepts an ordered array and is exercised by native tests. There are no action assets, branches, parallel execution, or UObject action trees. The stateless `FPokemonNavigateToLocationAction` adapter only submits and cancels navigation; IDs and action lifetime live in the coordinator's record.

Success marks the current action `Succeeded` and increments the active index. A next action starts under the same IntentId with its own ActionId and a fresh executor request. After the last success the index is one past the action array and the parent succeeds. Failure or interruption stops advancement; later actions remain pending. `OnIntentResolved` broadcasts an immutable local snapshot so a listener can submit a new intent without changing the result other listeners receive.

**IMPLEMENTED — navigation submission and terminal API.** The existing Blueprint bool API remains available with its ground-route meaning. The new native API is:

```cpp
FPokemonNavigationSubmission SubmitPlayerMoveToLocation(const FVector&, bool bAllowSpecialTraversal = true);
bool CancelNavigationRequest(FGuid OwnedRequestId, FName Reason);
FPokemonNavigationResolvedSignature OnNavigationResolved;
// Delegate arguments: FGuid RequestId, EPokemonNavigationResolution Result, FName Reason
```

`FPokemonNavigationSubmission` contains `RequestId`, `bGroundPathAccepted`, `Reason`, and `IsAccepted()`. A valid returned RequestId proves that this exact submission still owns the retained request when submission returns. A partial ground route can therefore return `bGroundPathAccepted=false` and `IsAccepted()=true`. The Navigate action stores that ID and enters Running only after this positive ownership check. It cannot capture an older unrelated request merely because navigation has some request active.

An invalid submission ID represents true rejection or reentrant supersession. For example, a partial route with special traversal disabled produces `SpecialTraversalDisabled`; missing navigation system/component produces a specific unavailable reason. A rejected submission has no running executor and fails the pending action/parent immediately. Once an action owns an executor, only a matching terminal executor result or explicit parent cancellation resolves it; ground path bools and local segment events do not.

`EPokemonNavigationResolution` has `Succeeded`, `Failed`, and `Interrupted`. Final player destination acceptance reports `Succeeded` with the completed ID and `Reason=None`. Navigation becoming unusable because its owner cannot act reports `Failed/OwnerCannotAct`. Owner cancellation/replacement reports `Interrupted` with stable reasons such as `IntentCancelled`, `ParentReplaced`, `NavigationCleared`, or `OwnerEndPlay`. Legacy chase/approach clears remain clears and now report interruption; their arrival criteria and combat completion were not migrated.

Navigation first retires its retained request and local state, cancels preparation/stops owned movement, and then broadcasts the terminal result. It makes no state changes after broadcasting. A second terminal resolution for the same retired ID is rejected. A result listener may start the next action synchronously without subsequent cleanup erasing its request.

**IMPLEMENTED — suspension, holds, and replacement.** `SuspendNavigation` / `ResumeNavigation` have no terminal broadcasts. The Navigate action stays Running across Dodge and retains all three IDs. Composite failure holds also stay nonterminal while the navigation request is retained. Existing recovery, replan, and jump rules continue to belong to navigation.

`CancelIntent(OwnedIntentId, Reason)` validates that the caller names the running intent, unbinds the executor callback, marks the old sequence/action Interrupted, and snapshots the old result before cancelling only its stored ExecutorRequestId. Navigation's targeted cancel is a no-op for an invalid/stale ID and never broadcasts a cancellation for an unrelated request. A new MoveTo uses `ParentReplaced`, then creates fresh intent, action, and navigation IDs.

The bound navigation callback captures the owning IntentId and ActionId and checks them, the current active index/state, and the reported navigation ID. Terminal actions cannot resolve twice. Mutation serials prevent an older submission from overwriting a newer request/intent created by a synchronous terminal listener. Submission also rechecks ownership before adopting its returned executor. Native tests cover replacement during real jump preparation, deliberately delayed ownership information, duplicate callbacks, and replacement from inside both intent and navigation terminal listeners.

**Combat boundary.** No attack implementation file was changed. `TryCallCommand`, `AttackEnded`, `ActiveTrainerCommandId`, `CurrentCommandTarget`, `UAT_CombatApproach`, melee/ranged BT tasks, GAS activation, `OnAttackEnd`, and hit/miss resolution keep their existing ownership. Future Attack Intent work must deliberately reconcile or migrate `ActiveTrainerCommandId` with the parent IntentId model, arrange approach navigation ownership, and introduce an AttackExecution result contract. `OnAttackEnd` is not being treated as a new Hit/Miss result in 0.1. An external navigation replacement can interrupt a MoveTo intent through the new native delegate, while leaving the external request installed.

**Files changed.** Links point to this checkout.

| Files | Purpose |
| --- | --- |
| [PokemonIntentSequenceComponent.h](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Public/ActorComponents/PokemonIntentSequenceComponent.h), [implementation](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonIntentSequenceComponent.cpp) | New event-driven owner, sequence lifecycle, cancellation, and debug events |
| [PokemonIntentSequenceTypes.h](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Public/Intent/PokemonIntentSequenceTypes.h) | New enum/spec/record/sequence types |
| [PokemonNavigateToLocationAction.h](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Private/Intent/PokemonNavigateToLocationAction.h), [implementation](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Private/Intent/PokemonNavigateToLocationAction.cpp) | Small stateless action adapter |
| [PokemonNavigationResult.h](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Public/Navigation/PokemonNavigationResult.h) | Native submission and terminal-result contracts |
| [PokemonNavigationComponent.h](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Public/ActorComponents/PokemonNavigationComponent.h), [implementation](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonNavigationComponent.cpp) | Positive submission ownership, targeted retirement/cancellation, terminal reporting |
| [PokemonCompositeNavigation.cpp](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonCompositeNavigation.cpp) | Final completion now reports success; one-line behavioral integration |
| [Pokemon_Parent.h](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Public/Characters/Pokemon_Parent.h), [implementation](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Private/Characters/Pokemon_Parent.cpp) | Coordinator construction and accessor |
| [TrainerCharacter.cpp](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyu/Private/Characters/TrainerCharacter.cpp) | Routes normal server MoveTo through the coordinator |
| [PokemonCompositeMoveAutomationFixture.h](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyuEditor/Private/Tests/PokemonCompositeMoveAutomationFixture.h), [PokemonCompositeMoveTests.cpp](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyuEditor/Private/Tests/PokemonCompositeMoveTests.cpp) | Extracts the existing native gap world/navmesh setup for reuse; keeps all nine CompositeMove tests |
| [PokemonIntentSequenceTests.cpp](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/ProjectMimikyuEditor/Private/Tests/PokemonIntentSequenceTests.cpp) | Fourteen deterministic native tests |
| [IntentActionSequence0.1.md](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Source/Docs/IntentActionSequence0.1.md) | This handoff |

Jump physics, solver, trajectory validation, landing discovery, composite scoring, capability tuning, and project navigation settings were not changed.

**COMPILED / AUTOMATION PASS.** The installed engine is UE 5.8.1, changelist 56057345. `ProjectMimikyuEditor Win64 DebugGame` built successfully. Existing unrelated legacy/deprecation warnings remain. Running `Automation RunTests ProjectMimikyu.` in the actual DebugGame commandlet executable produced:

| Suite | Result |
| --- | --- |
| `ProjectMimikyu.Traversal.Jump` | 9/9 passed |
| `ProjectMimikyu.Navigation.CompositeMove` | 9/9 passed |
| `ProjectMimikyu.Intent.Sequence` | 14/14 passed |
| All `ProjectMimikyu.` tests | 32/32 passed; 0 failed; 0 not run |

The report classifies 24 successful tests as having warnings, primarily existing native fixture startup/navigation logs and a crowd-manager teardown warning. Eight succeed without warnings. No automation failure was suppressed.

The new test names are `MoveToBuildsOneNavigateAction`, `RetainedPartialRoute`, `MatchingNavigationSuccess`, `TwoOrderedActions`, `PreparationSuspendResume`, `ReplacementRejectsStaleCallbacks`, `TargetedOwnership`, `CompositeFailureHoldIsNonterminal`, `RejectedSubmissionDoesNotCaptureOtherRequest`, `TerminalFailureStopsSequence`, `ExternalNavigationReplacement`, `ReentrantIntentReplacement`, `ReentrantNavigationSubmission`, and `WalkJumpWalkOneIntent`.

The full physical coordinator test submits once and advances only the native world. It uses the existing generated Recast navmesh, AI path following, real jump preparation/launch, and CharacterMovement landing. It starts at X=-200, lands at X=434.32, and walks to X=1101.61 for target X=1200 and radius 100, with exactly one launch. These positions match the existing CompositeMove test in the same run. Intermediate landing is 765.7 cm from the parent destination; navigation/action/intent finish together only at final acceptance, 98.4 cm from the target. Other tests intentionally inject stale/terminal results or reposition feet to isolate lifecycle rules; those are not claimed as physical route tests.

The recorded full-chain IDs were IntentId `7D4E2F9D41C5442E9D65E1B7CD745F45`, ActionId `74F913B247585677183589A89EA99A7C`, and ExecutorRequestId `ABBC496441DB7469EC7E3AB9FE5C6A71`. The log shows that navigation ID in CompositeNav Parent, Segment, Continue, and Complete, followed by the matching action success and parent completion.

Evidence: [automation JSON](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Saved/Automation/IntentSequence-0.1/index.json), [automation HTML](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Saved/Automation/IntentSequence-0.1/index.html), and [full log](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Saved/Logs/IntentSequence-0.1.log).

- **SOURCE-INSPECTED:** requested command, navigation, combat, jump, and fixture lifecycles inspected before implementation.
- **IMPLEMENTED:** coordinator + NavigateToLocation adapter + normal Trainer Move integration.
- **COMPILED:** UE 5.8.1 DebugGame editor target passed.
- **AUTOMATION PASS:** 32/32, including a full native Walk → Jump → Walk through one intent.
- **RUNTIME PASS:** not claimed; manual PIE was not performed.
- **RUNTIME FAIL:** not observed in manual PIE; that acceptance run remains unperformed.

**Exact manual PIE procedure.** Use the existing validated one-gap Lucario map. No new environment or capability adjustment is required. Launch the freshly built DebugGame editor:

```powershell
& 'C:\Program Files\Epic Games\UE_5.8\Engine\Binaries\Win64\UnrealEditor-Win64-DebugGame.exe' 'C:\Users\1351d\OneDrive\Documents\GitHub\ProjectPokemonMaster\ProjectMimikyu\ProjectMimikyu.uproject'
```

Development binaries were not rebuilt for this milestone. Restart in the executable above so the new default component and code are loaded.

1. Open the existing Lucario gap map, start PIE, and select/send out Lucario normally.
2. Enable the four console commands below.
3. Issue exactly one normal player Move command to a supported destination beyond the gap and well beyond the intermediate landing band.
4. Observe the original walking approach, jump preparation/takeoff, intermediate landing, automatic final walking, and completion near the clicked destination. Do not issue a second Move command.
5. Correlate IntentId I, ActionId A, and ExecutorRequestId N. Composite Navigation must use N throughout; landing must leave the action Running. Navigation Complete must be followed by action Succeeded and parent Complete with those same IDs.
6. In separate runs, Dodge during preparation and replace MoveTo during preparation. Dodge should retain I/A/N without an action terminal. Replacement should report old action/intent Interrupted with `ParentReplaced`, then use fresh I/A/N; old callbacks must not change the new intent.

```text
pokemon.Intent.Debug 1
pokemon.CompositeNav.Debug 1
pokemon.Jump.Debug 1
pokemon.Traversal.JumpExecutionDebug 1
```

**Exact event fields and logs to return.** `pokemon.Intent.Debug` defaults to 0 and enables event-level `Parent`, `ActionStart`, `ActionResult`, `Advance`, `Complete`, `Failed`, and `Interrupted` logs. Every event includes IntentId, ActionId, zero-based ActionIndex, ActionType, ActionState, ExecutorRequestId, SequenceState, and Reason. Production MoveTo has only action index 0, so it does not emit Advance. Parent is logged while the action is Pending and its executor ID is still invalid. Navigation installation/planning logs can precede ActionStart because positive ownership is confirmed on return from submission.

Expected correlated excerpts, with I/A/N standing for the actual GUIDs:

```text
[PokemonIntent] Parent IntentId=I ActionId=A ActionIndex=0 ActionType=NavigateToLocation ActionState=Pending ...
[CompositeNav] Parent | RequestId=N | ...
[CompositeNav] Segment | RequestId=N | ... Type=Jump ...
[PokemonIntent] ActionStart IntentId=I ActionId=A ActionIndex=0 ActionType=NavigateToLocation ActionState=Running ExecutorRequestId=N SequenceState=Running Reason=None
[CompositeNav] Continue | RequestId=N | ... Reason=TraversalLanded
[CompositeNav] Complete | RequestId=N | ... Reason=None
[PokemonIntent] ActionResult IntentId=I ActionId=A ActionIndex=0 ActionType=NavigateToLocation ActionState=Succeeded ExecutorRequestId=N SequenceState=Running Reason=None
[PokemonIntent] Complete IntentId=I ActionId=A ActionIndex=0 ActionType=NavigateToLocation ActionState=Succeeded ExecutorRequestId=N SequenceState=Succeeded Reason=None
```

Send the uninterrupted log section from `[PokemonIntent] Parent` through terminal intent completion/failure/interruption. Include `[CompositeNav] Parent`, all `ExitSearch` and `Segment` events, `Continue`, and `Complete`/`Failed`; also include `[Jump02]` takeoff planning and `[Jump0.2]` preparation, takeoff, landing, and interruption/failure events. For Dodge include `[PokemonDodge]` and navigation suspended/resumed lines. A `[CompositeNav] Failed` hold without a terminal intent event is valid retained ownership, not automatically a failed action.

Include the map name, clicked destination, the three IDs, whether a second Move command was issued, and the observed behavior. If blocked, include the exact rejection Reason and the surrounding segment/planning events. Disable the four debug CVars with value 0 after collecting evidence.

To repeat native automation in that editor, run the suites separately or use the combined prefix:

```text
Automation RunTests ProjectMimikyu.Traversal.Jump
Automation RunTests ProjectMimikyu.Navigation.CompositeMove
Automation RunTests ProjectMimikyu.Intent.Sequence
Automation RunTests ProjectMimikyu.
```
