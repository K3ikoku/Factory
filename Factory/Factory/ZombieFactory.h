#pragma once
#include <iostream>
#include "Unit.h"
#include "Zombie.h"
#include "BruteZombie.h"
#include "ZombieHound.h"

class ZombieFactory
{
public:
	ZombieFactory();
	~ZombieFactory();

	Unit* CreateUnit(char* unitType);

private:
	Unit* m_newUnit;
};

