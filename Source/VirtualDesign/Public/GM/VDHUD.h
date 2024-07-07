// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VDHUD.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FDelegateOpenWidget, EUIVDWidget);

/**
 * 
 */
UCLASS()
class VIRTUALDESIGN_API AVDHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	

public:
	UFUNCTION()
	UUserWidget* CreateVDWidget(EUIVDWidget WidgetType, TSubclassOf<UUserWidget> UserWidgetClass);
	
	UFUNCTION()
	void AddVDWidgetToViewPort(UUserWidget* TargetWidget);

	UFUNCTION()
	void StartGame();

protected:
	UPROPERTY()
	class AVDGMBase* VDGameMode;
	
	UPROPERTY()
	class AVDController* VDController;

	TMap<EUIVDWidget, UUserWidget*> WidgetMap;

public:
	FDelegateOpenWidget OpenWidget;

};
