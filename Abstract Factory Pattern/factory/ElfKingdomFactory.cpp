#include "ElfKingdomFactory.h"
#include "../product/ElfKingdom.h"

std::unique_ptr<afp::Castle> afp::ElfKingdomFactory::createCastle(){
    return std::make_unique<afp::ElfCastle>();
}

std::unique_ptr<afp::King> afp::ElfKingdomFactory::createKing(){
    return std::make_unique<afp::ElfKing>();
}

std::unique_ptr<afp::Army> afp::ElfKingdomFactory::createArmy(){
    return std::make_unique<afp::ElfArmy>();
}