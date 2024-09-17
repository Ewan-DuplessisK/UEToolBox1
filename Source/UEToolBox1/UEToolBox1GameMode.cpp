// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEToolBox1GameMode.h"
#include "UEToolBox1Character.h"
#include "UObject/ConstructorHelpers.h"

AUEToolBox1GameMode::AUEToolBox1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
