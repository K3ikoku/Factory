#pragma once
#include <iostream>
#include "Unit.h"
#include "Zombie.h"
#include "BruteZombie.h"

class UnitFactory
{
public:
	UnitFactory();
	~UnitFactory();

	Unit* CreateUnit(char* unitType);

private:
	Unit* m_newUnit;
};

