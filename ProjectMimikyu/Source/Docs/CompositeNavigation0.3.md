**Composite Navigation 0.3 — implementation and verification**

Stationary player Move now supports a local jump followed by ordinary navigation toward the same original destination. The native one-gap automation exercises actual path following, preparation, launch, CharacterMovement landing, and the final ground movement under one player submission. Manual PIE acceptance remains to be performed.

**SOURCE-INSPECTED — existing lifecycle.** `ATrainerCharacter::ServerCommandPokemonMove_Implementation` calls `RequestPlayerMoveToLocation`. That creates a GUID, projects the clicked target, and checks the ground path. A complete route installs the request normally; a failed route is retained in a planning hold when special traversal is enabled. Autonomous decisions respect an existing request ID. The return value of a rejected initial ground route remains false even when its parent was successfully retained for traversal; this existing API behavior is preserved.

The existing takeoff search considered current supported feet, actual reachable path vertices, and sparse-path interpolation. It resolved support, measured a discontinuity, solved ballistic alternatives, and validated capsule clearance and landing. It scored ground approach time plus selected flight time and froze the winning requirement/candidate during approach. Preparation revalidated the frozen trajectory before `LaunchCharacter`; actual CharacterMovement launch consumption, rather than queueing a launch, consumed an attack jump. Player Move had no attack-style jump limit.

The latest local `HandleJumpFinished` already retained the parent and released the planning hold on successful landing. It did not clear the Move request at landing. This change extends that behavior with intermediate exits and explicit local-state cleanup. `LandedDelegate` records landing while movement is still Falling; the executor broadcasts completion after `OnCharacterMovementUpdated`, when post-landing physics is installed. The executor, solver, and their physical constants were not changed.

`PokemonJumpTraversalValidator` is named `PokemonJumpTrajectoryValidator` in this checkout. That actual implementation, the deprecated provisional evaluator, traversal/request types, jump link, Pokémon parent, trainer/decision/command lifecycle, CharacterMovement integration, and all existing native Jump tests were inspected. Dodge uses `SuspendNavigation` after successful activation and `ResumeNavigation` on completion. Ground Melee Approach code was not changed.

**IMPLEMENTED — ownership and continuation.** `CurrentNavigationRequest.RequestId` is the parent ID. `CurrentNavigationRequest.TargetLocation` is its sole authoritative ParentDestination; it now retains the raw clicked destination even when ground movement uses a projected goal. No second parent state object was introduced. Projection reduces the ground acceptance radius to ensure stopping near a projected goal still satisfies the original destination. An already-reached projected goal on the wrong level enters traversal evaluation/retention rather than completing the parent or spinning on MoveTo.

Local feet positions remain in `LastTraversalRequirement`, `PendingTraversalRequirement`, and `LastTraversalCandidate`. On successful landing, navigation clears the local requirement, candidate, approach, link, and selected cost, releases the planning hold, and forces the next navigation think to query the current world toward the same parent destination. Completion requires grounded movement, horizontal distance within the parent acceptance radius, and vertical proximity within CharacterMovement's step height (at least 5 cm). Zero is a valid stationary destination.

Replacement retires old ownership before cancelling preparation, preventing its synchronous failure callback from replanning the old request. It clears local state, stops the old player movement, and installs the new ID/destination. Airborne movement is still owned by the existing executor until it finishes; a stale completion ID cannot affect the replacement. Resume after Dodge clears the old local assumptions and unlocks fresh planning for the same parent.

**IMPLEMENTED — discovery and validation.** The valid retained ground path's last meaningful segment supplies the scan heading. Its reachable end locates the local gap problem, but is not assumed to be the takeoff solution. When the path supplies no usable heading, discovery uses CurrentFeet → ParentDestination.

`FPokemonJumpTrajectoryValidator::DiscoverLandingFan` resolves the supported scan origin using the existing production landing validator. It scans for support loss followed by two walkable samples forming the first meaningful far-side band. Non-walkable/penetrating hits are rejected rather than treated as proof of a gap. Discovery is capped by sample count, spacing, maximum distance, maximum drop, and the current ballistic capability's horizontal reach for the bounded drop. It does not search a traversal graph or precompute the rest of the journey.

The default fan is center, left 60 cm, right 60 cm, and forward 60 cm. Each returned exit has already passed production landing resolution: full capsule occupancy, CharacterMovement floor/walkability/edge checks, and the five-point support footprint. The unchanged takeoff search then measures the discontinuity, runs the production ballistic solver, and uses the production capsule arc/landing validator. No collision or physics validation was duplicated in the navigation component. If no fan is found, the existing direct destination takeoff search remains a conservative fallback for short gaps/vertical access; it still requires real support, measured discontinuity, and every existing physical proof.

**IMPLEMENTED — route-first selection.** For each exit, the existing anchor search finds the least-cost executable approach/jump plan. For composite moves, a fresh complete navigation query also proves each non-current, resolved takeoff anchor is reachable and supplies its actual approach path length. The total is:

`ground path length / effective natural movement speed + selected flight time + remaining navigation metric / effective natural movement speed`

Remaining navigation uses `UNavigationSystemV1::FindPathToLocationSynchronously`, with the owner pawn's agent context and the AI controller's default navigation filter. `UNavigationPath::GetPathCost()` exposes Unreal's actual area-weighted route cost and is used first. `GetPathLength()` is the backup if that cost is unusable. Dividing weighted navigation cost by speed gives an estimated time-equivalent metric, not a promise of exact travel time.

A partial path is not reported as a complete remaining route. Its measured route prefix is combined with an explicitly identified straight-line tail estimate (`PartialRouteWithStraightTailFallback`). With no usable route, distance/speed supplies `StraightLineFallback`. Complete-route candidates are preferred over candidates relying on an unknown tail. Within the same route-availability class, a candidate must improve total cost by more than 0.05 seconds to replace the incumbent. Straight-line proximity does not outrank an available complete navigation route. The selected local plan remains frozen while approaching takeoff.

**IMPLEMENTED — failures and Smart Links.** A rejected local plan holds the parent with a specific reason and current feet location. No repeated planner invocation occurs while held. New parent installation, navigation resume, a navigation rebuild, or displacement beyond 125 cm unlocks a new planning generation. This is local request-scoped protection, not persistent traversal memory. A search counter supports diagnostics and lets automation prove that 100 identical retry calls perform only one actual search. Static collision changes that do not rebuild navigation require an explicit suspend/resume or replacement to retry.

Smart Links use authored start/end positions in the direction actually traversed. Their entry is resolved with the same support validation and approached if necessary. The link still requires capability, executable ballistic geometry, capsule clearance, landing support, and executor readiness. The old path is stopped; successful landing uses the same parent continuation/re-query handler as a dynamic gap. Traversing the link does not complete the parent by itself. Manual Smart Link continuation has not been revalidated in PIE during this task.

`TraversalSegmentSerial` identifies a local plan/segment under the parent (including fresh plans after interruption); it does not replace RequestId. Planning generation and search count are lightweight diagnostics. Successful landing allows another segment without imposing attack consumption rules. The existing attack-only consumption gate and combat ownership boundary are preserved; no hit/miss or attack execution sequencing was added.

**Files changed**, relative to `Source`:

| File | Purpose |
| --- | --- |
| `ProjectMimikyu/Private/ActorComponents/PokemonNavigationComponent.cpp` | Parent lifecycle, composite dispatch, actual approach cost, replacement/resume, link entry, landing continuation |
| `ProjectMimikyu/Public/ActorComponents/PokemonNavigationComponent.h` | Small local planning helpers/state and test access seam |
| `ProjectMimikyu/Private/ActorComponents/PokemonCompositeNavigation.cpp` | New discovery orchestration, cost queries, completion/failure policy, event logs/CVars |
| `ProjectMimikyu/Public/Navigation/PokemonCompositeMove.h` | New `FPokemonTraversalExitSearchSettings` and `FPokemonCompositeMoveCost` |
| `ProjectMimikyu/Private/Navigation/PokemonJumpTrajectoryValidator.cpp` | New bounded support-band/fan discovery using existing body queries |
| `ProjectMimikyu/Public/Navigation/PokemonJumpTrajectoryValidator.h` | Discovery helper declaration |
| `ProjectMimikyu/Public/AIControllers/PokemonAITypes.h` | Documents authoritative stationary parent destination |
| `ProjectMimikyuEditor/Private/Tests/PokemonCompositeMoveTests.cpp` | Nine native automation cases |
| `ProjectMimikyuEditor/ProjectMimikyuEditor.Build.cs` | Explicit AIModule and NavigationSystem test dependencies |
| `Docs/CompositeNavigation0.3.md` | This handoff |

The pre-existing local navigation formatting edits and solution-file changes were preserved. No Pokémon capability asset, Jump solver/executor, combat implementation, or project navigation setting was retuned.

**New CVars**, all prefixed `pokemon.CompositeNav.`:

| Suffix | Default | Purpose |
| --- | ---: | --- |
| `Debug` | 0 | Event-level parent/search/segment/continue/complete/failure logs |
| `MaxSamples` | 12 | Support scan ray cap; clamped 2–24 |
| `SampleSpacing` | 75 | cm between scan samples; minimum 25 |
| `MaxDistance` | 1200 | cm scan cap; clamped 0–2000 and further bounded by physical reach |
| `MaxDrop` | 200 | cm support discovery drop bound; clamped 0–500 |
| `FanCount` | 4 | Center/left/right/forward candidates; clamped 1–4 |
| `FanSpread` | 60 | cm fan offset; clamped 0–150 |
| `CostTolerance` | 0.05 | Minimum improvement in estimated seconds |

These configure discovery/selection only. They cannot bypass validation or increase the Pokémon's physical launch capability.

**Automation coverage.** All new tests live under `ProjectMimikyu.Navigation.CompositeMove`:

| Test | Evidence |
| --- | --- |
| `ParentDestinationPersistence` | Production dynamic planning and a simulated successful segment callback preserve ID/destination and clear temporary state |
| `PhysicalLandingRetainsParent` | Actual preparation, launch, and CharacterMovement landing at an intermediate exit retain the parent; final acceptance is checked separately |
| `RouteCostPreference` | A geometrically farther candidate wins with lower supplied navigation cost; tolerance and route-availability preference are checked |
| `StraightLineFallback` | Production cost query in a world without nav data uses the explicit fallback and preserves parent state |
| `MultiSegmentParentPersistence` | Two freshly validated plans and simulated landing callbacks retain one ID; tests ownership, not a physical two-gap course |
| `FailedLocalLoopProtection` | Missing far support rejects launch; 100 retries perform one search; resume unlocks planning |
| `RequestReplacement` | Replacement during real preparation cancels executor/local state and ignores stale old-ID callbacks |
| `PreparationSuspendResume` | Real preparation cancels on suspend, then a fresh valid plan uses the same retained parent |
| `WalkJumpWalkOneRequest` | Native generated Recast navmesh, actual AI path following, physical jump/landing, and final walking complete under one player submission |

The complete one-gap fixture starts at X=-200, selects takeoff near X=-71.5 and an exit near X=432, lands near X=434.32, and walks to X=1101.61 for a parent at X=1200 with radius 100. Landing is approximately 765.7 cm from the parent destination; completion occurs approximately 98.4 cm away. It issues exactly one `RequestPlayerMoveToLocation` and one physical launch. No teleport or simulated landing callback advances this full-chain test.

**Verification.** The installed engine reports UE 5.8.1, changelist 56057345. `ProjectMimikyuEditor Win64 DebugGame` compiled successfully. Existing unrelated deprecation/legacy-code warnings remain. The requested Jump suite passes 9/9; CompositeMove passes 9/9, including the full native chain. The `ProjectMimikyu.` automation run finds 18 tests total; there are no additional standalone navigation automation cases in this checkout. Native fixture startup warnings and a crowd-manager teardown warning appear in the successful report.

- **SOURCE-INSPECTED:** complete.
- **IMPLEMENTED:** one-gap chain plus reusable per-segment continuation and local failure protection.
- **COMPILED:** UE 5.8.1 DebugGame editor target passed.
- **AUTOMATION PASS:** Jump 9/9; CompositeMove 9/9.
- **RUNTIME PASS:** not claimed for manual PIE.
- **RUNTIME FAIL:** not observed/reported for manual PIE; it has not been run here.

Reports are in `ProjectMimikyu/Saved/Automation/CompositeMove-0.3-Final/index.json` and `index.html`. Detailed output is `ProjectMimikyu/Saved/Logs/CompositeMove-0.3-Final.log`. The earlier standalone one-gap report is `Saved/Automation/CompositeMove-OneGap`.

**Exact first PIE procedure.** Launch the built configuration so PIE loads the new code:

```powershell
& 'C:\Program Files\Epic Games\UE_5.8\Engine\Binaries\Win64\UnrealEditor-Win64-DebugGame.exe' 'C:\Users\1351d\OneDrive\Documents\GitHub\ProjectPokemonMaster\ProjectMimikyu\ProjectMimikyu.uproject'
```

The ordinary Development editor binaries were not rebuilt in this task; use the DebugGame executable above or rebuild Development before testing that configuration.

1. Open the map containing the previously validated Lucario gap. Keep Lucario's existing jump capability and Jump tuning unchanged. Ensure near and far walkable surfaces are included in the existing navmesh.
2. Start PIE and select/send out the Pokémon normally. Use a reachable, stationary clicked floor destination well beyond the far landing band, so the final destination is outside the selected landing exit's acceptance radius.
3. Enable these commands in the console:

```text
pokemon.CompositeNav.Debug 1
pokemon.Jump.Debug 1
pokemon.Traversal.JumpExecutionDebug 1
pokemon.Jump.ValidationDebug 1
```

4. Issue exactly one normal player Move command. Observe walking to the chosen takeoff if needed, Preparation, Takeoff, landing at an intermediate exit, automatic ground movement, and completion only near the original click.
5. Verify one parent RequestId throughout. `Segment.Exit` must differ from `ParentDestination`; `Continue Reason=TraversalLanded` must show distance greater than the parent acceptance radius. A later `Complete` must use that same ID. Do not issue a second Move command.
6. In separate runs, trigger Dodge during Preparation and replace the Move during Preparation. Dodge should produce a retained request and a fresh plan after resume; replacement should install a different ID and discard the old segment.

Only after the first PIE case passes, repeat with two known-valid gaps and a final destination beyond both. Expect two segment serials under the same RequestId and one final completion. The two-gap physical PIE scenario remains unverified. Repeat the one-gap case through an authored Smart Jump Link to verify its current map setup separately.

**Exact diagnostics to return.** Send the uninterrupted log section from the relevant `[CompositeNav] Parent` through `Complete` or `Failed`, including every `ExitSearch`, `Segment`, and `Continue`. Include `[Jump02] TakeoffSearch`/`TakeoffPlan`, `[Jump0.2]` Preparation/Takeoff/Landed/Finished/Failed/Interrupted events, and any `[JumpValidation]` rejection. For Dodge also include `[PokemonDodge]` and `[PokemonNav] Navigation suspended/resumed` lines. Include map name, the clicked destination, and whether a second Move command was issued. Useful failure reasons include `NoFarSideSupportBandWithinBudget`, `LandingSupportMissing`, `JumpArcCapsuleBlocked`, `TakeoffAnchorGroundUnreachable`, `TakeoffApproachTimeout`, and `ExecutorPreparationRejected`.

For a visual rejection repro, set `pokemon.Jump.ValidationDebug 2` to draw existing capsule/arc diagnostics. Disable the four debug variables after collecting evidence. Do not change launch capability or arc-validation settings to make acceptance pass.

To repeat automation in that editor, run each requested suite separately:

```text
Automation RunTests ProjectMimikyu.Traversal.Jump
Automation RunTests ProjectMimikyu.Navigation.CompositeMove
```

The combined verified command is `Automation RunTests ProjectMimikyu.`. A `+`-joined filter is not supported by this checkout's command-line runner.
