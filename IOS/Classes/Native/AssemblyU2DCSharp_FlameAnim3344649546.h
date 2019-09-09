﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t3973682211;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlameAnim
struct  FlameAnim_t3344649546  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Sprite> FlameAnim::SpriteList
	List_1_t3973682211 * ___SpriteList_2;
	// System.Int32 FlameAnim::StartingIndex
	int32_t ___StartingIndex_3;
	// System.Single FlameAnim::CycleTime
	float ___CycleTime_4;
	// System.Single FlameAnim::baseCycleTime
	float ___baseCycleTime_5;
	// UnityEngine.SpriteRenderer FlameAnim::spriteRender
	SpriteRenderer_t1209076198 * ___spriteRender_6;

public:
	inline static int32_t get_offset_of_SpriteList_2() { return static_cast<int32_t>(offsetof(FlameAnim_t3344649546, ___SpriteList_2)); }
	inline List_1_t3973682211 * get_SpriteList_2() const { return ___SpriteList_2; }
	inline List_1_t3973682211 ** get_address_of_SpriteList_2() { return &___SpriteList_2; }
	inline void set_SpriteList_2(List_1_t3973682211 * value)
	{
		___SpriteList_2 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteList_2, value);
	}

	inline static int32_t get_offset_of_StartingIndex_3() { return static_cast<int32_t>(offsetof(FlameAnim_t3344649546, ___StartingIndex_3)); }
	inline int32_t get_StartingIndex_3() const { return ___StartingIndex_3; }
	inline int32_t* get_address_of_StartingIndex_3() { return &___StartingIndex_3; }
	inline void set_StartingIndex_3(int32_t value)
	{
		___StartingIndex_3 = value;
	}

	inline static int32_t get_offset_of_CycleTime_4() { return static_cast<int32_t>(offsetof(FlameAnim_t3344649546, ___CycleTime_4)); }
	inline float get_CycleTime_4() const { return ___CycleTime_4; }
	inline float* get_address_of_CycleTime_4() { return &___CycleTime_4; }
	inline void set_CycleTime_4(float value)
	{
		___CycleTime_4 = value;
	}

	inline static int32_t get_offset_of_baseCycleTime_5() { return static_cast<int32_t>(offsetof(FlameAnim_t3344649546, ___baseCycleTime_5)); }
	inline float get_baseCycleTime_5() const { return ___baseCycleTime_5; }
	inline float* get_address_of_baseCycleTime_5() { return &___baseCycleTime_5; }
	inline void set_baseCycleTime_5(float value)
	{
		___baseCycleTime_5 = value;
	}

	inline static int32_t get_offset_of_spriteRender_6() { return static_cast<int32_t>(offsetof(FlameAnim_t3344649546, ___spriteRender_6)); }
	inline SpriteRenderer_t1209076198 * get_spriteRender_6() const { return ___spriteRender_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRender_6() { return &___spriteRender_6; }
	inline void set_spriteRender_6(SpriteRenderer_t1209076198 * value)
	{
		___spriteRender_6 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRender_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
