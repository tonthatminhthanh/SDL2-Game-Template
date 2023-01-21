#pragma once
#define SDL_MAIN_HANDLED
#include <iostream>
#include <cstdlib>
#include <SDL2/SDL.h>

class Game
{
    public:
        Game(char* title, int width, int height, bool fullScreen);
        ~Game();
    private:
        int windowWidth;
        int windowHeight;
        SDL_Window* mainWindow;
        SDL_Renderer* mainRenderer;
        void Init();
        void Update();
        void Render();
        /*INSERT NEW VARIABLES OR FUNCTIONS HERE*/

        /*INSERT NEW VARIABLES OR FUNCTIONS HERE*/
};
