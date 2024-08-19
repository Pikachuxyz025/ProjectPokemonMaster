// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameModes/ProjectMimikyuGameMode.h"
#include "Characters/ProjectMimikyuCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectMimikyuGameMode::AProjectMimikyuGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
