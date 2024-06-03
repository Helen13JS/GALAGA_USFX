// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Galaga_USFXProjectile.h"
//#include "proyectilEnemigo.h"
#include "Laser.generated.h"
UCLASS()
class GALAGA_USFX_API ALaser : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	//UStaticMeshComponent* ProyectilEnemyMesh;
	UStaticMeshComponent* lasermalla;
	
public:	
	// Sets default values for this actor's properties
	ALaser();

	public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float velocidadLaser = 2000.0f;
	UPROPERTY(VisibleAnywhere,Category = "Movement")
	UProjectileMovementComponent* ProjectileMovementComponent;
	//UPROPERTY(VisibleAnywhere, Category = "Mesh")
	//UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere, Category = "Damage")
	float Damage;

	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp,
		AActor* Other, class UPrimitiveComponent* OtherComp,
		bool bSelfMoved, FVector HitLocation, FVector
		HitNormal, FVector NormalImpulse, const FHitResult&
		Hit) override;
	int vida;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void MoveLaser(float DeltaTime);
	void TipoLaser(int tipo);
	void PotenciaLaser();
	void Estiramientos();
	void Destruirse();

	void FireInDirection(FVector& ShootDirection);
};
