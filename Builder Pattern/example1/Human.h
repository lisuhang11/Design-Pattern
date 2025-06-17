#pragma once

#ifndef _HUMAN_H_
#define _HUMAN_H_
#include<string>
#include<iostream>

namespace bp{
    class Human{
    protected:
        std::string type;
        std::string region;

    public:
        std::string getType(){
            return type;
        }
        void setType(std::string var){
            type = var;
        }
        std::string getRegion(){
            return region;
        }
        void setRegion(std::string var){
            region = var;
        }

        void printInfo(){
            std::cout<<"type:"<<type<<" "<<"region:"<<region<<std::endl;
        }

    };

}




#endif