#include "OrcKingdomFactory.h"
#include "../product/OrcKingdom.h"

std::unique_ptr<afp::Castle> afp::OrcKingdomFactory::createCastle(){
    return std::make_unique<afp::OrcCastle>();
}

std::unique_ptr<afp::King> afp::OrcKingdomFactory::createKing(){
    return std::make_unique<afp::OrcKing>();
}

std::unique_ptr<afp::Army> afp::OrcKingdomFactory::createArmy(){
    return std::make_unique<afp::OrcArmy>();
}