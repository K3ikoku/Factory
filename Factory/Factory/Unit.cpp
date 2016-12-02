#include "Unit.h"



Unit::Unit():
	m_hp(100)
{
}


Unit::~Unit()
{
}
//Return the cost of the unit
int Unit::GetCost()
{
	return m_cost;
}
//Returns the damage of the unit
int Unit::GetDamage()
{
	return m_damage;
}
//Returns the current health points of the unit
int Unit::GetHP()
{
	return m_hp;
}
//Returns the reward given on the units death
int Unit::GetReward()
{
	return m_reward;
}
//Takes damage based on the inputed value
void Unit::TakeDamage(int damage)
{
	m_hp -= damage;
}

