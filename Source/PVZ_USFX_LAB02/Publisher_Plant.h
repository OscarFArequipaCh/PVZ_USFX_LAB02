// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Subscriber_Plant.h"
#include "Publisher_Plant.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APublisher_Plant : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublisher_Plant();

private:
	//The Subscribers of this Publisher
	UPROPERTY()
		TArray<AActor*> Subscribers = TArray<AActor*>();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Add the pased Subscriber to the list
	virtual void Subscribe(AActor* Subscriber);
	//Remove the passed Subscriber from the list
	virtual void UnSubscribe(AActor* SubscriberToRemove);
	//Notify all the Subscribers that something has changed
	virtual void NotifySubscribers();
};
