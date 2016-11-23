#include "ZombieHoard.h"



ZombieHoard::ZombieHoard():
	m_budget(250)
{
}


ZombieHoard::~ZombieHoard()
{
}

void ZombieHoard::AddToHoard(Unit * newUnit)
{
	m_hoard.push_back(newUnit);
}

void ZombieHoard::RemoveFromHoard(Unit* unit)
{
	for (unsigned int i = 0; i <= m_hoard.size(); i++)
	{
		if (m_hoard[i] == unit)
		{
			m_hoard.erase(m_hoard.begin() + i);
			break;
		}
	}
}

int ZombieHoard::HordePopulation()
{
	return m_hoard.size();
}

int ZombieHoard::GetBudget()
{
	return m_budget;
}
