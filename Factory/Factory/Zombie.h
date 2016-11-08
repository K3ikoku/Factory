#pragma once
#include "Unit.h"
class Zombie :
	public Unit
{
public:
	Zombie();
	~Zombie();

	int GetDamage() override;

	int GetCost() override;

	void Attack() override;

	void Die() override;

	void TakeDamage(int damage) override;

private:
	int m_hp;
	int m_cost;
	int m_damage;
};

