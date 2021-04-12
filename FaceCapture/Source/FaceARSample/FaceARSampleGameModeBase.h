// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FaceARSampleGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class FACEARSAMPLE_API AFaceARSampleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	AFaceARSampleGameModeBase(const FObjectInitializer& ObjectInitializer);

	virtual void InitGameState() override;
	virtual void StartPlay() override;

};
