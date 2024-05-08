// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsulasInterface.h"
#include "CapsulasArmas.h"
#include "CapsulasMunicionRapida.h"
#include "CapsulasEnergia.h"
#include "CapsulasVelocidadExtrema.h"
#include "CapsulasEnergiaNegativa.h"
#include "CapEnergiaBuilder.generated.h"

UCLASS()
class GALAGA_USFX_API ACapEnergiaBuilder : public AActor,public ICapsulasInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapEnergiaBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle TimerHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	class APaqueteCapsula* Capsula;

public:
	void AgregarEnergia(FString _tipoE) override;
	void AgregarMunicion(FString _tipoM) override;
	void AgregarVelocidad(FString _tipoV) override;
	class APaqueteCapsula* GetPaqueteCapsula() override;


};