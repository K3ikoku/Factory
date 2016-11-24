#pragma once
#include <vector>
#include "Unit.h"
#include "UnitFactory.h"

class Town
{
public:
	Town(UnitFactory* factory);
	~Town();

	void AddTownPeople(Unit* newUnit);

	void RemoveHuman(Unit* unit);

	std::vector<Unit*> GetTownsPeople();

	int TownPopulation();
	
	int GetBudget();

	void AddToBudget(int reward);

	void SubtractFromBudget(int cost);


private:
	std::vector<Unit*> m_townsPeople;
	int m_budget;
	Unit* m_newUnit;
	
};
