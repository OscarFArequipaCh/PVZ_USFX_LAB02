// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.generated.h"

UCLASS(abstract)
class PVZ_USFX_LAB02_API AZombie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombie();

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* SM_Zombie;

	UFUNCTION()
		void OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float DamageGenerates = 20.0f;
	float Health = 10.0f;
	float SpawnAfter = 0.0f;
	float MovementSpeed = 0.01f;
	bool bCanMove = false;
	
	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	void MoveToTarget(FVector TargetLocation);
	
	FORCEINLINE void SetSpawnAfter(float _SpawnAfter) { SpawnAfter = _SpawnAfter; }
	FORCEINLINE float GetSpawnAfter() { return SpawnAfter; }
	FORCEINLINE void SetCanMove(bool _bCanMove) { bCanMove = _bCanMove; }	
	
};
