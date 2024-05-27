// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoMisil.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"  // Añade esta línea

// Sets default values
ADisparoMisil::ADisparoMisil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Content/Meshes/Missile.Missile'"));
	Misilmalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Content/Meshes/Missile.Missile'"));
	Misilmalla->BodyInstance.SetCollisionProfileName("Projectile");
	RootComponent = Misilmalla;
	Misilmalla->SetStaticMesh(BallMesh.Object);
	Misilmalla->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	Misilmalla->SetupAttachment(RootComponent);

	//Misilmalla->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->UpdatedComponent = Misilmalla;
	ProjectileMovementComponent->InitialSpeed = 1000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	ProjectileMovementComponent->bShouldBounce = true;
	//ProjectileMovementComponent->Bounciness = 0.6f;  // Ajusta la cantidad de energía que se conserva después de un rebote
	Damage = 10;
	InitialLifeSpan = 3.0f;

}

// Called when the game starts or when spawned
void ADisparoMisil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisparoMisil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADisparoMisil::FireInDirection(FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

