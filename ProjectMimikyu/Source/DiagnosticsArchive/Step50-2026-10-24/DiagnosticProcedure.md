# Step 50 final regression diagnostics

Source audited against GitHub master `823a21822089ad0b72b13179bd6300943c7d2454`.
Local user changes to the command header and Blueprint assets were preserved.

## Source audit

- A: cancellation is recorded before GAS retirement. `NotifySequencedAbilityEnded` prioritizes
  Interrupted; `FinishCommand` invalidates ownership before broadcasting. Existing logging is
  enabled with `pokemon.Command.Debug 1`. The diagnostic counter observes accepted terminal
  resolutions after cleanup, before public callbacks; it ignores pre-guard EndAbility logs.
- B: the current entry points validate activity, retirement, authority, ability ownership, and
  command GUID. Runtime tests must distinguish a garbage/expired weak ability from a live
  instance rejecting the old GUID. The helper invokes actual contact, finalization, and outcome
  entry points and checks effects, health, outcome, closure, activity, montage position/section
  and queued next section. It never retains a strong ability reference.
- C: the one-shot synthetic helper bypasses Blueprint approach/contact tasks, commits the normal
  cost, then invokes the authoritative outcome path immediately after native montage startup.
  No damage or contact is fabricated. The normal montage task and completion gate remain in use.

## PIE actions

Build/load the updated Editor module. No Blueprint rewiring is needed. Arm tests in the
authoritative PIE game console (tilde), then close it before normal gameplay input.
Both presentation-test and authoritative-outcome flags must be enabled on GA_MachPunch_IT21.
Only that exact ability class in the armed PIE world is eligible; production GA_MachPunch is not.

1. Enter `pokemon.Command.Debug 1`, then `pokemon.Step50 Cancel`.
2. Trigger Mach Punch against a valid Pokemon target. The helper captures GUID A and cancels
   0.05 game seconds after montage startup; it probes the old weak reference 0.15 seconds later.
3. After cooldown permits, trigger another normal Mach Punch against a valid target. The helper
   submits A to the new live ability with GUID B, checks rejection, and lets B continue normally.
4. After that attempt ends, enter `pokemon.Step50 StrikeHit`, then trigger Mach Punch.
5. After it ends and resources permit, enter `pokemon.Step50 StrikeMiss`, then trigger Mach Punch.
6. Enter `pokemon.Step50 Report`, preserve the logs, then `pokemon.Step50 Stop`.
   Restore `pokemon.Command.Debug` to its prior value (normally 0).

`pokemon.Step50 Cancel 0.2` changes only the diagnostic cancellation delay. If the montage
has already ended, cancellation is Not Executed; use an earlier delay. No helper bypasses
cooldown, restores PP, replaces targets, or automatically issues gameplay commands.

## Exact log evidence

A, same GUID A:

```text
[IT50Diag] Captured CommandId=A ... Synthetic=0
[IT50Diag] CancelRequest CommandId=A Playing=1 Section=...
[IT21Lifecycle] EndAbility ... Cancelled=1 ...
[IT50Diag] Terminal CommandId=A Outcome=Interrupted Reason=Step50DiagnosticCancel Count=1 Released=1 Synthetic=0 Result=Passed
```

Require one terminal line and one existing `[PokemonCommand] Resolved CommandId=A` line.
`Contact ... Outcome=Connected` is nonterminal. No later terminal Connected/Missed or Count=2
may occur for A. Released=1 is sampled before public callbacks can install a replacement command.

B distinguishes two old-object results:

```text
[IT50Diag] LateCallback Kind=OriginalInstance OldCommandId=A Result=SuppressedLifetime ValidatorExecuted=0
```

If the old object remains valid, expect `Result=RejectedContext ValidatorExecuted=1 Effects=0
StateUnchanged=1` instead. Suppression is not evidence of validator execution.

The separate valid-instance probe must show:

```text
[IT50Diag] LateCallback Kind=NextInstance OldCommandId=A CurrentCommandId=B Result=RejectedContext ValidatorExecuted=1 Effects=0 StateUnchanged=1
[IT50Diag] SubsequentActivation OldCommandId=A NewCommandId=B Result=Passed
```

Require A != B and normal continuation of B. A missing target/ASC is Not Executed, not a pass.

C, different GUIDs for synthetic Hit and Miss:

```text
[IT50Diag] SyntheticDispatch CommandId=C Outcome=Hit Section=Strike ... NoCombatQueries=1
[IT50Outcome] ... Confirmed Hit ... CommandId=C
... Will wait for end of section ... NextSection=HitContact
[IT50Diag] StrikeQueued CommandId=C Destination=HitContact StillStrike=1 Result=Passed
[IT50Diag] StrikeDestination CommandId=C Section=HitContact ... Result=Passed
... Montage completed ...
[IT50Diag] Terminal CommandId=C Outcome=Missed ... Count=1 Released=1 Synthetic=1 Result=Passed
```

Miss substitutes `Outcome=Miss` and `WhiffFollowThrough`. Require one confirmation/presentation
per GUID, no impact/damage/contact events, and normal retirement. Synthetic Hit intentionally
has final command result **Missed**: no real contact was fabricated. This tests the authoritative
presentation entry path and lifecycle with synthetic input, not end-to-end physical hit detection.
It is also distinct from a preview-only transition test.

`Result=Failed`, `ContextAccepted=1`, `Effects>0`, `StateUnchanged=0`, `Count>1`, or `Released=0`
fails that observation. `NotExecuted`, an unconsumed arm, or missing destination/completion
evidence means the test is incomplete. Report flags supplement the detailed logs.

## Isolation and removal

All helper code, friend access and call sites use WITH_EDITOR; the console command is
cheat-marked and nothing is armed by default. Stop clears diagnostic timers/records without
cancelling gameplay. New PIE worlds require rearming. Production assets are unchanged.

The existing policy that an already-resolved contact may finish applying damage if an impact
callback synchronously cancels it is unchanged. B tests callbacks arriving after cancellation;
it does not redefine that separate in-flight transaction policy.

To remove the hooks later, delete PokemonStep50Diagnostics.h/.cpp, their guarded calls/includes
in PokemonGameplayAbilities.cpp and PokemonCommandComponent.cpp, and the guarded friend in
PokemonGameplayAbilities.h. Keep the user's pre-existing BlueprintCallable cancellation edit.
Step 51 remains pending review of the runtime evidence.
