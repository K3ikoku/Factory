#include "ArmoredPeasant.h"


ArmoredPeasant::ArmoredPeasant() :
    m_hp(75), m_cost(50),
    m_reward(25), m_damage(25)
{
}

ArmoredPeasant::~ArmoredPeasant()
{
}
//Return the cost of the unit
int ArmoredPeasant::GetDamage()
{
    return m_damage;
}
//Returns the damage of the unit
int ArmoredPeasant::GetCost()
{
    return m_cost;
}
//Returns the current health points of the unit
int ArmoredPeasant::GetHP()
{
    return m_hp;
}
//Returns the reward given on the units death
int ArmoredPeasant::GetReward()
{
    return m_reward;
}
//Takes damage based on the inputed value
void ArmoredPeasant::TakeDamage(int damage)
{
    m_hp -= damage;
}

