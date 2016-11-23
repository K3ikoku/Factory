#include "ArmoredPeasant.h"


ArmoredPeasant::ArmoredPeasant() :
	m_hp(75), m_cost(35)
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

