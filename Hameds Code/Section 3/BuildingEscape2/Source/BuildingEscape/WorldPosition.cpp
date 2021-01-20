// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();


	// FString Log = TEXT("Hello"); // Assigns Log with message
	// FString* PrtLog = &Log; // Assigns Pointer, & is used to access the Log variable in memory when used in an expression
	// Log.Len(); 
	// (*PrtLog).Len(); // Operations in parentheses take priority, we want to deference the pointer before accessing the dot operator.
	// PrtLog->Len(); // Alternative way to write the line above
	// UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog); //Prints Log message in UE Output Log in Yellow Text, ** means its dereferencing and using the overloaded operator
	
	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Object name is: %s"), *ObjectName);

	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s position in world is: %s"), *ObjectName, *ObjectPosition);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

