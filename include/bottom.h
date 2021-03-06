
#ifndef _BOTTOM_H_
#define _BOTTOM_H_

#include "SDL.h"

void set_pixel_alpha(SDL_Surface *surface, int x, int y, Uint8 alpha);
Uint32 get_pixel(SDL_Surface *surface, int x, int y);
void set_pixel(SDL_Surface *surface, int x, int y, Uint32 dst);
void create_bullet_hole(
SDL_Surface *dest, SDL_Surface *z, int tx, int ty);

#define RES_DIR "res/"

#endif


