// Fill out your copyright notice in the Description page of Project Settings.


#include "Sol.h"
#include "RandomMovementComponent.h"
// Sets default values
ASol::ASol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Sol = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Sol"));
	RootComponent = SM_Sol;
	
	RandomMovement = CreateDefaultSubobject<URandomMovementComponent>(TEXT("RandomMovement"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (ZombieMeshAsset.Succeeded())
	{
		SM_Sol->SetStaticMesh(ZombieMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void ASol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

