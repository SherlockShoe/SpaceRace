﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>
struct Func_2_t777219597;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>
struct Action_1_t3887966199;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.Callbacks/<ToIntPtr>c__AnonStorey0`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>
struct  U3CToIntPtrU3Ec__AnonStorey0_1_t218405966  : public Il2CppObject
{
public:
	// System.Func`2<System.IntPtr,T> GooglePlayGames.Native.PInvoke.Callbacks/<ToIntPtr>c__AnonStorey0`1::conversionFunction
	Func_2_t777219597 * ___conversionFunction_0;
	// System.Action`1<T> GooglePlayGames.Native.PInvoke.Callbacks/<ToIntPtr>c__AnonStorey0`1::callback
	Action_1_t3887966199 * ___callback_1;

public:
	inline static int32_t get_offset_of_conversionFunction_0() { return static_cast<int32_t>(offsetof(U3CToIntPtrU3Ec__AnonStorey0_1_t218405966, ___conversionFunction_0)); }
	inline Func_2_t777219597 * get_conversionFunction_0() const { return ___conversionFunction_0; }
	inline Func_2_t777219597 ** get_address_of_conversionFunction_0() { return &___conversionFunction_0; }
	inline void set_conversionFunction_0(Func_2_t777219597 * value)
	{
		___conversionFunction_0 = value;
		Il2CppCodeGenWriteBarrier(&___conversionFunction_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CToIntPtrU3Ec__AnonStorey0_1_t218405966, ___callback_1)); }
	inline Action_1_t3887966199 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t3887966199 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t3887966199 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
