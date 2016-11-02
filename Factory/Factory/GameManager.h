#include <string>
#include <iostream>
#pragma once
class GameManager
{
public:
	GameManager();
	~GameManager();

	void GameLoop();

private:
	std::string m_playAgain;
	char* m_userInput;
};

