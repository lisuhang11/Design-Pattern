#include "Hero.h"
#include "elem/HairColor.h"
#include "elem/HairType.h"

using namespace bp;

int main(){

	// 通过构建器构建英雄
	auto h1 = Hero::Builder("赵云")
		.withHairColor(new HairColor("黑色"))
		->build();
	auto h2 = Hero::Builder("张飞")
		.withHairType(new HairType("非主流"))
		->build();
	auto h3 = Hero::Builder("关羽")
		.withHairColor(new HairColor("白色"))
		->withHairType(new HairType("短发"))
		->build();
	// 显英雄信息
	h1->printInfo();
	h2->printInfo();
	h3->printInfo();
	// 释放资源
	delete h1;
    delete h2;
    delete h3;


    return 0;
}