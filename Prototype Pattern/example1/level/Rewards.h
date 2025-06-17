#pragma once


#ifndef _REWARDS_H_
#define _REWARDS_H_

//定义受保护的变量，并提供get、set方法
#define CC_SYNTHESIZE(varType, varName, funName) \
protected: varType varName; \
public: varType get##funName(void) const { return varName; } \
public: void set##funName(varType var) { varName = var; }

namespace proto
{
	class Rewards
	{
		CC_SYNTHESIZE(int, gold, Gold);
	public:
		Rewards(int gold) :gold(gold) {}
	};
}

#endif // !_REWARDS_H_