// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
//#include "Engine/StaticMeshActor.h"
//#include "Galaga_USFXProjectile.h"
#include "Galaga_USFXProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABomba::ABomba()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Content/Meshes/Missile.Missile'"));
	Bombamalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Content/Meshes/Missile.Missile'"));
	Bombamalla->BodyInstance.SetCollisionProfileName("Projectile");
	RootComponent = Bombamalla;
	Bombamalla->SetStaticMesh(BallMesh.Object);
	Bombamalla->SetRelativeScale3D(FVector(2.5f, 2.5f, 2.5f));
	Bombamalla->SetupAttachment(RootComponent);

	//Bombamalla->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->UpdatedComponent = Bombamalla;
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->bShouldBounce = true;
	//ProjectileMovementComponent->Bounciness = 0.6f;  // Ajusta la cantidad de energía que se conserva después de un rebote
	Damage = 10;
	InitialLifeSpan = 3.0f;

}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABomba::TipoBomba(int tipo)
{
}

void ABomba::RadioExplosion()
{
}

void ABomba::Movimiento()
{
	//FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidadBomba * GetWorld()->GetDeltaSeconds();
	//SetActorLocation(NewLocation);
}

void ABomba::Destruirse()
{
}

void ABomba::FireInDirection(FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

