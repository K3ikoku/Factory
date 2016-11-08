#include "Knight.h"



Knight::Knight():
	m_hp(250), m_cost(250)
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
