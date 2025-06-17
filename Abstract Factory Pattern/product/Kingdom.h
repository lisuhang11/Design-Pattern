#pragma once
#ifndef _KINGDOM_H_
#define _KINGDOM_H_
#include<string>
namespace afp{
    class Castle{
    public:
        virtual std::string getDescription()=0;
    };

    class King{
    public:
        virtual std::string getDescription()=0;
    };

    class Army{
    public:
        virtual std::string getDescription()=0;
    };
}
#endif