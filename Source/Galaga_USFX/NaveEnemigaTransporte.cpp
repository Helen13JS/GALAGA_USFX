// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"
#include "Foton.h"
#include "FacadeTipoDisparo.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	//DisparoFacade = CreateDefaultSubobject<AFacadeTipoDisparo>(TEXT("DisparoFacade"));
	NewProjectileFoton = nullptr;

}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);
	FireRate += DeltaTime;
	if (FireRate > 1.0f)
	{
		Disparar();
		FireRate = 0;
	}
}


void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
	DisparoFacade = GetWorld()->SpawnActor<AFacadeTipoDisparo>(AFacadeTipoDisparo::StaticClass());
	//DisparoFacade->AsignarDisparo("Foton");
	//DisparoFacade->Launch(GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f));
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	float LimiteDerecho = 1000.0f;
	float LimiteIzquierdo = -1000.0f;
	//    float velocidad = 0.8;

	FVector NuevaPosicion = FVector(GetActorLocation().X, GetActorLocation().Y - velocidad * 100 * DeltaTime, GetActorLocation().Z); //calcula la nueva posicion de la nave

	// Verifica los l�mites de la posici�n en X
	if (NuevaPosicion.Y < LimiteIzquierdo)
	{
		NuevaPosicion.Y = LimiteDerecho;
	}
	else if (NuevaPosicion.Y > LimiteDerecho)
	{
		NuevaPosicion.Y = LimiteIzquierdo;
	}

	SetActorLocation(NuevaPosicion); //establece la nueva p


	
	
	
	
	
	
	
	
	
	
	
	
	/*static FVector PosicionActual = GetActorLocation();

	static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.X + 200.0f;
	static float MovimientoY = 0.0f;


	FVector Desplazamiento = FVector(-150.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

	FVector ReaparicionPocision = GetActorLocation() + Desplazamiento;
	if (ReaparicionPocision.X < TopeAbajo)
	{
		ReaparicionPocision.X = Reaparicion;
	}
	SetActorLocation(ReaparicionPocision);*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*//Obtiene la posicion actual del actor
    FVector PosicionActual = GetActorLocation();

    //Genera nueva scoordenadas X e Y aleatorias
    float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
    float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

    //Crea un nuevo vector de posicion con las coordenads aleatorias y la misma Z que la posicion actual
    FVector NuevaPosicion = (FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z));

    //Establece la nueva posicion del actor
    SetActorLocation(NuevaPosicion);*/



	/*/ Define la velocidad de movimiento horizontal de la nave
	float VelocidadHorizontal = 200.0f; // Puedes ajustar este valor seg�n la velocidad deseada

	// Define una velocidad de rotaci�n
	float VelocidadRotacion = 40.0f; // Puedes ajustar este valor seg�n la velocidad deseada

	// Calcula el desplazamiento horizontal en la direcci�n deseada
	FVector DireccionMovimiento = GetActorForwardVector(); // Mueve la nave hacia adelante
	FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;

	// Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance m�s lentamente
	float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya m�s lento (0.1f)

	// Calcula el �ngulo de rotaci�n basado en el tiempo
	float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El �ngulo cambia cada 6 segundos

	// Calcula las coordenadas X e Y para el movimiento en zigzag
	float AmplitudZigzag = 20.0f; // Amplitud del zigzag
	float ZigzagOffset = FMath::Sin(Angulo) * AmplitudZigzag; // Calcula el desplazamiento en el eje Y para el zigzag

	// Calcula la nueva posici�n sumando el desplazamiento horizontal, el zigzag y la posici�n actual
	FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(0.0f, ZigzagOffset, 0.0f);

	// Establece la nueva posici�n del actor
	SetActorLocation(NuevaPosicion);*/

}

void ANaveEnemigaTransporte::Disparar()
{
	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 0.0f);//distancia de disparo
	// Spawnear el proyectil

	FVector _SpawnDirection = FVector(-1.0f, 0.0f, 0.0f);
	FVector SpawnDirection = _SpawnDirection;
	//DisparoFacade->AsignarDisparo("Foton");
	//DisparoFacade->Launch(SpawnDirection);
	DisparoFacade->Launch("Misile", SpawnLocation, SpawnDirection);
}

void ANaveEnemigaTransporte::Destruirse()
{
}

void ANaveEnemigaTransporte::Escapar()
{
}
