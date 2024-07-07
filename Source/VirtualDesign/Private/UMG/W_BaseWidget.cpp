// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/W_BaseWidget.h"
#include "GM/VDGMBase.h"
#include "GM/VDHUD.h"
#include "GM/VDPawn.h"
#include "Kismet/GameplayStatics.h"

void UW_BaseWidget::InitWidget()
{
	VDGameMode = Cast<AVDGMBase>(UGameplayStatics::GetGameMode(this));
	VDHud = Cast<AVDHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	VDPawn = Cast<AVDPawn>(UGameplayStatics::GetPlayerPawn(this, 0));
	
}
