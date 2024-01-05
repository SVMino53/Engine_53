// Engine 53
// Created by Isak "Mino53" Forsberg
// V 0.0, 2024-01-01

#include <iostream>
#include "SDL.h"



SDL_Window* window;
SDL_Renderer* renderer;


bool initSDL()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return false;
	}
	else
	{
		window = SDL_CreateWindow("Test", 500, 500, 160 * 5, 90 * 5, SDL_WINDOW_RESIZABLE);
		if (window == nullptr)
		{
			printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
			return false;
		}

	}

	return true;
}

int main(int argc, char *args[])
{
	if (!initSDL())
	{
		printf("Failed to initialize!\n");
	}
	else
	{
		renderer = SDL_CreateRenderer(window, -1, 0);

		SDL_Rect rect = { 40, 40, 300, 150 };

		bool quit = false;
		while (!quit)
		{
			SDL_Event e;
			while (SDL_PollEvent(&e))
			{
				switch (e.type)
				{
				case SDL_QUIT:
					quit = true;
					break;
				default:
					break;
				}
			}

			SDL_SetRenderDrawColor(renderer, 255, 100, 100, 255);
			SDL_RenderClear(renderer);

			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			SDL_RenderFillRect(renderer, &rect);
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
			SDL_RenderDrawRect(renderer, &rect);

			SDL_RenderPresent(renderer);

			SDL_Delay(10);
		}
	}

	return 0;
}