// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "Misiles.h"
#include "Zombie.h"

// Sets default values
APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	SM_Planta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Planta"));
	SM_Planta->SetStaticMesh(PlantMesh.Object);
	SM_Planta->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	SM_Planta->SetSimulatePhysics(false);
	SM_Planta->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = SM_Planta;

	/*
	if (ZombieMeshAsset.Succeeded())
	{
		SM_Planta->SetStaticMesh(ZombieMeshAsset.Object);
	}*/

	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 90.f);
	FireRate = 0.2f;
	TiempoTranscurrido = 0.0f;
	TiempoEntreDisparos = 1.0f;
	Health = 10.0f;
	Tags.Add(TEXT("Planta"));
}
/*
void APlant::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	// Verifica si el otro actor es un zombie
	AZombie* ActualZombie = Cast<AZombie>(OtherActor);

	if (ActualZombie)
	{
		TakeDamage(ActualZombie->DamageGenerates, FDamageEvent(), nullptr, this);

		// Reduce la energía de la planta cuando un zombie está cerca
		// Puedes implementar tu propia lógica para reducir la energía aquí
		// Por ejemplo, disminuir una variable que represente la energía de la planta
		// También puedes programar el tiempo entre las reducciones de energía
	}
}*/

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Health <= 0)
	{
		this->Destroy();
	}

	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= TiempoEntreDisparos) {

		FireShot(FVector(0.0f, 1.0f, 0.0f));
		
		TiempoTranscurrido = 0.0f;
	}

}

void APlant::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AMisiles>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlant::ShotTimerExpired, FireRate);

			//// try and play the sound if specified
			//if (FireSound != nullptr)
			//{
			//	UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			//}

			//bCanFire = false;
		}
	}
}

void APlant::ShotTimerExpired()
{
	bCanFire = true;
}

float APlant::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Aquí puedes manejar el daño como desees, por ejemplo, actualizando la salud del actor.
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));

	Health -= DamageAmount;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));

	// Devuelve la cantidad de daño que se aplicó realmente.
	return Health;
}

