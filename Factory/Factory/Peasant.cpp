#include "Peasant.h"



Peasant::Peasant():
	m_hp(50), m_cost(25)
{
}


Peasant::~Peasant()
{
}

int Peasant::GetDamage()
{
	return m_damage;
}

int Peasant::GetCost()
{
	return m_cost;
}

void Peasant::Attack()
{
}

void Peasant::Die()
{
}

void Peasant::TakeDamage(int damage)
{
	m_hp -= damage;

	if (0 >= m_hp)
	{
		Die();
	}
}
