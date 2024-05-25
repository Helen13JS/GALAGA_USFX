// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Foton.generated.h"
UCLASS()
class GALAGA_USFX_API AFoton : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	//UStaticMeshComponent* ProyectilEnemyMesh;
	UStaticMeshComponent* Fotonmalla;
	UPROPERTY(VisibleAnywhere, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovementComponent;
	//UPROPERTY(VisibleAnywhere, Category = "Mesh")
	//UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere, Category = "Damage")
	float Damage;
	
public:	
	// Sets default values for this actor's properties
	AFoton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//class AFacadeTipoDisparo* DisparoFacade;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void TipoFoton(int tipo);
	void Rotar();
	void Destruirse();
	//void Moverfoton(float DeltaTime);
	float velocidadfoton = 1000.0f;
	void FireInDirection(FVector& ShootDirection);

};
