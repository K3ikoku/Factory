#include "Town.h"



Town::Town(UnitFactory* factory) :
    m_budget(0)
{
    //When the game starts add 25 humans to the town
    for (unsigned int i = 0; i < 25; i++)
    {
        m_newUnit = nullptr;
        m_newUnit = factory->CreateHuman('p');
        AddTownPeople(m_newUnit);
    }
}


Town::~Town()
{
}
//Add a new unit to the town to the vector
void Town::AddTownPeople(Unit * newUnit)
{
    m_townsPeople.push_back(newUnit);
}
//Remove a unit from the town vector
void Town::RemoveHuman(Unit * unit)
{
    //Searches the vector until it finds the unit to be removed
    for (int i = 0; i < m_townsPeople.size(); i++)
    {
        if (m_townsPeople[i] == unit)
        {
            m_townsPeople.erase(m_townsPeople.begin() + i);
            break;
        }
    }
}
//Returns a unit in the town based on index
std::vector<Unit*> Town::GetHuman()
{
    return m_townsPeople;
}
//Returns the size of the town people vector
int Town::TownPopulation()
{
    return m_townsPeople.size();
}
//Returns the current budget of the town
int Town::GetBudget()
{
    return m_budget;
}
//Adds inputed value to the budget
void Town::AddToBudget(int reward)
{
    m_budget += reward;
}
//Subtract inputed value from the budget
void Town::SubtractFromBudget(int cost)
{
    m_budget -= cost;
}
