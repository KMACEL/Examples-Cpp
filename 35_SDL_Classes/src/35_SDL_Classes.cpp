//============================================================================
// Name        : 35_SDL_Classes.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

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

		screen.setPixel(300, 250, 255, 255, 255);
		screen.setPixel(300, 251, 255, 255, 255);
		screen.setPixel(300, 252, 255, 255, 255);
		screen.update();
	}

	screen.close();
	return 0;
}
