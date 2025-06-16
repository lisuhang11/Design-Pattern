#include<iostream>
#include <memory>
#include "factory/Blacksmith.h"
#include "factory/ElfBlacksmith.h"
#include "factory/OrcBlacksmith.h"
#include "product/Weapon.h"
#include "product/OrcWeapon.h"
#include "product/ElfWeapon.h"


int main(){
    std::unique_ptr<fmp::ElfBlacksmith> eb= std::make_unique<fmp::ElfBlacksmith>();
    auto Elfw = eb->makeWeapon();
    Elfw->showWeapon();

    std::unique_ptr<fmp::OrcBlacksmith> ob= std::make_unique<fmp::OrcBlacksmith>();
    auto Orcw = ob->makeWeapon();
    Orcw->showWeapon();




    return 0;
}