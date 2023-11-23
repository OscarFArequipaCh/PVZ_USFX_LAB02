// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Plant.h"

// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	
	SM_Zombie = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	//SM_Zombie->SetStaticMesh(ZombieMesh.Object);
	SM_Zombie->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	SM_Zombie->SetSimulatePhysics(true);
	// SM_Zombie->OnComponentBeginOverlap.AddDynamic(this, &AZombie::OnOverlapBeginFunction);
	// SM_Zombie->OnComponentHit.AddDynamic(this, &AZombie::OnHit);
	SM_Zombie->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	RootComponent = SM_Zombie;

	Tags.Add(TEXT("Enemy"));
	Health = 100.0f;
	MovementSpeed = 0.2f;
	bCanMove = false;
	
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

void AZombie::OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

	if ((OverlappedComponent != nullptr) && (OtherActor != this))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));

		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Planta"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}
	}
	
}

void AZombie::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{

		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Planta"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			OtherActor->TakeDamage(DamageGenerates, FDamageEvent(), nullptr, this);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("morder")));
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
		}
		else
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Estamos aqui")));
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}

	}
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	FVector Objetivo = FVector(-800.0f, -600.0f, 160.0f);
	// MovementSpeed = 100.0f;

	//FVector Direccion = (Objetivo - this->GetActorLocation()).GetSafeNormal();
	FVector Direccion = Objetivo - FVector(-800.0f, 400.0f, 160.0f);
	//float Distancia = FVector::Dist(Objetivo, this->GetActorLocation());
	float Distancia = FVector::Dist(Objetivo, FVector(-800.0f, 400.0f, 160.0f));

	float DeltaMove = MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > Distancia)
	{
		this->SetActorLocation(Objetivo);
	}
	else
	{
		this->AddActorWorldOffset(Direccion * DeltaMove);
	}
	*/
	/*
	if (Health <= 0)
	{
		Destroy();
	}*/
	
	if (bCanMove && !this->IsHidden())
	{
		MoveToTarget(FVector(-800.0f, -600.0f, 160.0f));
	}
	
}


float AZombie::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Aquí puedes manejar el daño como desees, por ejemplo, actualizando la salud del actor.
	Health -= DamageAmount;

	if(Health <= 0) this->Destroy();
	// Devuelve la cantidad de daño que se aplicó realmente.
	return Health;
}

void AZombie::MoveToTarget(FVector TargetLocation)
{
	FVector Direction = TargetLocation - FVector(-800.0f, 400.0f, 160.0f);
	float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-800.0f, 400.0f, 160.0f));

	// Calcula el desplazamiento en este frame
	float DeltaMove = MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanceToTarget)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(TargetLocation);
	}
	else
	{
		// Mueve el objeto en la direcci?n calculada
		this->AddActorWorldOffset(Direction * DeltaMove);
	}

}


