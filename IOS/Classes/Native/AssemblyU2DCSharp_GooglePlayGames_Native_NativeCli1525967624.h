﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>
struct Action_1_t848455129;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<AsOnGameThreadCallback>c__AnonStorey0`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>
struct  U3CAsOnGameThreadCallbackU3Ec__AnonStorey0_1_t1525967624  : public Il2CppObject
{
public:
	// System.Action`1<T> GooglePlayGames.Native.NativeClient/<AsOnGameThreadCallback>c__AnonStorey0`1::callback
	Action_1_t848455129 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CAsOnGameThreadCallbackU3Ec__AnonStorey0_1_t1525967624, ___callback_0)); }
	inline Action_1_t848455129 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t848455129 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t848455129 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
