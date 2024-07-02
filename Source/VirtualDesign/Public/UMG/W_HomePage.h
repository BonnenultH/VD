// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GM/VDGMBase.h"
#include "W_HomePage.generated.h"

/**
 * 
 */
UCLASS()
class VIRTUALDESIGN_API UW_HomePage : public UUserWidget
{
	GENERATED_BODY()
protected:
	void InitWidget();

public:
	virtual bool Initialize() override;

	UFUNCTION()
	void OpenWidget(EUIVDWidget WidgetType);

protected:
	UPROPERTY(meta=(BindWidget))
	class UButton* StartButton;
	
	EUIVDWidget MyWidgetType = EUIVDWidget::UI_HomePage;
};
