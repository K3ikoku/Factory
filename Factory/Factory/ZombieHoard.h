#pragma once
#include <vector>
#include "Unit.h"
#include "Town.h"

class ZombieHoard
{
public:
    ZombieHoard();
    ~ZombieHoard();
    //Add new unit to the vector
    void AddToHoard(Unit* newUnit);
    //Remove unit from the vector
    void RemoveFromHoard(const Unit* unit);
    //Used to start attacking villiagers
    void Attack(Town* town);
    //Get the current size of the hoard
    int HordePopulation();
    //Returns the current budget of the hoard
    int& GetBudget();
    //Add inputed value to the budget
    void AddToBudget(const int reward);
    //Subtract inputed value from budget
    void SubtractFromBudget(const int cost);


private:
    std::vector<Unit*> m_hoard;
    int m_budget;
    Unit* m_target;
};
