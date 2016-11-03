#include "Zombie.h"



Zombie::Zombie():
	m_hp(75)
{
}


Zombie::~Zombie()
{
}

void Zombie::Attack()
{
}

void Zombie::Die()
{
}

void Zombie::TakeDamage(int damage)
{
	m_hp -= damage;

	if (0 >= m_hp)
	{
		Die();
	}
}
