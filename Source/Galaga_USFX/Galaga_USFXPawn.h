// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InventoryComponent.h"
#include "Capsulas.h"
#include "StateInterface.h"
#include "Galaga_USFXPawn.generated.h"

UCLASS(Blueprintable)
class AGalaga_USFXPawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	AGalaga_USFXPawn();

	UPROPERTY()
	UInventoryComponent* MyInventory;
	UFUNCTION()
	void DropItem();
	UFUNCTION()
	void TakeItem(ACapsulas* InventoryItem);
	UFUNCTION()
	virtual void NotifyHit(class UPrimitiveComponent* MyComp,
		AActor* Other, class UPrimitiveComponent* OtherComp,
		bool bSelfMoved, FVector HitLocation, FVector
		HitNormal, FVector NormalImpulse, const FHitResult&
		Hit) override;

	int Life;
	FORCEINLINE float GetVida() const { return Life; }
	FORCEINLINE void SetVida(float NewVida);

	UFUNCTION()
	void ReloadAmmo();

	bool velocity;

	void MoveFast();
	void VelocidadNormal();
	void MoveFastExtreme();





	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite )
	FVector GunOffset;
	
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float FireRate;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;


protected:
	//virtual void BeginPlay() override;
	FTimerHandle TimerHandle_Salto;
	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	virtual void izquierdaArriba(float Value);
	virtual void derechaArriba(float Value);
	virtual void izquierdaAbajo(float Value);
	virtual void derechaAbajo(float Value);
	virtual void Salto();
	virtual void descender();
    virtual void DoubleShot();
	virtual void ReturnStart();

	/* Fire a shot in the specified direction */
	void FireShot(FVector FireDirection);

	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

	//Recargar energia
	void ReloadEnergy();

	//Saber el numero de inventario
	void CheckInventory();


	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FireForwardBinding;
	static const FName FireRightBinding;

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

	int32 NumProyectilesDisparados;
	int32 MaxProyectilesDisparados;

	

	public:
		// Define cuánto se incrementará la velocidad de las municiones
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Municion")
		float VelocidadMunicionIncremento;
	//int32 MunicionRapidaItem;
	int32 NumItems;
	bool movimiento;
	void SetVelocity(float newVelocity);

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


//	patron state
	private:

		// estados de la nave
		IStateInterface *StatePotenciado;
		IStateInterface *StateEnergiaFull;
		IStateInterface *StateSigiloso;
		IStateInterface *StateProtegido;
		IStateInterface *State;

		
public:
	IStateInterface* getState() { return State; }
	//void SetState(IStateInterface* _State) { State = _State; }

	IStateInterface* GetEstadoPotenciado() { return StatePotenciado; }
	IStateInterface* GetEstadoProtegido() { return StateProtegido; }
    IStateInterface* GetEstadoSigiloso() { return StateSigiloso; }
	IStateInterface* GetEstadoEnergiaCompleta() { return StateEnergiaFull; }

	void InicializarEstados();
	//funcion cambiar estado
	void SetEstados(IStateInterface* _Estado);

	void Mesh();
	void FireShoot();
	void Mover();
	void Shield();
	
	
	FString ObtenerEstadoActual() { return State->ObtenerEstado(); }

			


  public:
	 // DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMunitionCapsuleConsumed);
	  // Evento que se dispara cuando el jugador consume una cápsula de munición
	//  FOnMunitionCapsuleConsumed OnMunitionCapsuleConsumed;

	  // Delegado que se dispara cuando se consume una cápsula de munición
	  DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMunitionCapsuleConsumed);
	  FOnMunitionCapsuleConsumed OnMunitionCapsuleConsumed;

	  //patron strategy
	 // class IStrategyInterface* Estrategia;
	  // La estrategia de movimiento actual
	 class IStrategyPawnInterface* CurrentMovementStrategy;
	 class IStrategyPawnInterface* ZigZagStrategy;

public:
	// Si el movimiento en zigzag está activo
	bool bIsZigZagActive;
	// El manejador del temporizador
	FTimerHandle TimerHandleZZ;
	class AZigZagStrategy* ZigZagStrategyP;
	void SetMovementStrategy(IStrategyPawnInterface* NewMovementStrategy);
	//void CambiarEstrategia();
	//void ActivarEstrategias();

		
			

};

