// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "Estrategia_Embestida.h"
#include "PlantEmbestida.generated.h"
/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlantEmbestida : public APlant
{
	GENERATED_BODY()

public:

	APlantEmbestida();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* ColisionPlanta;

	//void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		void OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:

	IEstrategia_Embestida* EstrategiaEmbestida;
	bool bCanMove = false;
	uint32 bCanFire : 1;

	virtual void Tick(float DeltaTime) override;
	// Change the Maneuver and set "BattleStrategy" variable
	void setEstrategiaEmbestida(AActor* _EstrategiaEmbestida);
	// Engage with the current Battle Strategy
	void Embestir();

};
