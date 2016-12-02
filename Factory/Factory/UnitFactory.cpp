#include "UnitFactory.h"



UnitFactory::UnitFactory():
	m_newUnit(nullptr)
{
}


UnitFactory::~UnitFactory()
{
}

Unit* UnitFactory::CreateZombie(const char& unitType, int budget)
{
	//Set the new unit variable to null to prevent future troubles
	m_newUnit = nullptr;
	//Based on the players inputed value create a new unit
	switch (unitType)
	{
	case 'z':
	case 'Z': 
		m_newUnit = new Zombie();
		break;

	case 'b':
	case 'B':
		m_newUnit = new BruteZombie();
		break;
	case 'h':
	case 'H':
		m_newUnit = new ZombieHound();
		break;
	case 'f':
	case 'F':
		m_newUnit = new FlyingTerror();
		break;
	default:
		std::cout << unitType << " is not a valid input" << std::endl;
		break;
	}

	if (m_newUnit->GetCost() > budget)
	{
		std::cout << "You don't have enough money for that unit type." << std::endl;
		m_newUnit = nullptr;
	}

	return m_newUnit;
}

Unit * UnitFactory::CreateHuman(const char& unitType)
{
	//Set the new unit variable to null to prevent future troubles
	m_newUnit = nullptr;
	//Create the most powerful unit affordable
	switch (unitType)
	{
	case 'p':
		m_newUnit = new Zombie();
		break;
	case 'k':
		m_newUnit = new Knight();
		break;
	case 'a':
		m_newUnit = new ArmoredPeasant();
		break;
	default:
		break;
	}

	return m_newUnit;
}
