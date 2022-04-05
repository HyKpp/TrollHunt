// Copyright Epic Games, Inc. All Rights Reserved.

#include "TrollHuntGameMode.h"
#include "TrollHuntPlayerController.h"
#include "TrollHuntCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrollHuntGameMode::ATrollHuntGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATrollHuntPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}