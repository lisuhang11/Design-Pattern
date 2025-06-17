#include "Hero.h"



bp::Hero::Builder::Builder(std::string name){
    this->name=name;
    this->hairColor=nullptr;
    this->hairType=nullptr;
    
}

bp::Hero* bp::Hero::Builder::build(){
    return new Hero(this);
}

bp::Hero::Builder* bp::Hero::Builder::withHairColor(HairColor* haircolor){
    this->hairColor=haircolor;
    return this;

}

bp::Hero::Builder* bp::Hero::Builder::withHairType(HairType* hairtype){
    this->hairType=hairtype;
    return this;

}

bp::Hero::~Hero(){

    if(hairColor){
        delete hairColor;
    }
    if(hairType){
        delete hairType;
    }

}

bp::Hero::Hero(Builder* builder){
    this->hairColor=builder->hairColor;
    this->hairType=builder->hairType;
    this->name=builder->name;
}

void bp::Hero::printInfo(){
    std::cout<<"name:"<<name<<" ";
    if(hairColor){
        std::cout<<"hairColor:"<<hairColor->getHairColor()<<" ";
    }
    if(hairType){
        std::cout<<"hairType:"<<hairType->getHairtype()<<" ";
    }
}