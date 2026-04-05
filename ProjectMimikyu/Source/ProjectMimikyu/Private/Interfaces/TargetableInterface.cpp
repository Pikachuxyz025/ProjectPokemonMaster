


#include "Interfaces/TargetableInterface.h"

bool ITargetableInterface::IsTargetable_Implementation() const
{
	return true;
}

bool ITargetableInterface::CanBeLockOnTargeted_Implementation(EAimContext AimContext) const
{
	return IsTargetable_Implementation();
}

bool ITargetableInterface::CanBeFreeAimTargeted_Implementation(EAimContext AimContext) const
{
	return IsTargetable_Implementation();
}

bool ITargetableInterface::IsFaintedForTargeting_Implementation() const
{
	return false;
}

bool ITargetableInterface::IsTargetObscured_Implementation() const
{
	return false;
}

bool ITargetableInterface::IsTargetHidden_Implementation() const
{
	return false;
}

FVector ITargetableInterface::GetTargetAimPoint_Implementation() const
{
	return FVector::ZeroVector;
}

FVector ITargetableInterface::GetLockOnFocusPoint_Implementation() const
{
	return GetTargetAimPoint_Implementation();
}

FName ITargetableInterface::GetTargetingSocketName_Implementation() const
{
	return NAME_None;
}

bool ITargetableInterface::IsHostileToActor_Implementation(const AActor* RequestingActor) const
{
	return true;
}

bool ITargetableInterface::IsCatchableTarget_Implementation() const
{
	return false;
}

bool ITargetableInterface::IsInteractableTarget_Implementation() const
{
	return false;
}

float ITargetableInterface::GetTargetPriorityScore_Implementation() const
{
	return 0.f;
}

FGameplayTagContainer ITargetableInterface::GetTargetingTags_Implementation() const
{
	return FGameplayTagContainer();
}
