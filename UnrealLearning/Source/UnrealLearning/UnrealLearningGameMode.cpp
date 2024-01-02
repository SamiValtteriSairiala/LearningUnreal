// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealLearningGameMode.h"
#include "UnrealLearningHUD.h"
#include "UnrealLearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealLearningGameMode::AUnrealLearningGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealLearningHUD::StaticClass();
}
