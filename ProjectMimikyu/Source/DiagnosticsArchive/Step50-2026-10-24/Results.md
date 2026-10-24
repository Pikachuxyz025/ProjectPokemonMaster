# Step 50 regression archive — 2026-10-24

Cleanup baseline: `ac2dc3e499803e21c39b6ad9f3b3910d5a84d11e`.
`DiagnosticSession.log` preserves the full pre-cleanup session; `DiagnosticEvidence.txt`
contains the correlated diagnostic lines. Timestamps in those logs are UTC.
`DiagnosticProcedure.md` is historical documentation; its console helper has been removed.

## Recorded results

- A — Passed. Command `3289119A4E1205228F9C339DA0DA025E` was cancelled during
  Strike with a playing montage, resolved Interrupted once with Step50DiagnosticCancel,
  and released ownership/target. Subsequent command `35670B034A6CE4621EC3F9801B22C324`
  continued to a normal Connected terminal resolution.
- B — Passed for the tested lifetime and identity paths. Original-instance callback was
  SuppressedLifetime (ValidatorExecuted=0); this does not demonstrate validation on an
  expired object. The live next instance rejected the old GUID with ValidatorExecuted=1,
  Effects=0 and StateUnchanged=1. Its new command completed normally.
- C — Passed under the diagnostic's frame-tolerant timing checks. Synthetic Hit
  `8231289E4421B2781D5DDB82DB5C5EDC` queued HitContact while still in Strike;
  synthetic Miss `3FB558174C7C6C771E5E3EBACDD3E831` queued WhiffFollowThrough.
  Both entered their destination and completed once with Released=1 and Failed=0.
  Recorded elapsed times were 0.0809s and 0.0727s against nominal 0.0833s;
  these are frame-sampled observations, not proof of exact subframe timing.
  Synthetic Hit intentionally resolves the command Missed because no physical contact
  or damage is fabricated. C validates the authoritative presentation/lifecycle path,
  not end-to-end physical hit detection.

## Cleanup

Removed the console helper implementation/header, friend declaration and four call sites.
Restored unconditional Blueprint activation through Super::ActivateAbility.
Kept native montage startup, authoritative outcome handling, completion/recovery gates,
failure/cancellation retirement and existing Blueprint assets unchanged.
The command header's existing BlueprintCallable cancellation API is preserved.
`BlueprintHashesBefore.json` records both relevant assets before cleanup.

## Post-cleanup validation

Pending clean Editor build and normal-play smoke test. Build logs are archived here.
