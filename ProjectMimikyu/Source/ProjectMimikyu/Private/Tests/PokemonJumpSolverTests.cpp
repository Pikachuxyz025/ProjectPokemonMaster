#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Navigation/PokemonJumpSolver.h"
#include "Navigation/PokemonTraversalEvaluator.h"

#include <limits>

namespace PokemonJumpTests
{
	FPokemonTraversalRequirement Requirement(const FVector& Destination)
	{
		FPokemonTraversalRequirement Result;
		Result.ParentRequestId = FGuid::NewGuid();
		Result.Circumstance = EPokemonTraversalCircumstance::GapTraversal;
		Result.Evidence = EPokemonTraversalEvidence::SuppliedMeasurement;
		Result.DestinationFeetLocation = Destination;
		Result.bStartSupportKnown = true;
		Result.bDestinationSupportKnown = true;
		return Result;
	}

	FPokemonJumpCapabilitySnapshot Capability(float Horizontal = 600.f, float Vertical = 500.f)
	{
		FPokemonJumpCapabilitySnapshot Result;
		Result.bCanNaturallyJump = true;
		Result.EffectiveMovementSpeed = Horizontal;
		Result.BaseVerticalLaunchVelocity = Vertical;
		Result.GravityMagnitude = 980.f;
		Result.AvailableHorizontalSpeed = Horizontal;
		Result.AvailableVerticalSpeed = Vertical;
		return Result;
	}
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpSlowerSolutionTest,
	"ProjectMimikyu.Traversal.Jump.SlowerTrajectoryExists", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpSlowerSolutionTest::RunTest(const FString& Parameters)
{
	const auto Requirement = PokemonJumpTests::Requirement(FVector(100.0, 0.0, 100.0));
	const auto Capability = PokemonJumpTests::Capability(1000.f, 500.f);
	const auto Candidates = FPokemonJumpSolver::Solve(Requirement, Capability, EPokemonJumpTrajectoryPreference::Direct);
	TestTrue(TEXT("Solves when naive D/H would exceed vertical capability"), Candidates[0].IsValidForPlanning());
	TestTrue(TEXT("Slower than naive 0.1 second flight"), Candidates[0].FlightTime > 0.1f);
	for (const auto& Candidate : Candidates)
	{
		const double Time = Candidate.FlightTime;
		const FVector Endpoint = Candidate.StartFeetLocation + Candidate.FinalLaunchVelocity * Time
			- FVector::UpVector * (0.5 * Candidate.GravityMagnitude * Time * Time);
		TestTrue(TEXT("Each trajectory reaches locked destination"), Endpoint.Equals(Requirement.DestinationFeetLocation, 0.01));
		TestTrue(TEXT("Every trajectory respects horizontal budget"), Candidate.RequiredHorizontalLaunchSpeed <= Capability.AvailableHorizontalSpeed + 0.01f);
		TestTrue(TEXT("Every trajectory respects vertical budget"), Candidate.RequiredVerticalLaunchSpeed <= Capability.AvailableVerticalSpeed + 0.01f);
		TestTrue(TEXT("Every landing is descending/tangent"), Candidate.FinalLaunchVelocity.Z - Capability.GravityMagnitude * Time <= 0.01);
		TestFalse(TEXT("Physics alone does not authorize execution"), Candidate.IsExecutable());
	}
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpPreferenceTest,
	"ProjectMimikyu.Traversal.Jump.ExecutionModalityPreference", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpPreferenceTest::RunTest(const FString& Parameters)
{
	const auto Requirement = PokemonJumpTests::Requirement(FVector(200.0, 0.0, 0.0));
	const auto Capability = PokemonJumpTests::Capability();
	const auto Direct = FPokemonJumpSolver::Solve(Requirement, Capability, EPokemonJumpTrajectoryPreference::Direct);
	const auto Projectile = FPokemonJumpSolver::Solve(Requirement, Capability, EPokemonJumpTrajectoryPreference::Projectile);
	TestTrue(TEXT("Direct selects shorter flight"), Direct[0].FlightTime < Projectile[0].FlightTime);
	TestTrue(TEXT("Projectile selects higher launch"), Direct[0].RequiredVerticalLaunchSpeed < Projectile[0].RequiredVerticalLaunchSpeed);
	TestEqual(TEXT("Same feasible alternatives regardless of damage category"), Direct.Num(), Projectile.Num());
	TestEqual(TEXT("Preference preserves parent request"), Projectile[0].ParentRequestId, Requirement.ParentRequestId);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpCapabilityRejectionTest,
	"ProjectMimikyu.Traversal.Jump.PhysicalRejection", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpCapabilityRejectionTest::RunTest(const FString& Parameters)
{
	const auto Capability = PokemonJumpTests::Capability();
	const auto TooHigh = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector(100.0, 0.0, 200.0)), Capability, EPokemonJumpTrajectoryPreference::Direct);
	TestEqual(TEXT("Reject rise beyond Vz^2 / 2g"), TooHigh[0].FailureReason, FName(TEXT("VerticalCapabilityInsufficient")));
	const auto TooFar = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector(1000.0, 0.0, 0.0)), Capability, EPokemonJumpTrajectoryPreference::Direct);
	TestEqual(TEXT("Reject empty feasible time intersection"), TooFar[0].FailureReason, FName(TEXT("HorizontalCapabilityInsufficient")));
	const auto MissingBase = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector(100.0, 0.0, 0.0)), PokemonJumpTests::Capability(600.f, 0.f), EPokemonJumpTrajectoryPreference::Direct);
	TestEqual(TEXT("Zero authored species velocity disables launch"), MissingBase[0].FailureReason, FName(TEXT("NaturalJumpUnavailable")));
	auto InvalidCapability = Capability;
	InvalidCapability.GravityMagnitude = std::numeric_limits<float>::quiet_NaN();
	const auto Invalid = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector(100.0, 0.0, 0.0)), InvalidCapability, EPokemonJumpTrajectoryPreference::Direct);
	TestEqual(TEXT("Reject nonfinite gravity"), Invalid[0].FailureReason, FName(TEXT("InvalidPhysicalCapability")));
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpEvidenceTest,
	"ProjectMimikyu.Traversal.Jump.RequirementEvidence", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpEvidenceTest::RunTest(const FString& Parameters)
{
	auto Requirement = PokemonJumpTests::Requirement(FVector(100.0, 0.0, 0.0));
	const auto Capability = PokemonJumpTests::Capability();
	Requirement.Evidence = EPokemonTraversalEvidence::NavigationFailure;
	TestFalse(TEXT("Ground navigation failure alone cannot launch"), FPokemonJumpSolver::Solve(Requirement, Capability, EPokemonJumpTrajectoryPreference::Direct)[0].IsValidForPlanning());
	Requirement.Evidence = EPokemonTraversalEvidence::AuthoredJumpLink;
	TestTrue(TEXT("Authored opportunity still passes physical solver"), FPokemonJumpSolver::Solve(Requirement, Capability, EPokemonJumpTrajectoryPreference::Direct)[0].IsValidForPlanning());
	Requirement.bDestinationSupportKnown = false;
	TestFalse(TEXT("Authored link does not waive landing support"), FPokemonJumpSolver::Solve(Requirement, Capability, EPokemonJumpTrajectoryPreference::Direct)[0].IsValidForPlanning());
	Requirement.bDestinationSupportKnown = true;
	Requirement.Evidence = EPokemonTraversalEvidence::MeasuredDiscontinuity;
	TestTrue(TEXT("Measured dynamic gap works without a link"), FPokemonJumpSolver::Solve(Requirement, Capability, EPokemonJumpTrajectoryPreference::Direct)[0].IsValidForPlanning());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpTakeoffRevalidationTest,
	"ProjectMimikyu.Traversal.Jump.StablePlanTakeoffRevalidation", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpTakeoffRevalidationTest::RunTest(const FString& Parameters)
{
	auto Capability = PokemonJumpTests::Capability();
	auto Candidate = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector(300.0, 0.0, 0.0)), Capability, EPokemonJumpTrajectoryPreference::Direct)[0];
	FName Failure;
	TestTrue(TEXT("Retained geometry passes unchanged physical budget"), FPokemonJumpSolver::CanExecuteWithCapabilities(Candidate, Capability, Failure));
	Capability.AvailableHorizontalSpeed = Candidate.RequiredHorizontalLaunchSpeed * 0.5f;
	TestFalse(TEXT("Reduced effective Speed rejects launch"), FPokemonJumpSolver::CanExecuteWithCapabilities(Candidate, Capability, Failure));
	Capability = PokemonJumpTests::Capability();
	Capability.GravityMagnitude = 490.f;
	TestFalse(TEXT("Gravity changes invalidate old trajectory"), FPokemonJumpSolver::CanExecuteWithCapabilities(Candidate, Capability, Failure));
	TestEqual(TEXT("Gravity reason is explicit"), Failure, FName(TEXT("GravityChangedBeforeTakeoff")));
	Candidate.bCapsuleClearanceValidated = true;
	TestFalse(TEXT("Clearance alone does not prove landing"), Candidate.IsExecutable());
	Candidate.bLandingValidated = true;
	TestTrue(TEXT("All proofs authorize plan"), Candidate.IsExecutable());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpBoundaryTest,
	"ProjectMimikyu.Traversal.Jump.ApexAndDropBoundaries", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpBoundaryTest::RunTest(const FString& Parameters)
{
	const auto Capability = PokemonJumpTests::Capability();
	const double MaximumRise = 500.0 * 500.0 / (2.0 * 980.0);
	const auto Apex = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector(100.0, 0.0, MaximumRise)), Capability, EPokemonJumpTrajectoryPreference::Direct);
	TestTrue(TEXT("Exact maximum rise remains feasible"), Apex[0].IsValidForPlanning());
	TestEqual(TEXT("Singleton time interval deduplicated"), Apex.Num(), 1);
	const auto Drop = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector(20.0, 0.0, -100.0)), Capability, EPokemonJumpTrajectoryPreference::Direct);
	TestTrue(TEXT("Drop has an upward takeoff"), Drop[0].RequiredVerticalLaunchSpeed >= 0.99f);
	const auto NoDisplacement = FPokemonJumpSolver::Solve(PokemonJumpTests::Requirement(FVector::ZeroVector), Capability, EPokemonJumpTrajectoryPreference::Direct);
	TestFalse(TEXT("No displacement cannot consume jump"), NoDisplacement[0].IsValidForPlanning());
	auto VerticalRequirement = PokemonJumpTests::Requirement(FVector(0.0, 0.0, 50.0));
	VerticalRequirement.Circumstance = EPokemonTraversalCircumstance::VerticalAccess;
	const auto VerticalOnly = FPokemonJumpSolver::Solve(VerticalRequirement, PokemonJumpTests::Capability(0.f, 500.f), EPokemonJumpTrajectoryPreference::Direct);
	TestTrue(TEXT("Pure vertical jump does not require horizontal speed"), VerticalOnly[0].IsValidForPlanning());
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPokemonJumpLegacyIsolationTest,
	"ProjectMimikyu.Traversal.Jump.ProvisionalEnvelopeNeverExecutable", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPokemonJumpLegacyIsolationTest::RunTest(const FString& Parameters)
{
	FPokemonTraversalCapabilities Legacy;
	Legacy.bCanNaturallyJump = true;
	Legacy.ProvisionalJump.bEnabled = true;
	Legacy.ProvisionalJump.ProfileId = TEXT("AutomationLegacy");
	Legacy.ProvisionalJump.MaxHorizontalSpan = 1000.f;
	Legacy.ProvisionalJump.MaxRise = 1000.f;
	Legacy.ProvisionalJump.MaxDrop = 1000.f;
	const auto Candidate = FPokemonTraversalEvaluator::Evaluate(PokemonJumpTests::Requirement(FVector(100.0, 0.0, 0.0)), Legacy);
	TestTrue(TEXT("Legacy diagnostics retained"), Candidate.IsValidForPlanning());
	TestFalse(TEXT("Legacy envelopes can never authorize execution"), Candidate.IsExecutable());
	return true;
}

#endif
