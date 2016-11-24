#include "FlyingTerror.h"



FlyingTerror::FlyingTerror():
	m_hp(75), m_cost(75), 
	m_reward(50), m_damage(40)
{
}

FlyingTerror::~FlyingTerror()
{
}

int FlyingTerror::GetDamage()
{
	return m_damage;
}

int FlyingTerror::GetCost()
{
	return m_cost;
}

int FlyingTerror::GetHP()
{
	return m_hp;
}

int FlyingTerror::GetReward()
{
	return m_reward;
}

void FlyingTerror::Attack()
{
}

void FlyingTerror::Die()
{
}

void FlyingTerror::TakeDamage(int damage)
{
	m_hp -= damage;

	if (0 >= m_hp)
	{
		Die();
	}
}
