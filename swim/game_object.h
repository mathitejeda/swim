#pragma once
#include "Game.h"
class game_object
{
public:
	game_object(const char* texturesheet, SDL_Renderer* ren,int x,int y);
	~game_object();

	void update();
	void render();
private:
	int xpos , ypos;
	SDL_Texture* obj_texture;
	SDL_Rect src_rect, dest_rect;
	SDL_Renderer* renderer;

};

