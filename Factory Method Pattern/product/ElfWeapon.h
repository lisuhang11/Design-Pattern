#pragma once
#include "Weapon.h"

#ifndef _ELFWEAPON_H_
#define _ELFWEAPON_H_

namespace fmp{
    class ElfWeapon:public Weapon{
    public:
        void showWeapon() override;
    };
}

#endif