#include "Unit.h"



Unit::Unit():
	m_hp(100)
{
}


Unit::~Unit()
{
}

void Unit::Attack()
{
}

void Unit::Die()
{
}

void Unit::TakeDamage(int damage)
{
	m_hp -= damage;

	if (0 >= m_hp)
	{
		Die();
	}
}
