// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"
//class UstaticMeshComponent;

UCLASS(abstract)
class GALAGA_USFX_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"));
	UStaticMeshComponent* mallaNaveEnemiga; //malla nave enemigo

protected:
	float resistencia; //Numero de disparos que puede recibir antes de ser destruido
	float velocidad;
	float danoProducido; //potencia de cada proyectil que dispsra la nave
	FString nombre;
	float tiempoDisparo; //Tiempo que debe transcurrir entre cada disparo
	FVector posicion; 
	int trayectoria; //representa a una funcion que la nave debe asumir para moverse
	int capacidadPasajeros; //numero de naves que puede transportar
	int capacidadMunicion; //numero de disparos que puede realizar antes de recargar
	int tipoNave; //
	float experencia;
	float energia;

	float peso;
	float volumen;
	float limiteY;
	float limiteX;
	float FireRate;
public:
	

	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE int Gettrayectoria() const { return trayectoria; }
	FORCEINLINE int GetcapacidadPasajeros() const { return capacidadPasajeros; }
	FORCEINLINE int GetcapacidadMunicion() const { return capacidadMunicion; }
	FORCEINLINE int GettipoNave() const { return tipoNave; }
	FORCEINLINE float Getexperencia() const { return experencia; }
	FORCEINLINE float Getenergia() const { return energia; }
	FORCEINLINE float Getpeso() const { return peso; }
	FORCEINLINE float Getvolumen() const { return volumen; }
	//FORCEINLINE float GetlimiteZ() const { return limiteZ; }
	//FORCEINLINE float GetlimiteX() const { return limiteX; }
	

	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void Settrayectoria(int _trayectoria) { trayectoria = _trayectoria; }
	FORCEINLINE void SetcapacidadPasajeros(int _capacidadPasajeros) { capacidadPasajeros = _capacidadPasajeros; }
	FORCEINLINE void SetcapacidadMunicion(int _capacidadMunicion) { capacidadMunicion = _capacidadMunicion; }
	FORCEINLINE void SettipoNave(int _tipoNave) { tipoNave = _tipoNave; }
	FORCEINLINE void Setexperencia(float _experencia) { experencia = _experencia; }
	FORCEINLINE void Setenergia(float _energia) { energia = _energia; }
	FORCEINLINE void Setpeso(float _peso) { peso = _peso; }
	FORCEINLINE void Setvolumen(float _volumen) { volumen = _volumen; }
	//FORCEINLINE void SetlimiteZ(float _limiteZ) { limiteZ = _limiteZ; }
	//FORCEINLINE void SetlimiteX(float _limiteX) { limiteX = _limiteX; }
	
	

	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FString ShipName;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE float GetFireRate() const { return FireRate; }
	FORCEINLINE void SetFireRate(float _FireRate) { FireRate = _FireRate; }


protected:
	//virtual void Mover() = 0;
	FString GetShipName();
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );
	void Disparar() PURE_VIRTUAL(ANaveEnemiga::Disparar, );
	void Destruirse() PURE_VIRTUAL(ANaveEnemiga::Destruirse, );
	void Escapar() PURE_VIRTUAL(ANaveEnemiga::Escapar, );

public: 
	
};
