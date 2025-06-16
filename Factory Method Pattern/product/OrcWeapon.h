#pragma once

#ifndef _ORCWEAPON_H_
#define _ORCWEAPON_H_
#include "Weapon.h"
namespace fmp{
    class OrcWeapon:public Weapon{
    public:
        void showWeapon() override;

    };

}




#endif