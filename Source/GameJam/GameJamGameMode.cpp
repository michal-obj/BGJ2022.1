// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJamGameMode.h"
#include "GameJamPlayerController.h"
#include "GameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJamGameMode::AGameJamGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGameJamPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}