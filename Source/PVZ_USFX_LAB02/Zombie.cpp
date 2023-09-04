// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"

// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Zombie = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Zombie"));
	RootComponent = SM_Zombie;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	if (ZombieMeshAsset.Succeeded())
	{
		SM_Zombie->SetStaticMesh(ZombieMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Objetivo = FVector(0.0f, 200.0f, 100.0f);
	float MovementSpeed = 100.0f;

	FVector Direccion = (Objetivo - this->GetActorLocation()).GetSafeNormal();
	float Distancia = FVector::Dist(Objetivo, this->GetActorLocation());

	float DeltaMove = MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > Distancia)
	{
		this->SetActorLocation(Objetivo);
	}
	else
	{
		this->AddActorWorldOffset(Direccion * DeltaMove);
	}
}

