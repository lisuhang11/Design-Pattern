
#include "Level.h"
#include <iostream>

void proto::Level::copy(const Level& other)
{
	this->m_name = other.m_name;
	this->m_desc = other.m_desc;
	if (other.m_rewards)
	{
        this->m_rewards = new Rewards(*other.m_rewards);
	}
	for (auto& enemy : other.m_monsters)
	{
		this->m_monsters.emplace_back(new Monster(*enemy));
	}
}

void proto::Level::release()
{
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

proto::Prototype* proto::Level::clone()
{
	// ʹ�ÿ���������п�¡
	return new Level(*this);
}

proto::Level::Level()
{
	this->m_rewards = nullptr;
}

proto::Level& proto::Level::operator=(const Level& other)
{
	// ���ͷ��ڴ�
    release();
	// ��ִ�п���
    copy(other);
	return *this;
}

proto::Level::Level(const Level& other)
{
	// ִ�п���
	copy(other);
}

proto::Level::~Level()
{
	release();
}

void proto::Level::printInfo()
{
	std::cout << "�ؿ�����:" << m_name << std::endl;
	std::cout << "�ؿ�����:" << m_desc << std::endl;
	if (m_rewards)
	{
		std::cout << "�ؿ�����: Ԫ��x" << m_rewards->getGold() << std::endl;
	}
	std::cout << "�ؿ�����: " << std::endl;
	for (auto& enemy : m_monsters)
	{
		std::cout << enemy->getName() << "��������" << enemy->getAttack() << " ����ֵ" << enemy->getHP() << std::endl;
	}
}
