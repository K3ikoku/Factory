#pragma once
class Unit
{
public:
	Unit();
	~Unit();
	
	//TODO: Add attack target
	void virtual Attack();

	void virtual Die();

	void virtual TakeDamage(int damage);

	int virtual GetDamage();
	
	int virtual GetCost();

private:
	int m_hp;
	int m_cost;
	int m_damage;
};

