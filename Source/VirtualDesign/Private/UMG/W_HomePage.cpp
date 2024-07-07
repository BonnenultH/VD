// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/W_HomePage.h"
#include "Components/Button.h"
#include "GM/VDHUD.h"
#include "Kismet/GameplayStatics.h"

bool UW_HomePage::Initialize()
{
	return Super::Initialize();
}

void UW_HomePage::NativeConstruct()
{
	Super::NativeConstruct();
}

void UW_HomePage::InitWidget()
{
	StartButton->SetVisibility(ESlateVisibility::Collapsed);
}


