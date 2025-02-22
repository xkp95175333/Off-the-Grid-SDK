#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SettingsEntry_Scalar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_SettingsEntry_Scalar.WBP_SettingsEntry_Scalar_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_SettingsEntry_Scalar_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_SettingsEntry_Scalar_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_SettingsEntry_Scalar_C_OnMouseLeave");
static_assert(sizeof(WBP_SettingsEntry_Scalar_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_SettingsEntry_Scalar_C_OnMouseLeave");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_SettingsEntry_Scalar_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_SettingsEntry_Scalar.WBP_SettingsEntry_Scalar_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_SettingsEntry_Scalar_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_SettingsEntry_Scalar_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_SettingsEntry_Scalar_C_OnMouseEnter");
static_assert(sizeof(WBP_SettingsEntry_Scalar_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_SettingsEntry_Scalar_C_OnMouseEnter");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_SettingsEntry_Scalar_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_SettingsEntry_Scalar_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_SettingsEntry_Scalar.WBP_SettingsEntry_Scalar_C.GetPrimaryGamepadFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_SettingsEntry_Scalar_C_GetPrimaryGamepadFocusWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingsEntry_Scalar_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong alignment on WBP_SettingsEntry_Scalar_C_GetPrimaryGamepadFocusWidget");
static_assert(sizeof(WBP_SettingsEntry_Scalar_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong size on WBP_SettingsEntry_Scalar_C_GetPrimaryGamepadFocusWidget");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_GetPrimaryGamepadFocusWidget, ReturnValue) == 0x000000, "Member 'WBP_SettingsEntry_Scalar_C_GetPrimaryGamepadFocusWidget::ReturnValue' has a wrong offset!");

// Function WBP_SettingsEntry_Scalar.WBP_SettingsEntry_Scalar_C.ExecuteUbergraph_WBP_SettingsEntry_Scalar
// 0x0178 (0x0178 - 0x0000)
struct WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_60C8[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B8(0x0078)(ConstParm)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue_1;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C9[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_InValue_ImplicitCast;            // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_InValue_ImplicitCast_1;          // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar) == 0x000008, "Wrong alignment on WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar");
static_assert(sizeof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar) == 0x000178, "Wrong size on WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, EntryPoint) == 0x000000, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, K2Node_Event_MyGeometry) == 0x000004, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, K2Node_Event_MouseEvent) == 0x0000B8, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, K2Node_ComponentBoundEvent_Button_1) == 0x000130, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, K2Node_ComponentBoundEvent_Button) == 0x000138, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_GetValue_ReturnValue) == 0x000140, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, K2Node_ComponentBoundEvent_Value) == 0x000144, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000148, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000150, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_GetValue_ReturnValue_1) == 0x000158, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000160, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000168, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_SetValue_InValue_ImplicitCast) == 0x000170, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_SetValue_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar, CallFunc_SetValue_InValue_ImplicitCast_1) == 0x000174, "Member 'WBP_SettingsEntry_Scalar_C_ExecuteUbergraph_WBP_SettingsEntry_Scalar::CallFunc_SetValue_InValue_ImplicitCast_1' has a wrong offset!");

// Function WBP_SettingsEntry_Scalar.WBP_SettingsEntry_Scalar_C.BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Slider_SettingValue_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function WBP_SettingsEntry_Scalar.WBP_SettingsEntry_Scalar_C.BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_SettingsEntry_Scalar.WBP_SettingsEntry_Scalar_C.BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_SettingsEntry_Scalar_C_BndEvt__WBP_SettingsEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}

