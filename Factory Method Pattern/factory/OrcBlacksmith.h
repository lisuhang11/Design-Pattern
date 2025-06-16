#pragma once

#ifndef _ORCBLACKSMITH_H_
#define _ORCBLACKSMITH_H_
#include "Blacksmith.h"
#include <memory>
namespace fmp{
    class OrcBlacksmith:public Blacksmith{
    public:
        std::unique_ptr<Weapon> makeWeapon() override;

    };

}


#endif