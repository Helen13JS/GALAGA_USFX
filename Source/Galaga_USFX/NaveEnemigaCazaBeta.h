// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaBeta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaBeta : public ANaveEnemigaCaza
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = EscoprioMesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* CazaMesh;

private:
	int armasInteligentes;

public:
	FORCEINLINE int GetArmasInteligentes() const { return armasInteligentes; }
	FORCEINLINE void SetArmasInteligentes(int _armasInteligentes) { armasInteligentes = _armasInteligentes; }
protected:

	ANaveEnemigaCazaBeta();

	virtual void Mover(float DeltaTime) override;
	virtual void Disparar() override;
	virtual void Destruirse() override;
	virtual void Escapar() override;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	

public:
	class IStrategyInterface* Estrategia;

public:
	void CambiarMovimiento(IStrategyInterface* _Estrategia);
	//void ActivarEstrategias();
	//void Disparar();

private:
	FTimerHandle TimpodeDisparo;
	//class AGalaga_USFXPawn* Pawn;
	float firerate;
};
