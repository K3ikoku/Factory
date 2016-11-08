#pragma once
#include "Unit.h"
class ZombieHound :
	public Unit
{
public:
	ZombieHound();
	~ZombieHound();

	int GetCost() override;

	int GetDamage() override;

	void Attack() override;

	void Die() override;

	void TakeDamage(int damage) override;


private:
	int m_hp;
	int m_cost;
	int m_damage;
};

