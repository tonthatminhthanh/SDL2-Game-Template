#define SDL_MAIN_HANDLED
#include <iostream>
#include <cstdlib>
#include <SDL2/SDL.h>

#include "../include/GameMain.hpp"

Game::Game(char* title, int width, int height, bool fullScreen)
{
    windowWidth = width;
    windowHeight = height;
    Uint32 windowFlags;
    if(fullScreen)
        windowFlags = SDL_WINDOW_FULLSCREEN;
    else
        windowFlags = SDL_WINDOW_SHOWN;

    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        std::cout << "Error: Could not initialize SDL" << std::endl;
        return;
    }
    /*INSERT MORE INIT FUNCTIONS HERE*/
    mainWindow = SDL_CreateWindow(title,SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,windowWidth,windowHeight,windowFlags);
    if(mainWindow == NULL)
    {
        std::cout << "Error: Could not create window: " << title << std::endl;
        return;
    }
    mainRenderer = SDL_CreateRenderer(mainWindow,-1,SDL_RENDERER_SOFTWARE);
    if(mainRenderer == NULL)
    {
        std::cout << "Error: Could not create main renderer" << std::endl;
        return;
    }
    Init();
    Update();
}

Game::~Game()
{
    SDL_DestroyRenderer(mainRenderer);
    SDL_DestroyWindow(mainWindow);
    SDL_Quit();
}

void Game::Init()
{

}

void Game::Update()
{
    SDL_Event event;
    int quit = 0;
    while(quit == 0)
    {
        while(SDL_PollEvent(&event) != 0)
        {
            if(event.type == SDL_QUIT)
                quit = 1;

            //INSERT INPUT RELATED FUNCTIONS HERE

            //INSERT INPUT RELATED FUNCTIONS HERE
        }
        //INSERT GAME EVENTS HANDLING HERE

        //INSERT GAME EVENTS HANDLING HERE
        Render();
    }
}

void Game::Render()
{
    //RENDER THINGS HERE, IT WILL BE CALLED EVERY FRAME

    //RENDER THINGS HERE
}
