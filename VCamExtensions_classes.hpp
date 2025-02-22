#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VCamExtensions

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "VCamExtensions_structs.hpp"
#include "VCamCore_structs.hpp"
#include "VCamCore_classes.hpp"


namespace SDK
{

// Class VCamExtensions.BaseModifierGroup
// 0x0008 (0x0030 - 0x0028)
class UBaseModifierGroup : public UObject
{
public:
	class FName                                   NodeName;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseModifierGroup">();
	}
	static class UBaseModifierGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseModifierGroup>();
	}
};
static_assert(alignof(UBaseModifierGroup) == 0x000008, "Wrong alignment on UBaseModifierGroup");
static_assert(sizeof(UBaseModifierGroup) == 0x000030, "Wrong size on UBaseModifierGroup");
static_assert(offsetof(UBaseModifierGroup, NodeName) == 0x000028, "Member 'UBaseModifierGroup::NodeName' has a wrong offset!");

// Class VCamExtensions.WidgetStyleData
// 0x0000 (0x0028 - 0x0028)
class UWidgetStyleData : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WidgetStyleData">();
	}
	static class UWidgetStyleData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidgetStyleData>();
	}
};
static_assert(alignof(UWidgetStyleData) == 0x000008, "Wrong alignment on UWidgetStyleData");
static_assert(sizeof(UWidgetStyleData) == 0x000028, "Wrong size on UWidgetStyleData");

// Class VCamExtensions.ButtonWidgetStyleData
// 0x03F8 (0x0420 - 0x0028)
class UButtonWidgetStyleData final : public UWidgetStyleData
{
public:
	uint8                                         Pad_472B[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           ButtonStyle;                                       // 0x0030(0x03F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ButtonWidgetStyleData">();
	}
	static class UButtonWidgetStyleData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonWidgetStyleData>();
	}
};
static_assert(alignof(UButtonWidgetStyleData) == 0x000010, "Wrong alignment on UButtonWidgetStyleData");
static_assert(sizeof(UButtonWidgetStyleData) == 0x000420, "Wrong size on UButtonWidgetStyleData");
static_assert(offsetof(UButtonWidgetStyleData, ButtonStyle) == 0x000030, "Member 'UButtonWidgetStyleData::ButtonStyle' has a wrong offset!");

// Class VCamExtensions.ModifierBoundWidgetStyleDefinitions
// 0x0000 (0x0028 - 0x0028)
class UModifierBoundWidgetStyleDefinitions : public UObject
{
public:
	class UWidgetStyleData* GetStyleForConnectionPointByClass(class UVCamModifier* Modifier, class FName ConnectionPoint, TSubclassOf<class UWidgetStyleData> Param_Class) const;
	class UWidgetStyleData* GetStyleForModifierByClass(class UVCamModifier* Modifier, TSubclassOf<class UWidgetStyleData> Param_Class) const;
	class UWidgetStyleData* GetStyleForNameByClass(class FName Category, TSubclassOf<class UWidgetStyleData> Param_Class) const;
	TArray<class UWidgetStyleData*> GetStylesForConnectionPoint(class UVCamModifier* Modifier, class FName ConnectionPoint) const;
	TArray<class UWidgetStyleData*> GetStylesForModifier(class UVCamModifier* Modifier) const;
	TArray<class UWidgetStyleData*> GetStylesForName(class FName Category) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModifierBoundWidgetStyleDefinitions">();
	}
	static class UModifierBoundWidgetStyleDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModifierBoundWidgetStyleDefinitions>();
	}
};
static_assert(alignof(UModifierBoundWidgetStyleDefinitions) == 0x000008, "Wrong alignment on UModifierBoundWidgetStyleDefinitions");
static_assert(sizeof(UModifierBoundWidgetStyleDefinitions) == 0x000028, "Wrong size on UModifierBoundWidgetStyleDefinitions");

// Class VCamExtensions.ClassBasedWidgetStyleDefinitions
// 0x00A0 (0x00C8 - 0x0028)
class UClassBasedWidgetStyleDefinitions final : public UModifierBoundWidgetStyleDefinitions
{
public:
	TMap<TSubclassOf<class UVCamModifier>, struct FPerModifierClassWidgetSytleData> Config;                                            // 0x0028(0x0050)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class FName, struct FWidgetStyleDataArray> CategoriesWithoutModifier;                         // 0x0078(0x0050)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassBasedWidgetStyleDefinitions">();
	}
	static class UClassBasedWidgetStyleDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassBasedWidgetStyleDefinitions>();
	}
};
static_assert(alignof(UClassBasedWidgetStyleDefinitions) == 0x000008, "Wrong alignment on UClassBasedWidgetStyleDefinitions");
static_assert(sizeof(UClassBasedWidgetStyleDefinitions) == 0x0000C8, "Wrong size on UClassBasedWidgetStyleDefinitions");
static_assert(offsetof(UClassBasedWidgetStyleDefinitions, Config) == 0x000028, "Member 'UClassBasedWidgetStyleDefinitions::Config' has a wrong offset!");
static_assert(offsetof(UClassBasedWidgetStyleDefinitions, CategoriesWithoutModifier) == 0x000078, "Member 'UClassBasedWidgetStyleDefinitions::CategoriesWithoutModifier' has a wrong offset!");

// Class VCamExtensions.ModifierBoundWidgetStylesAsset
// 0x0008 (0x0030 - 0x0028)
class UModifierBoundWidgetStylesAsset final : public UObject
{
public:
	class UModifierBoundWidgetStyleDefinitions*   Rules;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class UWidgetStyleData* GetStyleForConnectionPointByClass(class UVCamModifier* Modifier, class FName ConnectionPoint, TSubclassOf<class UWidgetStyleData> Param_Class) const;
	class UWidgetStyleData* GetStyleForModifierByClass(class UVCamModifier* Modifier, TSubclassOf<class UWidgetStyleData> Param_Class) const;
	class UWidgetStyleData* GetStyleForNameByClass(class FName Param_Name, TSubclassOf<class UWidgetStyleData> Param_Class) const;
	TArray<class UWidgetStyleData*> GetStylesForConnectionPoint(class UVCamModifier* Modifier, class FName ConnectionPoint) const;
	TArray<class UWidgetStyleData*> GetStylesForModifier(class UVCamModifier* Modifier) const;
	TArray<class UWidgetStyleData*> GetStylesForName(class FName Category) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModifierBoundWidgetStylesAsset">();
	}
	static class UModifierBoundWidgetStylesAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModifierBoundWidgetStylesAsset>();
	}
};
static_assert(alignof(UModifierBoundWidgetStylesAsset) == 0x000008, "Wrong alignment on UModifierBoundWidgetStylesAsset");
static_assert(sizeof(UModifierBoundWidgetStylesAsset) == 0x000030, "Wrong size on UModifierBoundWidgetStylesAsset");
static_assert(offsetof(UModifierBoundWidgetStylesAsset, Rules) == 0x000028, "Member 'UModifierBoundWidgetStylesAsset::Rules' has a wrong offset!");

// Class VCamExtensions.ModifierHierarchyAsset
// 0x0008 (0x0030 - 0x0028)
class UModifierHierarchyAsset final : public UObject
{
public:
	class UModifierHierarchyRules*                Rules;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	TSet<class FName> GetChildNodes(class FName ParentGroup) const;
	bool GetConnectionPointTargetForNode(class FName GroupName, class UVCamComponent* Component, struct FVCamModifierConnectionBinding* Connection) const;
	TSet<class FName> GetGroupsContainingModifier(class UVCamModifier* Modifier) const;
	class UVCamModifier* GetModifierInNode(class UVCamComponent* Component, class FName GroupName) const;
	bool GetParentNode(class FName ChildNode, class FName* ParentNode) const;
	class FName GetRootNode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModifierHierarchyAsset">();
	}
	static class UModifierHierarchyAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModifierHierarchyAsset>();
	}
};
static_assert(alignof(UModifierHierarchyAsset) == 0x000008, "Wrong alignment on UModifierHierarchyAsset");
static_assert(sizeof(UModifierHierarchyAsset) == 0x000030, "Wrong size on UModifierHierarchyAsset");
static_assert(offsetof(UModifierHierarchyAsset, Rules) == 0x000028, "Member 'UModifierHierarchyAsset::Rules' has a wrong offset!");

// Class VCamExtensions.ModifierHierarchyRules
// 0x0000 (0x0028 - 0x0028)
class UModifierHierarchyRules : public UObject
{
public:
	TSet<class FName> GetChildNodes(class FName Node) const;
	bool GetConnectionPointTargetForNode(class FName GroupName, class UVCamComponent* Component, struct FVCamModifierConnectionBinding* Connection) const;
	class UVCamModifier* GetModifierInNode(class UVCamComponent* Component, class FName NodeName) const;
	TSet<class FName> GetNodesContainingModifier(class UVCamModifier* Modifier) const;
	bool GetParentNode(class FName ChildNode, class FName* ParentNode) const;
	class FName GetRootNode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModifierHierarchyRules">();
	}
	static class UModifierHierarchyRules* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModifierHierarchyRules>();
	}
};
static_assert(alignof(UModifierHierarchyRules) == 0x000008, "Wrong alignment on UModifierHierarchyRules");
static_assert(sizeof(UModifierHierarchyRules) == 0x000028, "Wrong size on UModifierHierarchyRules");

// Class VCamExtensions.TargetBasedWidgetStyleDefinitions
// 0x00A0 (0x00C8 - 0x0028)
class UTargetBasedWidgetStyleDefinitions final : public UModifierBoundWidgetStyleDefinitions
{
public:
	TMap<class FName, struct FTargettedModifierStyleConfig> ModifierToStyle;                                   // 0x0028(0x0050)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class FName, struct FWidgetStyleDataArray> CategoriesWithoutModifier;                         // 0x0078(0x0050)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TargetBasedWidgetStyleDefinitions">();
	}
	static class UTargetBasedWidgetStyleDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetBasedWidgetStyleDefinitions>();
	}
};
static_assert(alignof(UTargetBasedWidgetStyleDefinitions) == 0x000008, "Wrong alignment on UTargetBasedWidgetStyleDefinitions");
static_assert(sizeof(UTargetBasedWidgetStyleDefinitions) == 0x0000C8, "Wrong size on UTargetBasedWidgetStyleDefinitions");
static_assert(offsetof(UTargetBasedWidgetStyleDefinitions, ModifierToStyle) == 0x000028, "Member 'UTargetBasedWidgetStyleDefinitions::ModifierToStyle' has a wrong offset!");
static_assert(offsetof(UTargetBasedWidgetStyleDefinitions, CategoriesWithoutModifier) == 0x000078, "Member 'UTargetBasedWidgetStyleDefinitions::CategoriesWithoutModifier' has a wrong offset!");

// Class VCamExtensions.SingleModifierPerNodeWithTargetSettings
// 0x0020 (0x0050 - 0x0030)
class USingleModifierPerNodeWithTargetSettings final : public UBaseModifierGroup
{
public:
	struct FVCamConnectionTargetSettings          TargetSettings;                                    // 0x0030(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class USingleModifierPerNodeWithTargetSettings*> ChildElements;                                     // 0x0040(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleModifierPerNodeWithTargetSettings">();
	}
	static class USingleModifierPerNodeWithTargetSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleModifierPerNodeWithTargetSettings>();
	}
};
static_assert(alignof(USingleModifierPerNodeWithTargetSettings) == 0x000008, "Wrong alignment on USingleModifierPerNodeWithTargetSettings");
static_assert(sizeof(USingleModifierPerNodeWithTargetSettings) == 0x000050, "Wrong size on USingleModifierPerNodeWithTargetSettings");
static_assert(offsetof(USingleModifierPerNodeWithTargetSettings, TargetSettings) == 0x000030, "Member 'USingleModifierPerNodeWithTargetSettings::TargetSettings' has a wrong offset!");
static_assert(offsetof(USingleModifierPerNodeWithTargetSettings, ChildElements) == 0x000040, "Member 'USingleModifierPerNodeWithTargetSettings::ChildElements' has a wrong offset!");

// Class VCamExtensions.TargetModifierPerNodeHierarchyRules
// 0x0008 (0x0030 - 0x0028)
class UTargetModifierPerNodeHierarchyRules final : public UModifierHierarchyRules
{
public:
	class USingleModifierPerNodeWithTargetSettings* Root;                                              // 0x0028(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TargetModifierPerNodeHierarchyRules">();
	}
	static class UTargetModifierPerNodeHierarchyRules* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetModifierPerNodeHierarchyRules>();
	}
};
static_assert(alignof(UTargetModifierPerNodeHierarchyRules) == 0x000008, "Wrong alignment on UTargetModifierPerNodeHierarchyRules");
static_assert(sizeof(UTargetModifierPerNodeHierarchyRules) == 0x000030, "Wrong size on UTargetModifierPerNodeHierarchyRules");
static_assert(offsetof(UTargetModifierPerNodeHierarchyRules, Root) == 0x000028, "Member 'UTargetModifierPerNodeHierarchyRules::Root' has a wrong offset!");

// Class VCamExtensions.VCamBaseActorWithPreset
// 0x0000 (0x0A70 - 0x0A70)
class AVCamBaseActorWithPreset final : public AVCamBaseActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VCamBaseActorWithPreset">();
	}
	static class AVCamBaseActorWithPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVCamBaseActorWithPreset>();
	}
};
static_assert(alignof(AVCamBaseActorWithPreset) == 0x000010, "Wrong alignment on AVCamBaseActorWithPreset");
static_assert(sizeof(AVCamBaseActorWithPreset) == 0x000A70, "Wrong size on AVCamBaseActorWithPreset");

}

