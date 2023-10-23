// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatorZ_Terrestres.h"
#include "ZombieCono.h"
#include "ZombieNormal.h"

AZombie* ACreatorZ_Terrestres::ConcoctZombie(FString PotionSKU, FVector _Location)
{
    //Select which potion to spawn depending on the passed string
    if (PotionSKU.Equals("Cono")) {
        FTransform SpawnLocation;
        SpawnLocation.SetLocation(_Location);
        return GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocation);
    }
    else if (PotionSKU.Equals("Normal")) {
        FTransform SpawnLocation;
        SpawnLocation.SetLocation(_Location);
        return GetWorld()->SpawnActor<AZombieNormal>(AZombieNormal::StaticClass(), SpawnLocation);
    }
    else return nullptr; //Return null if the string isn't valid
}