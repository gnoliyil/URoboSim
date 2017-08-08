// Fout your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RRobot.h"
#include "ROSBridgeHandler.h"
#include "ROSBridgePublisher.h"
#include "ROSBridgeForceSubscriber.h"
#include "RobotROSBridge.generated.h"

UCLASS()
class UNREALROBOTSP3_API ARobotROSBridge : public AActor
{
    GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
    ARobotROSBridge();

    UPROPERTY(EditAnywhere, Category = "Assets")
    FString RobotName;

    UPROPERTY(EditAnywhere, Category = "Assets")
    FString RobotJointStateTopic;

    UPROPERTY(EditAnywhere, Category = "Assets")
    FString RobotEffortTopic;

    UPROPERTY(EditAnywhere, Category = "Assets")
    FString WebsocketIPAddr;

    UPROPERTY(EditAnywhere, Category = "Assets")
    uint32 WebsocketPort;

protected:
	// Called when the game starts or when spawned
    virtual void BeginPlay() override;

    uint32 TickCount;

    ARRobot* Robot;

    TSharedPtr<FROSBridgeHandler> Handler;

    TSharedPtr<FROSBridgePublisher> RobotJointStatePublisher;

    TSharedPtr<FROSBridgeForceSubScriber> RobotForceSubscriber;

public:	
	// Called every frame
    virtual void Tick(float DeltaTime) override;

    virtual void EndPlay(const EEndPlayReason::Type Reason) override;
};
