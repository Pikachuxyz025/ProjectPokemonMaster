


#include "DataAssets/PokemonRecoveryToleranceProfile.h"


FPokemonRecoveryToleranceProfileSnapshot UPokemonRecoveryToleranceProfile::MakeSnapshot() const
{
    FPokemonRecoveryToleranceProfileSnapshot Snapshot;

    Snapshot.ProfileId = FName(*GetPathName());
    Snapshot.bConfigured = bConfigured;

    Snapshot.BaseMaxDownwardSpeed = BaseMaxDownwardSpeed;
    Snapshot.BaseMaxPeakDrop = BaseMaxPeakDrop;

    Snapshot.SpeedResponse.AtZeroStamina = SpeedMultiplierAtZeroStamina;
    Snapshot.SpeedResponse.AtFullStamina = SpeedMultiplierAtFullStamina;

    Snapshot.DropResponse.AtZeroStamina = DropMultiplierAtZeroStamina;
    Snapshot.DropResponse.AtFullStamina = DropMultiplierAtFullStamina;

    return Snapshot;
}
