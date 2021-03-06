#include "GameManager.h"



GameManager::GameManager() :
    m_playAgain('y'), m_dayNr(0)
{
}


GameManager::~GameManager()
{
}

void GameManager::GameLoop()
{
    while (m_playAgain == 'y')
    {
        //Create the instances of the armies and the factory
        m_factory = new UnitFactory();
        m_hoard = new ZombieHoard();
        m_town = new Town(m_factory);

        std::cout << "A necromancer comes closer to the town of North Haverbrook\n" << std::endl;
        std::cout << "As night is closing in he begins to draw powers from the dark summing unholy creatures of the night\n" << std::endl;
        //A check to see if there are any towns people living
        while (0 < m_town->TownPopulation())
        {
            std::cout << "You scouts to the town to see how they prepare for the nightly raids\n" << std::endl;
            //Summon humans based on how much money the town has
            SummonHuman(m_factory, m_town);

            //Check if the zombies have more power than the cheapest unit and run the create zombie loop 
            if (25 < m_hoard->GetBudget())
            {
                std::cout << "It's currently day nr: " << m_dayNr << "\n" << std::endl;
                SummonZombies(m_factory, m_hoard);

            }

            std::cout << "Night comes and you prepare for battle\n" << std::endl;
            //Store how many humans and zombies there are before the battle
            m_hoardPreBattle = m_hoard->HordePopulation();
            m_townPreBattle = m_town->TownPopulation();
            //Start the battle function
            m_hoard->Attack(m_town);

            //Calculate and print how many zombies and humans were lost
            int diff = m_hoardPreBattle - m_hoard->HordePopulation();
            std::cout << "You lost " << diff << " creatures durin the night.\n" << std::endl;
            diff = m_townPreBattle - m_town->TownPopulation();
            std::cout << "You killed " << diff << " of the filthy humans during the night.\n" << std::endl;
            //Do a check if the hoard has any zombies or power to summon new ones
            if (0 < m_hoard->HordePopulation() || 25 <= m_hoard->GetBudget())
            {
                m_dayNr++;
                std::cout << "Press any button to proceed to the next day\n" << std::endl;
                std::cin >> m_userInput;
                std::cout << "\n" << std::endl;
            }
            //If all zombies are dead and the necromancer is out of power tell the player they lost the game
            else
            {
                std::cout << "All of your zombies are dead and you have depleted your powers." << std::endl;
                std::cout << "You made it until day: " << m_dayNr << "until your horde got crushed.\n" << std::endl;
                std::cout << "You loose." << std::endl;
                break;
            }

        }
        //If all humans are dead print out that the player won
        if (0 < m_town->TownPopulation())
        {
            std::cout << "You have laid waste to the town only rubbel and corpses remain." << std::endl;
            std::cout << "Corpses that shall soon fill the ranks of your hoard. Congratulations" << std::endl;
        }

        std::cout << "Do you want to play again? y/n " << std::endl;
        std::cin >> m_userInput;
        std::cout << "\n" << std::endl;

        m_playAgain = m_userInput;
    }
    m_dayNr = 0;
}

void GameManager::SummonZombies(UnitFactory * factory, ZombieHoard* hoard)
{
    m_userInput = 'y';
    while (25 <= hoard->GetBudget() && m_userInput == 'y')
    {
        //Reset the new unit variable to prevent any future troubles
        m_newUnit = nullptr;
        std::cout << "You currently have " << hoard->GetBudget() << " power to spend\n" << std::endl;
        std::cout << "What do you want to summon? \n" << std::endl;
        std::cout << "Please type in the letter for the unit you want to create" << std::endl;
        std::cout << "Letter / Unit / Cost    \n\nz / Zombie / 25    \nh / Zombie Hound / 35" << std::endl;
        std::cout << "f / Flying Terror / 75     \nb / Brute Zombie / 100\n" << std::endl;

        //Take the players inputed character and send it to the factory to create a new unit
        std::cin >> m_userInput;
        std::cout << "\n" << std::endl;
        m_newUnit = factory->CreateZombie(m_userInput, hoard->GetBudget());
        if (m_newUnit != nullptr)
        {
            hoard->AddToHoard(m_newUnit);
            hoard->SubtractFromBudget(m_newUnit->GetCost());
        }
        else
        {
            //Restart the function if anything went wrong
            m_userInput = 'y';
        }

        //Check if the player can afford a new unit and ask them if they want to.
        if (25 <= hoard->GetBudget() && m_userInput != 'y')
        {
            std::cout << "Do you want to summon another creature? : y/n" << std::endl;
            std::cin >> m_userInput;
            std::cout << "\n" << std::endl;
        }
    }
}


void GameManager::SummonHuman(UnitFactory * factory, Town * town)
{
    //As long as the humans have enough money to buy a new unit create the most powerful unit they can afford
    while (25 <= town->GetBudget())
    {
        m_newUnit = nullptr;

        if (250 <= town->GetBudget())
        {
            m_townInput = 'k';
            std::cout << "Your scout reports that the town has summoned a powerful Knight.\n" << std::endl;
        }
        else if (50 <= town->GetBudget())
        {
            m_townInput = 'a';
            std::cout << "One of your undead scouts tells you that the one of the peasants in town has armed themself with a pitchfork and leather armor\n" << std::endl;
        }
        else
        {
            m_townInput = 'p';
            std::cout << "One of the children in town has grown up and is now able to partake in the protection of the town. \n" << std::endl;
        }

        m_newUnit = factory->CreateHuman(m_townInput);
        town->AddTownPeople(m_newUnit);
        town->SubtractFromBudget(m_newUnit->GetCost());
    }
}



