// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Data/DataType.h"
#include "VDGMBase.generated.h"



/**
 * 
 */
UCLASS()
class VIRTUALDESIGN_API AVDGMBase : public AGameModeBase
{
	GENERATED_BODY()
	
	AVDGMBase();
	
protected:
	TSubclassOf<UUserWidget> LoadWidgetResources(FString UIWidgetPath);

	void InitUIMap();

public:
	TMap<EUIVDWidget, TSubclassOf<UUserWidget>> GetUIMap()
	{
		return UIMap;
	}

protected:
	TMap<EUIVDWidget, TSubclassOf<UUserWidget>> UIMap;

	
};


