#include "Zombie.h"



Zombie::Zombie() :
    m_hp(75), m_cost(25),
    m_reward(20), m_damage(15)
{
}
Zombie::~Zombie()
{
}
//Return the cost of the unit
int Zombie::GetDamage()
{
    return m_damage;
}
//Returns the damage of the unit
int Zombie::GetCost()
{
    return m_cost;
}
//Returns the current health points of the unit
int Zombie::GetHP()
{
    return m_hp;
}
//Returns the reward given on the units death
int Zombie::GetReward()
{
    return m_reward;
}
//Takes damage based on the inputed value
void Zombie::TakeDamage(int damage)
{
    m_hp -= damage;
}
