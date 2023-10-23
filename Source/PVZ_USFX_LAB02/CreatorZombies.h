// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.h"
#include "CreatorZombies.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ACreatorZombies : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreatorZombies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Create Potion and returns it. It's pure virtual, so it doesn't need an implementation in this class

	virtual AZombie* ConcoctZombie(FString PotionSKU, FVector _Location) PURE_VIRTUAL(ACreatorZombies::ConcoctZombie, return nullptr;);
	//Order, concoct and returns a Potion of a specific Category
	AZombie* OrderZombie(FString Category, FVector _Location);

};
