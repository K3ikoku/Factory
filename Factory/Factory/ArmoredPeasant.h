#pragma once
#include "Peasant.h"
class ArmoredPeasant :
	public Peasant
{
public:
	ArmoredPeasant();
	~ArmoredPeasant();

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

