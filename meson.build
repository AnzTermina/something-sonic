project('something-sonic', 'c',
        default_options: 'default_library=static')

sdl2_dep = dependency('sdl2')
cmocka_dep = dependency('cmocka')

src = ['game.c', 'src/input.c']

executable('game', src,
           win_subsystem: 'windows',
           dependencies: sdl2_dep)

test_exe = executable('prog', 'test/testprog.c', dependencies: cmocka_dep)
test('testing tests', test_exe)

inputs_exe = executable('inputs', ['test/testinput.c', 'src/input.c'], dependencies: [cmocka_dep, sdl2_dep])
test('test inputs', inputs_exe)