// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasEnergia.h"

ACapsulasEnergia::ACapsulasEnergia()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh>
        CylinderMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule_2.Shape_WideCapsule_2'"));
    if (CylinderMeshAsset.Succeeded())
    {
        GetStaticMeshComponent()->SetStaticMesh(CylinderMeshAsset.Object);
    }
}