// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FormationSelector.generated.h"

/**
 * TEST TASK I wanted to make this class inherit an interface and use interface get a subsystem from an interface but seems that it is impossible
 */
UCLASS()
class REALTIMESTRATEGY_API UFormationSelector : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual TArray<AActor*> GetAllUnitsInFormation(TArray<AActor*> SelectedUnits) const;
	
protected:
	virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;
};
