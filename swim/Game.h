#ifndef GAME_H
#define GAME_H
#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
class game
{
public:
    game();
    ~game();

    void init(const char* title, int xpos, int ypos, int widght, int height, bool fullscreen);
    void handle_events();
    void update();
    void render();
    void clean();
    bool running() { return is_running; }

protected:

private:
    int cnt = 0;
    bool is_running;
    SDL_Window* window = NULL;
    SDL_Renderer* renderer=NULL;
};

#endif //GAME_H