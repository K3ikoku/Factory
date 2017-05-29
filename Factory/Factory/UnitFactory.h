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
    //Function for creating zombies based on inputed character
    Unit* CreateZombie(const char& unitType, int budget);
    //Function for creating the most powerful unit affordable
    Unit* CreateHuman(const char& unitType);


private:
    Unit* m_newUnit;
};

