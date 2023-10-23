// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieNormal.h"

AZombieNormal::AZombieNormal()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	SM_Zombie->SetStaticMesh(ZombieMesh.Object);
}
