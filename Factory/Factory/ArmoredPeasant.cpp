#include "ArmoredPeasant.h"


ArmoredPeasant::ArmoredPeasant() :
	m_hp(75), m_cost(50), 
	m_reward(25), m_damage(25)
{
}


ArmoredPeasant::~ArmoredPeasant()
{
}

int ArmoredPeasant::GetDamage()
{
	return m_damage;
}

int ArmoredPeasant::GetCost()
{
	return m_cost;
}

int ArmoredPeasant::GetHP()
{
	return m_hp;
}

int ArmoredPeasant::GetReward()
{
	return m_reward;
}

void ArmoredPeasant::Attack()
{
}

void ArmoredPeasant::Die()
{
}

void ArmoredPeasant::TakeDamage(int damage)
{
	m_hp -= damage;

	if (0 >= m_hp)
	{
		Die();
	}
}

