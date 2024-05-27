// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Galaga_USFXProjectile.h"
#include "DisparoBasic.generated.h"

UCLASS()
class GALAGA_USFX_API ADisparoBasic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADisparoBasic();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Disparo")
		class UStaticMeshComponent* MeshDisparoBasic;
		float velocidadBasic = 2000.0f;
		UPROPERTY(VisibleAnywhere, Category = "Movement")
		UProjectileMovementComponent* ProjectileMovementComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Movimientoproyectil(float DeltaTime);
	float VelocidadDisparo ;
	void FireInDirection(FVector& ShootDirection);


};
