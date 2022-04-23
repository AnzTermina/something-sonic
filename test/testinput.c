#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "SDL.h"

#include "../src/input.h"
#include "../src/player.h"

static void test_do_key_down(void **state)
{
    struct SDL_KeyboardEvent e =
        {
            .repeat = 0,
            .keysym = {.scancode = SDL_SCANCODE_UP}

        };

    struct Point position =
        {
            .x = 0,
            .y = 0,
        };

    struct Player p =
        {
            .pos = position,
        };
    do_key_down(&e, &p);
    assert_true(p.pos.x == 1);
    (void)state;
}

int main(void)
{
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_do_key_down),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}