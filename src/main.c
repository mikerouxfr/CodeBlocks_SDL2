#include <stdio.h>

#include <SDL2/SDL.h>

int main(int argc, char** argv)
{
	/* Initialisation simple */
	if(SDL_Init(SDL_INIT_VIDEO) != 0 )
	{
		fprintf(
			stdout,
			"/!\ SDL initialisation failed\n%s\n",
			SDL_GetError()
		);
		return -1;
	}

	{
		/* Window Creation */
		SDL_Window* pWindow = NULL;
		pWindow = SDL_CreateWindow(
			"My first SDL2 app",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			640,
			480,
			SDL_WINDOW_SHOWN
		);

		if(pWindow)
		{
			SDL_Delay(3000); /* Wait 3 secs to let the user see the window */

			SDL_DestroyWindow(pWindow);
		}
		else
		{
			fprintf(
				stderr,
				"/!\ SDL window creation failed\n%s\n",
				SDL_GetError()
			);
		}
	}

	SDL_Quit();

	return 0;
}
