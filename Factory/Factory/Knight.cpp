#include "Knight.h"



Knight::Knight():
	m_hp(250), m_cost(250), 
	m_reward(200), m_damage(75)
{
}

Knight::~Knight()
{
}
//Return the cost of the unit
int Knight::GetDamage()
{
	return m_damage;
}
//Returns the damage of the unit
int Knight::GetCost()
{
	return m_cost;
}
//Returns the current health points of the unit
int Knight::GetHP()
{
	return m_hp;
}
//Returns the reward given on the units death
int Knight::GetReward()
{
	return m_reward;
}
//Takes damage based on the inputed value
void Knight::TakeDamage(int damage)
{
	m_hp -= damage;
}
