#pragma once
class ZombieHound :
	public Unit
{
public:
	ZombieHound();
	~ZombieHound();

	void Attack() override;

	void Die() override;

	void TakeDamage(int damage) override;


private:
	int m_hp;
};

