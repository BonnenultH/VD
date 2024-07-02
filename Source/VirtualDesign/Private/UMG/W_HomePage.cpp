// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/W_HomePage.h"
#include "Components/Button.h"
#include "GM/VDHUD.h"
#include "Kismet/GameplayStatics.h"

bool UW_HomePage::Initialize()
{
	bool Result = Super::Initialize();
	
	AVDHUD* VDHud = Cast<AVDHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if(VDHud)
	{
		VDHud->OpenWidget.AddUObject(this, &UW_HomePage::OpenWidget);
	}
	
	return Result;
}

void UW_HomePage::InitWidget()
{
	StartButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UW_HomePage::OpenWidget(EUIVDWidget WidgetType)
{
	if(MyWidgetType == WidgetType)
	{
		InitWidget();
	}
}
