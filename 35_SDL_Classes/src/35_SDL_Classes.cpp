//============================================================================
// Name        : 35_SDL_Classes.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include "Screen.h"
using namespace std;

int main() {
	cout << "SDL Classes" << endl; // prints SDL Classes

	sdc::Screen screen;
	screen.init();

	while (true) {
		if (screen.processEvents() == false) {
			break;
		}

		int elapsed = SDL_GetTicks();
		unsigned char green =
				(unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);

		for (int y = 0; y < screen.SCREEN_HEIGHT; y++) {
			for (int x = 0; x < screen.SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, red, green, blue);
			}
		}
		/*screen.setPixel(300, 250, 255, 255, 255);
		 screen.setPixel(300, 251, 255, 255, 255);
		 screen.setPixel(300, 252, 255, 255, 255);*/
		screen.update();
	}

	screen.close();
	return 0;
}
