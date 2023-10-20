// Copyright Caffeinated Cat


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	//Primary Attributes
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Strength"),
		FString("Increases physical damage")
		);

	GameplayTags.Attributes_Primary_Dexterity = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Dexterity"),
		FString("Increases armor class and armor penetration")
		);

	GameplayTags.Attributes_Primary_Constitution = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Constitution"),
		FString("Increases health and poison resistance")
		);

	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Intelligence"),
		FString("Increases magic damage and mental resistance")
		);

	//Secondary Attributes
	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MaxHealth"),
		FString("Maximum amount of health")
		);

	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MaxMana"),
		FString("Maximum amount of mana")
		);

	GameplayTags.Attributes_Secondary_PhysicalDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.PhysicalDamage"),
		FString("Damage dealt by melee attacks")
		);

	GameplayTags.Attributes_Secondary_MagicDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MagicDamage"),
		FString("Damage dealt by spells")
		);
	
	GameplayTags.Attributes_Secondary_ArmorClass = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ArmorClass"),
		FString("Reduces damage taken, improves Block Chance")
		);

	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ArmorPenetration"),
		FString("Amount of armor ignored on attacked target")
		);

	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.BlockChance"),
		FString("Chance to reduce incoming physical damage")
		);

	GameplayTags.Attributes_Secondary_CriticalChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalChance"),
		FString("Chance to deal additional damage on successful attack")
		);

	GameplayTags.Attributes_Secondary_CriticalDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalDamage"),
		FString("Amount of bonus damage dealt by a critical hit")
		);

	GameplayTags.Attributes_Secondary_CriticalAvoidance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.CriticalAvoidance"),
		FString("Reduces chance of incoming attacks being a critical hit")
		);

	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.HealthRegeneration"),
		FString("Amount of health restored during a time interval")
		);

	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.ManaRegeneration"),
		FString("Amount of mana restored during a time interval")
		);

	GameplayTags.Attributes_Secondary_PoisonResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.PoisonResistance"),
		FString("Chance to reduce incoming poison effects")
		);

	GameplayTags.Attributes_Secondary_MentalResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.MentalResistance"),
		FString("Chance to reduce incoming magic damage and ignore detrimental spell effects")
		);

	//Input Tags
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.LMB"),
	FString("Input Tag for Left Mouse Button")
	);

	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.RMB"),
		FString("Input tag for Right Mouse Button")
		);

	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.1"),
	FString("Input Tag for 1 Key")
	);

	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.2"),
	FString("Input Tag for 2 Key")
	);

	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.3"),
	FString("Input Tag for 3 Key")
	);

	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
	FName("InputTag.4"),
	FString("Input Tag for 4 Key")
	);
}
