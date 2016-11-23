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

private:
	std::string m_playAgain;
	char* m_userInput;
	int m_dayNr;
};

