//#include "Weapons.h"
//
//class Ammo* WeaponInfo::GetAmmo(int currentSlot)
//{
//    if (AmmoHandler == nullptr)
//    {
//        return nullptr;
//    }
//
//    auto AmmoAddress = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(this) + 0x98 + 0xB8 * currentSlot);
//    return reinterpret_cast<class Ammo*>(AmmoAddress);
//}