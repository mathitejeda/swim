
#include <SDL.h>
#include <iostream>
#include "Game.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
game* swim;

int main(int argc, char* args[]) {
	
	const int FPS = 60;
	const int frame_delay = 1000 / FPS;

	Uint32 frame_start;

	int frame_time;

	swim = new game();

	swim->init("Swim!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, false);
	
	while (swim -> running())
	{
		frame_start = SDL_GetTicks();
		swim->handle_events();
		swim->update();
		swim->render();

		frame_time = SDL_GetTicks() - frame_start; 

		if (frame_delay > frame_time) {
			SDL_Delay(frame_delay - frame_time);
		}
	}

	swim->clean();

	return 0;
}

