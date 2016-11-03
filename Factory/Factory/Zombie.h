#pragma once
#include "Unit.h"
class Zombie :
	public Unit
{
public:
	Zombie();
	~Zombie();

	void Attack() override;

	void Die() override;

	void TakeDamage(int damage) override;

private:
	int m_hp;
};

