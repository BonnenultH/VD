// Fill out your copyright notice in the Description page of Project Settings.


#include "GM/VDPawn.h"

// Sets default values
AVDPawn::AVDPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVDPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVDPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVDPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

