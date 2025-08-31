// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RTSFormationComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class REALTIMESTRATEGY_API URTSFormationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	URTSFormationComponent();

	UPROPERTY(EditAnywhere)
	TSet<AActor*> UnitsInFormation;
};
