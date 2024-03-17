// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
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
	ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaTransporteAlfa* NaveEnemigaTransporteAlfa01;
	ANaveEnemigaTransporteBeta* NaveEnemigaTransporteBeta01;

	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaCazaAlfa* NaveEnemigaCazaAlfa01;
	ANaveEnemigaCazaBeta* NaveEnemigaCazaBeta01;

	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaEspiaAlfa* NaveEnemigaEspiaAlfa01;
	ANaveEnemigaEspiaBeta* NaveEnemigaEspiaBeta01;

	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento01;
	ANaveEnemigaReabastecimientoAlfa* NaveEnemigaReabastecimientoAlfa01;
	ANaveEnemigaReabastecimientoBeta* NaveEnemigaReabastecimientoBeta01;

	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
	ANaveEnemigaNodrizaAlfa* NaveEnemigaNodrizaAlfa01;
	ANaveEnemigaNodrizaBeta* NaveEnemigaNodrizaBeta01;

	//ABonus* Bonus01;
	//APuntaje* Puntaje01;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
private:
	int TiempoTranscurrido;

public:
	virtual void Tick(float DeltaTime) override;


};


