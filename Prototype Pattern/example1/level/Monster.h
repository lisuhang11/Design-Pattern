#pragma once

#include <string>

//定义受保护的变量，并提供get、set方法
#define CC_SYNTHESIZE(varType, varName, funName) \
protected: varType varName; \
public: varType get##funName(void) const { return varName; } \
public: void set##funName(varType var) { varName = var; }

#ifndef _MONSTER_H_
#define _MONSTER_H_

namespace proto
{
	class Monster
	{
		CC_SYNTHESIZE(std::string, m_name, Name);
		CC_SYNTHESIZE(int, m_hp, HP);
		CC_SYNTHESIZE(int, m_attack, Attack);
	public:
		Monster(std::string name, int hp, int attack) :m_hp(hp), m_attack(attack), m_name(name) {}
	};
}

#endif // !_MONSTER_H_