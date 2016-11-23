#pragma once
#include <iostream>
#include "Unit.h"
#include "Zombie.h"
#include "BruteZombie.h"
#include "ZombieHound.h"
#include "FlyingTerror.h"

#include "Peasant.h"
#include "Knight.h"
#include "ArmoredPeasant.h"

class UnitFactory
{
public:
	UnitFactory();
	~UnitFactory();

	Unit* CreateZombie(char* unitType, int budget);

	Unit* CreateHuman(char* unitType);

private:
	Unit* m_newUnit;
};

