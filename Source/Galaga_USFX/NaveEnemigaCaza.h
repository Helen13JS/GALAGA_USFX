// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int cantidadBombas;
	int LimiteInferiorX;
	class AFacadeTipoDisparo* FacadeDisparo;
	float TiempoCambio;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	

protected:
	virtual void Mover(float DeltaTime) ;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();


public:

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	//void FuncionColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	int DireccionMovimientoHorizontal;

   
	FTimerHandle TimerHandleDisparo_ShotTimerExpired;
	float FireRate;
	int a;
	//int TiempoTranscurrido;
	bool bCanFire;

	


	void ShotTimerExpired();
	FORCEINLINE float GetFireRate() const { return FireRate; }
	FORCEINLINE void SetFireRate(float _FireRate) { FireRate = _FireRate; }

};
