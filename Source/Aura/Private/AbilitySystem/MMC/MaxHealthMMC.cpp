// Copyright Caffeinated Cat


#include "AbilitySystem/MMC/MaxHealthMMC.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMaxHealthMMC::UMaxHealthMMC()
{
	ConDef.AttributeToCapture = UAuraAttributeSet::GetConstitutionAttribute();
	ConDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	ConDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(ConDef);
}

float UMaxHealthMMC::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParams;
	EvaluationParams.SourceTags = SourceTags;
	EvaluationParams.TargetTags = TargetTags;

	float Con = 0;
	GetCapturedAttributeMagnitude(ConDef, Spec, EvaluationParams, Con);
	Con = FMath::Max<float>(Con, 0);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 CharLvl = CombatInterface->GetCharacterLevel();

	return 80 + Con * 2.5 + CharLvl * 10;
}
