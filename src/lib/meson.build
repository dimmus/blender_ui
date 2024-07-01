subdir('atomic')
subdir('guardedalloc')
subdir('clog')
subdir('libc_compat')
if WINDOWS
    subdir('utfconv')
endif
if LINUX and not APPLE
    subdir('eigen')
endif
subdir('makesdna')
subdir('blenlib')
subdir('memutil')
subdir('blentranslation')
subdir('makesrna')
# subdir('depsgraph')
# subdir('blenkernel')
subdir('ghost')
if LINUX and not APPLE
    # Important this comes after "ghost" as it uses includes defined by GHOST's CMake.
    if WITH_GHOST_WAYLAND and WITH_GHOST_WAYLAND_DYNLOAD
        subdir(wayland_dynload)
    endif
endif
subdir('datatoc')
subdir('blenkernel')
subdir('compositor')
subdir('draw')
subdir('gpu')
subdir('animrig')
subdir('blenfont')
# subdir('imbuf')

# 1