#include "GameManager.h"



GameManager::GameManager():
	m_playAgain("y"), m_dayNr(0)
{
}


GameManager::~GameManager()
{
}

void GameManager::GameLoop()
{
	while (m_playAgain == "y")
	{
		ZombieHoard* m_hoard = new ZombieHoard();
		Town* m_town = new Town();
		UnitFactory* m_factory = new UnitFactory();

		std::cout << "A necromancer comes closer to the town of North Haverbrook" << std::endl;
		std::cout << "As night is closing in he begins to draw powers from the dark summing unholy creatures of the night" << std::endl;
		while (0 < m_town->TownPopulation())
		{
			if (25 < m_hoard->GetBudget() &&
				0 < m_hoard->HordePopulation())
			{
				std::cout << "It's currently day nr: " << m_dayNr << std::endl;
				SummonZombies(m_factory, m_hoard);
				//TODO: Create function for human summonings
			}

			else
			{
				std::cout << "All of your zombies are dead and you have depleted your powers." << std::endl;
				std::cout << "You made it until day: "<< m_dayNr << "until your horde got crushed." << std::endl;
				std::cout << "You loose." << std::endl;
				break;
			}
			m_dayNr++;
		}

		std::cout << "Do you want to play again? y/n " << std::endl;
		std::cin >> m_userInput;
		std::cout << *m_userInput << std::endl;
		m_playAgain = *m_userInput;
	}
	m_dayNr = 0;
}

void GameManager::SummonZombies(UnitFactory * factory, ZombieHoard* hoard)
{
	while (25 <= hoard->GetBudget())
	{
		*m_userInput = 'y';
		while (*m_userInput == 'y')
		{
			std::cout << "You currently have " << hoard->GetBudget() << " power to spend" << std::endl;
			std::cout << "What do you want to summon? " << std::endl;
			std::cout << "Please type in the letter for the unit you want to create" << std::endl;
			std::cout << "Letter/Unit/Cost    \n z/Zombie/25    \n h/Zombie Hound/35" << std::endl;
			std::cout << "f/Flying Terror/75     \n b/Brute Zombie/100" << std::endl;

			std::cin >> m_userInput;
			std::cout << *m_userInput << std::endl;
			factory->CreateZombie(m_userInput, hoard->GetBudget());
			//TODO: Further construction of the summon function
		}
	}
}
