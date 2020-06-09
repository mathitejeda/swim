#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H
#pragma once

#include "Game.h"

class texture_manager
{
public:
	texture_manager();
	~texture_manager();

	static SDL_Texture* LoadTexture(const char* filename,SDL_Renderer* ren);

private:

};



#endif //TEXTURE_MANAGER_H