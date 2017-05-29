#pragma once
class Unit
{
public:
    Unit();
    ~Unit();
    //Return the cost of the unit
    int virtual GetCost();
    //Returns the damage of the unit
    int virtual GetDamage();
    //Returns the current health points of the unit
    int virtual GetHP();
    //Returns the reward given on the units death
    int virtual GetReward();
    //Takes damage based on the inputed value
    void virtual TakeDamage(int damage);

private:
    int m_hp;
    int m_cost;
    int m_damage;
    int m_reward;
};

