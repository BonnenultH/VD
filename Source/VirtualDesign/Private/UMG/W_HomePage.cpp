// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/W_HomePage.h"
#include "Components/Button.h"
#include "GM/VDGMBase.h"
#include "GM/VDHUD.h"


void UW_HomePage::InitWidget()
{
	Super::InitWidget();
	StartButton->OnClicked.AddDynamic(this, &UW_HomePage::OnStartButtonClicked);
	StartButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UW_HomePage::OnStartButtonClicked()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
	
	if(VDGameMode && VDHud)
	{
		UW_BaseWidget* Widget = VDHud->CreateVDWidget(EUIVDWidget::UI_UserWidget, VDGameMode->GetUIMap()[EUIVDWidget::UI_UserWidget]);
		VDHud->GetWidgetMap().Add(EUIVDWidget::UI_UserWidget, Widget);
		VDHud->AddVDWidgetToViewPort(Widget);
	}
	
}

