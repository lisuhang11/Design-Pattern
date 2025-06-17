#pragma once
#ifndef _ELFKINGDOMFACTORY_H_
#define _ELFKINGDOMFACTORY_H_
#include "KingdomFactory.h"
namespace afp{
    class ElfKingdomFactory:public KingdomFactory{
    public:
        std::unique_ptr<Castle> createCastle() override;
        std::unique_ptr<King> createKing() override;
        std::unique_ptr<Army> createArmy() override;
        
    };


}



#endif