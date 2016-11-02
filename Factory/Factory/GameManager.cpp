#include "GameManager.h"



GameManager::GameManager():
	m_playAgain("y")
{
}


GameManager::~GameManager()
{
}

void GameManager::GameLoop()
{
	while (m_playAgain == "y")
	{






		std::cout << "Do you want to play again? y/n " << std::endl;
		std::cin >> m_userInput;
		std::cout << *m_userInput << std::endl;
		m_playAgain = *m_userInput;
	}
}
