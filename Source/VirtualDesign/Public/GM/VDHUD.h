// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VDHUD.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FDelegateInitWidget, EUIVDWidget);

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
	UW_BaseWidget* CreateVDWidget(EUIVDWidget WidgetType, TSubclassOf<UUserWidget> UserWidgetClass);
	
	UFUNCTION()
	void AddVDWidgetToViewPort(UW_BaseWidget* TargetWidget);

	UFUNCTION()
	void StartGame();

	
	TMap<EUIVDWidget, UW_BaseWidget*> GetWidgetMap()
	{
		return WidgetMap;
	}
	
protected:
	UPROPERTY()
	class AVDGMBase* VDGameMode;
	
	UPROPERTY()
	class AVDController* VDController;

	TMap<EUIVDWidget, UW_BaseWidget*> WidgetMap;

public:
	FDelegateInitWidget InitWidgetDelegate;

};
