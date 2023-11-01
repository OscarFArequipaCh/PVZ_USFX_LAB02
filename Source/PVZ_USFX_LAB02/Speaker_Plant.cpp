// Fill out your copyright notice in the Description page of Project Settings.


#include "Speaker_Plant.h"

// Sets default values
ASpeaker_Plant::ASpeaker_Plant()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
        PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void ASpeaker_Plant::BeginPlay()
{
    Super::BeginPlay();
}
// Called every frame
void ASpeaker_Plant::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
void ASpeaker_Plant::ReceiveOrder()
{
    //When the time has changed, this Clock Tower (that is a Publisher) notifies to all the subscribers that the time has changed
        NotifySubscribers();
}
void ASpeaker_Plant::SetOrderToPlant(FString order)
{
    //Set the time using the passed parameter and warn that it's changed
    Order = order;
    ReceiveOrder();
}