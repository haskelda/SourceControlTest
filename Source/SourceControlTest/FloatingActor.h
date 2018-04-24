// Fill out your copyright notice in the Description page of Project Settings.
// source control test

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class SOURCECONTROLTEST_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    //I really don't know yet what this variable does...
    UPROPERTY(EditAnywhere)
    float RunningTime;
    //float RunningJustintime=0.0;
    //here is the source
	
};
