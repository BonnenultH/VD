// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/VDGMBase.h"
#include "GM/VDController.h"
#include "Blueprint/UserWidget.h"


AVDGMBase::AVDGMBase()
{
	PlayerControllerClass = AVDController::StaticClass();
	InitUIMap();
}

TSubclassOf<UUserWidget> AVDGMBase::LoadWidgetResources(FString UIWidgetPath)
{
	return ConstructorHelpers::FClassFinder<UUserWidget>(*UIWidgetPath).Class;
}

void AVDGMBase::InitUIMap()
{
	UIMap.Add(EUIVDWidget::UI_HomePage,
		LoadWidgetResources(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG/UI_WHomePage.UI_WHomePage_C'")));
	
	UIMap.Add(EUIVDWidget::UI_UserWidget,
		LoadWidgetResources(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/UMG/UI_WUserWidget.UI_WUserWidget_C'")));
	
}




