#include "OrcBlacksmith.h"
#include "../product/OrcWeapon.h"

std::unique_ptr<fmp::Weapon> fmp::OrcBlacksmith::makeWeapon(){
    return std::make_unique<fmp::OrcWeapon>();

}