// Fill out your copyright notice in the Description page of Project Settings.


#include "MFPGameMode.h"

AMfpGameMode::AMfpGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnClassRef(TEXT("/Script/Engine.Blueprint'/Game/LearningKit_Games/Blueprints/PlayerCharacter/BP_LearningKit_PlayerCharacter.BP_LearningKit_PlayerCharacter'"));
	if (DefaultPawnClassRef.Class)
	{
		DefaultPawnClass = DefaultPawnClassRef.Class;
	}
}
