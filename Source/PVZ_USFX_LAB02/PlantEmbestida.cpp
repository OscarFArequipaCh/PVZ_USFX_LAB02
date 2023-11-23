// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantEmbestida.h"
#include "Estrategia_EmbestirDanar.h"
#include "PVZ_USFX_LAB02GameModeBase.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
//#include "Plant.h"

APlantEmbestida::APlantEmbestida()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	SM_Planta->SetStaticMesh(PlantMesh.Object);
	SM_Planta->SetSimulatePhysics(false);						// Activar Fisicas
	//SM_Planta->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);				// Quitar Colision
	SetRootComponent(SM_Planta);
	
	
	ColisionPlanta = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	ColisionPlanta->SetupAttachment(GetRootComponent());
	ColisionPlanta->SetBoxExtent(FVector(25.0f, 50.0f, 50.0f));
	ColisionPlanta->SetCollisionProfileName("PlantEmbestida");
	ColisionPlanta->OnComponentBeginOverlap.AddDynamic(this, &APlantEmbestida::OnOverlapBeginFunction);
}

void APlantEmbestida::OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Only add impulse and destroy projectile if we hit a physics
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Enemy"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("% has been created"), this));
			//OtherActor->TakeDamage(Damage, FDamageEvent(), nullptr, this);
			//this->setEstrategiaEmbestida(EstrategiaDanar);
			//OtherComp->DestroyComponent();
			
			// Desactiva los Disparos del Actor
			if (bCanMove == false) {
				bCanMove = true;
				FireRate = 0.0f;
				bCanFire = false;
			}
			//OtherActor->Destroy();
			OtherActor->TakeDamage(100.0f, FDamageEvent(), nullptr, this);
		}
		else
		{
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

// Called every frame
void APlantEmbestida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bCanMove && !this->IsHidden())
	{
		Embestir();
	}
}

void APlantEmbestida::setEstrategiaEmbestida(AActor* _EstrategiaEmbestida)
{
	//Try to cast the passed Strategy and set it to the current one
	EstrategiaEmbestida = Cast<IEstrategia_Embestida>(_EstrategiaEmbestida);
	//Log Error if the cast failed
	if (!EstrategiaEmbestida)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("AlterManeuvers(): The Actor is not a BattleShipStrategy!Are you sure that the Actor implements that interface ? "));
	}
}

void APlantEmbestida::Embestir()
{
	//Execute the current Strategy Maneuver
	EstrategiaEmbestida->HabilidadEmbestir(this);
}
