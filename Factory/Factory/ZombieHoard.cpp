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

void ZombieHoard::RemoveFromHoard(const Unit* unit)
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

void ZombieHoard::Attack(Town * town)
{
	for (unsigned int i = 0; i < HordePopulation(); i++)
	{
		m_target = nullptr;
		m_target = town->GetTownsPeople()[rand() % town->TownPopulation() - 1];
		m_target->TakeDamage(m_hoard[i]->GetDamage());
		m_hoard[i]->TakeDamage(m_target->GetDamage());
		if (0 >= m_target->GetHP())
		{
			AddToBudget(m_target->GetReward());
			town->RemoveHuman(m_target);
		}
		if (0 >= m_hoard[i]->GetHP())
		{
			town->AddToBudget(m_hoard[i]->GetReward());
			this->RemoveFromHoard(m_hoard[i]);
		}
	}
}

std::vector<Unit*> ZombieHoard::GetHoard()
{
	return m_hoard;
}

int ZombieHoard::HordePopulation()
{
	return m_hoard.size();
}

int& ZombieHoard::GetBudget()
{
	return m_budget;
}

void ZombieHoard::AddToBudget(const int reward)
{
	m_budget += reward;
}

void ZombieHoard::SubtractFromBudget(const int cost)
{
	m_budget -= cost;
}
