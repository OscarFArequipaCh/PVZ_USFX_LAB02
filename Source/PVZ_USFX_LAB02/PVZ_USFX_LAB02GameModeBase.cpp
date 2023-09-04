// Copyright Epic Games, Inc. All Rights Reserved.
#include "Zombie.h"
#include "Plant.h"
#include "PVZ_USFX_LAB02GameModeBase.h"

APVZ_USFX_LAB02GameModeBase::APVZ_USFX_LAB02GameModeBase()
{
}

void APVZ_USFX_LAB02GameModeBase::BeginPlay()
{

	Super::BeginPlay();

	FVector SpawnLocationNL(400.0f, 200.0f, 100.0f);
	AZombie* ZombieNormal = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationNL, FRotator::ZeroRotator);

	FVector SpawnLocationPL(-400.0f, 200.0f, 100.0f);
	APlant* PlantaComun = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPL, FRotator::ZeroRotator);
}
