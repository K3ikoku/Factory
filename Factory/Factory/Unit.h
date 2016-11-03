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

private:
	int m_hp;
};

