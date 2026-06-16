// Fill out your copyright notice in the Description page of Project Settings.


#include "ChacterScript.h"

// Sets default values
AChacterScript::AChacterScript()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChacterScript::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChacterScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChacterScript::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

