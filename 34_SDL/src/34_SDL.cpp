//============================================================================
// Name        : 34_SDL.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
using namespace std;

int main() {
	cout << "SDL" << endl; // prints SDL

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 500;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL Init Failed..." << endl;
		 SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
		return 1;
	}

	SDL_Window *window=SDL_CreateWindow("Test Window",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH,
			SCREEN_HEIGHT,
			SDL_WINDOW_SHOWN);

	if(window==NULL){
		SDL_Quit();
		return 2;
	}

	bool quit =false;
	SDL_Event event;

	while(!quit){
		while(SDL_PollEvent(&event)){
			if(event.type== SDL_QUIT){
				quit=true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
