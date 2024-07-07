// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "W_BaseWidget.h"
#include "W_UserWidget.generated.h"

/**
 * 
 */
UCLASS()
class VIRTUALDESIGN_API UW_UserWidget : public UW_BaseWidget
{
	GENERATED_BODY()

protected:
	virtual void InitWidget() override;
	
};
