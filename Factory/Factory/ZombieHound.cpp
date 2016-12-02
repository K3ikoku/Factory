#include "ZombieHound.h"



ZombieHound::ZombieHound():
	m_hp(50), m_cost(35), 
	m_reward(25), m_damage(20)
{
}
ZombieHound::~ZombieHound()
{
}
//Return the cost of the unit
int ZombieHound::GetCost()
{
	return m_cost;
}
//Returns the damage of the unit
int ZombieHound::GetDamage()
{
	return m_damage;
}
//Returns the current health points of the unit
int ZombieHound::GetHP()
{
	return m_hp;
}
//Returns the reward given on the units death
int ZombieHound::GetReward()
{
	return m_reward;
}
//Takes damage based on the inputed value
void ZombieHound::TakeDamage(int damage)
{
	m_hp -= damage;
}
