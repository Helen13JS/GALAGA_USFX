// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoBasic.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ADisparoBasic::ADisparoBasic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickProjectile_2.TwinStickProjectile_2'"));
	 MeshDisparoBasic = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickProjectile_2.TwinStickProjectile_2'"));
	 MeshDisparoBasic->BodyInstance.SetCollisionProfileName("Projectile");
	RootComponent =  MeshDisparoBasic;
	 MeshDisparoBasic->SetStaticMesh(BallMesh.Object);
	 MeshDisparoBasic->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	 MeshDisparoBasic->SetupAttachment(RootComponent);

	// MeshDisparoBasic->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->UpdatedComponent =  MeshDisparoBasic;
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	ProjectileMovementComponent->bShouldBounce = true;
	//ProjectileMovementComponent->Bounciness = 0.6f;  // Ajusta la cantidad de energía que se conserva después de un rebote
	//Damage = 10;
	InitialLifeSpan = 3.0f;


}

// Called when the game starts or when spawned
void ADisparoBasic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisparoBasic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Movimientoproyectil(DeltaTime);

}

void ADisparoBasic::Movimientoproyectil(float DeltaTime)
{
	/*FVector NewLocation = GetActorLocation() + FVector(VelocidadDisparo, 0.0f, 0.0f) * DeltaTime;
	SetActorLocation(NewLocation);*/
}

void ADisparoBasic::FireInDirection(FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

