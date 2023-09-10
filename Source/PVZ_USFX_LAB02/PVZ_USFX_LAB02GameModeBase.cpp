// Copyright Epic Games, Inc. All Rights Reserved.
#include "Zombie.h"
#include "Plant.h"
#include "PVZ_USFX_LAB02GameModeBase.h"

APVZ_USFX_LAB02GameModeBase::APVZ_USFX_LAB02GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	//DefaultPawnClass = APVZ_USFX_LAB02Pawn::StaticClass();

	TiempoTranscurrido = 0.0f;
}

void APVZ_USFX_LAB02GameModeBase::BeginPlay()
{

	Super::BeginPlay();
	/*
	FVector SpawnLocationNL(400.0f, 200.0f, 100.0f);
	AZombie* ZombieNormal = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationNL, FRotator::ZeroRotator);

	FVector SpawnLocationPL(-400.0f, 200.0f, 100.0f);
	APlant* PlantaComun = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPL, FRotator::ZeroRotator);
	*/
	FVector SpawnLocationZombie = FVector(-450.0f, 400.0f, 20.0f);

	// Crear objetos y agregarlos al vector
	// Se crean los Zombies dinamicamente
	for (int i = 0; i < 5; i++) {
		SpawnLocationZombie.X += 100;
		AZombie* NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		NuevoZombie->MovementSpeed = 0.02f;
		vectorZombies.Add(NuevoZombie);
	}

	//Se crean las plantas dinamicamente
	FVector SpawnLocationPlant = FVector(-450.0f, -550.0f, 20.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;


	for (int i = 0; i < 5; i++) {
		SpawnLocationPlantTemp.X += 100;
		for (int j = 0; j < 2; j++) {
			SpawnLocationPlantTemp.Y += 100;
			APlant* NuevoPlant = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);
			vectorPlants.Add(NuevoPlant);
			int claveMatriz = i+(j*10);
			mapPlantas.Add(claveMatriz, NuevoPlant);
			//	SpawnLocationPlant = SpawnLocationPlantTemp;
		}
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	}
	// mapPlantas[0]->Destroy();
}

void APVZ_USFX_LAB02GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	if (TiempoTranscurrido > 2.0f) {
		// Iterar sobre el vector de objetos
		for (int i = 0; i < vectorZombies.Num(); i++) {
			vectorZombies[i]->MovementSpeed = FMath::FRand() * 0.1f;
			//vectorZombies[i]->MovementSpeed += i * 1.0f;
		}
		TiempoTranscurrido = 0.0f;
	}
}
