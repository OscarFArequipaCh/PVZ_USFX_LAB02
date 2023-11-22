// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategia_Embestida.h"
#include "Estrategia_EmbestirDanar.generated.h"
//class APlantEmbestida;
UCLASS()
class PVZ_USFX_LAB02_API AEstrategia_EmbestirDanar : public AActor, public IEstrategia_Embestida
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategia_EmbestirDanar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Execute the Maneuver of this Strategy
	virtual void HabilidadEmbestir(APlantEmbestida* _plantaEmbestida) override;
};
