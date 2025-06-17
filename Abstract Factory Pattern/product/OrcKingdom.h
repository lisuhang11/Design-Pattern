#pragma once 
#ifndef _ORCKINGDOM_H_
#define _ORCKINGDOM_H_
#include "Kingdom.h"
namespace afp{
    class OrcCastle:public Castle{
    public:
        std::string getDescription();

    };

    class OrcKing:public King{
    public:
        std::string getDescription();
    };

    class OrcArmy:public Army{
    public:
        std::string getDescription();
    };


}


#endif