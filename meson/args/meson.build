if WITH_MEM_JEMALLOC
    add_project_arguments('-DWITH_MEM_JEMALLOC', language: langs)
endif

if WITH_MEM_VALGRIND
    add_project_arguments('-DWITH_MEM_VALGRIND', language: langs)
endif

if WITH_CXX_GUARDEDALLOC
    add_project_arguments('-DWITH_CXX_GUARDEDALLOC', language: langs)
endif

if LINUX and not (APPLE or HAIKU)
    if WITH_GHOST_WAYLAND
        add_project_arguments('-DWITH_GHOST_WAYLAND', language: langs)
        if WITH_GHOST_WAYLAND_LIBDECOR
            add_project_arguments('-DWITH_GHOST_WAYLAND_LIBDECOR', language: langs)
        endif
        if WITH_GHOST_WAYLAND_DYNLOAD
            add_project_arguments('-DWITH_GHOST_WAYLAND_DYNLOAD', language: langs)
        endif
    endif
endif

if WITH_GHOST_DEBUG
    add_project_arguments('-DWITH_GHOST_DEBUG', language: langs)
endif

if WITH_OPENGL_BACKEND and not APPLE
    add_project_arguments('-DWITH_OPENGL_BACKEND', language: langs)
endif

if LINUX
    if COMPILER_IS_GNUCC
        if WITH_LINKER_GOLD
            add_project_arguments('-DWITH_LINKER_GOLD', language: langs)
        endif
    endif
    if COMPILER_IS_GNUCC or COMPILER_IS_CLANG
        if WITH_LINKER_LLD
            add_project_arguments('-DWITH_LINKER_LLD', language: langs)
        endif
        if WITH_LINKER_MOLD
            add_project_arguments('-DWITH_LINKER_MOLD', language: langs)
        endif
    endif
endif

if COMPILER_IS_GNUCC or COMPILER_IS_CLANG
    add_project_arguments('-DWITH_COMPILER_SHORT_FILE_MACRO', language: langs)
endif

# lfs on glibc, all compilers should use
if LINUX
    add_project_arguments(
        ['-D_LARGEFILE_SOURCE', '-D_FILE_OFFSET_BITS=64', '-D_LARGEFILE64_SOURCE'],
        language: langs,
    )
endif

if WINDOWS
  if WITH_BLENDER_THUMBNAILER
    # Needed for querying the `thumbnailer.dll` in `winstuff.c`.
    add_project_arguments('-DWITH_BLENDER_THUMBNAILER', language: langs)
  endif
endif

# datatoc
if not WITH_HEADLESS
    if WINDOWS
        # for winstuff_dir.cc
        add_project_arguments('-DUSE_STANDALONE', language: langs)
    endif
endif