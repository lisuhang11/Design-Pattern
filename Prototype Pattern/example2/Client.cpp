
#include "level/Level.h"
#include <iostream>
using namespace proto;
int main()
{
	// 创建原型对象的实例
	Level* proto = new Level();
	proto->setName("哥布林之乡");
	proto->setDescription("这一关哥布林太多了");
	proto->getMonsters().emplace_back(new Monster("普通哥布林", 20, 5));
	proto->getMonsters().emplace_back(new Monster("投石哥布林", 10, 8));
	proto->getMonsters().emplace_back(new Monster("精英哥布林", 40, 15));
	proto->setRewards(new Rewards(200));

	// 基于原型对象创建新实例
	Level* clone = (Level*)proto->clone();

	// 显示原型对象和克隆对象的数据
	std::cout << "原型对象：" << std::endl;
	proto->printInfo();
	std::cout << "克隆对象：" << std::endl;
	clone->printInfo();

	// 修改新实例的数据，在显示数据进行对比
	std::cout << std::endl;
	clone->setName("哥布林之岛");
	clone->getRewards()->setGold(1000);
	std::cout << "修改后的原型对象：" << std::endl;
	proto->printInfo();
	std::cout << "修改后的克隆对象：" << std::endl;
	clone->printInfo();

	// 检查赋值运算
    std::cout << std::endl;
	*clone = *proto;
	std::cout << "赋值运算的原型对象：" << std::endl;
	proto->printInfo();
	std::cout << "赋值运算的克隆对象：" << std::endl;
	clone->printInfo();

	// 释放资源
	delete proto;
	delete clone;
	return 0;
}
