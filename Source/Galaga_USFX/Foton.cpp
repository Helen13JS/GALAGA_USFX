// Fill out your copyright notice in the Description page of Project Settings.


#include "Foton.h"
#include "Engine/StaticMeshActor.h"
#include "Galaga_USFXProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AFoton::AFoton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Content/Meshes/BulletEnemyLevel1.BulletEnemyLevel1'"));
	Fotonmalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Content/Meshes/BulletEnemyLevel1.BulletEnemyLevel1'"));
	Fotonmalla->BodyInstance.SetCollisionProfileName("Projectile");
	RootComponent = Fotonmalla;
	Fotonmalla->SetStaticMesh(BallMesh.Object);
	Fotonmalla->SetRelativeScale3D(FVector(2.5f, 2.5f, 2.5f));
	Fotonmalla->SetupAttachment(RootComponent);

	//Fotonmalla->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->UpdatedComponent = Fotonmalla;
	ProjectileMovementComponent->InitialSpeed = 1000.0f;
	ProjectileMovementComponent->MaxSpeed = 1000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->bShouldBounce = true;
	//ProjectileMovementComponent->Bounciness = 0.6f;  // Ajusta la cantidad de energía que se conserva después de un rebote
	Damage = 10;
	InitialLifeSpan = 2.0f;

}

// Called when the game starts or when spawned
void AFoton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Moverfoton(DeltaTime);

}

void AFoton::TipoFoton(int tipo)
{
}

void AFoton::Rotar()
{
}

void AFoton::Destruirse()
{
}

void AFoton::FireInDirection(FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;

}


//void AFoton::Moverfoton(float DeltaTime)
//{
//	FVector NewLocation = GetActorLocation() + FVector(-velocidadfoton, 0.0f, 0.0f) * DeltaTime;
//	SetActorLocation(NewLocation);
//}

