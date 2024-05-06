// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include"CapMunicionBuilder.h"
#include "CapsuleDirector.h"
#include "AuxCapsulas.h"
#include "CapsulasInterface.h"
#include "Galaga_USFXGameMode.generated.h"


class ANaveEnemiga;
class ANaveEnemigaNodriza;
class ANaveEnemigaNodrizaAlfa;
class ANaveEnemigaNodrizaBeta;

class ANaveEnemigaTransporte;
class ANaveEnemigaTransporteAlfa;
class ANaveEnemigaTransporteBeta;

class ANaveEnemigaCaza;
class ANaveEnemigaCazaAlfa;
class ANaveEnemigaCazaBeta;

class ANaveEnemigaEspia;
class ANaveEnemigaEspiaAlfa;
class ANaveEnemigaEspiaBeta;

class ANaveEnemigaReabastecimiento;
class ANaveEnemigaReabastecimientoAlfa;
class ANaveEnemigaReabastecimientoBeta;

//class ABonus;
//class APuntaje;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	
protected:
	int TiempoTranscurrido;

	//float TimeSinceLastSpawn= 0.0f;
	float SpawnInterval=2.0f;
	// Declarar el Handle del Timer
	FTimerHandle SpawnTimerHandle;

public:
	virtual void Tick(float DeltaTime) override;

	void SpawnInventario();

public:
	// Inicialización del TMap
	TMap<int32, TArray<ANaveEnemigaCaza*>> ColumnaNavesEnemigasCaza;
	TMap<int32, TArray<ANaveEnemigaEspia*>> ColumnaNavesEnemigasEspia;
	TMap<int32, TArray<ANaveEnemigaNodriza*>> ColumnaNavesEnemigasNodriza;
	TMap<int32, TArray<ANaveEnemigaReabastecimiento*>> ColumnaNavesEnemigasReabastecimiento;
	TMap<int32, TArray<ANaveEnemigaTransporte*>> ColumnaNavesEnemigasTransporte;

private :

	ACapsuleDirector* CapsuleDirector;

};


