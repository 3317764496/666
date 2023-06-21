#pragma once

class GameOptics
{
public:
	char pad_000[360];
	float crosshair_distance;
	float penetration_distance;
};

class HUD
{
public:
	char pad_0000[649]; //0x0000
	bool draw_plane_aim_indicator; //0x0289
	char pad_028A[10]; //0x028A
	bool penetration_crosshair; //0x0294
	bool unit_glow; //0x0295
	bool gunner_sight_distance; //0x0296
	char pad_0297[69]; //0x0297
	bool show_bombsight; //0x02DC
}; 
