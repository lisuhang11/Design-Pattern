#pragma once

#ifndef _HERO_H_
#define _HERO_H_
#include<iostream>
#include<string>
#include "elem/HairColor.h"
#include "elem/HairType.h"
//定义受保护的变量，并提供get方法
#define CC_SYNTHESIZE_GET(varType,varName,funName)protected: varType varName;public: varType get##funName(void)const{return varName;}
namespace bp{
    class Hero{
        CC_SYNTHESIZE_GET(std::string,name,Name);
        CC_SYNTHESIZE_GET(HairColor*,hairColor,HairColor);
        CC_SYNTHESIZE_GET(HairType*,hairType,HairType);
    public:
        class Builder{
            friend class Hero;
        private:
            std::string name;
            HairColor* hairColor;
            HairType* hairType;
        public:
            Builder(std::string name);
            Builder* withHairColor(HairColor* haircolor);
            Builder* withHairType(HairType* hairtype);
            Hero* build();
        };
    public:
        ~Hero();
        void printInfo();
    private:
        Hero(Builder* builder);


    };




}





#endif