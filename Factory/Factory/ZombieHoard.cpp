#include "ZombieHoard.h"



ZombieHoard::ZombieHoard():
	m_budget(250)
{
}


ZombieHoard::~ZombieHoard()
{
}
//Add new unit to the vector
void ZombieHoard::AddToHoard(Unit * newUnit)
{
	m_hoard.push_back(newUnit);
	
}
//Searches through the vector and removes inputed unit
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
//Used to start attacking villiagers
void ZombieHoard::Attack(Town * town)
{
	//Loops through the hoard and attacks a random human 
	for (unsigned int i = 0; i < HordePopulation(); i++)
	{
		m_target = nullptr;
		m_target = town->GetHuman()[rand() % town->TownPopulation() - 1];
		m_target->TakeDamage(m_hoard[i]->GetDamage());
		m_hoard[i]->TakeDamage(m_target->GetDamage());
		//Check if either the human or the zombie died and adds the reward to the other
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
//Returns the size of the hoard
int ZombieHoard::HordePopulation()
{
	return m_hoard.size();
}
//Returns the current budget
int& ZombieHoard::GetBudget()
{
	return m_budget;
}
//Add inputed value to the budget
void ZombieHoard::AddToBudget(const int reward)
{
	m_budget += reward;
}
//Subtract inputed value from the budget
void ZombieHoard::SubtractFromBudget(const int cost)
{
	m_budget -= cost;
}
