// Osvaldo Salomon 2021

#pragma once

#include "CoreMinimal.h"
#include "SimpleShooterProGameModeBase.h"
#include "KillEmAllGameMode.generated.h"

UCLASS()
class SIMPLESHOOTERPRO_API AKillEmAllGameMode : public ASimpleShooterProGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
};
