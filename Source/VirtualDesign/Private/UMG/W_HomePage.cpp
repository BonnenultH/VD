// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/W_HomePage.h"
#include "Components/Button.h"


bool UW_HomePage::Initialize()
{
	return Super::Initialize();
}

void UW_HomePage::NativeConstruct()
{
	Super::NativeConstruct();

	StartButton->OnClicked.AddDynamic(this, &UW_HomePage::OnStartButtonClicked);
}

void UW_HomePage::InitWidget()
{
	StartButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UW_HomePage::OnStartButtonClicked()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
}

