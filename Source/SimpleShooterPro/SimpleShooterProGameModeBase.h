// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SimpleShooterProGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTERPRO_API ASimpleShooterProGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);
};
