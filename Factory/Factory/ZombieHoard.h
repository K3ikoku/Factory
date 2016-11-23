#pragma once
#include <vector>
#include "Unit.h"
#include "Town.h"

class ZombieHoard
{
public:
	ZombieHoard();
	~ZombieHoard();

	void AddToHoard(Unit* newUnit);

	void RemoveFromHoard(Unit* unit);

	int HordePopulation();

	int GetBudget();


private:
	std::vector<Unit*> m_hoard;
	int m_budget;

};
