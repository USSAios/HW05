// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	SetActorLocation(FVector(0, 0, 0));
	Move();
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ATestActor::Step()
{
	return FMath::RandRange(0, 1);
}

int ATestActor::CreateEvent()
{
	return FMath::RandRange(0, 1);
}

double ATestActor::Getdistance()
{
	FVector pos = GetActorLocation();
	
	return sqrt(FMath::Pow(double(pos.X), 2) + FMath::Pow(double(pos.Y), 2));
}

void ATestActor::Move()
{
	for (int i = 0; i < 10; i++)
	{
		eventCount += CreateEvent();

		FVector pos = GetActorLocation();
		int x = Step();
		int y = Step();
		SetActorLocation(pos + FVector(x, y, 0));

		UE_LOG(LogTemp, Warning, TEXT("Vector Moved: % s"), *GetActorLocation().ToString());
	
	}
	UE_LOG(LogTemp, Warning, TEXT("Event Count: %d"), eventCount);
	UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), Getdistance());

}

