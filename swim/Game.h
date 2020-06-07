#ifndef GAME_H
#define GAME_H
#pragma once
#include <iostream>
#include <SDL.h>

class game
{
public:
    game();
    ~game();

    void init(const char* title, int xpos, int ypos, int widght, int height, bool fullscreen);
    void handle_events();
    void update();
    void render();
    void clear();
    bool running();

protected:

private:
    bool is_running;
    SDL_Window* window = NULL;
    SDL_Renderer* renderer=NULL;
};

#endif //GAME_H