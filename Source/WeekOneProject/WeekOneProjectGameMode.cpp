// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "WeekOneProjectGameMode.h"
#include "WeekOneProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeekOneProjectGameMode::AWeekOneProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
