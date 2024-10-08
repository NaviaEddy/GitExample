// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitExampleGameMode.h"
#include "GitExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitExampleGameMode::AGitExampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
