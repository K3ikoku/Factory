#include "Knight.h"



Knight::Knight():
	m_hp(250), m_cost(250), 
	m_reward(200), m_damage(75)
{
}


Knight::~Knight()
{
}

int Knight::GetDamage()
{
	return m_damage;
}

int Knight::GetCost()
{
	return m_cost;
}

int Knight::GetHP()
{
	return m_hp;
}

int Knight::GetReward()
{
	return m_reward;
}

void Knight::Attack()
{
}

void Knight::Die()
{
}

void Knight::TakeDamage(int damage)
{
	m_hp -= damage;

	if (0 >= m_hp)
	{
		Die();
	}
}
