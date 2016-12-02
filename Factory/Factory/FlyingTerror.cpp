#include "FlyingTerror.h"



FlyingTerror::FlyingTerror():
	m_hp(75), m_cost(75), 
	m_reward(50), m_damage(40)
{
}

FlyingTerror::~FlyingTerror()
{
}
//Return the cost of the unit
int FlyingTerror::GetDamage()
{
	return m_damage;
}
//Returns the damage of the unit
int FlyingTerror::GetCost()
{
	return m_cost;
}
//Returns the current health points of the unit
int FlyingTerror::GetHP()
{
	return m_hp;
}
//Returns the reward given on the units death
int FlyingTerror::GetReward()
{
	return m_reward;
}
//Takes damage based on the inputed value
void FlyingTerror::TakeDamage(int damage)
{
	m_hp -= damage;
}
