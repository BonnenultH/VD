// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/W_UserWidget.h"

#include "Components/WidgetComponent.h"
#include "Data/DataType.h"
#include "GM/VDHUD.h"
#include "GM/VDPawn.h"

void UW_UserWidget::InitWidget()
{
	Super::InitWidget();
	if(VDPawn)
	{
		VDPawn->UIComponent->SetHiddenInGame(false);
		UW_BaseWidget* Widget = Cast<UW_BaseWidget>(VDPawn->UIComponent->GetWidget());
		VDHud->GetWidgetMap().Add(EUIVDWidget::UI_UserWSecond, Widget);
	}
}
