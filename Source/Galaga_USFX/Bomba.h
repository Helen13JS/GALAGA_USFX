// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Bomba.generated.h"
UCLASS()
class GALAGA_USFX_API ABomba : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	//UStaticMeshComponent* ProyectilEnemyMesh;
	UStaticMeshComponent* Bombamalla;
	UPROPERTY(VisibleAnywhere, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovementComponent;
	//UPROPERTY(VisibleAnywhere, Category = "Mesh")
	//UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere, Category = "Damage")
	float Damage;

	
public:	
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float velocidadBomba = 1000.0f;
public:
	void TipoBomba(int tipo);
	void RadioExplosion();
	void Movimiento();
	void Destruirse();
	void FireInDirection(FVector& ShootDirection);

};
