// Copyright Epic Games, Inc. All Rights Reserved.

#include "KeresAbhiGameMode.h"
#include "KeresAbhiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKeresAbhiGameMode::AKeresAbhiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
