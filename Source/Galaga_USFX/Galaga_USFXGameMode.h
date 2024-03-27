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

/*public:
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
	ANaveEnemigaNodrizaBeta* NaveEnemigaNodrizaBeta01;*/

	//ABonus* Bonus01;
	//APuntaje* Puntaje01;
public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	//TArray<ANaveEnemigaKamikaze*> TANavesEnemigasKamikaze;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	//TArray<ACapsulaEnergia50pts*> TACapsulasEnergia50pts;
	//TArray<ACapsulaEnergia100pts*> TACapsulasEnergia100pts;
	//TArray<ACapsulaEnergia200pts*> TACapsulasEnergia200pts;
private:
	int TiempoTranscurrido;

public:
	virtual void Tick(float DeltaTime) override;

public:
	// Inicialización del TMap
	TMap<int32, TArray<ANaveEnemigaCaza*>> ColumnaNavesEnemigasCaza;
	TMap<int32, TArray<ANaveEnemigaEspia*>> ColumnaNavesEnemigasEspia;
	//TMap<int32, TArray<ANaveEnemiga*>> ColumnaNavesEnemigasKamikaze;
	TMap<int32, TArray<ANaveEnemigaNodriza*>> ColumnaNavesEnemigasNodriza;
	TMap<int32, TArray<ANaveEnemigaReabastecimiento*>> ColumnaNavesEnemigasReabastecimiento;
	TMap<int32, TArray<ANaveEnemigaTransporte*>> ColumnaNavesEnemigasTransporte;
	//TMap<int32, TArray<ACapsulaEnergia50pts*>> ColumnaCapsulasEnergia50pts;
	//TMap<int32, TArray<ACapsulaEnergia100pts*>> ColumnaCapsulasEnergia100pts;
	//TMap<int32, TArray<ACapsulaEnergia200pts*>> ColumnaCapsulasEnergia200pts;



};


