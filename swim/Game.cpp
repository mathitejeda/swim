#include "Game.h"

game::game()
{
}

game::~game()
{
}

void game::init(const char* title, int xpos, int ypos, int widght, int height, bool fullscreen)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "Subsistemas inicializados. " << std::endl;

		window = SDL_CreateWindow(title, xpos, ypos, widght, height, true);

		if (window) std::cout << "Ventana creada!" << std::endl;

		renderer = SDL_CreateRenderer(window, -1, 0);

		if (renderer) { 
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			std::cout << "Render creado." << std::endl; 
		}

		is_running = true;
	}

	else is_running = false;

}

void game::handle_events()
{
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		is_running = false;

		break;
	
	default:
		break;
	}
}

void game::update()
{
	cnt++;
	std::cout << cnt << std::endl;
}

void game::render()
{
	SDL_RenderClear(renderer);

	//agregar cosas
	SDL_RenderPresent(renderer);
}

void game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
