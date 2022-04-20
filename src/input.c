#include "SDL.h"
#include <stdbool.h>

#include "input.h"

void do_input(bool *quit, SDL_Event *e)
{
    // Handle events on queue
    while (SDL_PollEvent(e) != 0)
    {
        switch (e->type)
        {
        case SDL_QUIT:
            *quit = true;
            break;
        case SDL_KEYDOWN:
            do_key_down(&(e->key));
            break;
        case SDL_KEYUP:
            do_key_up(&(e->key));
            break;
        default:
            break;
        }
    }
}

void do_key_down(SDL_KeyboardEvent *e)
{
    if (e->repeat == 0)
    {
        switch (e->keysym.scancode)
        {
        case SDL_SCANCODE_UP:
            break;
        case SDL_SCANCODE_DOWN:
            break;
        case SDL_SCANCODE_LEFT:
            break;
        case SDL_SCANCODE_RIGHT:
            break;
        default:
            break;
        }
    }
}

void do_key_up(SDL_KeyboardEvent *e)
{
    if (e->repeat == 0)
    {
        switch (e->keysym.scancode)
        {
        case SDL_SCANCODE_UP:
            break;
        case SDL_SCANCODE_DOWN:
            break;
        case SDL_SCANCODE_LEFT:
            break;
        case SDL_SCANCODE_RIGHT:
            break;
        default:
            break;
        }
    }
}