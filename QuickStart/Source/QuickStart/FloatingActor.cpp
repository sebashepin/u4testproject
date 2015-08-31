// Fill out your copyright notice in the Description page of Project Settings.

#include "QuickStart.h"
#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = Super::GetActorLocation();
}

// Called every frame
void AFloatingActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	float DisplacementSeed = DisplacementRate;
	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * DisplacementRate;
	NewLocation.X += GetRelativeDisplacement(InitialLocation.X, DisplacementSeed, DeltaTime * 1.4);
	
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

float AFloatingActor::GetRelativeDisplacement(float InitialPoint, float DisplacementSeed, float DeltaTime)
{
	float RelativeDisplacement = (FMath::Cos(RunningTime + DeltaTime) - FMath::Cos(RunningTime))* DisplacementSeed;
	return RelativeDisplacement;
}

