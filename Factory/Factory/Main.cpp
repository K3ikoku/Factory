#include "GameManager.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{

    //Create the instance of the class holding the game loop
    GameManager* m_gameLoop = new GameManager();

    //Get a ned seed for the random numbers used later
    srand(time(NULL));

    //Start the game
    m_gameLoop->GameLoop();


    return 0;
}