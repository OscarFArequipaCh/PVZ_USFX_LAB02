// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher_Plant.h"

// Sets default values
APublisher_Plant::APublisher_Plant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublisher_Plant::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublisher_Plant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublisher_Plant::Subscribe(AActor* Subscriber)
{
    //Add the passed Subscriber
    Subscribers.Add(Subscriber);
}
void APublisher_Plant::UnSubscribe(AActor* SubscriberToRemove)
{
    //Remove the passed Subscriber
    Subscribers.Remove(SubscriberToRemove);
}
void APublisher_Plant::NotifySubscribers()
{
    //Loop for each Subscriber
    for (AActor* Actor : Subscribers)
    {
        //Cast each of them to a concrete Subscriber
        ISubscriber_Plant* Sub = Cast<ISubscriber_Plant>(Actor);
        if (Sub)
        {
            //Notify each of them that something has changed, so they can execute their own routine
                Sub->Update(this);
        }
    }
}