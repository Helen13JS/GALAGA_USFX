// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Galaga_USFXProjectile.h"
#include "DisparoMisil.generated.h"

UCLASS()
class GALAGA_USFX_API ADisparoMisil : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	//UStaticMeshComponent* ProyectilEnemyMesh;
	UStaticMeshComponent* Misilmalla;
	
public:	
	// Sets default values for this actor's properties
	ADisparoMisil(); 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	float velocidadLaser = 1500.0f;
	UPROPERTY(VisibleAnywhere, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovementComponent;
	//UPROPERTY(VisibleAnywhere, Category = "Mesh")
	//UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere, Category = "Damage")
	float Damage;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//void MoveLaser(float DeltaTime);
	/*void TipoLaser(int tipo);
	void PotenciaLaser();
	void Estiramientos();
	void Destruirse();*/

	void FireInDirection(FVector& ShootDirection);


};
