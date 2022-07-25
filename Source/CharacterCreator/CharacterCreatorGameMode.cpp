// Copyright Epic Games, Inc. All Rights Reserved.

#include "CharacterCreatorGameMode.h"
#include "CharacterCreatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharacterCreatorGameMode::ACharacterCreatorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
