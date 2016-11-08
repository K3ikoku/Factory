#include "ZombieHound.h"



ZombieHound::ZombieHound():
	m_hp(50)
{
}


ZombieHound::~ZombieHound()
{
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
