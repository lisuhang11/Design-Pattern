#pragma once

#ifndef _BLACKSMITH_H_
#define _BLACKSMITH_H_
#include "../product/Weapon.h"
#include <memory>
namespace fmp{
    class Blacksmith{
    public:
        virtual std::unique_ptr<Weapon> makeWeapon()=0;
    };

}


#endif