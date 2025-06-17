#pragma once

#ifndef _KINGDOMFACTORY_H_
#define _KINGDOMFACTORY_H_

#include "../product/Kingdom.h"
#include <memory>
namespace afp{
    class KingdomFactory{
    public:
        virtual std::unique_ptr<Castle> createCastle()=0;
        virtual std::unique_ptr<King> createKing()=0;
        virtual std::unique_ptr<Army> createArmy()=0;

    };
}



#endif