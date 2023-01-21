#include <iostream>
#include <SDL2/SDL.h>

#include "../include/GameMain.hpp"

#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500

int main(int argc, char** argv)
{
    Game game("Hello World",WINDOW_WIDTH,WINDOW_HEIGHT,false); //set final argument to be true if you want fullscreen
}
