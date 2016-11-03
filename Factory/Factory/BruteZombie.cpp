#include "BruteZombie.h"



BruteZombie::BruteZombie():
	m_hp(150)
{
}


BruteZombie::~BruteZombie()
{
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
