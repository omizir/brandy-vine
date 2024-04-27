// Copyright Epic Games, Inc. All Rights Reserved.

#include "brandy_vineGameMode.h"
#include "brandy_vineCharacter.h"
#include "UObject/ConstructorHelpers.h"

Abrandy_vineGameMode::Abrandy_vineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
