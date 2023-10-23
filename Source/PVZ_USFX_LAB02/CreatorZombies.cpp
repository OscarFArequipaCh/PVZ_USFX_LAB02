// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatorZombies.h"

// Sets default values
ACreatorZombies::ACreatorZombies()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACreatorZombies::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreatorZombies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AZombie* ACreatorZombies::OrderZombie(FString Category, FVector _Location)
{
	//Create the Potion and log its name
	AZombie* NewZombie = ConcoctZombie(Category, _Location);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Concocting %s"), *Potion->GetPotionName()));
	if (NewZombie)
	{
		NewZombie->SetSpawnAfter(FMath::RandRange(1, 10));
		NewZombie->SetActorHiddenInGame(false);
		NewZombie->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
		NewZombie->SetCanMove(false);
	}
	return NewZombie;
}