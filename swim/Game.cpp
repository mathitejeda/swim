#include "Game.h"
#include "texture_manager.h"
#include "game_object.h"

game_object* torti;

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

		torti = new game_object("assets/torti/torti_static.png", renderer,0,0);
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
	torti->update();
}

void game::render()
{
	SDL_RenderClear(renderer);
	torti->render();
	//agregar cosas
	SDL_RenderPresent(renderer);
}

void game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
