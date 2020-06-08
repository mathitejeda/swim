
#include <SDL.h>
#include <iostream>
#include "Game.h"

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;
game* swim;

int main(int argc, char* args[]) {
	
	swim = new game();

	swim->init("Swim!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, false);
	
	while (swim -> running())
	{
		swim->handle_events();
		swim->update();
		swim->render();
	}

	swim->clean();

	return 0;
}

