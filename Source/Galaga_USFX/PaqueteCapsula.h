// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsulasEnergia.h"
#include "CapsulasEnergiaNegativa.h"
#include "CapsulasArmas.h"
#include "CapsulasMunicionRapida.h"
#include "CapsulasVelocidad.h"
#include "CapsulasVelocidadExtrema.h"
#include "PaqueteCapsula.generated.h"
UCLASS()
class GALAGA_USFX_API APaqueteCapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaqueteCapsula();

	class ACapsulasEnergia* CapsulaEnergia;
	class ACapsulasEnergiaNegativa* CapsulaEnergiaNegativa;
	class ACapsulasArmas* CapsulaArma;
	class ACapsulasMunicionRapida* CapsulaMunicionRapida;
	class ACapsulasVelocidad* CapsulaVelocidad;
	class ACapsulasVelocidadExtrema* CapsulaVelocidadExtrema;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void SetPaqueteEnergia(FString tipoE);
	void SetPaqueteMunicion( FString tipoM);
	void SetPaqueteVelocidad(FString tipoV);

	TMap <FVector, ACapsulasArmas*> TMCapsulasMunicion;
	TMap<FVector, ACapsulasMunicionRapida*> TMCapsulasMunicionRapida;
	TMap<FVector, ACapsulasVelocidad*> TMCapsulasVelocidad;
	TMap<FVector, ACapsulasVelocidadExtrema*> TMCapsulasVelocidadExtrema;
	TMap<FVector, ACapsulasEnergia*> TMCapsulasEnergia;
	TMap<FVector, ACapsulasEnergiaNegativa*> TMCapsulasEnergiaNegativa;




};
