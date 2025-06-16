#include "ElfBlacksmith.h"
#include "../product/ElfWeapon.h"

std::unique_ptr<fmp::Weapon> fmp::ElfBlacksmith::makeWeapon(){
    return std::make_unique<fmp::ElfWeapon>();

}