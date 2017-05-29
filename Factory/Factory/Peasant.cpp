#include "Peasant.h"



Peasant::Peasant() :
    m_hp(50), m_cost(25),
    m_reward(20), m_damage(10)
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

int Peasant::GetHP()
{
    return m_hp;
}

int Peasant::GetReward()
{
    return m_reward;
}


void Peasant::TakeDamage(int damage)
{
    m_hp -= damage;
}
