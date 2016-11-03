#pragma once
#include "Zombie.h"
class BruteZombie :
	public Zombie
{
public:
	BruteZombie();
	~BruteZombie();

	void Attack() override;

	void Die() override;

	void TakeDamage(int damage) override;

private:
	int m_hp;
};

