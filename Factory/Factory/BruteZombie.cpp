#include "BruteZombie.h"



BruteZombie::BruteZombie():
	m_hp(150), m_cost(100)
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
