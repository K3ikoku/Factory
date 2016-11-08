#include "ZombieHound.h"



ZombieHound::ZombieHound():
	m_hp(50), m_cost(35)
{
}


ZombieHound::~ZombieHound()
{
}

int ZombieHound::GetCost()
{
	return m_cost;
}

int ZombieHound::GetDamage()
{
	return m_damage;
}

void ZombieHound::Attack()
{
}

void ZombieHound::Die()
{
}

void ZombieHound::TakeDamage(int damage)
{
	m_hp -= damage;

	if (0 >= m_hp)
	{
		Die();
	}
}
