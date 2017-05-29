#include "BruteZombie.h"



BruteZombie::BruteZombie() :
    m_hp(150), m_cost(100),
    m_reward(75), m_damage(50)
{
}

BruteZombie::~BruteZombie()
{
}
//Return the cost of the unit
int BruteZombie::GetDamage()
{
    return m_damage;
}
//Returns the damage of the unit
int BruteZombie::GetCost()
{
    return m_cost;
}
//Returns the current health points of the unit
int BruteZombie::GetHP()
{
    return m_hp;
}
//Returns the reward given on the units death
int BruteZombie::GetReward()
{
    return m_reward;
}
//Takes damage based on the inputed value
void BruteZombie::TakeDamage(int damage)
{
    m_hp -= damage;
}
