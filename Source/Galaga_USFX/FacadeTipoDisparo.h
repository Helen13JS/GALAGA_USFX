// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeTipoDisparo.generated.h"

UCLASS()
class GALAGA_USFX_API AFacadeTipoDisparo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeTipoDisparo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	TArray<AActor*> municion;
	class ABomba* bomba;
	class ALaser* laser;
	class AFoton* foton;
	class AFacadeRecargar* recargar;

public:
	void AsignarDisparo(FString TipoDisparo);
	//void Laser();
	 void Launch(FString TipoDisparo,FVector SpawnLocation,FVector SpawnDirection);
	// void Recargar();
	 void DisparoLaser();
	 void DisparoFoton();
	 void DisparoBomba();

};
