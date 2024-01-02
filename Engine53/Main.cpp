// Engine 53
// Created by Isak "Mino53" Forsberg
// V 0.0, 2024-01-01

#include <iostream>
#include "SDL.h"



int main(int argc, char *args[])
{
	SDL_Window* window = SDL_CreateWindow("Test", 500, 500, 160, 90, SDL_WINDOW_RESIZABLE);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	while (true)
	{
		SDL_SetRenderDrawColor(renderer, 255, 100, 100, 255);
		SDL_RenderClear(renderer);

		SDL_RenderPresent(renderer);
	}


	return 0;
}