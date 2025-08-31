// Fill out your copyright notice in the Description page of Project Settings.


#include "FormationSelector.h"

#include "RTSFormationComponent.h"

TArray<AActor*> UFormationSelector::GetAllUnitsInFormation(TArray<AActor*> SelectedUnits) const
{
	TSet<AActor*> UnitsInFormation;

	for (auto SelectedUnit : SelectedUnits)
	{
		const URTSFormationComponent* FormationComponent = SelectedUnit->FindComponentByClass<URTSFormationComponent>();

		UnitsInFormation.Append(FormationComponent->UnitsInFormation);
	}

	return UnitsInFormation.Array();
}

bool UFormationSelector::DoesSupportWorldType(const EWorldType::Type WorldType) const
{
	return WorldType == EWorldType::Game || WorldType == EWorldType::PIE;
}
