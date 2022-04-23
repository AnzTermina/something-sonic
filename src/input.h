#ifndef INPUT_H_ /* Include guard */
#define INPUT_H_

#include <stdbool.h>
#include "player.h"

void do_input(bool *, SDL_Event *, Player *);
void do_key_down(SDL_KeyboardEvent *, Player *);
void do_key_up(SDL_KeyboardEvent *, Player *);

#endif