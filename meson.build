project('something-sonic', 'c',
        default_options: 'default_library=static')

sdl2_dep = dependency('sdl2')

executable('game', 'game.c',
           win_subsystem: 'windows',
           dependencies: sdl2_dep)
