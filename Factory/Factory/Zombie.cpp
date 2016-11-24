#include "Zombie.h"



Zombie::Zombie():
	m_hp(75), m_cost(25), 
	m_reward(20), m_damage(15)
{
}


Zombie::~Zombie()
{
}

int Zombie::GetDamage()
{
	return m_damage;
}

int Zombie::GetCost()
{
	return m_cost;
}

int Zombie::GetHP()
{
	return m_hp;
}

int Zombie::GetReward()
{
	return m_reward;
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
