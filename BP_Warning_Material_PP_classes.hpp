#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Warning_Material_PP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Warning_Material_PP.BP_Warning_Material_PP_C
// 0x0020 (0x00B0 - 0x0090)
class UBP_Warning_Material_PP_C final : public UGzPostProcessFX
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0090(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstance*                      Material;                                          // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Weight;                                            // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void TickBP(float DeltaTime);
	void StopBP();
	void StartBP();
	void ExecuteUbergraph_BP_Warning_Material_PP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Warning_Material_PP_C">();
	}
	static class UBP_Warning_Material_PP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Warning_Material_PP_C>();
	}
};
static_assert(alignof(UBP_Warning_Material_PP_C) == 0x000008, "Wrong alignment on UBP_Warning_Material_PP_C");
static_assert(sizeof(UBP_Warning_Material_PP_C) == 0x0000B0, "Wrong size on UBP_Warning_Material_PP_C");
static_assert(offsetof(UBP_Warning_Material_PP_C, UberGraphFrame) == 0x000090, "Member 'UBP_Warning_Material_PP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Warning_Material_PP_C, Material) == 0x000098, "Member 'UBP_Warning_Material_PP_C::Material' has a wrong offset!");
static_assert(offsetof(UBP_Warning_Material_PP_C, Weight) == 0x0000A0, "Member 'UBP_Warning_Material_PP_C::Weight' has a wrong offset!");
static_assert(offsetof(UBP_Warning_Material_PP_C, MaterialInstance) == 0x0000A8, "Member 'UBP_Warning_Material_PP_C::MaterialInstance' has a wrong offset!");

}

