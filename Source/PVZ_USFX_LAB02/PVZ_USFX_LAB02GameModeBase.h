// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameModeBase.generated.h"
class AZombieCono; class AZombie; class APlant;
/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APVZ_USFX_LAB02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	APVZ_USFX_LAB02GameModeBase();

	TArray<AZombie*> vectorZombies;
	TArray<APlant*> vectorPlants;

	TMap<int32, APlant*> mapPlantas;

	int32 NumberZombiesSpawned = 0;
protected:

	virtual void BeginPlay() override;

	class AZombieCono* SpawnZombieCono(FVector _spawnPosition);

	class APlant* SpawnPlant(FVector _spawnPosition);
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float TiempoTranscurrido;

	float TiempoTranscurridoC = 0.0f;
	int32 ContadorProyectiles = 0;
	void MostrarContador();
};
