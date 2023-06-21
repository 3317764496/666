#include "Misc.h"
#include "../../Config/Config.h"
#include "../../Utils/Memory.h"
#include "../../SDK/SDK.h"

void Misc() {
	HudChanger();
	ZoomMod();
}

void HudChanger()
{
	UnitList list = *reinterpret_cast<UnitList*>(memory::address::cGame + memory::offset::UnitList_3);
	GameOptics* addr = *reinterpret_cast<GameOptics**>(memory::address::cGame + memory::offset::GameOptics);
	if (!list.unitList)
		return;
	HUD* HudInfo = *reinterpret_cast<HUD**>(memory::address::modulebase + memory::offset::HudInfo);

	HudInfo->penetration_crosshair = true;
	HudInfo->draw_plane_aim_indicator = true;
	if (cfg::change_hud)
	{

		addr->crosshair_distance = 2000.f;
		addr->penetration_distance = 2000.f;

		HudInfo->unit_glow = true;

		HudInfo->gunner_sight_distance = true;

		HudInfo->show_bombsight = true;
	}
	else {
		addr->crosshair_distance = 1000.f;
		addr->penetration_distance = 650.f;

		HudInfo->unit_glow = false;

		HudInfo->gunner_sight_distance = false;

		HudInfo->show_bombsight = false;
	}
	return;
}

void ZoomMod()
{
	UnitList list = *reinterpret_cast<UnitList*>(memory::address::cGame + memory::offset::UnitList_3);
	if (!list.unitList)
		return;
	Player* localplayer = *reinterpret_cast<Player**>(memory::address::modulebase + memory::offset::LocalPlayer);
	if (localplayer->IsinHangar())
		return;
	if (localplayer->OwnedUnit == NULL or localplayer->OwnedUnit->UnitInfo == NULL)
		return;

	if (cfg::zoom_mod)
	{
		localplayer->OwnedUnit->UnitInfo->ZoomMulti = cfg::zoom_mult;
		localplayer->OwnedUnit->UnitInfo->AlternateMulti = cfg::alt_mult;
		localplayer->OwnedUnit->UnitInfo->ShadowMulti = cfg::shadow_mult;
	}
	else
	{
		localplayer->OwnedUnit->UnitInfo->ZoomMulti = cfg::DEFAULT_ZOOM_MULT;
		localplayer->OwnedUnit->UnitInfo->AlternateMulti = cfg::DEFAULT_ALT_MULT;
		localplayer->OwnedUnit->UnitInfo->ShadowMulti = cfg::DEFAULT_SHADOW_MULT;
	}
	return;
}