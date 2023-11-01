// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Subscriber_Plant.h"
#include "Morph.h"
#include "Plant.generated.h"
class ASpeaker_Plant;
UCLASS()
class PVZ_USFX_LAB02_API APlant : public AActor, public ISubscriber_Plant, public IMorph
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlant();

private:
	//The Clock Tower of this Subscriber
	UPROPERTY()
		ASpeaker_Plant* Speaker_Plant;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Planta;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FireShot(FVector FireDirection);
	//void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;

	void ShotTimerExpired();

	float TiempoTranscurrido;
	float TiempoEntreDisparos;
	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	float Health = 10.0f;

private:
	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

public:

	int32 ProyectilesDisparados;
	FORCEINLINE int32 GetProyectilesDisparados() { return ProyectilesDisparados; }

	//Called when this Subscriber is destroyed, it will unsubscribe this from the Clock Tower
	virtual void Destroyed() override;
public:
	//Called when the Plublisher changed its state, it will execute this Subscriber routine
	virtual void Update(class APublisher_Plant* Publisher) override;
	//Execute this Subscriber routine
	virtual void Morph();
	//Set the Clock Tower of this Subscriber
	void SetSpeaker(ASpeaker_Plant* mySpeaker_Plant);


};
