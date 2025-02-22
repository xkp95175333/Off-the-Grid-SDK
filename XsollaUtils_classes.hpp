#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XsollaUtils

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class XsollaUtils.XsollaDemoGameModeBase
// 0x0010 (0x0348 - 0x0338)
class AXsollaDemoGameModeBase final : public AGameModeBase
{
public:
	TSubclassOf<class UUserWidget>                LoginDemo;                                         // 0x0338(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UUserWidget>                StoreDemo;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	TSubclassOf<class UUserWidget> GetLoginDemo() const;
	TSubclassOf<class UUserWidget> GetStoreDemo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaDemoGameModeBase">();
	}
	static class AXsollaDemoGameModeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AXsollaDemoGameModeBase>();
	}
};
static_assert(alignof(AXsollaDemoGameModeBase) == 0x000008, "Wrong alignment on AXsollaDemoGameModeBase");
static_assert(sizeof(AXsollaDemoGameModeBase) == 0x000348, "Wrong size on AXsollaDemoGameModeBase");
static_assert(offsetof(AXsollaDemoGameModeBase, LoginDemo) == 0x000338, "Member 'AXsollaDemoGameModeBase::LoginDemo' has a wrong offset!");
static_assert(offsetof(AXsollaDemoGameModeBase, StoreDemo) == 0x000340, "Member 'AXsollaDemoGameModeBase::StoreDemo' has a wrong offset!");

// Class XsollaUtils.XsollaUtilsImageLoader
// 0x0020 (0x0048 - 0x0028)
class UXsollaUtilsImageLoader final : public UObject
{
public:
	uint8                                         Pad_281E[0x20];                                    // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void LoadImage(const class FString& URL, const TDelegate<void(const struct FSlateBrush& ImageBrush, const class FString& ImageUrl)>& SuccessCallback, const TDelegate<void(const class FString& ImageUrl)>& ErrorCallback);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaUtilsImageLoader">();
	}
	static class UXsollaUtilsImageLoader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaUtilsImageLoader>();
	}
};
static_assert(alignof(UXsollaUtilsImageLoader) == 0x000008, "Wrong alignment on UXsollaUtilsImageLoader");
static_assert(sizeof(UXsollaUtilsImageLoader) == 0x000048, "Wrong size on UXsollaUtilsImageLoader");

// Class XsollaUtils.XsollaUtilsLibrary
// 0x0000 (0x0028 - 0x0028)
class UXsollaUtilsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FXsollaJsonVariant Conv_BoolToXsollaJsonVariant(bool Value);
	static struct FXsollaJsonVariant Conv_FloatToXsollaJsonVariant(float Value);
	static struct FXsollaJsonVariant Conv_IntToXsollaJsonVariant(int32 Value);
	static struct FXsollaJsonVariant Conv_StringToXsollaJsonVariant(const class FString& Value);
	static void CreateCustomRequest(const class FString& URL, const class FString& Verb, const TDelegate<void(const class FString& Data)>& SuccessCallback, const TDelegate<void(const class FString& Code, const class FString& Description)>& ErrorCallback);
	static void GetDefaultObject(TSubclassOf<class UObject> ObjectClass, class UObject** DefaultObj);
	static class UXsollaUtilsImageLoader* GetImageLoader();
	static bool GetJsonIntField(const class FString& Data, const class FString& Key, int32* IValue);
	static bool GetJsonStringField(const class FString& Data, const class FString& Key, class FString* IValue);
	static int64 GetSecondsFromUnixTimestamp(const struct FDateTime& DateTime);
	static struct FDateTime MakeDateTimeFromTimestamp(const int64 Time);
	static void SetPartnerInfo(const class FString& Referral, const class FString& ReferralVersion);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaUtilsLibrary">();
	}
	static class UXsollaUtilsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaUtilsLibrary>();
	}
};
static_assert(alignof(UXsollaUtilsLibrary) == 0x000008, "Wrong alignment on UXsollaUtilsLibrary");
static_assert(sizeof(UXsollaUtilsLibrary) == 0x000028, "Wrong size on UXsollaUtilsLibrary");

// Class XsollaUtils.XsollaUtilsTokenParser
// 0x0000 (0x0028 - 0x0028)
class UXsollaUtilsTokenParser final : public UBlueprintFunctionLibrary
{
public:
	static bool GetBoolTokenParam(const class FString& Token, const class FString& ParamName, bool* ParamValue);
	static bool GetInt64TokenParam(const class FString& Token, const class FString& ParamName, int64* ParamValue);
	static bool GetStringTokenParam(const class FString& Token, const class FString& ParamName, class FString* ParamValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaUtilsTokenParser">();
	}
	static class UXsollaUtilsTokenParser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaUtilsTokenParser>();
	}
};
static_assert(alignof(UXsollaUtilsTokenParser) == 0x000008, "Wrong alignment on UXsollaUtilsTokenParser");
static_assert(sizeof(UXsollaUtilsTokenParser) == 0x000028, "Wrong size on UXsollaUtilsTokenParser");

// Class XsollaUtils.XsollaWorldObject
// 0x0008 (0x0030 - 0x0028)
class UXsollaWorldObject final : public UObject
{
public:
	class UUserWidget*                            Owner;                                             // 0x0028(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XsollaWorldObject">();
	}
	static class UXsollaWorldObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXsollaWorldObject>();
	}
};
static_assert(alignof(UXsollaWorldObject) == 0x000008, "Wrong alignment on UXsollaWorldObject");
static_assert(sizeof(UXsollaWorldObject) == 0x000030, "Wrong size on UXsollaWorldObject");
static_assert(offsetof(UXsollaWorldObject, Owner) == 0x000028, "Member 'UXsollaWorldObject::Owner' has a wrong offset!");

}

