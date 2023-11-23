// Fill out your copyright notice in the Description page of Project Settings.

#include "Misiles.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"


// Sets default values
AMisiles::AMisiles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Static reference to the mesh to use for the projectile Blueprint'/Game/TwinStickBP/Blueprints/TwinStickProjectile.TwinStickProjectile'
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MisilMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile"));
	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	ProjectileMesh->SetStaticMesh(MisilMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Misiles");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AMisiles::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 250.0f;
	ProjectileMovement->MaxSpeed = 250.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	//MaxDistance = 1000.0f;
	InitialLifeSpan = 3.0f;
	//InitialLifeSpan = MaxDistance / ProjectileMovement->InitialSpeed;
	Damage = 1.0f;
	
}

void AMisiles::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		//OtherComp->AddImpulseAtLocation(GetVelocity() * 200.0f, GetActorLocation());
		if (OtherActor->ActorHasTag("Enemy"))
		{
			//OtherComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("% has been created"), this));
			OtherActor->TakeDamage(Damage, FDamageEvent(), nullptr, this);
			//OtherComp->DestroyComponent();
			//OtherActor->Destroy();
			this->Destroy();
		}
		else
		{
			// Realiza acciones normales para la colisión con otros actores
			//OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
			OtherComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		}

	}

	
}

// Called every frame
void AMisiles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

