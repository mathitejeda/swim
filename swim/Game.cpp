#include "Game.h"

game::game()
{
}

game::~game()
{
}

void game::init(const char* title, int xpos, int ypos, int widght, int height, bool fullscreen)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) std::cout << "No se pudo inicializar SDL. " << SDL_GetError();
}

void game::handle_events()
{
}

void game::update()
{
}

void game::render()
{
}

void game::clear()
{
}
