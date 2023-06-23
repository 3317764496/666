#pragma once
#include "../Includes.h"
#include "Math.h"

namespace memory {
	void InitMemory();

	extern Vector2 scrsize;

	namespace offset
	{
		extern uintptr_t cGame;
		extern uintptr_t LocalPlayer;
		extern uintptr_t HudInfo;
		extern uintptr_t ScreenWidth;
		extern uintptr_t IsScoping;
		extern uintptr_t mat_addr;
		extern uintptr_t BombArray;
		extern uintptr_t RocketArray;
		
		constexpr uintptr_t UnitList_1 = 0x330;
		constexpr uintptr_t UnitList_2 = 0x348;
		constexpr uintptr_t UnitList_3 = 0x360;
		constexpr uintptr_t UnitCount_1 = 0x340;
		constexpr uintptr_t UnitCount_2 = 0x358;
		constexpr uintptr_t UnitCount_3 = 0x370;
		constexpr uintptr_t CurrentMap = 0x1D0;
		constexpr uintptr_t GameOptics = 0x4A8;
		

	}
	
	namespace address {
		extern uintptr_t cGame;
		extern uintptr_t modulebase;
	}
}