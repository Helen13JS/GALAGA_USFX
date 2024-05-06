// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"



ANaveEnemigaCaza::ANaveEnemigaCaza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO1.TwinStickUFO1'"));
    mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
  
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Mover(DeltaTime);

    AActor* Parent = GetOwner();

    if (Parent)
    {
        FVector PosicionActual = Parent->GetActorLocation();

        // Definir los l�mite DERECHO E IZQUIERDO de movimiento
        float LimiteDerecho = 1000.0f;
        float LimiteIzquierdo = -1000.0f;

        // Definir la velocidad de movimiento horizontal
        float VelocidadHorizontal = 300.0f;

        // Calcular el desplazamiento horizontal para este fotograma
        float DesplazamientoHorizontal = VelocidadHorizontal * DeltaTime;

        // Verificar si la nave est� movi�ndose hacia derecha o izquierda

        if (DireccionMovimientoHorizontal == 1) // Movimiento hacia derecha
        {


            // Mover la nave hacia derecha
            FVector NuevaPosicion = PosicionActual + FVector(0.0f, DesplazamientoHorizontal - 1.0f, 0.0f);
            if (NuevaPosicion.Y <= LimiteDerecho)
            {
                Parent->SetActorLocation(NuevaPosicion);
            }
            else
            {
                // Si alcanza el l�mite superior, cambiar la direcci�n de movimiento a hacia izquierda
                DireccionMovimientoHorizontal = -1;
            }
        }
        else // Movimiento hacia izquierda
        {
            // Mover la nave hacia izquierda
            FVector NuevaPosicion = PosicionActual - FVector(0.0f, DesplazamientoHorizontal - 1.0f, 0.0f);
            if (NuevaPosicion.Y >= LimiteIzquierdo)
            {
                Parent->SetActorLocation(NuevaPosicion);
            }
            else
            {
                // Si alcanza el l�mite de la izquierda, cambiar la direcci�n de movimiento a hacia la derecha
                DireccionMovimientoHorizontal = 1;
                Parent->SetActorLocation(FVector(NuevaPosicion.X, NuevaPosicion.Y - 100.0f, NuevaPosicion.Z));
            }
        }
    }

}
   

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
    
    /*//Obtiene la posicion actual del actor
    FVector PosicionActual = GetActorLocation();

    //Genera nueva scoordenadas X e Y aleatorias
    float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
    float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

    //Crea un nuevo vector de posicion con las coordenads aleatorias y la misma Z que la posicion actual
    FVector NuevaPosicion = (FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z));

    //Establece la nueva posicion del actor
    SetActorLocation(NuevaPosicion);*/


   /* static FVector PosicionActual = GetActorLocation();

    static float TopeAbajo = PosicionActual.X - 1300.0f;
    static float Reaparicion = PosicionActual.X + 200.0f;
    static float MovimientoY = 0.0f;


    FVector Desplazamiento = FVector(-50.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

    FVector ReaparicionPocision = GetActorLocation() + Desplazamiento;
    if (ReaparicionPocision.X < TopeAbajo)
    {
        ReaparicionPocision.X = Reaparicion;
    }
    SetActorLocation(ReaparicionPocision);*/


    /*FVector PosicionActual = GetActorLocation();
    FVector NuevaPosicion = FVector(PosicionActual.X - 100 * DeltaTime * velocidad, PosicionActual.Y, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);


    if (NuevaPosicion.X < limiteX) 
    {

        SetActorLocation(FVector(1500.0f, PosicionActual.Y, PosicionActual.Z));

    }*/

   /* FVector PosicionActual = GetActorLocation();
    FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y - 100 * DeltaTime * velocidad, PosicionActual.Z);

    SetActorLocation(NuevaPosicion);

    if (NuevaPosicion.Y < limiteX)
    {
        SetActorLocation(FVector(PosicionActual.X, 1500.0f, PosicionActual.Z));
    }*/
     

    float LimiteDerecho = 1000.0f;
    float LimiteIzquierdo = -1000.0f;
//    float velocidad = 0.8;

    FVector NuevaPosicion = FVector(GetActorLocation().X , GetActorLocation().Y - velocidad* 100*DeltaTime, GetActorLocation().Z); //calcula la nueva posicion de la nave

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

    

    
    
    
    
    /*// Define la velocidad de movimiento horizontal de la nave
    float VelocidadHorizontal = 200.0f; // Puedes ajustar este valor seg�n la velocidad deseada

    // Define una velocidad de rotaci�n
    float VelocidadRotacion = 40.0f; // Puedes ajustar este valor seg�n la velocidad deseada

    // Calcula el desplazamiento horizontal en la direcci�n deseada
    FVector DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); // Por ejemplo, avanza hacia adelante en el eje X
    FVector DesplazamientoHorizontal = DireccionMovimiento * VelocidadHorizontal * DeltaTime;//nos ayuda a emprajerar las velocidades en los diferentes dispositivos 

    // Obtiene el tiempo transcurrido desde el inicio del juego y lo escala para que avance m�s lentamente
    float TiempoTranscurrido = GetWorld()->TimeSeconds * 0.1f; // Escala de tiempo para que vaya m�s lento (0.1f)

    // Calcula el �ngulo de rotaci�n basado en el tiempo
    float Angulo = FMath::Fmod(TiempoTranscurrido, 6.0f) * VelocidadRotacion; // El �ngulo cambia cada 6 segundos

    // Calcula las coordenadas X e Y para el movimiento circular
    float Radio = 20.0f; // Radio del c�rculo
    float X = FMath::Cos(Angulo) * Radio; // Coordenada X del c�rculo
    float Y = FMath::Sin(Angulo) * Radio; // Coordenada Y del c�rculo

    // Calcula la nueva posici�n sumando las coordenadas X e Y al desplazamiento horizontal y a la posici�n actual
    FVector NuevaPosicion = GetActorLocation() + DesplazamientoHorizontal + FVector(X, Y, 0.0f);

    // Establece la nueva posici�n del actor
    SetActorLocation(NuevaPosicion);*/

}

void ANaveEnemigaCaza::Disparar()
{
}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::Escapar()
{
}
