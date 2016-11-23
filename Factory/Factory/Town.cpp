#include "Town.h"



Town::Town():
	m_budget(200)
{
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

int Town::TownPopulation()
{
	return m_townsPeople.size();
}

int Town::GetBudget()
{
	return m_budget;
}
