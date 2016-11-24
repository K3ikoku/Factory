#include "Town.h"



Town::Town(UnitFactory* factory):
	m_budget(0)
{
	for (unsigned int i = 0; i < 25; i++)
	{
		m_newUnit = nullptr;
		m_newUnit = factory->CreateHuman("p");
		AddTownPeople(m_newUnit);
	}
}


Town::~Town()
{
}

void Town::AddTownPeople(Unit * newUnit)
{
	m_townsPeople.push_back(newUnit);
}

void Town::RemoveHuman(Unit * unit)
{
	for (int i = 0; i < m_townsPeople.size(); i++)
	{
		if (m_townsPeople[i] == unit)
		{
			m_townsPeople.erase(m_townsPeople.begin() + i);
			break;
		}
	}
}

std::vector<Unit*> Town::GetTownsPeople()
{
	return m_townsPeople;
}

int Town::TownPopulation()
{
	return m_townsPeople.size();
}

int Town::GetBudget()
{
	return m_budget;
}

void Town::AddToBudget(int reward)
{
	m_budget += reward;
}

void Town::SubtractFromBudget(int cost)
{
	m_budget -= cost;
}
