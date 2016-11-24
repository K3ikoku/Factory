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

	void GameLoop();

	void SummonZombies(UnitFactory* factory, ZombieHoard* hoard);

	void SummonHuman(UnitFactory* factory, Town* town);

	void BattlePhase(Town* town, ZombieHoard* hoard);

private:
	std::string m_playAgain;
	char m_userInput;
	char* m_townInput;
	int m_dayNr;
	Unit* m_newUnit;
	ZombieHoard* m_hoard;
	Town* m_town;
	UnitFactory* m_factory;
};

