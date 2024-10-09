// Copyright Epic Games, Inc. All Rights Reserved.

#include "AWorldWithoutGameMode.h"
#include "AWorldWithoutCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAWorldWithoutGameMode::AAWorldWithoutGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
