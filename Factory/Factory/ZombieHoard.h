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

	void Attack(Town* town);

	std::vector<Unit*> GetHoard();

	int HordePopulation();

	int GetBudget();

	void AddToBudget(int reward);

	void SubtractFromBudget(int cost);


private:
	std::vector<Unit*> m_hoard;
	int m_budget;
	Unit* m_target;
};
