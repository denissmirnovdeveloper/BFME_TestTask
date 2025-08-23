// Copyright Epic Games, Inc. All Rights Reserved.

#include "TESTGameMode.h"
#include "TESTPlayerController.h"
#include "TESTCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATESTGameMode::ATESTGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATESTPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}