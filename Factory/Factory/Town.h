#pragma once
#include <vector>
#include "Unit.h"
#include "UnitFactory.h"

class Town
{
public:
	Town(UnitFactory* factory);
	~Town();

	//Add units to the vector containing the towns units
	void AddTownPeople(Unit* newUnit);
	//Remove unit from same vector
	void RemoveHuman(Unit* unit);
	//Used to access specific units in the town vector
	std::vector<Unit*> GetHuman();
	//Get the current size of the town
	int TownPopulation();
	//Get the ammount the town has to spend
	int GetBudget();
	//Add to the budget
	void AddToBudget(int reward);
	//Subtract from the budget
	void SubtractFromBudget(int cost);


private:
	std::vector<Unit*> m_townsPeople;
	int m_budget;
	Unit* m_newUnit;
	
};
