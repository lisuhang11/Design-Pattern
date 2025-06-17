#pragma once

#ifndef _HAIRTYPE_H_
#define _HAIRTYPE_H_
#include<string>
namespace bp{
    class HairType{
    protected:
        std::string type;
    public:
        std::string getHairtype(){
            return type;
        }
        void setHairtype(std::string var){
            type = var;
        }
        HairType(std::string type) :type(type) {};

    };






}






#endif