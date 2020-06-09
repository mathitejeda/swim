#include "game_object.h"
#include "texture_manager.h"

game_object::game_object(const char* texturesheet, SDL_Renderer* ren,int x,int y)
{
	renderer = ren;
	obj_texture = texture_manager::LoadTexture(texturesheet,renderer);
	xpos = x;
	ypos = y;

}
void game_object::update()
{
	xpos ++;
	ypos ++;

	src_rect.h = 32;
	src_rect.w = 32;
	src_rect.x = 0;
	src_rect.y = 0;

	dest_rect.x = xpos;
	dest_rect.w = src_rect.w * 2;
	dest_rect.h = src_rect.h * 2;
}
void game_object::render()
{
	SDL_RenderCopy(renderer, obj_texture,&src_rect,&dest_rect);

}