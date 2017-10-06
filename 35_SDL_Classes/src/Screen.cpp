/*
 * Screen.cpp
 *
 *  Created on: Oct 6, 2017
 *      Author: acel
 */

#include "Screen.h"
#include "SDL.h"

namespace sdc {

Screen::Screen() :
		_window(NULL), _renderer(NULL), _texture(NULL), _buffer(NULL) {
}

Screen::~Screen() {
	Screen::close();
}

bool Screen::init() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
		return false;
	}

	this->_window = SDL_CreateWindow("Test Window",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, this->SCREEN_WIDTH,
			this->SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (_window == NULL) {
		SDL_Quit();
		return false;
	}

	this->_renderer = SDL_CreateRenderer(this->_window, -1,
			SDL_RENDERER_PRESENTVSYNC);

	this->_texture = SDL_CreateTexture(this->_renderer,
			SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH,
			SCREEN_HEIGHT);

	if (this->_renderer == NULL) {
		SDL_Log("Unable to renderer SDL: %s", SDL_GetError());

		SDL_DestroyWindow(this->_window);
		SDL_Quit();
		return false;
	}

	if (this->_texture == NULL) {
		SDL_Log("Unable to texture SDL: %s", SDL_GetError());

		SDL_DestroyTexture(this->_texture);
		SDL_DestroyWindow(this->_window);
		SDL_Quit();
		return false;
	}

	this->_buffer = new Uint32[this->SCREEN_WIDTH * this->SCREEN_HEIGHT];
	memset(this->_buffer, 0xFF,
			this->SCREEN_WIDTH * this->SCREEN_HEIGHT * sizeof(Uint32));

	for (int i = 0; i < this->SCREEN_WIDTH * this->SCREEN_HEIGHT; i++) {
		_buffer[i] = 0x000000FF;

	}

	Screen::update();

	return true;
}

void Screen::setPixel(int x, int y, uint red, uint green, uint blue) {
	unsigned int colour = 0;

	colour += red;
	colour <<= 8;

	colour += green;
	colour <<= 8;

	colour += blue;
	colour <<= 8;
	colour += 0xff;

	this->_buffer[(y * this->SCREEN_WIDTH) + x] = colour;
}

void Screen::update() {

	SDL_UpdateTexture(this->_texture,
	NULL, this->_buffer, this->SCREEN_WIDTH * sizeof(Uint32));

	SDL_RenderClear(this->_renderer);
	SDL_RenderCopy(this->_renderer, this->_texture, NULL, NULL);
	SDL_RenderPresent(this->_renderer);
}

bool Screen::processEvents() {
	SDL_Event event;

	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_QUIT) {
			return false;
		}
	}
	return true;
}

void Screen::close() {
	delete (this->_buffer);
	SDL_DestroyRenderer(this->_renderer);
	SDL_DestroyTexture(this->_texture);
	SDL_DestroyWindow(this->_window);
	SDL_Quit();
}

} /* namespace sdc */
