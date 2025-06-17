#pragma once
#ifndef _ORCKINGDOMFACTORY_H_
#define _ORCKINGDOMFACTORY_H_
#include "KingdomFactory.h"
namespace afp{
    class OrcKingdomFactory:public KingdomFactory{
    public:
        std::unique_ptr<Castle> createCastle() override;
        std::unique_ptr<King> createKing() override;
        std::unique_ptr<Army> createArmy() override;
        
    };


}



#endif