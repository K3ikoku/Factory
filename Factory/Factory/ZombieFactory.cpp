#include "ZombieFactory.h"



ZombieFactory::ZombieFactory():
	m_newUnit(nullptr)
{
}


ZombieFactory::~ZombieFactory()
{
}

Unit* ZombieFactory::CreateUnit(char* unitType)
{
	m_newUnit = nullptr;
	switch (*unitType)
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

	default:
		std::cout << *unitType << " is not a valid input" << std::endl;
	}


	//TODO: Create code for creating new unit types




	return m_newUnit;
}
