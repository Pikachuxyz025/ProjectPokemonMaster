# Control & Recovery Contract v0.1

Project Pokémon Master — Milestone 01A.1B.5

Status: **architecture proposal for review; source audit complete; no gameplay implementation**

Audit date: November 4, 2026

This contract preserves trainer command ownership while separating navigation, committed attack execution, authored follow-up opportunities, and physical evidence. The recommended implementation is a small set of orthogonal dimensions, carried by the existing owners, rather than a new global state-machine component or one large enum.

The smallest next gameplay change, after review, is a server-owned held defensive modifier attached to one existing MoveTo request. Threat steering and move-specific recovery actions follow in separate increments.

## 1. Audit scope, evidence, and existing ownership

### Evidence boundary

The audit inspected working-tree C++ on branch `master`, HEAD `02758c50040e3ddb10ec60567b6ec30c6a469f8d`. Source was clean before this document was added. Three pre-existing Content changes were present: modified `Lucario.uasset`, modified `DA_Lucario_RecoveryTolerance_DIAG_Base.uasset`, and untracked `DA_Lucario_RecoveryTolerance.uasset`. They were not edited or used to infer new asset behavior.

**Current** below means established by the inspected native source. **Proposed** means a contract for later implementation, not behavior already present. Existing documentation is historical evidence: in particular, `AttackIntent0.2.md` describes an earlier one-action melee bridge; the current source has the two-action approach/execution sequence described here.

The supplied milestone background records provisional tolerance PIE acceptance and a 120/120 focused automation baseline. This design audit does not rerun or recertify that baseline, inspect current Blueprint graphs, or claim multiplayer acceptance. It does not modify C++, Blueprints, assets, attributes, movement parameters, or tests. GitHub references in section 14 are pinned to the locally audited revision; they are not a claim that this session pushed that revision.

### Current ownership map

| Owner | Implemented responsibility and handoff | Boundary to preserve |
| --- | --- | --- |
| `ATrainerCharacter` / Enhanced Input | Local targeting and move selection; server RPCs submit MoveTo or supported melee intent. Dodge is a discrete Started event. Movement axes move the trainer. | Input requests an action; it is not the Pokémon movement executor. Current RPCs are not a complete identity-bound held-input protocol. [S1], [S2] |
| `UPokemonIntentSequenceComponent` | Authority-gated ordered action records, parent replacement/cancellation, matching executor results, one parent terminal snapshot. MoveTo has NavigateToLocation; current supported melee has CombatApproach then AttackExecution. | Owns intent lifetime, not velocity, stamina storage, or attack contact. [S3], [S4] |
| `UPokemonCommandComponent` | Reserves move/target/command identity; activates the exact reserved GAS spec for sequenced attacks; owns contact latch, terminal command result, cancellation and cleanup. Also hosts the legacy discrete dodge lifecycle. | An active command means a reserved attack move, not every trainer instruction. [S5], [S6] |
| `UPokemonNavigationComponent` | Retains destination and request; owns route processing, composite traversal, targeted resolution, suspension/resumption, and attack approach readiness. | Local route/segment changes do not mean parent MoveTo completion. It is the future integration point for bounded local defensive steering. [S7], [S8] |
| `UPokemonJumpExecutionComponent` | Executes a selected jump, owns temporary ballistic/orientation settings, launch/landing and restoration. | Its movement override lifetime can outlive the navigation action that launched an airborne attack. [S9] |
| GAS abilities / ability tasks | Commit move resources, run authored windows/contact/projectiles/root motion, finish after task cleanup. Legacy CombatApproach task still exists. | GAS owns authored execution. A command result must not race cleanup of old movement tasks. [S10], [S11], [S12], [S13] |
| `UPokemonStaminaComponent` + ASC/attribute set | Server spend API and regeneration timer; GAS attributes are canonical stamina storage and replication. | Resource rules are separate from navigation and tolerance evidence. Asset-defined gameplay effects can also write stamina. [S14], [S15], [S16] |
| Decision Component / AIController / BT | Scheduled strategic mode selection, Blackboard publication, autonomous navigation requests, legacy ability activation tasks. | Comments describe a broader executive architecture than is implemented. Trainer melee/MoveTo do not pass through Decision Component approval. [S17], [S18] |
| Combat state / incapacitation / field presence | Action locks and existing combat interruption, knockback/ragdoll/faint/removal paths. | Ordinary falling/landing is not forced impact; recall is a separate field-removal path. [S19], [S20], [S21] |
| Airborne telemetry / continuation / tolerance | Read-only observation, physical forecast and one-shot authored-limit comparison. | No attack authorization, damage, emergency command, or environmental-risk policy. [S22], [S23], [S24], [S25] |
| `ThreatFieldSubsystem` | World-local timed spatial threat registry. | A potential information source, not an evasive planner or predictive projectile tracker. [S26], [S27] |

### Command and request identity

| Symbol | Existing identifier | Lifetime / meaning |
| --- | --- | --- |
| `I` | `IntentId` | One accepted parent sequence, including its ordered actions. |
| `A` | `ActionId` | One action record in that sequence. `A1` / `A2` are ordinals, not permanent type aliases. |
| `N` | `FAgentNavigationRequest::RequestId` | One retained navigation request. NavigateToLocation and CombatApproach store it as their `ExecutorRequestId`. |
| `C` | `ActiveTrainerCommandId` / sequence `AttackCommandId` | One reserved attack command. AttackExecution stores it as its `ExecutorRequestId`; it is not `I` or `N`. |
| `J` | Jump execution's navigation/parent-command references | Correlation to the accepted jump and attack; not a new trainer intent. Physical execution can survive retirement of its source navigation request. |

For MoveTo, the chain is `I → A(NavigateToLocation) → N`. For current supported melee, it is `I → A1(CombatApproach, N) → A2(AttackExecution, C)`, with **C reserved before A1 begins**. Approach request `N.ParentAttackCommandId` carries C. The move asset and command target are captured on acceptance; a later moveset-slot change does not substitute another move. [S3], [S4], [S5], [S6]

Submission preflights the requested sequence, including `CanAct`, before replacing the running parent. Targeted cancellation retires the parent and detaches callbacks before asking its executor to cancel. Mutation serials and callback checks prevent synchronous listeners from making an older submission overwrite a newer one. Results must match I, A, executor ID, action type, and Running state. Navigation submission returns positive ownership, not just a ground-path boolean: a retained partial route can be accepted even when `bGroundPathAccepted` is false. [S3], [S7]

The command component separately validates moveset/PP availability, cooldown, ASC, supported exact melee action tag, target, and instanced ability policy. Reservation installs C without spending resources or starting GAS. Execution verifies the selected spec's input tag, ability class, source move asset, and inactivity, then starts that exact reservation once. Connected/Missed are successful execution outcomes; Interrupted and ActivationFailed remain distinct lifecycle results. Contact does not immediately resolve the command. Native `EndAbility` reports the identified result after GAS/task cleanup; legacy identity-free `OnAttackEnd` remains for older consumers. [S5], [S10], [S11]

An airborne approach can report N Succeeded at its execution trigger while its jump is still physically underway. The next action uses C; it must not require N to remain the active navigation request. Completed N is provenance, not permission to cancel a newer request. [S8], [S9]

### Dodge restrictions and movement overrides

Both local `CommandDodge` and `ServerCommandPokemonDodge` reject `GetIsCommandActive()`. That getter ultimately means `ActivePokemonMove != nullptr`, which includes attack reservation/approach as well as execution. It does **not** identify ordinary MoveTo. Server dodge also validates trainer ownership, `CanAct`, not already dodging, a dodge-tag hierarchy match, and a normalized horizontal reference direction. [S1], [S5], [S6]

The lower-level `UPokemonCommandComponent::Dodge` has its own action/direction checks but does not reproduce the trainer active-command restriction. A future arbitration API must enforce the contract at the authoritative owner boundary, including non-trainer callers; removing the RPC guard alone is insufficient. `IsUsingMove()` is not a substitute: the inspected `bIsUsingMove` field has no native write establishing execution ownership. Use the actual action type, command identity, ability instance and movement owner.

Current discrete dodge activates a GAS ability, stops existing movement after activation, suspends navigation, and resumes/replans it on `EndDodge`. A retained MoveTo can therefore survive that discrete interruption, but this is not continuous defensive traversal. Repeated dodge activation would repeatedly stop/suspend movement and apply discrete costs. Enhanced Input currently binds dodge Started only; no held/released lifecycle is wired. [S2], [S5], [S12]

The jump executor saves and restores AirControl, falling lateral friction, falling braking, RVO avoidance, and forced maximum acceleration. AirborneContact also saves/restores orientation settings. Its ballistic setup restricts air control; cleanup is its responsibility, not the trainer, defensive modifier, or recovery UI. LandingTraversal cancellation before takeoff differs from cancellation after takeoff; AirborneContact parent resolution has its own matching-request finish path. Do not change these settings or add a competing restorer in this milestone. [S9]

Current external-hit handling is not a universal command-cancel path. Impact resolution can apply timed combat states, hit-stop and launches; attribute damage handling can launch a nonfatal victim. Incapacitation knockback stops combat/movement and can enter launch/ragdoll. `APokemon_Parent::Fainted` explicitly cancels the active sequenced command (or ends the legacy attack) before collapse/knockback. Jump execution separately detects incompatible physical conditions such as incapacitation, root motion and pending external launch. Preserve these distinct paths: a hit, an inability to accept another command, a physical interruption and terminal attack cancellation are not interchangeable events. [S9], [S15], [S16], [S19]

### Recall as it exists

Party throw input toggles to `ServerRequestReturnCurrentPokemon` when a current Pokémon exists. The server checks authority, a valid current Pokémon and trainer ownership, updates party state, clears the trainer's current pointers, then calls `Return`. Field presence prepares removal idempotently: stop brain/AI movement, disable CharacterMovement and gameplay collision, clear active command state and trainer bindings, multicast dissolve, and schedule lifespan expiry. [S1], [S20]

That RPC does not explicitly test attack commitment, stamina, distance, line of sight, recovery window, or `CanBeReturned`. Incapacitation's separate `BeginManualReturn` does check `bCanBeReturned`; these paths are not interchangeable. Field removal uses the Blackboard Fainted state for shutdown, which does not itself prove the Pokémon actually fainted. Navigation/intent EndPlay cleanup is not proof of a synchronous, safe recall handoff for every live GAS/jump/physics state. [S19], [S20]

**Future recall policy remains undecided.** Preserve current code in this milestone. Before changing recall, choose per-state admission and validate party persistence, live executor teardown, timers, callbacks, actor removal and client reconciliation. Do not promise universal attack cancellation or hazard escape through recall, and do not route recall through ordinary dodge.

## 2. Confirmed gameplay decisions

These are requirements, not questions for reopening during implementation:

1. Trainers issue Pokémon commands. Directional axes do not continuously steer Pokémon; future directional combinations may select specialized moves.
2. Committed attacks usually follow authored trajectories. Ordinary dodge cannot override/cancel them. Genuine external interruption follows existing combat behavior, not a newly invented universal rule.
3. Held dodge during MoveTo authorizes defensive traversal while retaining the destination and parent intent. It should preserve forward progress where feasible, use relevant threats, consume sustained stamina, and avoid request churn.
4. Recovery/chaining is move- and potentially outcome-specific. An authored event and trainer timing may permit an available action. Missing, unavailable or unsuccessful follow-up can leave the Pokémon falling and vulnerable.
5. Trainer-owned Pokémon receive no automatic emergency rescue for approaching a hazard.
6. Hazards remain tactical risks. No automatic hazardous-landing jump veto and no automatic environmental-risk warning system.
7. Ordinary falls/jump landings do not automatically cause damage from height, speed or mass. Externally forced ground impacts may have separately authored consequences involving geometry, mass and locomotion.
8. Stamina regenerates in combat. Defensive traversal consumes stamina, and exhaustion must create meaningful vulnerability. Recover/Ingrain-style stamina specialization is future work. Health remains excluded from initial physical tolerance.
9. Ordinary wild Pokémon follow configured strategy with meaningful events/thresholds and bounded thinking. Continuous hypothetical landing-risk evaluation and adaptive/ML strategy are deferred.
10. Species and move capabilities differ. Lucario, Crobat, Torterra and Pikachu are not assumed to have identical locomotion, aerial control or follow-ups.

## 3. Control dimensions and transition contract

### Orthogonal dimensions (proposed)

| Dimension | Conceptual values | Owner / reason |
| --- | --- | --- |
| Parent intent | None, MoveTo, Attack; existing lifecycle Pending/Running/terminal where applicable | Intent sequence remains the authority for retained trainer purpose. Do not add DefensiveMoveTo as a replacing parent intent. |
| Movement execution | Navigation, JumpExecution, authored GAS movement, passive CharacterMovement, external incapacitation/physics, none | Exactly one applicable writer owns movement overrides at a time. Ownership transfers may leave CharacterMovement simulating the existing velocity. |
| Defensive modifier | Off, Requested/Active, Suspended, ExhaustedBlocked | Attached to one MoveTo action/request. Requested is authorization; Active means supported defensive behavior is running and charged. |
| Attack phase | None, Reserved/Approach, Committed, Releasing/terminal | Do not infer commitment solely from an animation tag or presence of a navigation request. Ordinary dodge stays barred throughout an active attack reservation under current gates. |
| Follow-up opportunity | None, Open, Consumed, Expired/Revoked | A separate, identified authored permission. It does not make an actively committed attack cancellable. |
| Availability / physical condition | Existing CanAct locks, airborne/grounded, hit-stop, launched/ragdoll/prone/fainted/removing | Reuse existing physical/combat owners. A semantic ForcedImpact label is not a replacement for these states. |

The requested situations are derived views:

| Situation | Interpretation |
| --- | --- |
| Idle | No retained trainer MoveTo or committed attack. It does not imply motionless or grounded; an actor may still be falling. |
| MoveTo | Running MoveTo I/A/N, retained destination, modifier Off or inactive. |
| DefensiveMoveTo | The same I/A/N plus an Active, trainer-authorized defensive modifier. |
| AttackCommitted | Attack movement/execution owns action control. A preceding Reserved/Approach phase is explicit and also retains the current ordinary-dodge rejection. |
| RecoveryWindow | An authored opportunity is Open **after commitment has been released**. Passive falling may coexist with this permission. |
| PassiveRecovery | No activated follow-up owns corrective movement; current applicable physics continues. It is not an auto-recovery ability or a new fall-damage state. |
| ForcedImpact | An external combat event has transferred applicable motion/control to existing hit response or incapacitation. An ordinary landing never establishes this classification by itself. |

New proposed identities: `D` = defensive activation/revision bound to `(Pokémon instance, I, A, N)`; `W` = one recovery-window instance; `F` = a new follow-up action/execution identity; `M` = motion-segment/forecast generation. These are conceptual fields, not added C++ APIs. Keep existing I/A/N/C semantics intact. A GUID establishes correlation; server-side ownership and lifecycle checks establish authority.

### Transition invariants

Every row below is a proposed acceptance rule layered over the current source. `Keep` means the same live parent survives; `resolve` means one terminal result, never an extra result for a modifier change. `Invalidate on motion` means a passive forecast is superseded when velocity, gravity, movement constraints, collision assumptions or relevant mode actually changes; a pure input/permission change does not by itself change the physical evidence. Cancelled/replaced identities also cease to authorize use of their forecast even if their recorded sample remains useful historically.

Server checks common to every incoming action (`V`): authenticated owning trainer/current actor instance, in-field lifecycle, finite/valid payload, matching current IDs and generation, action availability, and the transition-specific conditions below. Existing RPC coverage is uneven; V is a proposed uniform contract, not a claim of current complete validation. External events must originate in authoritative combat/movement processing.

| Trigger / transition | Current owner → next owner | Parent and command resolution | Stamina | Physical forecast | IDs that must match / server validation beyond V |
| --- | --- | --- | --- | --- | --- |
| Idle → accepted MoveTo | None/passive → navigation (or supported jump owner at its normal handoff) | Create I/A/N; no attack C | No new defensive cost | New route is not a passive-motion guarantee; invalidate on motion | Positive N ownership, valid destination and existing traversal constraints |
| MoveTo + hold → DefensiveMoveTo | Navigation → same navigation with modifier | Keep I/A/N; resolve nothing | Begin sustained cost while Active | Invalidate on motion, not just press | I/A/N/D; actual MoveTo action, eligible locomotion and activation budget; no attack C |
| DefensiveMoveTo + release | Navigation+modifier → navigation | Keep; clear D; no terminal command | Stop future defensive cost once | Invalidate on motion | Matching activation/revision; release is idempotent |
| DefensiveMoveTo + exhaustion | Navigation+modifier → navigation, ExhaustedBlocked | Keep destination/I/A/N; no terminal command | Spend only affordable elapsed interval; then stop modifier cost | Invalidate on motion | Server resource threshold; block automatic flicker/rearm |
| Held modifier + unsupported jump/lock | Navigation+modifier → existing jump/locked owner; modifier Suspended | Keep I/A/N if executor still retains them | No active defensive service, no defensive charge | Existing physics handoff governs invalidation | Same D context; no airborne air-control override; resume only after supported mode and eligibility return |
| Retained MoveTo suspends/resumes | Navigation ↔ existing temporary owner | Keep I/A/N; no terminal event | Only charge an Active modifier | Invalidate on motion | Matching retained N; a resume for old N cannot resume replacement N |
| MoveTo arrives / truly fails | Navigation → none/passive | Resolve N then A/I exactly once; revoke D | Stop defensive cost | Terminalize control association; preserve historical observation | Matching N; distinguish terminal failure from existing nonterminal composite hold |
| Valid new MoveTo/attack replaces parent | Old executor → newly accepted executor after cleanup | Old I/action Interrupted; cancel only its N/C; create fresh IDs | Stop old modifier cost; new attack commits through existing GAS | Revoke old control/forecast association; new motion gets new M | Existing preflight, CanAct, replacement ownership and GAS cleanup barrier; rejected input leaves old parent intact |
| Attack approach ready → committed execution | Navigation/jump handoff → authored GAS; jump may remain ballistic owner | Keep I/C; resolve A1/N; start A2(C) | Existing attack commit cost only | Preserve if same ballistic segment; invalidate on authored motion change | I/C/A1/N trigger and A2/C binding; completed N need not stay active |
| AttackCommitted + ordinary dodge/hold | Authored executor → same | Reject; no resolve, queue or latent hold | No dodge/defense spend | No change from rejection | Current attack reservation/execution; enforce at authoritative dispatch boundary |
| Authored opportunity event before commitment release | Authored executor → same | Record candidate only; keep I/C | No opportunity cost | No change from candidate | Matching C, move, outcome/event; cannot accept input as cancellation |
| Commitment release + eligible authored outcome | GAS cleanup → opportunity owner; applicable physics continues | Resolve source C/A2 once; retain I only if a planned opportunity action follows | No cost for displaying/opening W | Existing passive forecast remains conditional on unchanged motion | Captured I/A2/C; identified cleanup complete; open one W with server times; no surviving incompatible lock |
| Open W + valid follow-up | Opportunity/passive → designated follow-up executor | Consume W atomically; keep planned parent I; start fresh action F (and fresh C if a new attack) | Validate/commit authored cost once | If momentum/mode changes, invalidate old forecast and start new M | I/W/source C as provenance, F, availability, time, outcome, species grant, resource and no external lock |
| Open W + invalid/late input | Opportunity/passive → unchanged (or expired W) | Reject; no corruption or second resolution | No spend | No motion change | Same W; server deadline and eligibility, not client cue visibility |
| Open W expires / action unavailable / activation fails | Opportunity → passive movement | Close W; resolve opportunity action and parent according to authored result; never rewrite source C's attack outcome | No charge for rejection; activation cost/refund only under authored GAS policy | Existing segment if unchanged | Matching W and parent; one terminal opportunity result; no fallback rescue |
| PassiveRecovery + no input | Applicable movement physics → same | No new command; close only naturally expired opportunity | Normal regeneration; no defensive or rescue cost | Update observation of same segment; never auto-authorize action | No command admission; server physics remains authoritative |
| External impact / incapacitation | Current movement owner → existing combat/physics owner **if that response actually transfers control** | Revoke incompatible D/W; resolve/cancel only affected action under existing interruption rules | Stop incompatible D charge; no new impact cost specified | Invalidate on actual impact/motion change; retain impact provenance | Authoritative hit result and affected IDs; do not equate every hit, hit-stop, or landing with cancellation |
| Natural landing | Falling/jump → normal grounded movement/retained navigation | Existing jump/nav continuation; no new attack result or forced-impact result | No automatic landing cost | Close airborne observation; old airborne forecast is historical | Actual matching movement/landing event; landing is not evidence of damage |
| Recall accepted / actor removed | Existing owners → field-removal lifecycle | Current cleanup applies; future immediate revocation/resolution order requires dedicated validation | Stop any future D cost; no new recall price specified | Actor/control context invalid; terminate observation as applicable | Actor ownership/removal generation; recall interruption admission remains unresolved, not authorized by this table |

## 4. Command-precedence matrix

| Current action | Incoming event | Initial treatment / important qualification |
| --- | --- | --- |
| MoveTo | Hold dodge | Proposed: enable D on the same I/A/N. Current discrete dodge remains a different API; do not loop it to simulate holding. |
| DefensiveMoveTo | Release dodge | Remove D, keep destination and request. No synthetic navigation success/cancellation. |
| DefensiveMoveTo | Stamina exhausted | Deactivate defense, retain MoveTo; require recovery eligibility and a new deliberate press after release to rearm in the first version. |
| DefensiveMoveTo | Threat disappears | Continue authorized defensive stance and cost while Active; return local steering toward the original route. Threat absence is not release. |
| MoveTo / DefensiveMoveTo | New MoveTo or supported attack | Use existing preflight/replacement semantics; clear old D and create new parent IDs on acceptance. Held input does not silently transfer. |
| Attack Reserved/Approach | Ordinary dodge/hold | Keep current rejection while C is reserved. This phase is not ordinary MoveTo even though navigation executes it. |
| AttackCommitted | Ordinary dodge/hold | Reject without cancellation, resource spend, queued recovery, or future latent defense. |
| AttackCommitted | New attack | Preserve existing replacement rules. Supported sequenced replacement is structurally supported, but `CanAct`, active combat locks, cooldown/resources and deferred cleanup can reject it. Do not promise a universal attack cancel. Legacy active commands reject another reservation. |
| AttackCommitted | New MoveTo | Same current sequence preflight and cleanup constraints; no new unconditional movement override privilege. Legacy attack/MoveTo coexistence is not generalized by this design. |
| AttackCommitted | External impact | Apply actual existing hit response/cancellation/knockback behavior. A physical contact alone is not proof the attack ends. |
| AttackCommitted | Authored recovery cue | Candidate only until commitment release; ordinary dodge is not reclassified as a valid follow-up. |
| RecoveryWindow | Valid authored follow-up | Accept once only after time, outcome, action availability, resources and ownership checks. |
| RecoveryWindow | Invalid, duplicate or late follow-up | Reject without disturbing active/next execution. Retire expired W. |
| RecoveryWindow | New unrelated trainer command | Proposed: normal command preflight; if accepted, revoke W and replace its parent through targeted cleanup. Rejection preserves W until its actual expiry. |
| PassiveRecovery | No input | Continue applicable physics; no automatic emergency action. |
| PassiveRecovery | Ordinary/new command | Apply existing movement/action eligibility; no generic air dodge or recovery ability is granted by being airborne. |
| ForcedImpact / incapacitated | Dodge, attack, follow-up | Existing locks and ability eligibility govern; no bypass for a timing cue. |
| Any state | Recall | Current direct field-removal path documented in section 1. Future tactical interruption policy is explicitly unresolved. |
| Any state | Late release/callback from previous action | Reject by actor instance, parent/action/executor and activation/window generation; never operate on “whatever is current.” |

## 5. Defensive traversal: smallest future implementation boundary

### Responsibility and lifecycle

Add a small request-scoped defensive session at the command/navigation boundary. The command side validates trainer authorization; the navigation owner retains the original destination and applies a bounded local movement policy. This can initially be component-owned state plus a small value struct/interface. A new general action planner, autonomous rescue component, or second navigation controller is unnecessary.

Conceptual messages, **not implemented API signatures**:

| Message | Contract |
| --- | --- |
| Request defense on/off | Names Pokémon instance, I/A/N, input sequence and D/revision. Begin only against a running trainer MoveTo action. A release names the activation it ends. |
| Query current authorization | Returns requested/active/suspended/blocked state and owner IDs; read-only consumers cannot create permission. |
| Update eligible local movement | Navigation combines its route-following preference with an allowed local defensive adjustment; it keeps the destination, parent N and acceptance semantics. |
| Spend for elapsed active time | Server session asks stamina authority for cost; fails closed for defense if it cannot pay. Navigation intent remains retained. |
| Revoke session | On release, exhausted budget, parent replacement/resolution, actor removal, ownership loss or incompatible incapacitation. Clears only this session's timers/handles/steering. |

The first implementation should support ordinary ground MoveTo only. During jump preparation/execution, root-motion ownership or another incompatible movement phase, suspend the modifier and leave that executor alone. A held authorization may resume on supported ground movement **only if the same I/A/N/D remains live**, the input is still held, and resources/locks permit it. Exhaustion uses the stricter deliberate rearm rule below. This scope prevents a held button from silently changing ballistic air control or authorizing a species-specific aerial dodge.

A first modifier without the later evasive solver must be described honestly: it establishes held authorization, retained navigation and sustained cost; it does not yet promise to avoid attacks or grant invulnerability. Ground navigation proceeds normally. No new immunity, hitbox change, dodge animation loop, or automatic emergency jump is implied.

Navigation should expose its local route direction/corridor and supported locomotion constraints to a bounded steering interface, accepting a local preference rather than a replacement destination. Keep one final movement writer: navigation/path following owns ground movement; a future steering policy supplies input to it. Evaluate obstacles through existing navigation/collision feasibility. Do not add a second `LaunchCharacter`, root-motion force or `AddMovementInput` loop competing with path following.

The current navigation implementation can issue engine MoveTo operations during navigation thinking. Therefore “no repeated cancellation/recreation” must be measured at two levels: **I/A/N remain unchanged**, and enabling/holding/releasing D introduces no repeated cancel/reissue cycle or extra engine-request churn. It is not a claim that the existing `FAIRequestID` never changes during ordinary path following. Keep the raw destination, route acceptance, partial-path handling and composite parent semantics. [S7], [S8]

### Threat information: reuse and required additions

Current `FThreatEntry` contains owner ASC, activation ID, fixed location, impact radius, telegraph time, ETA, expiry and weak instigator. `QueryThreats` uses center distance and time horizon; it appends to the supplied array. It does not expand the spatial query by threat radius, filter friend/foe, predict moving projectiles, test line of sight, or calculate whether a moving Pokémon will be struck. Zero expiry is indefinite; expired entries are excluded by query and positive-expiry entries have tick cleanup. No threat-change delegate, replicated registry or server-only gate is declared. The separate area-center pruning code is not sufficient evidence of a fully robust threat lifecycle. [S26]

The only native `RegisterThreat` producer found is environment-drop projectile planning in `AT_FireProjectiles`. It estimates timing from distance/initial speed plus warning; registered expiry equals ETA. The scheduled ETA later triggers projectile spawning, so it is not verified time of actual collision. Wave-offset/timing semantics and cancellation cleanup require audit before this can drive evasive movement. No native consumer of `QueryThreats`, or external native caller of `ClearThreatsByActivationId`, was found. The EQS threat-impact context is an empty shell. Blueprint consumers were not inspected. [S26], [S27]

Reuse the registry's spatial/time fields and owner/activation correlation. Add, in the threat-integration increment, a narrow server query adapter with fresh output storage, valid-source/allegiance filtering, conservative radius handling, explicit expiry/cancellation, and documented timing semantics. Predictive projectile avoidance additionally needs producer-supplied motion/trajectory evidence and an encounter-prediction interface; a static threat area with an ETA is not that interface.

Prefer event/version updates for threat added, changed, removed and expired, with a scheduled next expiry/ETA boundary. Until those exist, bounded queries at an explicit cadence while D is active are a valid first integration; do not pretend the current subsystem is event-driven. Hysteresis belongs in local threat selection: maintain an avoidance choice for a short authored interval, change it when the selected threat is invalid/expired or a materially more urgent threat appears, and avoid side-to-side changes for negligible score differences. Locomotion can update every movement tick without rerunning full strategic choice every tick.

### Edge cases

| Condition | Required behavior |
| --- | --- |
| No nearby threat while input held | Active defensive stance still consumes its sustained cost. Navigation progresses toward the retained destination; no invented dodges just to animate the state. |
| Threat appears/expires/is cancelled | Reevaluate local preference from authoritative information. Remove expired choices promptly; never keep evading a destroyed activation indefinitely. |
| Incoming threat plus obstacle | Respect collision/navigation feasibility and bounded deviation. If no feasible evasion exists, preserve normal route behavior or existing nonterminal hold; do not promise immunity. |
| Hazardous landing/terrain | No new risk-based jump rejection or automatic warning. Geometry/path validity remains a physical execution constraint. Hazard metadata must not silently become a universal veto. |
| Stalled progress | Bound local detour distance/time and use navigation progress/failure events. Rejoin the route when possible. Do not oscillate indefinitely or repeatedly reset N. Exact tuning is authored later. |
| Destination reached | Navigation resolves normally, and D stops immediately even if the physical button remains down. A fresh intent needs fresh authorization. |
| Destination unavailable / terminal nav failure | Resolve the matching request normally and revoke D. A composite nonterminal hold preserves I/N; suspended defense does not charge when no supported defensive service is active. |
| Stamina reaches exhaustion threshold | End Active defense, keep MoveTo, expose the appropriate existing/future stamina feedback. No automatic rescue, jump, attack or replacement destination. |
| Release / focus loss / input cancellation | Send an idempotent release for the exact D. Bind both Completed and Canceled as appropriate; focus-loss/ownership lifecycle must not leave a permanent hold. |
| Accepted replacement / faint / removal / disconnect | Revoke D before executor cleanup can reenter. Retire timers and delegates by owner token. Old release/tick cannot affect a new session. |

## 6. Move-specific recovery opportunities

### Existing recovery mechanisms are different concepts

Current `Ability.Window.Recovery` and `Combat_State_Recovering` control authored animation/combat timing and action locks. `FMoveTiming::DodgeWindowStart/End` fields exist, but native usage was not found; they do not establish a dodge-cancel feature. `CanAct` rejects Attacking, HitStun, BlockStun, Clashing, Launched, Recovering and Vulnerable; `CanMove` has a different restriction set. Reusing a tag as a follow-up permission would be ambiguous, while globally bypassing `CanAct` would weaken unrelated combat rules. [S10], [S21]

There is also an **existing opt-in airborne whiff orientation prototype**. Authoritative melee finalization can automatically call `BeginAirborneWhiffRecovery` after a confirmed miss, subject to its outcome/presentation configuration and `bCanRecoverMidair` (default false). It requires the current sequenced command and falling state; its separate short floor trace/time estimate is not the completed tolerance evaluator. It temporarily locks/turns yaw, arms command-scoped landing facing, and ends on landing/timeout. It does not apply a rescue impulse, change velocity, or require trainer timing input. Preserve it as inspected behavior; do not represent it as the new QTE contract or expand it into automatic emergency recovery. Any future replacement of this prototype needs its own explicit scope. [S11]

### Proposed authored data

Initially store definitions with move authoring, referencing allowed species capabilities/granted actions. A tolerance profile describes physical limits, not which recovery ability the species possesses. The following are conceptual fields, not a required asset schema or implementation:

| Field group | Required meaning |
| --- | --- |
| Definition ID / move / version | Stable authored opportunity identity and source move; server snapshots the definition used for this execution. |
| Eligible outcomes | Explicit set, e.g. Miss or a particular authored contact/impact result. Existing command Connected/Missed and ability Hit/Miss are not rich enough to assume every sub-outcome exists. Map richer outcomes deliberately; no default “all failures recover.” |
| Opening event | Identified move event, active-window closure, contact resolution or post-execution event. Define which event is final enough to qualify and how it is associated with C. |
| Commitment-release condition | Exact point old movement authority is relinquished. Default first implementation: identified native end/task-cleanup barrier before activation of any follow-up. |
| Timing | Server open time, duration/close time, and explicit early-input policy. Recommended first version uses `[OpenTime, CloseTime)` with no early buffering; close-time input is late. |
| Allowed actions/categories | Allowlisted move/ability grants or categories: e.g. authored chain attack, aerial reposition, landing-facing action, locomotion-specific recovery. A category alone does not grant an unavailable ability. |
| Activation conditions | Species capability, actual granted ability, authoritative physical/combat state, per-action stamina/PP/cooldown or other authored requirements, target validity and remaining opportunity uses. |
| Movement effect | No momentum change, explicit replacement/additive impulse, root motion or mode transition; name the executor that owns it and its override restoration. No universal default recovery force. |
| Failure / expiration | Continue applicable physics; no action substitution or automatic fallback rescue. Distinguish expired window, unavailable action and failed activation in results. |
| Animation / feedback | Authored cue and animation event association, allowed action prompt, opening/closing feedback, success/failure acknowledgement and missing-action behavior. Cosmetic cue does not decide eligibility. No QTE UI is implemented here. |
| Ownership / identity | Source Pokémon instance, I, source A/C, definition ID, unique W, server timing/outcome revision and one-use status; accepted follow-up receives new F/action/executor identity. Preserve old N only as provenance if already resolved. |

### Commitment and activation handoff

1. While the attack is committed, an authored event may record a candidate opportunity. No ordinary dodge or buffered hold cancels that attack. Candidate data may be snapshotted before old ability destruction.
2. The authoritative source outcome and release of movement ownership establish eligibility. For the first implementation, wait until native `EndAbility` has cleaned old GAS tasks and its identified command result has been emitted. Also verify that any surviving jump executor has relinquished incompatible movement overrides through its own lifecycle; GAS completion alone does not prove that. If an authored cue occurs earlier, it does not open acceptance yet. Support for an earlier explicit in-ability or jump-owner handoff is a separate extension.
3. For a move authored with a follow-up opportunity, plan an opportunity action after AttackExecution. Keep I running across that action; resolve source C/A exactly once. A completed parent is never resurrected. Moves without such an authored action keep their current completion behavior.
4. The opportunity action owns W and its server deadline while physics continues under the actual movement owner. A source C can now be terminal and retained as provenance. W and the live parent/action establish current authority; do not require the old ability object or approach N to be live.
5. A valid trainer request is checked and W is consumed once before dispatch can reenter. The newly accepted action gets F and, if it is another attack, a new C. A chain that retains I needs an internal action-dispatch/reservation path under that I; calling the current public `SubmitAttackIntent` would instead create a replacement parent. The old command's outcome remains Connected/Missed/etc.; follow-up success is a separate result.
6. Rejection spends nothing and changes no movement. Expiration or inability to activate closes the opportunity according to its authored result. An accepted action's cost/refund policy must be explicit; the existing multi-resource move API is not assumed transactional.

For the first prototype, require existing `CanAct` and absence of incompatible locks at the post-cleanup opening point. If a particular move must permit an action during **its own** remaining recovery lock, that later design needs source-owned lock identity and an allowlisted validator that distinguishes that lock from hit stun/incapacitation. It must not clear global recovery tags or bypass all `CanAct` checks. An animation notify alone cannot authorize movement or supersede an external combat owner.

If there is no available action, no valid input, or unsuccessful activation, the Pokémon continues falling/otherwise moving under applicable physics. A successful animation cue alone is not a successful recovery action. The window owner does not monitor hazards and trigger rescue.

### New motion segment on successful movement change

A passive forecast assumes no future unmodeled force. Before an accepted follow-up changes velocity, impulse, root motion, gravity or relevant movement constraints, record the old forecast as superseded and retain its source evidence. Establish a new M linked to source I/C/W and F. Capture the **actual applied** position/velocity/configuration after the queued launch/impulse has been consumed; requested velocity alone is insufficient.

Preserve earlier full airborne height history only when continuity across the boundary is verified. If the new movement is outside the supported passive model, report unavailable/Unknown until supported evidence exists. Do not manufacture a low new peak by treating a midair impulse as fresh ground takeoff. A pure facing change need not invalidate a capsule-based ballistic forecast if its model assumptions remain valid, but geometry changes must be checked.

Current telemetry deliberately keeps its original one-shot seed and records later-impact invalidation. A new reusable motion-generation interface is future integration work; do not silently reseed or alter the existing diagnostic calculations to implement follow-up authorization. [S22], [S23], [S24], [S25]

## 7. Physical evidence, tolerance, hazards and forced impact

| Concern | Current evidence / future consumer boundary |
| --- | --- |
| Physical geometry and motion | Ballistics uses explicit gravity/terminal-speed assumptions. Collision-aware continuation is a finite game-thread, frozen-world query; geometry results are not tactical judgments. |
| Historical height | Telemetry starts on actual supported AirborneContact takeoff and verifies supported movement intervals, preserving earlier apex history. Missing intervals cannot be repaired from sparse logging. |
| Authored physical limits | Species profile supplies configured speed/drop limits and stamina scaling. Downward precontact speed and full maximum-feet-to-landing-feet drop are separate criteria. Health, hazard policy, action choice and forced-impact damage are excluded. |
| Environmental threats | Timed threat fields and authored hazards may inform a separately authorized tactic. They are not tolerance inputs and do not add an automatic jump veto or environmental warning. |
| Available actions | Move/species grants, timing and resources determine what can be requested. `WithinTolerance` does not grant an action; `ExceedsTolerance` does not create one. |
| Trainer decisions | Trainer selects/intervenes using available commands and authored cues. No rescue because diagnostics identify a bad forecast. |
| Wild strategy | Strategy may later consume validated evidence at meaningful events under its own policy. Ordinary AI does not repeatedly simulate all hypothetical landing risks. |
| Forced-impact consequences | A separately authored combat system may use externally caused impact provenance, body geometry, mass, locomotion and actual contact. No automatic conversion from ordinary landing or tolerance result to damage. |

Tolerance remains read-only and value-based. Equality with an authored limit is within that limit. Any demonstrated exceeded criterion yields `ExceedsTolerance`; both criteria must be valid and within limits for `WithinTolerance`; unsupported/missing evidence otherwise remains `Unknown`. `Unknown` is not safe, unsafe, an automatic rejection, or a reason to spend stamina. `ExceedsTolerance` is not permission to reject a jump, damage an ordinary landing, or launch a recovery move. [S24], [S25]

The current telemetry comparison is narrowly gated: enabled diagnostics, an observed AirborneContact execution, known miss or eligible BounceOff, completed contact and supported falling motion after pending launch consumption. It is not continuous recovery analysis for all species/all falls. Tolerance captures the ASC stamina snapshot once at the prediction seed; later stamina changes do not mutate that historical comparison. Gravity/terminal-speed/capsule changes, unsupported motion, missing height history or later impact invalidate evidence as implemented. [S22]

Future consumers should receive a read-only evidence envelope: source identities, sample/seed time, model assumptions, validity/invalidation reason, physical result, profile provenance and tolerance result. They must make their own explicitly scoped tactical decision without modifying the calculator. Stale evidence must be identified as stale, not presented as a fresh outcome.

The word “recovery” has three distinct uses here: physical post-attack observation, existing animation/combat recovery locks, and proposed trainer-activated follow-up opportunities. Keep them separate in debug labels and APIs. Forced-impact development must additionally identify **external combat causation**; a large height or landing speed by itself is insufficient.

## 8. Stamina and GAS ownership

### Current implementation

`UPokemonBaseAttributeSet` owns `Stamina`/`MaxStamina`; both use GAS attribute replication/rep-notify and clamping. `UPokemonStaminaComponent::TrySpendStamina` is authority-only, validates affordability, applies an ASC attribute change and restarts the regeneration delay after a positive spend. The authority-only timer regenerates without a combat-state exclusion. Current C++ defaults are 20 units/second, 1.25 seconds delay and 0.1-second update interval; these are defaults, not verified final asset balance. Party initialization refreshes regeneration state. [S14], [S15], [S16]

StaminaComponent is not necessarily the exclusive writer: `GetReadyForCombat` applies the configured `StaminaRecoveryEffect`, whose asset contents were not inspected, and startup restores stored stamina. Move `CheckCost` checks PP/stamina; `CommitPokemonMove` invokes the existing PP/stamina/cooldown application. These calls are not a general atomic multi-resource reservation system. Standalone dodge has its own one-shot cost (C++ default 20) and root-motion duration (default 0.25 s). No sustained defensive drain, dedicated exhaustion state or stamina-threshold notification contract was found. [S11], [S12], [S14], [S15], [S16]

### Proposed sustained cost and exhaustion

Keep one stamina balance in GAS. The defensive session owns **when** it is active and requests spending; StaminaComponent/ASC owns authoritative affordability and attribute mutation. Navigation, threat queries, input and physical diagnostics must not independently decrement or regenerate stamina.

Charge an authored rate for elapsed time in Active state, including threat-free movement. Repeated input packets do not multiply the rate or restart the session. Account for the last affordable interval before deactivation; do not consume below zero, allow an unpaid interval of defense, or charge inactive time. Timer callbacks must carry/check D and current I/A/N. A short server timer or existing authoritative update may perform accounting; full tactical reevaluation does not need to share its cadence.

Every positive `TrySpendStamina` restarts the existing regen delay, so frequent sustained spending naturally postpones **that timer's** regeneration until spending ends. This is compatible with combat regeneration; it does not mean regeneration is globally disabled in combat. Verify the configured `StaminaRecoveryEffect` alongside timer regeneration before balancing sustained drain. If regeneration can exceed drain, indefinite holding may avoid exhaustion; the selected rate/effect policy must intentionally produce the intended net loss. Do not silently retune those assets in the modifier increment.

Recommended first exhaustion policy: deactivate defense while preserving MoveTo, enter ExhaustedBlocked, and require a sufficient authored re-entry stamina threshold plus release and a fresh press. If a minimum vulnerability duration is needed, author it explicitly alongside that threshold. Do not automatically toggle on whenever a fraction of stamina regenerates. Meaningful vulnerability comes from the unavailable defensive response during recovery, with actual duration/threshold verified in acceptance; it does not imply forced damage or cancellation of the destination.

Do not reuse `Combat_State_Vulnerable` merely for naming convenience: current `CanAct` blocks it, and navigation can fail when its owner cannot act. Defense-specific exhaustion must preserve ordinary navigation under this contract. Actual incapacity remains a separate reason to stop/fail movement. Specialized Recover/Ingrain stamina management and broader regeneration redesign are deferred.

## 9. AI responsibilities

Current Decision Component is created on `APokemonAIController`, starts on possession with a combat brain config, and stops on unpossess. It ticks but only runs thinking at scheduled intervals after a commitment duration, unless an urgent flag permits it; no native producer setting that urgent flag was found. Default think/commit ranges are 0.5–1.5 seconds. It chooses Idle without a target, Flee below 25% HP when `RiskToTolerance < 0.4`, otherwise Engage. A defensive navigation method exists, but the present selector does not choose Defensive. [S17], [S18]

It publishes desired combat mode to Blackboard and can submit approach/keep-distance/flee navigation. `UpdateNavigationIntent` yields to an active valid N/player Move tag and to dodge. When `CanAct` is false, the think path can clear navigation before that yield check. This matters for exhaustion design: do not create a new global cannot-act lock just to stop defense. The component's documentation says “interpret trainer commands,” but actual trainer intent submission, command reservation and GAS activation occur outside it. Strategy configuration fields for reaction/dodge/target selection are not evidence those behaviors are implemented. [S17]

BT starts from controller possession and still participates in legacy melee/ranged ability paths, Blackboard state and existing follow/roam behavior. Native BT task use of identity-free `OnAttackEnd` is not a safe new recovery-window bus. Current sequenced trainer melee uses identified action/command results. Do not combine them into a second Decision-owned executor. [S18], [S28]

Proposed responsibility: Decision Component chooses permitted high-level strategy when autonomous authority is available. Navigation executes it, GAS executes authored moves, and trainer-owned modifiers/windows remain trainer-authorized. Wild strategy can react to meaningful target changes, threshold crossings, threat activation/expiry, completion and interruption, with bounded periodic fallback. Per-frame physics and local steering are compatible with event/cadence-driven strategy. Continuous landing-risk evaluation, advanced learning and automatic hazard rescue for trainer-owned Pokémon are excluded. Health can remain an AI strategy input while remaining absent from the physical-tolerance calculation.

## 10. Server and multiplayer contract

### What exists versus what is proposed

Current source has server trainer RPCs, authority checks in sequenced submission/reservation/execution and jump/telemetry paths, server-only standalone dodge, ASC/attribute replication, replicated combat-state tags and field-return effects. `CurrentPokemon` is replicated. These establish useful foundations, not a proven end-to-end multiplayer held-defense or QTE protocol. Intent/action IDs, command reservation state, threat registry and future W/D timing/state are not automatically replicated just because they are UPROPERTYs or reside on replicated actors. [S1], [S3], [S5], [S9], [S10], [S12], [S14], [S20], [S21], [S26]

Trainer dodge/recall explicitly verify trainer ownership; MoveTo/attack RPC bodies largely rely on the current Pokémon reference plus component checks. They do not take the full actor/intent activation tuple proposed here. Existing source authority checks are not evidence that malicious/stale aim data, actor replacement, late release, timing latency and dedicated-server behavior have been exhaustively tested.

### Proposed authoritative protocol

| Responsibility | Server | Owning client / other clients |
| --- | --- | --- |
| Commands / replacement | Validate trainer-to-actor relationship, payload, current context, CanAct/eligibility, preflight and targeted cleanup; assign authoritative IDs | Send intent and expected context. Show accepted/rejected result, without locally replacing server ownership. |
| Held defense | Own D, requested/active/suspended/exhausted state, input ordering, stop conditions and any local steering | Send press/release edges with actor+I/A/N and monotonic input sequence; reconcile server state. Do not stream per-frame Pokémon directions. |
| Stamina | Own drain, delay, regen/effect interaction and exhaustion threshold decisions | Display replicated attributes and acknowledged defense state. UI prediction never grants unpaid defense. |
| Recovery opportunity | Own source outcome, W, opening/closing time, eligibility, consume-once state and F | Render cues from server state/time; submit selected follow-up with W and request sequence. Client timestamp alone cannot prove success. |
| Movement / evidence | Apply movement through current executor; replicate resulting movement; validate M and forecast provenance | Smooth/render movement. Do not apply an independent recovery impulse or treat a local forecast as authority. |
| Threats | Use validated authoritative producers/queries for gameplay | Existing/authored attack telegraphs; presentation is not movement authorization, and this adds no automatic environmental-risk warning. |

Use acknowledged context to correlate a release even when its press acknowledgement is delayed: send input edges on one ordered owned-actor channel and pair them with a client input sequence that the server maps to D. Do not assume the client already knows a server-created D when it must release. D/W IDs are not secrets; matching them without trainer ownership is insufficient.

Recommended first timing rule is server receipt time with the half-open window specified above. Latency compensation, early buffering and accessibility timing variants require an explicit later policy; avoid retroactively accepting arbitrary client timestamps. Replicate enough opportunity state for a cue to display server time coherently, including actor/parent/window identity and terminal acknowledgement. Server combat tags alone do not carry that timing.

| Stale/race scenario | Required result |
| --- | --- |
| MoveTo N1 replaced by N2; release/drain timer for D1 arrives | D1 may retire itself, but cannot suspend, stop spending for, or clear N2/D2. |
| Trainer recalls Pokémon P1 then summons P2; old input arrives | Reject P1 instance/generation even if the trainer has a new CurrentPokemon. Never reinterpret it as a command for P2. |
| W1 expires or parent is replaced; late follow-up arrives | Reject W1; no resources, activation or corruption of the replacement. |
| Duplicate follow-up or same-tick competing resource request | One authoritative consume/activation result; recheck resources at commit. Do not trust separate earlier affordability checks as a transaction. |
| Old C's EndAbility/BT callback arrives during replacement | Match identity and cleanup barrier; never finish new C or clear its movement request. |
| Approach N has already succeeded while attack C is airborne | Validate live attack/window context; N is historical provenance, not a required active request. |
| Release before press acknowledgement / reordered input | Ordered edge sequence or explicit revision handling; older press cannot re-enable a newer released state. |
| Focus loss, disconnect, owner swap or actor EndPlay | Revoke live authorizations and timer/delegate ownership. A bounded hold lease/refresh can be added if the transport/lifecycle cannot guarantee release; it must never be inferred from stale packets. |

Multiplayer acceptance must exercise dedicated server plus owning and observing clients, delay/duplication/loss where appropriate, server/client stamina agreement and no client-side gameplay mutation. This document does not label native automation, prior provisional PIE, or existing reliable RPC declarations as that validation.

## 11. Remaining nonblocking decisions

These do not block reviewing this architecture. Resolve each before its dependent gameplay increment; none authorizes implementation in this milestone.

| Decision | Recommended initial boundary / dependency |
| --- | --- |
| Recall interruption rules | Open: per-state admission, range/line of sight/cost/cooldown if desired, and teardown ordering. Requires separate gameplay review; no universal safe cancellation assumption. |
| Defensive input binding | Preserve standalone dodge outside MoveTo where already valid; route held MoveTo authorization through a distinct path. Decide final input asset mapping and press-before-MoveTo UX before increment 2. Initial contract requires a press tied to a live MoveTo. |
| Exhaustion tuning | Choose cost rate, sufficient re-entry threshold and any minimum recovery interval before stamina acceptance. Architecture requires retained MoveTo and no automatic tiny-stamina rearm. |
| Regen effect interaction | Inspect configured `StaminaRecoveryEffect` and decide intended stacking with existing timer before balancing sustained costs. |
| First supported locomotion/species | Ground MoveTo for one explicitly selected species; suspension at unsupported movement phases. Flight/swimming/species-specific evasions follow only with their own supported interface. |
| Threat semantics | Define ETA as spawn, telegraph or actual impact; cancellation and multi-wave offsets must be correct before threat-based acceptance. Predictive projectiles need additional data. |
| Local steering tuning | Detour bounds, urgency bands, hysteresis and progress budget are authoring choices for increment 4, not hidden new destination policies. |
| Recovery authoring | Select one move, eligible outcome and actually granted follow-up; decide window duration/cue. First version opens after cleanup, uses server receipt time, and has no early buffering. |
| Follow-up during existing recovery lock | Deferred unless the chosen move needs it; would require source-owned lock validation, not a universal CanAct bypass. |
| Momentum/history model | Choose one prototype's supported motion contract and new M correlation before applying an impulse; unsupported forecasts remain Unknown. |
| Forced-impact balance | Separate work: external-causation rules, species/body parameters, collision thresholds and damage/status effects. No reuse of ordinary fall height as a damage rule. |

## 12. Staged implementation plan and acceptance matrix

All rows are **future work after contract review**. The dependency change to the preferred order is small: define D/input identity and resource lifecycle during the minimal modifier, then validate/tune sustained spending before adding threat steering. Authoring review of the existing regeneration effect is a prerequisite to stamina balance. No new gameplay code or tests are created in this milestone.

| Increment | Scope / entry requirement | Acceptance tests | Strict non-goals |
| --- | --- | --- | --- |
| 1. Confirm ownership contract | Review this document; trace existing MoveTo and two-action attack IDs, cleanup, runtime CanAct locks and recall behavior in the chosen assets. | One accepted parent has matching executor IDs and one terminal result; rejected replacement preserves owner; stale/duplicate/reentrant completion cannot affect successor; verify current attack guard during approach and committed execution; establish existing regression baseline. | No movement changes, new cancel privilege, recall redesign or diagnostic integration into gameplay. |
| 2. Minimal held MoveTo modifier | Implement D, press/release/cancel protocol, server authorization, state feedback and lifetime; ground MoveTo only. Include resource-hook lifecycle so Active cannot silently imply free defense. | Hold/release preserves destination/I/A/N; no per-frame RPCs or added cancel/reissue loop; repeated press idempotent; idle/attack input cannot create latent defense; old release ignored; jump/unsupported mode suspends without changing overrides; terminal navigation revokes D. | No evasive solver, immunity, repeated standalone root-motion dodge, airborne control or universal interruption. |
| 3. Sustained stamina and intent preservation | Inspect regen effect; wire/validate authoritative elapsed-time cost, deliberate exhaustion rearm and replicated state. Keep feature gated until these pass. | Rate partition invariance across update sizes; threat-free charge; zero/insufficient balance; last affordable interval; stop on release/suspend/failure/destruction; stale timer no-op; simultaneous costs do not overspend; regen delay after last positive spend and effect stacking understood; exhaustion lasts a meaningful authored interval without failing MoveTo; no activation from tiny regen alone. | No new attributes, health-based tolerance, general regen redesign, Recover/Ingrain or altered attack costs unless separately approved. |
| 4. Threat-aware local evasion | Validate source threat lifetime/timing; add adapter and bounded local navigation adjustment under D. | Correct acquisition/expiry/cancellation and team filtering; no stale entries; no-threat forward progress; collision-safe adjustment; hysteresis prevents oscillation; bounded detours return to original destination; no extra parent or modifier-driven engine request churn; fixture for blocked evasion; ground traversal still completes. | No promise of predictive projectile evasion from current static fields; no general solver for flight, automatic rescue, hazard jump veto or risk warnings. |
| 5. Authored recovery windows | Add move/outcome definitions, planned opportunity action, W, server timing and result/feedback events after commitment release. | Miss/hit/outcome eligibility; no window if unauthored/unavailable; exact open/close boundaries; early/late/duplicate/stale input; source C resolves once; I retained only when planned; old GAS tasks retired before eligibility; external locks prevent follow-up; no ordinary dodge cancel. | No QTE production UI, follow-up movement or global lock bypass. |
| 6. One post-attack follow-up | Choose one move/species/action, commit cost through GAS, implement its specific executor, cue prototype and motion-generation correlation if needed. | Correct timing/action grant/cost; single activation; failed/no input leaves passive movement; ordinary attack cannot be interrupted by the same button; new impulse supersedes forecast and captures applied velocity; valid height history retained or Unknown; cleanup does not restore over a newer owner; species lacking action cannot activate it. | No universal recovery, broad species equivalence, automatic hazard response, calculator rewrite or production-wide QTE rollout. |
| 7. Forced-impact consequences | Independently define externally caused impact provenance and species/body effect policy. | Normal jump/fall landing produces no new damage; forced combat ground impact is separately identifiable; hit-stop versus launch versus actual cancellation remain distinct; authority/replication and source attribution verified; physical tolerance remains unchanged. | No generic fall-damage system or direct `ExceedsTolerance → damage` mapping. |

### Cross-cutting validation layers

| Layer | Evidence required |
| --- | --- |
| Existing native regression | Preserve registered `ProjectMimikyu.Intent.Sequence`, `Intent.Attack`, `Navigation.CompositeMove`, `Traversal.Jump`, `Traversal.AirborneRecoveryTelemetry`, `Traversal.RecoveryContinuation`, `Traversal.RecoveryBallistics` and `Traversal.RecoveryTolerance` coverage. Use the actual test runner's selected list/results to compare with the prior 120/120 baseline; do not infer it from file count. |
| Existing source cases worth retaining | Sequence targeted ownership, retained partial route, nonterminal failure hold, stale/reentrant replacement and WalkJumpWalkOneIntent; attack GAS resource ownership, contact waits for completion, MoveTo replacement, legacy ranged routing and deferred cleanup. [S29], [S30] |
| Physical diagnostic isolation | Existing read-only/Unknown/stamina/profile tests; command identity/supersession/model invalidation, full height history and one-shot tolerance capture; finite collision/frozen-world and ballistic apex cases. Current source registers 41 tolerance, 39 telemetry, 20 continuation and 5 ballistics cases; those are registration counts, not a fresh passing run or the entire focused baseline. [S31], [S32], [S33], [S34] |
| Manual gameplay | Held MoveTo on unobstructed ground, threat/no-threat segments, obstacle/stall, exhaustion/release, jump handoff, active attack rejection, valid/invalid authored timing, no-input falling, ordinary landing and recall observation. Validate actual configured assets rather than only C++ defaults. |
| Multiplayer | Dedicated server + owner + observer; stale P1/P2 and N1/N2/W1/W2 input, duplicate activation, delayed release, disconnect/EndPlay, replicated stamina/cues and no client movement authority. Run from increment 2 onward as networking appears, not only at the end. |
| Lifecycle/performance | Count parent navigation changes and modifier-induced engine restarts; no leaked timers/delegates/root-motion sources; bounded threat query/decision cadence; terminal callbacks exactly once and no writes after terminal broadcasts that could erase a successor. |

This milestone's validation is documentation/source consistency and change-scope review. No Unreal build, automation run, Blueprint validation, fresh PIE session or multiplayer test was performed for this document-only change.

## 13. Unreal/C++ architectural choices for study

| Choice | Why it matters in this project |
| --- | --- |
| Components own capabilities; sequencer owns ordering | The Pokémon character can remain a façade while navigation, jump execution, stamina and command logic retain focused lifetimes. The sequencer selects the next action; it should not become another physics controller. |
| Orthogonal state rather than a giant enum | A Pokémon can be falling, have an open follow-up opportunity, and have no committed attack simultaneously. Separate dimensions express this without multiplying states such as every airborne/window/stamina combination. Enforce invariants between dimensions at handoffs. |
| Value records plus small action adapters | Current intent records are lightweight USTRUCT data, with stateless adapters into executors. Extend the narrow action contract before introducing a large UObject hierarchy or planner. Only add an object with its own lifetime if that lifetime is needed. |
| UPROPERTY is not automatic replication | It exposes/refers to data for Unreal reflection/GC as configured. Networking still needs explicit replicated state/RPC design. Current GUIDs/delegates do not automatically become a multiplayer protocol. |
| GUIDs versus tags versus engine request IDs | I/A/N/C identify particular lifetimes; gameplay tags describe categories/locks; `FAIRequestID` identifies engine path following. A matching tag cannot prove ownership, and a new path segment need not mean a new trainer intent. |
| Subscribe and mark Running before starting executor | Ability activation and navigation submission may synchronously complete. Binding afterward loses the result; storing an ID afterward can accidentally adopt a newer executor. |
| Retire before broadcasting; targeted cleanup | Delegate listeners may submit a new command synchronously. Old cleanup must not run afterward and clear its successor. Compare the exact ID on every timer, callback and cancellation. |
| GAS owns move resources and ability tasks | Move commitment should remain in one authority, with existing PP/cooldown/stamina semantics. Ability tasks provide bounded lifecycle cleanup, but a held navigation modifier need not repeatedly activate a root-motion ability. |
| EndAbility is a handoff barrier | Blueprint end callbacks and GAS scope locks complicate timing. The identified native completion after task cleanup is safer than identity-free OnAttackEnd for transferring control to a new action. |
| One movement override owner | CharacterMovement, path following, jump ballistic settings, GAS root motion and incapacitation can conflict if each independently writes/restores values. Transfer ownership explicitly; restoring saved settings must not overwrite a replacement owner's settings. |
| Runtime phase is not gameplay permission | An animation recovery tag or cue describes timing; it does not establish trainer authorization, available species action, server resource acceptance or released commitment. W supplies that separate contract. |
| Pure physical calculation versus policy | Value-only calculators are deterministic and easier to validate. Keep world sampling and ASC reads at the diagnostic boundary, then make tactical decisions in the explicitly authorized gameplay owner. |
| Event/cadence thinking versus simulation ticking | Movement needs frequent integration. Strategic choice, threat selection and opportunity acceptance can use events, thresholds and timers, avoiding needless full reconsideration each frame. |

Existing restoration details deserve later lifecycle tests: the jump restoration block writes orientation flags although they are saved specifically for AirborneContact, and discrete dodge overwrites one cached rotation flag during setup. These are source-audit observations, not fixes in this milestone, and do not justify changing movement settings as part of this design document. [S9], [S12]

## 14. Source references

The links below use the repository's verified origin and audited local HEAD. Paths are repository-relative beneath `ProjectMimikyu/Source`. Line anchors identify inspected definitions; related functions named in this document are in the same file unless separately linked. Historical documents are context only where source has advanced.

| Ref | GitHub source and audit anchors |
| --- | --- |
| S1 | [TrainerCharacter.cpp][S1]: recall 265; server dodge 442; input bindings 698; attack routing 805; local dodge 909; party toggle 1157; server MoveTo 1341. |
| S2 | [PokemonInputComponent.h][S2]: `BindDodgeActions`, Started-only binding at 57. |
| S3 | [PokemonIntentSequenceComponent.cpp][S3]: attack plan/actions 121; preflight/replacement 182; reservation 265; cancellation 282; action startup 338/409/443; identity checks 488/522/531. |
| S4 | [PokemonIntentSequenceTypes.h][S4]: action types, independent executor IDs and parent AttackCommandId. |
| S5 | [PokemonCommandComponent.cpp][S5]: classification 218; validation 246; install 277; legacy 315; reserve 338; execute 379; results/cancellation 426–509; dodge 579/702. |
| S6 | [PokemonCommandComponent.h][S6]: `IsCommandActive` 103; `IsUsingMove` 124 and backing field 159. |
| S7 | [PokemonNavigationComponent.cpp][S7]: targeted retirement 724; player submission 916; suspend/resume 1021/1051; engine MoveTo 3916; takeoff request pairing 4084; airborne execution trigger 5470. |
| S8 | [PokemonCompositeNavigation.cpp][S8]: MoveTo classification 33; destination completion 79; nonterminal failure hold 101. |
| S9 | [PokemonJumpExecutionComponent.cpp][S9]: authority/event ownership 69; preparation gate 112; parent cancel 245; launch 268; save/restore 303/350; interruption 662; terminal cleanup 769/957; airborne trigger 1013. |
| S10 | [PokemonGameplayAbilities.cpp][S10]: activation identity 49; identified cleanup 588; outcome validation 645; combat locks 809; recovery lock/fallback 838; window handling 977. |
| S11 | [PokemonDamageGameplayAbilities.cpp][S11]: whiff orientation prototype 127/207/690; cost 511/622; authoritative contact finalization 1019; move commit 1077. |
| S12 | [PokemonDodgeGameplayAbility.cpp][S12]: ServerOnly policy 14; cost/activation 44/221; root motion and orientation 150; end 313. |
| S13 | [AT_CombatApproach.cpp][S13]: N/C correlation 396; targeted request cleanup 547; task destruction 630. |
| S14 | [PokemonStaminaComponent.cpp][S14]: spending 78; regen delay 116; regeneration 137/167. Defaults: [PokemonStaminaComponent.h](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/ActorComponents/PokemonStaminaComponent.h#L41). |
| S15 | [PokemonBaseAttributeSet.cpp][S15]: replication/clamping 34–79 and 223; damage/launch 124. Attribute declarations: [PokemonBaseAttributeSet.h](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/AbilitySystem/PokemonBaseAttributeSet.h#L109). |
| S16 | [Pokemon_Parent.cpp][S16]: ASC replication 74; startup stamina 507/575; CanAct 753; faint cancellation 780; return 915; configured stamina effect 1086. |
| S17 | [PokemonDecisionComponent.cpp][S17]: scheduling 139/164; think/CanAct branch 220; navigation arbitration 340; actual strategy selector 472. |
| S18 | [PokemonAIController.cpp][S18]: Decision construction 19; BT/Decision startup 144; unpossess 188. Strategy data: [PokemonAICombatBrainConfig.h](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/DataAssets/PokemonAICombatBrainConfig.h#L27). |
| S19 | [PokemonIncapacitationComponent.cpp][S19]: external knockback 51; manual return 126; stop combat/movement 150. Impacts: [PokemonImpactResolverComponent.cpp](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonImpactResolverComponent.cpp#L95). |
| S20 | [PokemonFieldPresenceComponent.cpp][S20]: idempotent preparation 29; return/dissolve/lifespan 52; AI and movement shutdown 78/101. |
| S21 | [PokemonCombatStateComponent.cpp][S21]: replication 9; authority mutations 20; CanAct versus CanMove 275/289. |
| S22 | [PokemonAirborneRecoveryTelemetryComponent.cpp][S22]: default-off cvars 17; later impact 392; takeoff 671; one-shot seed 918; tolerance capture 1054; model checks 1157; height continuity 1241/1371/1602. |
| S23 | [PokemonRecoveryContinuation.h][S23]: read-only finite collision-aware contract. Implementation: [PokemonJumpTrajectoryValidator.cpp:1057](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Navigation/PokemonJumpTrajectoryValidator.cpp#L1057). Pure math: [PokemonRecoveryBallistics.h:90](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/Navigation/PokemonRecoveryBallistics.h#L90). |
| S24 | [PokemonRecoveryTolerance.cpp][S24]: effective limits 86; value-only evaluation 199. |
| S25 | [PokemonRecoveryToleranceDiagnostics.cpp][S25]: profile lookup 13; read-only stamina capture 25; invalid evidence 44; snapshots 96. Authoring: [PokemonRecoveryToleranceProfile.h](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/DataAssets/PokemonRecoveryToleranceProfile.h#L11); species reference: [PokemonDataAsset.h:64](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/DataAssets/PokemonDataAsset.h#L64). |
| S26 | [ThreatFieldSubsystem.cpp][S26]: register 60; query 76; removal 99; pruning 107. Schema: [ThreatFieldSubsystem.h:30](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/EQS/Subsystems/ThreatFieldSubsystem.h#L30). |
| S27 | [AT_FireProjectiles.cpp][S27]: threat producer 112–141; drop spawn schedule 403–461. Empty context: [EnvQueryContext_ThreatImpacts.cpp](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/EQS/Context/EnvQueryContext_ThreatImpacts.cpp#L4). |
| S28 | [BTTask_MeleeAttack.cpp][S28]: legacy event binding 39; companion [BTTask_RangedAttack.cpp:31](https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Tasks/BTTask_RangedAttack.cpp#L31). |
| S29 | [PokemonIntentSequenceTests.cpp][S29]: lifecycle, ownership, reentrancy and physical MoveTo tests. |
| S30 | [PokemonAttackIntentTests.cpp][S30]: GAS resource ownership 235; contact lifetime 250; replacement 310/332; legacy routing 394; deferred cleanup 443/456. |
| S31 | [PokemonRecoveryToleranceTests.cpp][S31]: 41 registered cases; read-only evidence and explicit outcomes. |
| S32 | [PokemonAirborneRecoveryTelemetryTests.cpp][S32]: 39 registered cases; identity, invalidation and height history. |
| S33 | [PokemonRecoveryContinuationTests.cpp][S33]: 20 registered cases; geometric/world-model boundaries. |
| S34 | [PokemonRecoveryBallisticsTests.cpp][S34]: 5 registered cases; passive ballistic math and apex history. |

[S1]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Characters/TrainerCharacter.cpp#L265
[S2]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/Input/PokemonInputComponent.h#L47
[S3]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonIntentSequenceComponent.cpp#L121
[S4]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/Intent/PokemonIntentSequenceTypes.h#L78
[S5]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonCommandComponent.cpp#L246
[S6]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/ActorComponents/PokemonCommandComponent.h#L100
[S7]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonNavigationComponent.cpp#L724
[S8]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonCompositeNavigation.cpp#L33
[S9]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonJumpExecutionComponent.cpp#L303
[S10]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/AbilitySystem/Abilities/PokemonGameplayAbilities.cpp#L588
[S11]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/AbilitySystem/Abilities/PokemonDamageGameplayAbilities.cpp#L127
[S12]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/AbilitySystem/Abilities/PokemonDodgeGameplayAbility.cpp#L14
[S13]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/AbilitySystem/AbilityTasks/AT_CombatApproach.cpp#L396
[S14]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonStaminaComponent.cpp#L78
[S15]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/AbilitySystem/PokemonBaseAttributeSet.cpp#L34
[S16]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Characters/Pokemon_Parent.cpp#L1086
[S17]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonDecisionComponent.cpp#L340
[S18]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/AIControllers/PokemonAIController.cpp#L144
[S19]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonIncapacitationComponent.cpp#L51
[S20]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonFieldPresenceComponent.cpp#L29
[S21]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonCombatStateComponent.cpp#L275
[S22]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/ActorComponents/PokemonAirborneRecoveryTelemetryComponent.cpp#L671
[S23]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Public/Navigation/PokemonRecoveryContinuation.h#L88
[S24]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Navigation/PokemonRecoveryTolerance.cpp#L199
[S25]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Navigation/PokemonRecoveryToleranceDiagnostics.cpp#L13
[S26]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/EQS/Subsystems/ThreatFieldSubsystem.cpp#L76
[S27]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/AbilitySystem/AbilityTasks/AT_FireProjectiles.cpp#L112
[S28]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Tasks/BTTask_MeleeAttack.cpp#L39
[S29]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyuEditor/Private/Tests/PokemonIntentSequenceTests.cpp#L89
[S30]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyuEditor/Private/Tests/PokemonAttackIntentTests.cpp#L235
[S31]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyuEditor/Private/Tests/PokemonRecoveryToleranceTests.cpp#L9
[S32]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyuEditor/Private/Tests/PokemonAirborneRecoveryTelemetryTests.cpp#L91
[S33]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Tests/PokemonRecoveryContinuationTests.cpp#L61
[S34]: https://github.com/Pikachuxyz025/ProjectPokemonMaster/blob/02758c50040e3ddb10ec60567b6ec30c6a469f8d/ProjectMimikyu/Source/ProjectMimikyu/Private/Tests/PokemonRecoveryBallisticsTests.cpp#L119


