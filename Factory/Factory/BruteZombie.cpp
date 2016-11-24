#include "BruteZombie.h"



BruteZombie::BruteZombie():
	m_hp(150), m_cost(100), 
	m_reward(75), m_damage(50)
{
}


BruteZombie::~BruteZombie()
{
}

int BruteZombie::GetDamage()
{
	return m_damage;
}

int BruteZombie::GetCost()
{
	return m_cost;
}
int BruteZombie::GetHP()
{
	return m_hp;
}
int BruteZombie::GetReward()
{
	return m_reward;
}
void BruteZombie::Attack()
{
}

void BruteZombie::Die()
{
}

void BruteZombie::TakeDamage(int damage)
{
	m_hp -= damage;
	
	if (0 >= m_hp)
	{
		Die();
	}
}
