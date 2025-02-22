#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_PhosphorousDart_New

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_PhosphorousDart_New.GA_PhosphorousDart_New_C.ExecuteUbergraph_GA_PhosphorousDart_New
// 0x0130 (0x0130 - 0x0000)
struct GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzCharacter*                           CallFunc_GetOwningCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_MakeEffectContext_ReturnValue;            // 0x0018(0x0018)()
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0030(0x00D8)(ContainsInstancedReference)
	class AGzCharacter*                           CallFunc_GetOwningCharacter_ReturnValue_1;         // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_MakeEffectContext_ReturnValue_1;          // 0x0118(0x0018)()
};
static_assert(alignof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New) == 0x000008, "Wrong alignment on GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New");
static_assert(sizeof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New) == 0x000130, "Wrong size on GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, EntryPoint) == 0x000000, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, CallFunc_GetOwningCharacter_ReturnValue) == 0x000008, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::CallFunc_GetOwningCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, CallFunc_MakeEffectContext_ReturnValue) == 0x000018, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::CallFunc_MakeEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000030, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, CallFunc_GetOwningCharacter_ReturnValue_1) == 0x000108, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::CallFunc_GetOwningCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x000110, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New, CallFunc_MakeEffectContext_ReturnValue_1) == 0x000118, "Member 'GA_PhosphorousDart_New_C_ExecuteUbergraph_GA_PhosphorousDart_New::CallFunc_MakeEffectContext_ReturnValue_1' has a wrong offset!");

}

