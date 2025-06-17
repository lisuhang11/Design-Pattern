#pragma once 
#ifndef _ELFKINGDOM_H_
#define _ELFKINGDOM_H_
#include "Kingdom.h"
namespace afp{
    class ElfCastle:public Castle{
    public:
        std::string getDescription();

    };

    class ElfKing:public King{
    public:
        std::string getDescription();
    };

    class ElfArmy:public Army{
    public:
        std::string getDescription();
    };


}


#endif