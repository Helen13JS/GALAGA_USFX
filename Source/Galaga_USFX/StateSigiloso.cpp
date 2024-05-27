// Fill out your copyright notice in the Description page of Project Settings.


#include "StateSigiloso.h"
#include "Galaga_USFXPawn.h"

// Sets default values
AStateSigiloso::AStateSigiloso()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> StealthMeshAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_3.TwinStickUFO_3'"));
	if (StealthMeshAsset.Succeeded())
	{
		StealthMesh = StealthMeshAsset.Object;
	}

	static ConstructorHelpers::FObjectFinder<UStaticMesh> OriginalMeshAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO'"));

	if (OriginalMeshAsset.Succeeded())
	{
		OriginalMesh1 = OriginalMeshAsset.Object;
	}

}

// Called when the game starts or when spawned
void AStateSigiloso::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Estado Sigiloso"));
	
}

// Called every frame
void AStateSigiloso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStateSigiloso::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AStateSigiloso::EnergiaCompleta()
{
}

void AStateSigiloso::EstadoPotenciado()
{
}

void AStateSigiloso::EstadoSigiloso()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("se esta usando Estado Sigiloso"));

    if (NavePawn != nullptr && StealthMesh != nullptr)
    {
        UStaticMeshComponent* MeshComponent = NavePawn->GetShipMeshComponent();
        UStaticMesh* OriginalMesh = MeshComponent->GetStaticMesh();

        if (MeshComponent != nullptr)
        {
            MeshComponent->SetStaticMesh(StealthMesh);
        }

        // Cambia la malla de vuelta a la original después de 5 segundos
        FTimerHandle TimerHandle;
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, MeshComponent, OriginalMesh]()
            {
                if (MeshComponent != nullptr)
                {
                    MeshComponent->SetStaticMesh(OriginalMesh1);
                }
            }, 5.0f, false);
    }
}

void AStateSigiloso::EstadoDefensivo()
{
}

FString AStateSigiloso::ObtenerEstado()
{
	return FString();
}

void AStateSigiloso::EstablecerNaveJugador(AGalaga_USFXPawn* NaveJugador)
{
    	NavePawn = NaveJugador;
}

