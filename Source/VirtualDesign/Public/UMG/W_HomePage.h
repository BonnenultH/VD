// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/DataType.h"
#include "W_HomePage.generated.h"

class UButton;

/**
 * 
 */
UCLASS()
class VIRTUALDESIGN_API UW_HomePage : public UUserWidget
{
	GENERATED_BODY()
protected:
	UFUNCTION()
	void OnStartButtonClicked();
	
public:
	virtual bool Initialize() override;

	virtual void NativeConstruct() override;

	void InitWidget();

	UButton* GetStartButton()
	{
		return StartButton;
	}
	
protected:
	UPROPERTY(meta=(BindWidget))
	UButton* StartButton;
	
	EUIVDWidget MyWidgetType = EUIVDWidget::UI_HomePage;
};
