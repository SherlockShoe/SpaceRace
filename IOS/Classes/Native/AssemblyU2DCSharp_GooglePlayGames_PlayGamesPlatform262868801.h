﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t3885079697;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesPlatform/<LoadAchievementDescriptions>c__AnonStorey1
struct  U3CLoadAchievementDescriptionsU3Ec__AnonStorey1_t262868801  : public Il2CppObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> GooglePlayGames.PlayGamesPlatform/<LoadAchievementDescriptions>c__AnonStorey1::callback
	Action_1_t3885079697 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLoadAchievementDescriptionsU3Ec__AnonStorey1_t262868801, ___callback_0)); }
	inline Action_1_t3885079697 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3885079697 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3885079697 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
