#include "ZombieHound.h"



ZombieHound::ZombieHound():
	m_hp(50), m_cost(35), 
	m_reward(25), m_damage(20)
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

int ZombieHound::GetHP()
{
	return m_hp;
}

int ZombieHound::GetReward()
{
	return m_reward;
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
}
