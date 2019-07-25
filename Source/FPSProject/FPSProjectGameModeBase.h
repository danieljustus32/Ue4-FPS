// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine.h"
#include "FPSProjectGameModeBase.generated.h"


 /**
  *
  */
UCLASS()
class FPSPROJECT_API AFPSProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

		virtual void StartPlay() override;
};