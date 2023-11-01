// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publisher_Plant.h"
#include "Speaker_Plant.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ASpeaker_Plant : public APublisher_Plant
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpeaker_Plant();

private:
	//The current time of this Clock Tower
	FString Order;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	//Called when the time of this Clock Tower has changed
	void ReceiveOrder();
	//Set the time of this Clock Tower
	void SetOrderToPlant(FString order);
	//Return the time of this Clock Tower
	FORCEINLINE FString GetOrder() { return Order; };

};
