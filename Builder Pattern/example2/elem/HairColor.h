#pragma once

#ifndef _HAIRCOLOR_H_
#define _HAIRCOLOR_H_
#include<string>
namespace bp{
    class HairColor{
    protected:
        std::string color;
    public:
        std::string getHairColor(){
            return color;
        }
        void setHairColor(std::string var){
            color = var;
        }
        HairColor(std::string color) :color(color) {};
    };






}






#endif