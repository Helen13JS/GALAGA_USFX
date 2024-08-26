// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasEnergia.h"

ACapsulasEnergia::ACapsulasEnergia()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh>
        CylinderMeshAsset(TEXT("StaticMesh'/Game/Meshes/CapsulePass.CapsulePass'"));
    if (CylinderMeshAsset.Succeeded())
    {
        GetStaticMeshComponent()->SetStaticMesh(CylinderMeshAsset.Object);
    }
}