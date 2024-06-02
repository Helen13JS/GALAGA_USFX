// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeNivel1.generated.h"

UCLASS()
class GALAGA_USFX_API AFacadeNivel1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeNivel1();

	class ACapVelocityBuilder* CapVelocityBuilder;
	class ACapMunicionBuilder* CapMunicionBuilder;
	class ACapEnergiaBuilder* CapEnergiaBuilder;

	class ACapsuleDirector* CapsuleDirector;
	FTimerHandle Spawn;
	class ANaveEnemigaCazaAlfa* NaveCazaAlfa;

public:
	TArray<class ANaveEnemiga*> TANavesEnemigas;
	TArray<class ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<class ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<class ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<class ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;
	TArray<class ANaveEnemigaTransporte*> TANavesEnemigasTransporte;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CrearNivel();
	void NivelBasico ();
	void NivelIntermedio();
	void NivelAvanzado();
	void CrearCapsulas();

};
