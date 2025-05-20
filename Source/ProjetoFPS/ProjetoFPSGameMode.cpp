// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetoFPSGameMode.h"
#include "ProjetoFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjetoFPSGameMode::AProjetoFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
