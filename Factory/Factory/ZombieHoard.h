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

	void RemoveFromHoard(const Unit* unit);

	void Attack(Town* town);

	std::vector<Unit*> GetHoard();

	int HordePopulation();

	int& GetBudget();

	void AddToBudget(const int reward);

	void SubtractFromBudget(const int cost);


private:
	std::vector<Unit*> m_hoard;
	int m_budget;
	Unit* m_target;
};
