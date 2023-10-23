// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreatorZombies.h"
#include "CreatorZ_Terrestres.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ACreatorZ_Terrestres : public ACreatorZombies
{
	GENERATED_BODY()
	
public:
	//Concoct the selected potion
	virtual AZombie* ConcoctZombie(FString PotionSKU, FVector _Location) override;

};
