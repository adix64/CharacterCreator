// Fill out your copyright notice in the Description page of Project Settings.

#include "FemaleGameMode.h"
#include "CharacterCreatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFemaleGameMode::AFemaleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter_Female"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
