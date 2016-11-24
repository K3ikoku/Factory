#include "GameManager.h"
#include <stdlib.h>
#include <time.h>
int main()
{


	GameManager* m_gameLoop = new GameManager();

	srand(time(NULL));

	m_gameLoop->GameLoop();


	return 0;
}