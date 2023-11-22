// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Estrategia_Embestida.generated.h"
class APlantEmbestida;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstrategia_Embestida : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API IEstrategia_Embestida
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//The pure virtual functions of the BattleShipStrategy
	virtual void HabilidadEmbestir(APlantEmbestida* _plantaEmbestida) = 0;
};
