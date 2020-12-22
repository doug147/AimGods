#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      AnimationStateEnum[0x28];                                  // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.AnimationSharingStateProcessor.AnimationStateEnum


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}


	void ProcessActorState(int* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};

// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability                ScalabilitySettings;                                       // 0x0038(0x0010) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}


};

// Class AnimationSharing.AnimationSharingManager
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                           Skeletons;                                                 // 0x0028(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A84F[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}


	void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);
	class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* WorldContextObject);
	bool STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);
	bool STATIC_AnimationSharingEnabled();
};

// Class AnimationSharing.AnimSharingInstance
// 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                              RegisteredActors;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BG79[0x70];                                    // 0x0038(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationSharingStateProcessor*             StateProcessor;                                            // 0x00A8(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YNAC[0x38];                                    // 0x00B0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                    // 0x00E8(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I5GV[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnum*                                       StateEnum;                                                 // 0x0108(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SharingActor;                                              // 0x0110(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSAF[0x20];                                    // 0x0118(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}


};

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       BaseComponent;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                         // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Alpha;                                                     // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStateBool;                                                // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KZ8G[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}


};

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       FromComponent;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USkeletalMeshComponent>       ToComponent;                                               // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlendTime;                                                 // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBlendBool;                                                // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W6H6[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}


};

// Class AnimationSharing.AnimSharingStateInstance
// 0x0028 (FullSize[0x0290] - InheritedSize[0x0268])
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                               AnimationToPlay;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PermutationTimeOffset;                                     // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayRate;                                                  // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStateBool;                                                // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BHK5[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSharingInstance*                        Instance;                                                  // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YDJX[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}


	void GetInstancedActors(TArray<class AActor*>* Actors);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
