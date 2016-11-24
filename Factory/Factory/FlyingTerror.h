#pragma once
#include "Unit.h"
class FlyingTerror :
	public Unit
{
public:
	FlyingTerror();
	~FlyingTerror();

	int GetDamage() override;

	int GetCost() override;

	int GetHP() override;

	int GetReward() override;

	void Attack() override;

	void Die() override;

	void TakeDamage(int damage) override;

private:
	int m_hp;
	int m_cost;
	int m_damage;
	int m_reward;
};

