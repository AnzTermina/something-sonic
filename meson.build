project('something-sonic', 'c',
        default_options: 'default_library=static')

sdl2_dep = dependency('sdl2')
cmocka_dep = dependency('cmocka')

executable('game', 'game.c',
           win_subsystem: 'windows',
           dependencies: sdl2_dep)

e = executable('prog', 'test/testprog.c', dependencies: cmocka_dep)
test('testing tests', e)