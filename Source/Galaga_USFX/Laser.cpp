// Fill out your copyright notice in the Description page of Project Settings.


#include "Laser.h"
#include "GameFramework/ProjectileMovementComponent.h"  // Añade esta línea

// Sets default values
ALaser::ALaser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("StaticMesh'/Game/Content/Meshes/BulletLevel2.BulletLevel2'"));
	lasermalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh'/Game/Content/Meshes/BulletLevel2.BulletLevel2'"));
	lasermalla->BodyInstance.SetCollisionProfileName("Projectile");
	RootComponent = lasermalla;
	lasermalla->SetStaticMesh(BallMesh.Object);
	lasermalla->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	lasermalla->SetupAttachment(RootComponent);

	//lasermalla->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->UpdatedComponent=lasermalla;
	ProjectileMovementComponent->InitialSpeed = 2000.0f;
	ProjectileMovementComponent->MaxSpeed = 2000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;
	ProjectileMovementComponent->ProjectileGravityScale=0.0f;
	ProjectileMovementComponent->bShouldBounce = true;
	//ProjectileMovementComponent->Bounciness = 0.6f;  // Ajusta la cantidad de energía que se conserva después de un rebote
	Damage = 10;
	InitialLifeSpan = 3.0f;
}






// Called when the game starts or when spawned
void ALaser::BeginPlay()
{
	Super::BeginPlay();

	//GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Laser creado"));
	
}

// Called every frame
void ALaser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void ALaser::MoveLaser(float DeltaTime)
{
	/*FVector NewLocation = GetActorLocation() + FVector(-velocidadLaser, 0.0f, 0.0f) * DeltaTime;
	SetActorLocation(NewLocation);*/
	/*FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * velocidadLaser * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);*/
}

void ALaser::TipoLaser(int tipo)
{
}

void ALaser::PotenciaLaser()
{
}

void ALaser::Estiramientos()
{
}

void ALaser::Destruirse()
{
	//Destroy();
}

void ALaser::FireInDirection(FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

