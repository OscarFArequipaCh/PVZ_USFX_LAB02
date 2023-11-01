// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "Misiles.h"
#include "Zombie.h"
#include "Publisher_Plant.h"
#include "Speaker_Plant.h"

// Sets default values
APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//static ConstructorHelpers::FObjectFinderOptional<UMaterialInstance> BlueMaterial(TEXT("/Game/Puzzle/Meshes/BlueMaterial.BlueMaterial"));
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
	ProyectilesDisparados = 0;
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
				ProyectilesDisparados += 1;
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

void APlant::Destroyed()
{
	Super::Destroyed();
	//Log Error if its Clock Tower is NULL
	if (!Speaker_Plant) { UE_LOG(LogTemp, Error, TEXT("Destroyed():ClockTower is NULL, make sure it's initialized.")); return; }
			//Unsubscribe from the Clock Tower if it's destroyed
			Speaker_Plant->UnSubscribe(this);
}

void APlant::Update(APublisher_Plant * Publisher)
{
	//Execute the routine
	Morph();
}

void APlant::Morph()
{
	//Log Error if its Clock Tower is NULL
	if (!Speaker_Plant) { UE_LOG(LogTemp, Error, TEXT("Morph():ClockTower is NULL, make sure it's initialized.")); return; }
			//Get the current time of the Clock Tower
			FString Order = Speaker_Plant->GetOrder();
		if (!Order.Compare("Power"))
		{
			//Execute the Morning routine
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("It is %s, so FreakyAllen makes a bowl of cereal"),*Order));
				TiempoEntreDisparos = 0.5f;
		}
			/*else if (!Time.Compare("Midday"))
			{
				//Execute the Midday routine
				GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
					FString::Printf(TEXT("It is %s, so FreakyAllen's right eye starts to twitch"),
						*Time));
			}
			else if (!Time.Compare("Evening"))
			{
				//Execute the Evening routine
				GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
					FString::Printf(TEXT("It is %s, so FreakyAllen morphs into a blood sucking
						wogglesnort"), *Time));
			}*/
}

void APlant::SetSpeaker(ASpeaker_Plant* mySpeaker_Plant)
{
	//Log Error if the passed Clock Tower is NULL
	if (!mySpeaker_Plant) { UE_LOG(LogTemp, Error, TEXT("SetClockTower(): myClockTower is NULL, make sure it's initialized.")); return; }
		//Set the Clock Tower and Subscribe to that
		Speaker_Plant = mySpeaker_Plant;
		Speaker_Plant->Subscribe(this);
}
	