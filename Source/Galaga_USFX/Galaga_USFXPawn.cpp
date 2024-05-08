// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXPawn.h"
#include "Galaga_USFXProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

#include "InventoryComponent.h"
#include "Capsulas.h"
#include "CapsulasEnergia.h"
#include "CapsulasEnergiaNegativa.h"
#include "CapsulasArmas.h"
#include "CapsulasMunicionRapida.h"
#include "CapsulasVelocidad.h"
#include "CapsulasVelocidadExtrema.h"
//#include "CapsulaVelocidad.h"
#include "Containers/Queue.h"

#include "GameFramework/PlayerInput.h"
#include "GameFramework/CharacterMovementComponent.h"

const FName AGalaga_USFXPawn::MoveForwardBinding("MoveForward");
const FName AGalaga_USFXPawn::MoveRightBinding("MoveRight");
const FName AGalaga_USFXPawn::FireForwardBinding("FireForward");
const FName AGalaga_USFXPawn::FireRightBinding("FireRight");

AGalaga_USFXPawn::AGalaga_USFXPawn()
{	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;


	NumProyectilesDisparados = 0;
	MaxProyectilesDisparados = 50; //Establece el número máximo de proyectiles disparados
	MyInventory =
		CreateDefaultSubobject<UInventoryComponent>("MyInventory");
	NumItems = 0;
}

void AGalaga_USFXPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);

	
	FInputAxisKeyMapping DropItemKey("DropItem",EKeys::J, 1.0f);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(DropItemKey);
	PlayerInputComponent->BindAction("DropItem", IE_Pressed, this, &AGalaga_USFXPawn::DropItem);
	FInputActionKeyMapping ReloadAmmoKey("ReloadAmmo", EKeys::LeftShift, 0, 0, 0, 0);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddActionMapping(ReloadAmmoKey);
	PlayerInputComponent->BindAction("ReloadAmmo", IE_Pressed, this, &AGalaga_USFXPawn::ReloadAmmo);
	FInputAxisKeyMapping ReloadEnergyKey("ReloadEnergy", EKeys::O, 1.0f);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(ReloadEnergyKey);
	PlayerInputComponent->BindAction("ReloadEnergy", IE_Pressed, this, &AGalaga_USFXPawn::ReloadEnergy);



	FInputAxisKeyMapping DiagIzqUpKey("DiagonalIzquierdaUp", EKeys::Q, 1.0f);
	FInputAxisKeyMapping DiagDerUpKey("DiagonalDerechaUp", EKeys::E, 1.0f);
	FInputAxisKeyMapping DiagIzqDownKey("DiagonalIzquierdaDown", EKeys::Z, 1.0f);
	FInputAxisKeyMapping DiagDerDownKey("DiagonalIzquierdaDown", EKeys::C, 1.0f);
	FInputActionKeyMapping saltokey("Salto", EKeys::T, 0, 0, 0, 0);
	//FInputActionKeyMapping CrearBarreraKey("CrearBarrera", EKeys::K, 0, 0, 0, 0);
	FInputActionKeyMapping DoubleShotKey("Doubleshot", EKeys::J, 0, 0, 0, 0);
	FInputActionKeyMapping MoveFast("MoveFast", EKeys::G, 0, 0, 0, 0);


	//PlayerInputComponent->BindAction("ReloadAmmo", IE_Pressed, this, &AGalaga_USFXPawn::ReloadAmmo);
	//PlayerInputComponent->BindAction("ReloadEnergy", IE_Pressed, this, &AGalaga_USFXPawn::ReloadEnergy);

	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(DiagIzqUpKey);
	PlayerInputComponent->BindAxis("DiagonalIzquierdaUp", this, &AGalaga_USFXPawn::izquierdaArriba);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(DiagDerUpKey);
	PlayerInputComponent->BindAxis("DiagonalDerechaUp", this, &AGalaga_USFXPawn::derechaArriba);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping (DiagIzqDownKey);
	PlayerInputComponent->BindAxis("DiagonalIzquierdaDown", this, &AGalaga_USFXPawn::izquierdaAbajo);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddAxisMapping(DiagDerDownKey);
	PlayerInputComponent->BindAxis("DiagonalIzquierdaDown", this, &AGalaga_USFXPawn::derechaAbajo);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddActionMapping(saltokey);
	PlayerInputComponent->BindAction("Salto", IE_Pressed, this, &AGalaga_USFXPawn::Salto);
	//GetWorld()->GetFirstPlayerController()->PlayerInput->AddActionMapping(CrearBarreraKey);
//PlayerInputComponent->BindAction("CrearBarrera", IE_Pressed, this, &AGalaga_USFXPawn::CrearBarrera);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddActionMapping(DoubleShotKey);
	PlayerInputComponent->BindAction("Doubleshot", IE_Pressed, this, &AGalaga_USFXPawn::DoubleShot);
	GetWorld()->GetFirstPlayerController()->PlayerInput->AddActionMapping(MoveFast);
	PlayerInputComponent->BindAction("MoveFast", IE_Pressed, this, &AGalaga_USFXPawn::MoveFast);
}

void AGalaga_USFXPawn::izquierdaArriba(float Value)
{
	const FVector Velocidad = FVector(650.0f, -650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotQ = Velocidad.Rotation();
		SetActorRotation(RotQ);
	}
}

void AGalaga_USFXPawn::derechaArriba(float Value)
{
	const FVector Velocidad = FVector(650.0f, 650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotE = Velocidad.Rotation();
		SetActorRotation(RotE);
	}
}

void AGalaga_USFXPawn::izquierdaAbajo(float Value)
{
	const FVector Velocidad = FVector(-650.0f, -650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotZ = Velocidad.Rotation();
		SetActorRotation(RotZ);
	}
}

void AGalaga_USFXPawn::derechaAbajo(float Value)
{
	const FVector Velocidad = FVector(-650.0f, 650.0f, 0.0f);

	AddActorWorldOffset(Velocidad * Value * GetWorld()->GetDeltaSeconds(), true);

	if (Value)
	{
		FRotator RotC = Velocidad.Rotation();
		SetActorRotation(RotC);
	}
}

void AGalaga_USFXPawn::Salto()
{
	const float FuerzaSalto = 11000.0f;
	const FVector Impulso = FVector(0.0f, 0.0f, 1.0f) * FuerzaSalto;

	AddActorLocalOffset(FVector(0.0f, 0.0f, FuerzaSalto * GetWorld()->GetDeltaSeconds()), true);

	GetWorldTimerManager().SetTimer(TimerHandle_Salto, this, &AGalaga_USFXPawn::descender, 0.4f, false);
}

void AGalaga_USFXPawn::descender()
{
	const float FuerzaSalto = 11000.0f;
	const FVector Impulso = FVector(0.0f, 0.0f, -1.0f) * FuerzaSalto;

	AddActorLocalOffset(FVector(0.0f, 0.0f, -FuerzaSalto * GetWorld()->GetDeltaSeconds()), true);
}

void AGalaga_USFXPawn::DoubleShot()
{
}

void AGalaga_USFXPawn::ReturnStart()
{
}

void AGalaga_USFXPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		
		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	
	// Create fire direction vector
	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	// Try and fire a shot
	FireShot(FireDirection);

	if (velocity)
	{
		MoveFast();
		//MoveSpeed = 1000.0f;
	}
}

void AGalaga_USFXPawn::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true && NumProyectilesDisparados < MaxProyectilesDisparados)
	{
		// Incrementa el contador de proyectiles disparados

		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				//World->SpawnActor<AGalaga_USFXProjectile>(SpawnLocation, FireRotation);
			

				// spawn the projectile
				// Spawn the three projectiles
				//float BulletSpacing = 100.0f; // Ajusta el valor según sea necesario

				for (int i = 0; i < 3; ++i)
				{
					//World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation, FireRotation);
					FRotator ModifiedRotation = FireRotation;
					// Modify rotation for each projectile
					ModifiedRotation.Yaw += (i - 1) * 20.0f; // Offset rotation by 10 degrees

					// Calcular la ubicación de spawn de la bala actual
					//FVector BulletSpawnLocation = SpawnLocation + FireRotation.RotateVector(FVector(0.f, i * BulletSpacing, 0.f));

					// Spawn the projectile
					//World->SpawnActor<AGalaga_USFX_L01Projectile>(BulletSpawnLocation, FireRotation);


					const FVector ModifiedSpawnLocation = GetActorLocation() + ModifiedRotation.RotateVector(GunOffset);

					//// Spawn the projectile
					World->SpawnActor<AGalaga_USFXProjectile>(ModifiedSpawnLocation, ModifiedRotation);
				}
			
			
			}
			// Restablece el contador cuando se alcance el límite máximo
			if (NumProyectilesDisparados >= MaxProyectilesDisparados)
			{
				bCanFire = false;
				GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFXPawn::ShotTimerExpired, FireRate);
			}


			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFXPawn::ShotTimerExpired, FireRate);

			// try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void AGalaga_USFXPawn::ShotTimerExpired()
{

	// Restablece el contador y permite disparar de nuevo
	++NumProyectilesDisparados; // Incrementa el contador de proyectiles disparados en 1

	if (NumProyectilesDisparados >= MaxProyectilesDisparados)
	{
		//NumProyectilesDisparados = 0;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "No tienes municiones");
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Presiona Shift para recargar");


		}
	}

	bCanFire = true;
}


void AGalaga_USFXPawn::DropItem()
{
	if (MyInventory->CurrentInventory.IsEmpty())//MyInventory->CurrentInventory.Num() == 0
	{
		if (GEngine)
		{
			FString Message = FString::Printf(TEXT("No tienes objetos en tu inventario"));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, Message);
		}
		return;
	}
	ACapsulas* Item = nullptr;
	MyInventory->CurrentInventory.Dequeue(Item);//MyInventory->CurrentInventory.Last();
	//MyInventory->CurrentInventory.Last();
//MyInventory->RemoveFromInventory(Item);
	NumItems -= 1;
	// Obtén la ubicación actual de la nave
	FVector ShipLocation = GetActorLocation();
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);

	// Ajusta la posición para centrar el objeto con respecto a la nave
	float DropDistance = 200.0f; // Distancia adicional para dejar caer el objeto
	FVector DropOffset = FVector(0.0f, 0.0f, ItemBounds.Z * 0.5f); // Ajusta la posición verticalmente para centrar el objeto
	FTransform PutDownLocation = FTransform(GetActorRotation(), ShipLocation + DropOffset +
		(RootComponent->GetForwardVector() * DropDistance)); // Combina la ubicación de la nave con el desplazamiento vertical y horizontal

	Item->PutDown(PutDownLocation);

	//Verifica el inventario después de soltar un objeto
	CheckInventory();
}

void AGalaga_USFXPawn::NotifyHit(class UPrimitiveComponent*
	MyComp, AActor* Other, class UPrimitiveComponent* OtherComp,
	bool bSelfMoved, FVector HitLocation, FVector HitNormal,
	FVector NormalImpulse, const FHitResult& Hit)
{
	ACapsulas* InventoryItem =
		Cast<ACapsulas>(Other);
	if (InventoryItem != nullptr)
	{
		TakeItem(InventoryItem);
	}
}
void AGalaga_USFXPawn::TakeItem(ACapsulas*
	InventoryItem)
{
	InventoryItem->PickUp();
	MyInventory->AddToInventory(InventoryItem);
	// Declarar un TimerHandle

	NumItems += 1;

	// Configurar el temporizador con SetTimer
	float DelayInSeconds = 10.0f; // Tiempo de retraso en segundos
	bool bLooping = false; // Si el temporizador debe repetirse automáticamente o no
	ACapsulasArmas* AmmoItem = Cast<ACapsulasArmas>(InventoryItem);
	if (AmmoItem)
	{
		FTimerHandle MyTimerHandle1;
		GetWorldTimerManager().SetTimer(MyTimerHandle1, this, &AGalaga_USFXPawn::ReloadAmmo, DelayInSeconds, bLooping);
	}
	// Intenta hacer un cast a ACapsulasMunicionRapida
	ACapsulasMunicionRapida* MunicionRapidaItem = Cast<ACapsulasMunicionRapida>(InventoryItem);
	if (MunicionRapidaItem)
	{
		// Incrementa la velocidad de las municiones
		FireRate -= MunicionRapidaItem->VelocidadMunicionIncremento;
		if (FireRate < 0.01f) // Asegúrate de que FireRate no sea demasiado pequeño
		{
			FireRate = 0.01f;
		}

	}

	ACapsulasEnergia* EnergyItem = Cast<ACapsulasEnergia>(InventoryItem);
	if (EnergyItem)
	{
		FTimerHandle MyTimerHandle2;
		GetWorldTimerManager().SetTimer(MyTimerHandle2, this, &AGalaga_USFXPawn::ReloadEnergy, DelayInSeconds, bLooping);

	}

	ACapsulasEnergiaNegativa* NegativeEnergyItem = Cast<ACapsulasEnergiaNegativa>(InventoryItem);
	if (NegativeEnergyItem)
	{
		FTimerHandle MyTimerHandle3;
		GetWorldTimerManager().SetTimer(MyTimerHandle3, this, &AGalaga_USFXPawn::ReloadEnergy, DelayInSeconds, bLooping);
	}



	ACapsulasVelocidad* SpeedItem = Cast<ACapsulasVelocidad>(InventoryItem);
	if (SpeedItem)
	{
		FTimerHandle MyTimerHandle3;
		GetWorldTimerManager().SetTimer(MyTimerHandle3, this, &AGalaga_USFXPawn::MoveFast, DelayInSeconds, bLooping);
	}

	ACapsulasVelocidadExtrema* SpeedItem2 = Cast<ACapsulasVelocidadExtrema>(InventoryItem);
	if (SpeedItem2)
	{
		FTimerHandle MyTimerHandle4;
		GetWorldTimerManager().SetTimer(MyTimerHandle4, this, &AGalaga_USFXPawn::MoveFastExtreme, DelayInSeconds, bLooping);
	}

	//GetWorldTimerManager().SetTimer(MyTimerHandle1, this, &AGalaga_USFX_L01Pawn::ReloadAmmo, DelayInSeconds, bLooping);

	//Verifica el inventario después de recoger un objeto
	CheckInventory();
}

void AGalaga_USFXPawn::ReloadAmmo()
{
	// Bandera para verificar si se encontró un objeto de munición
	bool bFoundAmmo = false;

	// Itera sobre los objetos en el inventario para encontrar uno de munición
	ACapsulas* InventoryItem = nullptr;

	//for (AInventoryActor* InventoryItem : MyInventory->CurrentInventory)
	while (MyInventory->CurrentInventory.Dequeue(InventoryItem))
	{
		// Intenta hacer un cast a AInventoryActorMunicion
		ACapsulasArmas* AmmoItem = Cast<ACapsulasArmas>(InventoryItem);
		if (AmmoItem)
		{
			// Se encontró un objeto de munición en el inventario
			bFoundAmmo = true;

			// Se encontró un objeto de munición en el inventario
			// Elimina el objeto de munición del inventario			
			//MyInventory->RemoveFromInventory(AmmoItem);
			NumProyectilesDisparados = 0; // Restablece el contador de proyectiles disparados.
			MaxProyectilesDisparados = 50; // Establece el número máximo de proyectiles disparados
			//MunicionRapidaItem= 0; // Restablece la velocidad de las municiones
			VelocidadMunicionIncremento = 1000.0f; // Restablece la velocidad de las municiones
			bCanFire = true; // Permite al jugador disparar nuevamente.


			// Muestra un mensaje de depuración

			if (GEngine)
			{
				FString Message = FString::Printf(TEXT("Se recargaron +%d de municion"), MaxProyectilesDisparados);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
			}

			if (GEngine)
			{
				FString Message = FString::Printf(TEXT("La velocidad de las municiones ha aumentado en %f"), VelocidadMunicionIncremento);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
			}


			NumItems -= 1; // Disminuye el contador de objetos en el inventario
			CheckInventory();

			// Sal del bucle ya que encontraste y manejaste un objeto de munición
			break;
		}
	}

	// Verifica si no se encontró ningún objeto de munición
	if (!bFoundAmmo)
	{
		// Muestra un mensaje indicando que no se encontró ningún objeto de munición
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "No tienes municion para recargar");
		}
	}
}

void AGalaga_USFXPawn::CheckInventory()
{

	// Verifica si el componente de inventario existe
	if (MyInventory)
	{
		// Obtiene el número de objetos de inventario en el inventario del jugador
		//Artificio para tener el numero de objetos en el inventario


		// Inicializa una variable para contar el número de elementos
		// Declarar la cola y obtener un puntero a ella
		// Obtener un puntero a la cola de inventario


		//int32 NumItems = MyInventory->CurrentInventory.Num();

		// Puedes hacer lo que quieras con NumItems, como mostrarlo en pantalla, usarlo en lógica de juego, etc.
		if (GEngine)
		{
			FString Message = FString::Printf(TEXT("Tienes %d objetos en tu inventario"), NumItems);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, Message);
		}
	}
	else
	{

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "No tienes un Items de municion en el inventario");
		}
	}
}



void AGalaga_USFXPawn::ReloadEnergy()
{
	// Bandera para verificar si se encontró un objeto de munición
	bool bFoundEnergy = false;
	// Bandera para verificar si se encontró un objeto de energía negativa
	bool bFoundNegativeEnergy = false;
	// Itera sobre los objetos en el inventario para encontrar uno de Energia
	ACapsulas* InventoryItem = nullptr;
	//for (AInventoryActor* InventoryItem : MyInventory->CurrentInventory)
	while (MyInventory->CurrentInventory.Dequeue(InventoryItem))
	{
		// Intenta hacer un cast a AInventoryActorEnergy
		ACapsulasEnergia* EnergyItem = Cast<ACapsulasEnergia>(InventoryItem);
		if (EnergyItem)
		{
			// Se encontró un objeto de munición en el inventario
			bFoundEnergy = true;
			// Se encontró un objeto de Energia en el inventario
			// Elimina el objeto de munición del inventario
			//MyInventory->RemoveFromInventory(EnergyItem);

			// Muestra un mensaje de depuración
			if (GEngine)
			{
				//FString Message = FString::Printf(TEXT("Se recargaron %d de municion"), MaxProyectilesDisparados);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, "Se restablecio 100 pts de vida");
			}
			NumItems -= 1;
			CheckInventory();
			// Sal del bucle ya que encontraste y manejaste un objeto de munición
			break;
		}

		// Intenta hacer un cast a ACapsulasEnergiaNegativa
		ACapsulasEnergiaNegativa* NegativeEnergyItem = Cast<ACapsulasEnergiaNegativa>(InventoryItem);
		if (NegativeEnergyItem)
		{
			// Se encontró un objeto de energía negativa en el inventario
			bFoundNegativeEnergy = true;

			// Aquí debes disminuir la energía del Pawn
			// Por ejemplo, si tienes una variable Energy en tu Pawn, podrías hacer:
			// Energy -= 100;

			// Muestra un mensaje de depuración
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Se disminuyo 100 pts de vida");
			}
			NumItems -= 1;
			CheckInventory();
			// Sal del bucle ya que encontraste y manejaste un objeto de energía negativa
			break;
		}

	}



	// Verifica si no se encontró ningún objeto de munición
	if (!bFoundEnergy)
	{
		// Muestra un mensaje indicando que no se encontró ningún objeto de munición
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "No tienes Energia para recargar");
		}
	}
}



void AGalaga_USFXPawn::MoveFast()
{

	MoveSpeed = 2000.0f;

	GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFXPawn::VelocidadNormal, 5.0f);
}

void AGalaga_USFXPawn::VelocidadNormal()
{
	velocity = false;
	MoveSpeed = 1000.0f;
}

void AGalaga_USFXPawn::MoveFastExtreme()
{
	MoveSpeed = 4000.0f;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AGalaga_USFXPawn::VelocidadNormal, 5.0f);
}


