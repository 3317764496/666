#pragma once
#include <array>
#include "../Utils/Math.h"


//Classes for bombs and rockets - projectiles
class Projectile
{
public:
	char pad_0000[456]; //0x0000
	char* Name; //0x01C8
	char pad_01D0[224]; //0x01D0
	Vector3 Position; //0x02B0
	char pad_02BC[316]; //0x02BC
	class Unit* OwnerUnit; //0x03F8
	class Player* OwnerPlayer; //0x0400
	char pad_0408[472]; //0x0408
	float Lifetime; //0x05E0
	char pad_05E4[8]; //0x05E4
	float ExplodeTime; //0x05EC
	char pad_05F0[104]; //0x05F0
	float BombDelay; //0x0658


	float getExpodeTime() {
		return ExplodeTime <= 0 ? BombDelay : (BombDelay - ExplodeTime);
	}
}; 


class Projectiles {
public:
	std::array<Projectile*, 100U> projectiles;
};

class ProjectileList {
public:
	Projectiles* projectileList;
};

//
//class Armory
//{
//public:
//	char pad_0000[128]; //0x0000
//	class WeaponPositionInfo* WeaponPositionInfo; //0x0080
//	char pad_0088[8]; //0x0088
//	int32_t WeaponPositionInfoCount; //0x0090
//	char pad_0094[252]; //0x0094
//	class ControllableWeapon* ControllableWeapons; //0x0190
//	char pad_0198[8]; //0x0198
//	int32_t ControllableWeaponsCount; //0x01A0
//	char pad_01A4[468]; //0x01A4
//	class Weapon** Weapons; //0x0378
//	char pad_0380[8]; //0x0380
//	int32_t WeaponCount; //0x0388
//	char pad_038C[4]; //0x038C
//};
//class WeaponPositionInfo
//{
//public:
//	class WeaponPositionInfoInternal* InternalInfo; //0x0000
//	char pad_0008[596]; //0x0008
//	Vector3 Position; //0x025C
//};
//
//class ControllableWeapon
//{
//public:
//	char pad_0000[8]; //0x0000
//	class Weapon* WeaponPtr; //0x0008
//	char pad_0010[72]; //0x0010
//	Vector2 Rotation; //0x0058
//};
//
//class Weapon
//{
//public:
//	char pad_0000[36]; //0x0000
//	int16_t ControllableWeaponIndex; //0x0024
//	char pad_0026[202]; //0x0026
//	Vector3 Forward; //0x00F0
//	Vector3 Up; //0x00FC
//	Vector3 Left; //0x0108
//	char pad_0114[388]; //0x0114
//	class WeaponInfo* WeaponInfo; //0x0298
//	char pad_02A0[372]; //0x02A0
//	uint8_t ActiveSlot; //0x0414
//	uint8_t SelectedSlot; //0x0415
//};
//
//
//class WeaponPositionInfoInternal
//{
//public:
//	char pad_0000[580]; //0x0000
//	Vector3 Position; //0x0244
//};
//
//#ifndef WEAPON_INFO_H
//#define WEAPON_INFO_H
//
//class WeaponInfo
//{
//public:
//	char* WeaponName; //0x0000
//	char pad_0008[144]; //0x0008
//	class AmmoList* AmmoHandler; //0x0098
//
//	class Ammo* GetAmmo(int currentSlot);
//};
//
//#endif // WEAPON_INFO_H
//
//
//
//class AmmoList
//{
//public:
//	class Ammo* Ammo; //0x0000
//
//};
//
//class Ammo
//{
//public:
//	char* Name; //0x0000
//	char pad_0008[4]; //0x0008
//	float Mass; //0x000C
//	float Caliber; //0x0010
//	float Length; //0x0014
//	float Distance; //0x0018
//	char pad_001C[28]; //0x001C
//	float Speed; //0x0038
//};