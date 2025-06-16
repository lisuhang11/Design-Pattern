#pragma once
#ifndef _ELFBLACKSMITH_H_
#define _ELFBLACKSMITH_H_
#include "Blacksmith.h"
#include <memory>
namespace fmp{
    class ElfBlacksmith:public Blacksmith{
    public:
        std::unique_ptr<Weapon> makeWeapon() override;

    };

}


#endif