#include <string>
#include <iostream>
#include "ZombieHoard.h"
#include "Town.h"
#include "UnitFactory.h"
#pragma once
class GameManager
{
public:
    GameManager();
    ~GameManager();

    //Main game loop
    void GameLoop();
    //Function used for creating the player controlled zombies using the factory 
    void SummonZombies(UnitFactory* factory, ZombieHoard* hoard);
    //Function used for creating the humans using the factory 
    void SummonHuman(UnitFactory* factory, Town* town);

private:
    //Chars used for player input
    char m_playAgain;
    char m_userInput;
    char m_townInput;
    //Int telling nr of days passed in the game
    int m_dayNr;
    //Pointers used for the armies and new units
    Unit* m_newUnit;
    ZombieHoard* m_hoard;
    Town* m_town;
    UnitFactory* m_factory;
    //Numbers used to tell how many zombier or humans died during the night
    int m_hoardPreBattle;
    int m_townPreBattle;
};

