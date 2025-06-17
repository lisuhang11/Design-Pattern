#include "Level.h"

proto::Prototype* proto::Level::clone()
{
	// 使用功能拷贝构造进行克隆
	auto nins = new Level(*this);
	nins->setAutoRelease(false);
	return nins;
}

proto::Level::Level()
{
	this->m_rewards = nullptr;
	this->m_autoRelease = true;
}

proto::Level::~Level()
{
	if (!m_autoRelease) return;
	if (m_rewards)
	{
		delete m_rewards;
		m_rewards = nullptr;
	}
	for (auto enemy : m_monsters)
	{
		delete enemy;
	}
	m_monsters.clear();
}



void proto::Level::printInfo()
{
	std::cout << "关卡名称:" << m_name << std::endl;
	std::cout << "关卡描述:" << m_desc << std::endl;
	if (m_rewards)
	{
		std::cout << "关卡奖励: 元宝x" << m_rewards->getGold() << std::endl;
	}
	std::cout << "关卡敌人: " << std::endl;
	for (auto& enemy : m_monsters)
	{
		std::cout << enemy->getName() << "，攻击力" << enemy->getAttack() << " 生命值" << enemy->getHP() << std::endl;
	} 
}