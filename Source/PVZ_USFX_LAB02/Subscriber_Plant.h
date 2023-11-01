// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Subscriber_Plant.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USubscriber_Plant : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API ISubscriber_Plant
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//The pure virtual functions of the Subscriber
	virtual void Update(class APublisher_Plant* Publisher) = 0;

};
