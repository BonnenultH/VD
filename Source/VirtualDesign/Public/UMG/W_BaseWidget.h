// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_BaseWidget.generated.h"

/**
 * 
 */
UCLASS()
class VIRTUALDESIGN_API UW_BaseWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	
	UFUNCTION()
	virtual void InitWidget();

public:
	UPROPERTY()
	class AVDGMBase* VDGameMode;
	
	UPROPERTY()
	class AVDPawn* VDPawn;

	UPROPERTY()
	class AVDHUD* VDHud;
	
};
