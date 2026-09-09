**Attack Intent 0.2 — Melee AttackExecution bridge**

Trainer melee commands now create an Attack Intent containing one AttackExecution action. That action reserves a trainer command and activates its existing GAS ability directly. CombatApproach, navigation/jump, contact, damage and ability recovery remain inside GAS. Projectile/ranged commands retain the legacy Blackboard/BT path.

Work started from clean local commit `dd399314039b1933bce7f3671b0071f55fb63319` (Intent Action Sequence 0.1), using UE **5.8.1**, CL **56057345**. This report separates native automation from manual PIE acceptance.

**SOURCE-INSPECTED — original lifecycle.** Trainer `ServerCallCommand_Implementation` checked the selected Pokémon, move index and `CanAct()`, installed the aim-derived command target, then called `CallCommand` / `TryCallCommand`. The command component checked active command, moveset, per-move PP, ASC and cooldown; reserved `ActivePokemonMove` and `ActiveTrainerCommandId`; reset attack-jump consumption and momentum; and published CurrentMove to the Pokémon AI Blackboard. BT melee/ranged tasks activated GAS and consumed the identity-free `OnAttackEnd` event. Their `OnAttackEnd.Clear()` calls make that event unsuitable as the coordinator result bus.

The ASC activates the first ability spec matching the requested input tag. Granted move specs use the move asset as their source object. The damage ability's existing `CommitPokemonMove` owns PP, stamina and cooldown commitment. `AT_CombatApproach` owns its own navigation request and carries the trainer command ID as `ParentAttackCommandId`. Its destruction clears only the navigation request it owns and restores running speed. Original command cleanup clears capsule hit callbacks, charging, active move, target, momentum and Blackboard state, restores movement speed, and broadcasts `OnAttackEnd`.

Inspected the coordinator/types/NavigateToLocation adapter/navigation-result contract, command types/component, both trainer RPCs, Pokémon parent, ASC activation/granting, native gameplay/damage abilities, CombatApproach, both BT attack tasks, impact resolver/types, move asset and move-action tags. Traversal solvers, route scoring and melee geometry were not changed.

**SOURCE-INSPECTED — actual Blueprint chain.** Read-only Unreal Python inspection loaded `/Game/GAS/PokemonMoves/GA_MachPunch`, `/Game/GAS/GA_Melee_Base`, and `/Game/GAS/GA_Base`. No Blueprint assets were saved. Evidence: `ProjectMimikyu/Saved/Logs/AttackIntent-BlueprintInspection.log`.

- Mach Punch's CDO identifies exact `PokemonMoves.MoveAction.Melee` and uses **InstancedPerExecution**.
- Melee activation calls `CommitPokemonMove`. Success reaches RegisterCommand / MoveToTarget / CombatApproach; rejection calls EndAbility.
- Approach success reaches anticipation and active contact. The direct contact loop calls `ResolveImpactAndModifyDamageParams`, then the existing `ApplyDamageEffect`; the loop completion and miss paths call EndAbility.
- Mach Punch and melee base call their parent OnEndAbility. GA_Base's OnEndAbility calls Pokémon `AttackEnded`.
- In native GAS, Blueprint OnEndAbility runs inside `Super::EndAbility`, before task destruction. GAS also marks an InstancedPerExecution ability as garbage before that call returns. The bridge suppresses the identity-free callback during this scope, then resolves through the captured command identity after task destruction. Weak object index/serial comparison recognizes the matching retired instance without dereferencing a garbage weak pointer.

**IMPLEMENTED — ordered action dispatch.** The coordinator retains lightweight ordered records. Start and cancel now switch explicitly between NavigateToLocation and AttackExecution. Each result handler verifies parent ID, action ID, executor ID, action type, and Running state. Navigation's existing adapter and walk/jump ownership remain intact. No action UObject hierarchy, planner, parallel execution or CombatApproach extraction was added.

`SubmitAttackIntent(int32 MoveIndex, const FPokemonCommandTarget&)` requires authority and the existing `CanAct()` gate. It resolves the move asset immediately, copies that asset pointer and the full command target into the action spec, and preflights supported melee validation before replacing an existing parent. Changing a moveset slot afterward cannot substitute a different move. Asset contents themselves are not deep-copied.

| Identity | Owner and meaning |
| --- | --- |
| `IntentId = I` | Coordinator; whole Attack Intent |
| `ActionId = A` | Coordinator; its single AttackExecution record |
| `ExecutorRequestId = C` | Command component's `ActiveTrainerCommandId`; one trainer move execution |
| `ParentIntentId = I` | Diagnostic/ownership link stored on the active command |
| CombatApproach navigation ID | Existing internal navigation request; separate from I, A and C |

I, A and C are independently generated GUIDs. Existing attack-jump consumption and authorized traversal momentum continue to use C.

**IMPLEMENTED — reservation and execution APIs.** `ResolveMoveAtIndex` and `ValidateMoveReservation` share the legacy moveset/PP/cooldown/active-state checks. `IsSupportedSequencedMove` classifies the ability CDO using an exact melee tag, separately from validation. Sequenced validation additionally requires authority, a usable target, a valid input tag, and an instanced ability.

`ReserveSequencedCommand(Move, Target, I)` returns `FPokemonTrainerCommandSubmission { CommandId, Reason }`. It installs ActivePokemonMove, a new C, the copied target, ParentIntentId, the sequence-managed flag, unused attack-jump budget and zero momentum. It neither activates GAS nor publishes a Blackboard move.

The stateless `FPokemonAttackExecutionAction` adapter uses this exact order:

1. Reserve the command and receive C.
2. Bind `OnTrainerCommandResolved`, capturing I and A.
3. Set the action's ExecutorRequestId to C and state to Running.
4. Log ActionStart.
5. Call `ExecuteSequencedCommand(C)`.

Execution accepts the matching ID once. It checks that the first input-tag spec chosen by the existing ASC has the reserved move's class and source asset and is inactive, then calls the existing `ActivateAbilityByTag` with the reserved input tag. A missing/mismatched grant or synchronous activation rejection reports ActivationFailed. No independent attack behavior or resource spending was introduced. Commit failures recorded in the existing damage ability also produce ActivationFailed when the inspected Blueprint ends normally after a failed commit.

**IMPLEMENTED — results and contact.** The command component owns native `OnTrainerCommandResolved(C, EPokemonAttackExecutionOutcome, Reason)`. The coordinator does not subscribe to `OnAttackEnd`. A generic `FName Outcome` is retained on both the action record and resolved parent snapshot, independently of lifecycle state and reason.

| Command outcome | Action state | Parent state | Stored outcome |
| --- | --- | --- | --- |
| Connected | Succeeded | Succeeded | Connected |
| Missed | Succeeded | Succeeded | Missed |
| Interrupted | Interrupted | Interrupted | Interrupted |
| ActivationFailed | Failed | Failed | ActivationFailed |
| None | No terminal result | No terminal result | None |

The connection latch is in `UPokemonDamageGameplayAbilities::ResolveImpactAndModifyDamageParams`, immediately after the existing resolver produces a non-None physical impact for an exact melee action. It runs before `ApplyImpactResolution` broadcasts public callbacks, so a callback that synchronously ends the ability cannot incorrectly turn that contact into Missed. It checks authority, C and the bound active ability instance. First contact only sets the latch; recovery and EndAbility still govern completion. NoSell, BounceOff, Clash and other non-None contact results count regardless of damage application. This does not implement projectile hit tracking.

**IMPLEMENTED — cleanup, cancellation and reentrancy.** Normal native EndAbility resolves only the matching sequenced command, after GAS has ended its tasks. An external normal `AttackEnded` first ends the matching active ability through that path. Central `FinishCommand` snapshots the result, retires command identity/state, clears target/momentum/charging/capsule/Blackboard state and restores running speed, then broadcasts legacy OnAttackEnd and the identified command result. It performs no command mutations after either result bus. Duplicate cleanup and stale IDs/ability callbacks are harmless.

`CancelSequencedCommand(C, Reason)` rejects stale IDs and duplicate cancellation, records the cancellation reason, and cancels/ends only the matching ability. If GAS defers EndAbility under a scope lock, the command result waits for actual cleanup. New parent submission is rejected while that execution is locked/ending; it becomes available when cleanup finishes. Ordinary Attack-to-Attack and Attack-to-MoveTo replacement remain synchronous. Cancellation resolves Interrupted, including native ability cancellation and owner faint/end-play. The coordinator detaches and retires its own record before it requests cancellation, preserving its existing reentrancy protection.

**IMPLEMENTED — trainer and legacy boundary.** The trainer builds the same aim-derived target locally. An exact melee CDO goes to SubmitAttackIntent and returns unconditionally, including rejection. Unsupported ranged/projectile moves install the target and use the original CallCommand/TryCallCommand/BT path. Legacy TryCallCommand still reserves and publishes CurrentMove without directly activating GAS; legacy OnAttackEnd remains available. Trainer MoveTo integration is unchanged. A sequenced melee attack keeps CurrentMove unpublished, avoiding a second BT activation.

**COMPILED.** `ProjectMimikyuEditor Win64 DebugGame` built successfully with UE 5.8.1, MSVC 14.50.35738 and Windows SDK 10.0.22621.0. Existing unrelated deprecation/compiler warnings remain. The build command was:

```powershell
& 'C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\Build.bat' ProjectMimikyuEditor Win64 DebugGame '-Project=C:\Users\1351d\OneDrive\Documents\GitHub\ProjectPokemonMaster\ProjectMimikyu\ProjectMimikyu.uproject' -WaitMutex -NoHotReloadFromIDE
```

**AUTOMATION PASS — 54/54, zero failures or unrun tests.** All five requested console commands were run separately against the final build on 2026-09-09. The existing 32 tests and all 22 new attack tests passed. Reports contain the fixtures' existing informational warnings; no automation error entries remain.

| Console command | Pass / total | Report directory under `ProjectMimikyu/Saved/Automation` |
| --- | --- | --- |
| `Automation RunTests ProjectMimikyu.Traversal.Jump` | 9 / 9 | `AttackIntent-0.2-Jump` |
| `Automation RunTests ProjectMimikyu.Navigation.CompositeMove` | 9 / 9 | `AttackIntent-0.2-CompositeMove` |
| `Automation RunTests ProjectMimikyu.Intent.Sequence` | 14 / 14 | `AttackIntent-0.2-Sequence` |
| `Automation RunTests ProjectMimikyu.Intent.Attack` | 22 / 22 | `AttackIntent-0.2-Attack` |
| `Automation RunTests ProjectMimikyu.` | 54 / 54 | `AttackIntent-0.2-All` |

Each report directory contains `index.json`; corresponding logs are `ProjectMimikyu/Saved/Logs/AttackIntent-0.2-<suite>.log`. [Combined JSON report](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Saved/Automation/AttackIntent-0.2-All/index.json) and [combined log](C:/Users/1351d/OneDrive/Documents/GitHub/ProjectPokemonMaster/ProjectMimikyu/Saved/Logs/AttackIntent-0.2-All.log) are local generated evidence, not source files to commit.

The runs used `UnrealEditor-Win64-DebugGame-Cmd.exe`, `/Engine/Maps/Entry`, `-unattended -nop4 -nosplash -nullrhi -nosound`, the selected console command in `-ExecCmds` alongside both Intent/Command debug CVars, and `-TestExit="Automation Test Queue Empty"`. Each process exported its own report/log and exited successfully. `git diff --check` passed.

Native fixtures use a transient game world, normal Pokémon/GAS initialization, the real Pokémon controller/Blackboard, native melee/projectile ability classes, and the production impact resolver. They exercise the real trainer RPC through reflection. Blueprint content is not required for the automation.

The 22 Attack tests cover creation/three-ID ownership; copied reservation and no Blackboard dispatch; ownership before synchronous activation; exactly-once activation and resource commitment; missing grant/GAS/commit failure; direct contact waiting for recovery; NoSell; synchronous impact callback completion; missed completion; command/ability cancellation; Attack and MoveTo replacement; stale/duplicate callbacks; legacy and trainer melee/ranged routing; no fallback after rejection; reentrant completion; and deferred end/cancellation cleanup.

**RUNTIME PASS / RUNTIME FAIL — manual PIE not performed; neither result is claimed.** The native automation and read-only Blueprint inspection above do not establish rendered Mach Punch runtime acceptance. No ranged/projectile runtime integration is claimed.

Use this PIE acceptance procedure:

1. Open the project's configured `/Game/ThirdPerson/Maps/ThirdPersonMap` in the freshly built DebugGame editor. Use the existing trainer/selected Pokémon setup, with Mach Punch in its moveset and usable PP/stamina. Choose an enemy within a known valid ground approach route first.
2. In the Output Log console, enable the following CVars individually:

   ```text
   pokemon.Intent.Debug 1
   pokemon.Command.Debug 1
   pokemon.CompositeNav.Debug 1
   pokemon.Jump.Debug 1
   pokemon.Jump.ValidationDebug 1
   pokemon.Traversal.JumpExecutionDebug 1
   ```

3. Start PIE with server authority (standalone or listen server). Issue Mach Punch using the existing trainer command input. Verify one Attack parent and one AttackExecution ActionStart, with valid distinct I/A/C. Confirm the Pokémon AI Blackboard does not publish that melee CurrentMove for BT activation.
4. Observe the existing CombatApproach, anticipation, active/contact and completion behavior. For a connecting attempt, retain the log span matching C and verify the ordering below. Contact must leave the action running until ability completion.
5. Repeat with the established jump-capable combat approach fixture. Check existing approach/jump authorization uses C; internal navigation IDs remain independent. Confirm normal contact/end resolves the same action.
6. During a permitted cancellable phase (`CanAct()` must allow the command), issue MoveTo or a new melee intent. Verify the old attack resolves Interrupted once, its owned ability/task ends, and late old callbacks do not change the replacement. Native tests also cover this boundary and GAS scope-lock deferral.
7. Issue an existing projectile/ranged trainer command and verify its legacy Blackboard/BT behavior. This is a regression observation, not sequenced ranged integration. Use the automated SynchronousMiss/CreationAndOwnership tests for deterministic no-contact Missed coverage.

Expected high-level connected log sequence (I/A/C are placeholders):

```text
[PokemonIntent] Parent ... Type=Attack
[PokemonCommand] Reserved CommandId=C ParentIntentId=I
[PokemonIntent] ActionStart IntentId=I ActionId=A ... ActionType=AttackExecution ActionState=Running ExecutorRequestId=C
[PokemonCommand] Execute CommandId=C ParentIntentId=I
... existing CombatApproach / optional jump / active contact ...
[PokemonCommand] Contact CommandId=C ... Outcome=Connected
... existing ability end / task and command cleanup ...
[PokemonCommand] Resolved CommandId=C ... Outcome=Connected
[PokemonIntent] ActionResult ... ActionState=Succeeded ... Type=Attack Outcome=Connected
[PokemonIntent] Complete ... SequenceState=Succeeded ... Outcome=Connected
```

For a miss, there is no Contact entry; Resolved and both snapshots retain Outcome=Missed with Succeeded lifecycle. Record **RUNTIME PASS** only after the above observations; otherwise record **RUNTIME FAIL** with the first divergent event and matching I/A/C.

**Files changed** (paths relative to this Source directory):

| Files | Purpose |
| --- | --- |
| `ProjectMimikyu/Public/Intent/PokemonIntentSequenceTypes.h` | Attack action/parent type, move/target spec, generic outcome |
| `ProjectMimikyu/Public/ActorComponents/PokemonIntentSequenceComponent.h`, `ProjectMimikyu/Private/ActorComponents/PokemonIntentSequenceComponent.cpp` | Submission, action dispatch, ownership/result mapping |
| `ProjectMimikyu/Private/Intent/PokemonAttackExecutionAction.h`, `.cpp` | Stateless command adapter |
| `ProjectMimikyu/Public/Command/PokemonAttackExecution.h` | Native submission/result contract |
| `ProjectMimikyu/Public/ActorComponents/PokemonCommandComponent.h`, `ProjectMimikyu/Private/ActorComponents/PokemonCommandComponent.cpp` | Shared validation, reservation, direct activation, latch, cancellation, cleanup and diagnostics |
| `ProjectMimikyu/Public/AbilitySystem/Abilities/PokemonGameplayAbilities.h`, `ProjectMimikyu/Private/AbilitySystem/Abilities/PokemonGameplayAbilities.cpp` | Identified activation/end/cancellation bridge |
| `ProjectMimikyu/Private/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.cpp` | Direct contact latch and existing commit-failure reporting |
| `ProjectMimikyu/Private/Characters/TrainerCharacter.cpp` | Melee-only intent routing |
| `ProjectMimikyu/Private/Characters/Pokemon_Parent.cpp` | Faint interrupts sequenced attack |
| `ProjectMimikyuEditor/Private/Tests/PokemonAttackAutomationFixture.h`, `.cpp` | Native editor test abilities/probe |
| `ProjectMimikyuEditor/Private/Tests/PokemonAttackIntentTests.cpp` | 22 deterministic attack tests |
| `ProjectMimikyuEditor/ProjectMimikyuEditor.Build.cs` | Test dependencies for GAS tasks and typed Blackboard |
| `Docs/AttackIntent0.2.md` | This handoff and acceptance procedure |

The existing Jump, CompositeMove and Intent.Sequence test files, navigation implementation/adapters, CombatApproach, BT attack tasks, impact scoring/application math, move assets and Blueprint assets were not edited.
