// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTEST_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TEST;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TEST()
	{
		if (!Z_Registration_Info_UPackage__Script_TEST.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TEST",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7E99F62F,
				0x2E7672F7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TEST.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TEST.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TEST(Z_Construct_UPackage__Script_TEST, TEXT("/Script/TEST"), Z_Registration_Info_UPackage__Script_TEST, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7E99F62F, 0x2E7672F7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
