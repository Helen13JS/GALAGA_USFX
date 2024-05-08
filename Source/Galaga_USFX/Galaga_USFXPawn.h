// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InventoryComponent.h"
#include "Capsulas.h"
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

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

};

