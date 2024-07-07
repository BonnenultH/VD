// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/VDHUD.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "GM/VDController.h"
#include "Kismet/GameplayStatics.h"
#include "UMG/W_HomePage.h"
#include "GM/VDGMBase.h"


void AVDHUD::BeginPlay()
{
	Super::BeginPlay();
	VDController = Cast<AVDController>(UGameplayStatics::GetPlayerController(this, 0));
	VDGameMode = Cast<AVDGMBase>(UGameplayStatics::GetGameMode(this));

	if(VDGameMode)
	{
		UUserWidget* Widget = CreateVDWidget(EUIVDWidget::UI_HomePage, VDGameMode->GetUIMap()[EUIVDWidget::UI_HomePage]);
		
		WidgetMap.Add(EUIVDWidget::UI_HomePage, Widget);
		
		AddVDWidgetToViewPort(Widget);

		StartGame();
	}
}


UUserWidget* AVDHUD::CreateVDWidget(EUIVDWidget WidgetType, TSubclassOf<UUserWidget> UserWidgetClass)
{
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), UserWidgetClass);
	UW_HomePage* HomeWidget = Cast<UW_HomePage>(Widget);
	HomeWidget->InitWidget();
	return Widget;
}

void AVDHUD::AddVDWidgetToViewPort(UUserWidget* TargetWidget)
{
	if(!TargetWidget)
		return;

	TargetWidget->AddToViewport(0);
}

void AVDHUD::StartGame()
{
	UW_HomePage* HomeWidget = Cast<UW_HomePage>(WidgetMap[EUIVDWidget::UI_HomePage]);
	if(HomeWidget)
	{
		if(HomeWidget->GetStartButton())
		{
			HomeWidget->GetStartButton()->SetVisibility(ESlateVisibility::Visible);
		}
	}
}


