/*
 * Screen.h
 *
 *  Created on: Oct 6, 2017
 *      Author: acel
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include "SDL.h"

namespace sdc {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 500;

private:
	SDL_Window *_window;
	SDL_Renderer *_renderer;
	SDL_Texture *_texture;
	Uint32 *_buffer;

public:
	Screen();
	~Screen();

	bool init();
	bool processEvents();
	void setPixel(int x, int y, uint red, uint green, uint blue);
	void update();
	void close();
};

} /* namespace sdc */

#endif /* SCREEN_H_ */
