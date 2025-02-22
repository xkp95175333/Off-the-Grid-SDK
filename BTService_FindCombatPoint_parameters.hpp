#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_FindCombatPoint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BTService_FindCombatPoint.BTService_FindCombatPoint_C.ExecuteUbergraph_BTService_FindCombatPoint
// 0x01A0 (0x01A0 - 0x0000)
struct BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2496[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2497[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVectorValueSet_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2498[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetBlackboardValueAsObject_ReturnValue;   // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2499[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x00A0(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint) == 0x000008, "Wrong alignment on BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint");
static_assert(sizeof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint) == 0x0001A0, "Wrong size on BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, EntryPoint) == 0x000000, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, K2Node_Event_OwnerController) == 0x000008, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_GetBlackboard_ReturnValue) == 0x000020, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_IsVectorValueSet_ReturnValue) == 0x000028, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_IsVectorValueSet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000030, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_Add_VectorVector_ReturnValue) == 0x000048, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_GetBlackboardValueAsObject_ReturnValue) == 0x000060, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_GetBlackboardValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, K2Node_DynamicCast_AsActor) == 0x000068, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, K2Node_MakeArray_Array) == 0x000090, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_LineTraceSingle_OutHit) == 0x0000A0, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint, CallFunc_LineTraceSingle_ReturnValue) == 0x000198, "Member 'BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");

// Function BTService_FindCombatPoint.BTService_FindCombatPoint_C.ClearCoverData
// 0x0018 (0x0018 - 0x0000)
struct BTService_FindCombatPoint_C_ClearCoverData final
{
public:
	class APawn*                                  InPawn;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzAICharacter*                         K2Node_DynamicCast_AsGz_AICharacter;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_FindCombatPoint_C_ClearCoverData) == 0x000008, "Wrong alignment on BTService_FindCombatPoint_C_ClearCoverData");
static_assert(sizeof(BTService_FindCombatPoint_C_ClearCoverData) == 0x000018, "Wrong size on BTService_FindCombatPoint_C_ClearCoverData");
static_assert(offsetof(BTService_FindCombatPoint_C_ClearCoverData, InPawn) == 0x000000, "Member 'BTService_FindCombatPoint_C_ClearCoverData::InPawn' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ClearCoverData, K2Node_DynamicCast_AsGz_AICharacter) == 0x000008, "Member 'BTService_FindCombatPoint_C_ClearCoverData::K2Node_DynamicCast_AsGz_AICharacter' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ClearCoverData, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BTService_FindCombatPoint_C_ClearCoverData::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BTService_FindCombatPoint.BTService_FindCombatPoint_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTService_FindCombatPoint_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_FindCombatPoint_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTService_FindCombatPoint_C_ReceiveTickAI");
static_assert(sizeof(BTService_FindCombatPoint_C_ReceiveTickAI) == 0x000018, "Wrong size on BTService_FindCombatPoint_C_ReceiveTickAI");
static_assert(offsetof(BTService_FindCombatPoint_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTService_FindCombatPoint_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTService_FindCombatPoint_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTService_FindCombatPoint_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTService_FindCombatPoint_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

}

