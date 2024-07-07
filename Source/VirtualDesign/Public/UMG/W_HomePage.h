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

public:
	virtual bool Initialize() override;

	virtual void NativeConstruct() override;

	void InitWidget();
	
protected:
	UPROPERTY(meta=(BindWidget))
	class UButton* StartButton;
	
	EUIVDWidget MyWidgetType = EUIVDWidget::UI_HomePage;
};
