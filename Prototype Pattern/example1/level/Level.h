#pragma once
#ifndef _LEVEL_H_
#define _LEVEL_H_
#include<vector>
#include<iostream>
#include<string>
#include "Monster.h"
#include "Rewards.h"
#include "../Prototype.h"

//定义受保护的变量，并提供get、set方法
#define CC_SYNTHESIZE(varType, varName, funName) \
protected: varType varName; \
public: varType get##funName(void) const { return varName; } \
public: void set##funName(varType var) { varName = var; }

//定义受保护的集合变量，自动生成返回其引用的 get 方法
#define CC_SYNTHESIZE_CR_GET(varType, varName, funName) \
protected: varType varName; \
public: varType& get##funName(void) { return varName; }

namespace proto{


	class Level : public Prototype
	{
		CC_SYNTHESIZE(std::string, m_name, Name);
        CC_SYNTHESIZE(std::string, m_desc, Description);
		CC_SYNTHESIZE_CR_GET(std::vector<Monster*>, m_monsters, Monsters);
		CC_SYNTHESIZE(Rewards*, m_rewards, Rewards);
		CC_SYNTHESIZE(bool, m_autoRelease, AutoRelease);
	public:
		Prototype* clone() override;
		Level();
        ~Level();
		void printInfo();
	};




}


#endif