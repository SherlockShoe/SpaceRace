﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.UnsupportedSavedGamesClient
struct  UnsupportedSavedGamesClient_t4152848242  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.Native.UnsupportedSavedGamesClient::mMessage
	String_t* ___mMessage_0;

public:
	inline static int32_t get_offset_of_mMessage_0() { return static_cast<int32_t>(offsetof(UnsupportedSavedGamesClient_t4152848242, ___mMessage_0)); }
	inline String_t* get_mMessage_0() const { return ___mMessage_0; }
	inline String_t** get_address_of_mMessage_0() { return &___mMessage_0; }
	inline void set_mMessage_0(String_t* value)
	{
		___mMessage_0 = value;
		Il2CppCodeGenWriteBarrier(&___mMessage_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
