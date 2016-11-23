#include <vector>
#include "Unit.h"
#include "ZombieHoard.h"

class Town
{
public:
	Town();
	~Town();

	void AddTownPeople(Unit* newUnit);

	void RemoveHuman(Unit* unit);

	int TownPopulation();
	
	int GetBudget();


private:
	std::vector<Unit*> m_townsPeople;
	int m_budget;
};
