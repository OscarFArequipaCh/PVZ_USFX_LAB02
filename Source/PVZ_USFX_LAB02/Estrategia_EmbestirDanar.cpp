// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_EmbestirDanar.h"
#include "PlantEmbestida.h"

// Sets default values
AEstrategia_EmbestirDanar::AEstrategia_EmbestirDanar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategia_EmbestirDanar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategia_EmbestirDanar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategia_EmbestirDanar::HabilidadEmbestir(APlantEmbestida* _plantaEmbestida)
{
	APlantEmbestida* PlantEmbestida;
	PlantEmbestida = _plantaEmbestida;

	FVector LocalizacionObjetivo = PlantEmbestida->GetActorLocation();
	
	if (LocalizacionObjetivo.Y >= 550.0f) PlantEmbestida->bCanMove = false;

	LocalizacionObjetivo.Y = 550.0f;

	FVector Direction = LocalizacionObjetivo - PlantEmbestida->GetActorLocation();
	float DistanceToTarget = FVector::Dist(LocalizacionObjetivo, PlantEmbestida->GetActorLocation());

	// Calcula el desplazamiento en este frame
	float DeltaMove = 0.4f * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanceToTarget)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		PlantEmbestida->SetActorLocation(LocalizacionObjetivo);

		// PlantEmbestida->Destroy();
	}
	else
	{
		// Mueve el objeto en la direcci?n calculada
		PlantEmbestida->AddActorWorldOffset(Direction * DeltaMove);
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
	}
}

