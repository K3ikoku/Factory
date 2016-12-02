#pragma once
#include "Unit.h"
class ZombieHound :
	public Unit
{
public:
	ZombieHound();
	~ZombieHound();
	//Return the cost of the unit
	int GetCost() override;
	//Returns the damage of the unit
	int GetDamage() override;
	//Returns the current health points of the unit
	int GetHP() override;
	//Returns the reward given on the units death
	int GetReward() override;
	//Takes damage based on the inputed value
	void TakeDamage(int damage) override;


private:
	int m_hp;
	int m_cost;
	int m_damage;
	int m_reward;
};

