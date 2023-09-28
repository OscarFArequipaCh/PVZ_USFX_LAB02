// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB02GameModeBase.h"
#include "Zombie.h"
#include "Plant.h"
#include "MauseController.h"
#include "Mause.h"

APVZ_USFX_LAB02GameModeBase::APVZ_USFX_LAB02GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our character class
	DefaultPawnClass = AMause::StaticClass();
	PlayerControllerClass = AMauseController::StaticClass();

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
	
	FVector SpawnLocationZombie = FVector(-450.0f, 400.0f, 20.0f);

	// Crear objetos y agregarlos al vector
	// Se crean los Zombies dinamicamente
	for (int i = 0; i < 5; i++) {
		SpawnLocationZombie.X += 100;
		AZombie* NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		NuevoZombie->MovementSpeed = 0.02f;
		vectorZombies.Add(NuevoZombie);
	}*/

	//Se crean las plantas dinamicamente
	FVector SpawnLocationPlant = FVector(-450.0f, -550.0f, 20.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	int claveMatriz = 0;
	for (int i = 0; i < 5; i++) {
		SpawnLocationPlantTemp.X += 100;
		for (int j = 0; j < 2; j++) {
			SpawnLocationPlantTemp.Y += 100;
			APlant* NuevoPlant = GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocationPlantTemp, FRotator::ZeroRotator);
			vectorPlants.Add(NuevoPlant);
			//int claveMatriz = i+(j*10);
			claveMatriz = claveMatriz + 1;
			mapPlantas.Add(claveMatriz, NuevoPlant);
			//	SpawnLocationPlant = SpawnLocationPlantTemp;
		}
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;
	}
	// mapPlantas[0]->Destroy();

	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(-350.0f, 350.0f, 20.0f));
	float initialPositionX = -350.0f;
	float initialPositionY = 350.0f;

	for (int32 i = 0; i < 5; ++i)
	{
		AZombie* NewZombie = SpawnZombie(FVector(initialPositionX + i * 100.0f, initialPositionY, 20.0f));

		if (NewZombie)
		{
			NewZombie->SetSpawnAfter(FMath::RandRange(1, 10));
			NewZombie->SetActorHiddenInGame(false);
			NewZombie->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
			NewZombie->SetCanMove(false);
			vectorZombies.Add(NewZombie);
		}
	}
}

void APVZ_USFX_LAB02GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;
	TiempoTranscurridoC += DeltaTime;

	if (TiempoTranscurrido > 2.0f) {
		// Iterar sobre el vector de objetos
		for (int i = 0; i < vectorZombies.Num(); i++) {
			vectorZombies[i]->MovementSpeed = FMath::FRand() * 0.1f;
			//vectorZombies[i]->MovementSpeed += i * 1.0f;
		}
		for (int i = 1; i < mapPlantas.Num(); i++) {
			mapPlantas[i]->Health = FMath::FRand() * 0.1f;
			if (mapPlantas[i]->Health == 0.0f) mapPlantas[i]->Destroy();
		}
		TiempoTranscurrido = 0.0f;
	}
	for (AZombie* ActualZombie : vectorZombies)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("SpawnAfter: %f"), ActualZombie->GetSpawnAfter()));
		
		if (ActualZombie && ActualZombie->SpawnAfter <= 0)
		{
			ActualZombie->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));      // Establece la escala de spawn deseada
			ActualZombie->SetActorHiddenInGame(false);      // Haz que el actor sea visible
			ActualZombie->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
			ActualZombie->SetCanMove(true);     // Habilita las colisiones si es necesario
			NumberZombiesSpawned += 1;

			//vectorZombies.Remove(ActualZombie);

			/*
			for (TPair<FString, uint32> ElementoActual : MapPotenciadores)
			{
				FString Llave = ElementoActual.Key;
				int32 Valor = ElementoActual.Value;
				//UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);

				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Elemento: %s, Cantidad: %d"), *ElementoActual.Key, ElementoActual.Value));
			}*/

		}
		else
		{
			ActualZombie->SpawnAfter -= DeltaTime;
		}
	}

	if (TiempoTranscurridoC >= 5.0f) {
		MostrarContador();
		TiempoTranscurridoC = 0.0f;
	}
}

void APVZ_USFX_LAB02GameModeBase::MostrarContador() {
	int32 aux = 0;
	aux = ContadorProyectiles;
	for (APlant* ActualPlanta : vectorPlants) {
		ContadorProyectiles += ActualPlanta->GetProyectilesDisparados();
	}
	ContadorProyectiles -= aux;
	UE_LOG(LogTemp, Warning, TEXT("Proyectiles Lanzados: %d"), ContadorProyectiles);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Proyectiles Lanzados: %d"), ContadorProyectiles));
}

AZombie* APVZ_USFX_LAB02GameModeBase::SpawnZombie(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation);
}

APlant* APVZ_USFX_LAB02GameModeBase::SpawnPlant(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocation);
}