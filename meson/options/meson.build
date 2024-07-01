WITH_MEM_JEMALLOC = get_option('mem_jemalloc') == true
WITH_MEM_VALGRIND = get_option('mem_valgrind') == true

WITH_CXX_GUARDEDALLOC = get_option('cxx_guardedalloc') == true

WITH_GHOST_DEBUG = get_option('ghost_debug') == true
WITH_GHOST_WAYLAND = get_option('ghost_wayland') == true
WITH_GHOST_WAYLAND_LIBDECOR = false # get_option('ghost_wayland_libdecor') == true
WITH_GHOST_WAYLAND_DYNLOAD = get_option('ghost_wayland_dynload') == true
WITH_GHOST_WAYLAND_APP_ID = ''

WITH_OPENGL_BACKEND = get_option('opengl_backend') == true

WITH_SYSTEM_FREETYPE = get_option('system_freetype') == true
WITH_SYSTEM_EIGEN3 = get_option('system_eigen3') == true

WITH_COMPILER_SHORT_FILE_MACRO = get_option('compiler_short_file_macro') == true

WITH_LINKER_GOLD = get_option('linker_gold') == true
WITH_LINKER_LLD = get_option('linker_lld') == true
WITH_LINKER_MOLD = get_option('linker_mold') == true

WITH_VULKAN_BACKEND = get_option('vulkan_backend') == true
WITH_VULKAN_GUARDEDALLOC = get_option('vulkan_guardedalloc') == true

WITH_STRSIZE_DEBUG = get_option('strsize_debug') == true

# WITH_TBB = get_option('tbb') == true
# WITH_GMP = get_option('gmp') == true
# WITH_FFTW3 = get_option('fftw3') == true
# WITH_FFTW3_THREADS_F_SUPPORT = get_option('fftw3_thread') == true
WITH_PYTHON_MODULE = get_option('python_module') == true
WITH_BLENDER_THUMBNAILER = get_option('blender_thumbnailer') == true

WITH_USD = false
WITH_EXPERIMENTAL_FEATURES = false
HAVE_MALLOC_STATS_H = false
HAVE_MALLOC_USABLE_SIZE = false
WITH_INTERNATIONAL = false
WITH_PYTHON = false
WITH_INPUT_IME = false

HAVE_POLL = false
HAVE_MEMFD_CREATE = false
WITH_INSTALL_PORTABLE = false

WITH_HEADLESS = false

WITH_COMPOSITOR_CPU = false # com

# Summary
summary_ghost += {'WITH_GHOST_DEBUG': WITH_GHOST_DEBUG}
if LINUX and not APPLE
    summary_ghost += {'WITH_GHOST_WAYLAND': WITH_GHOST_WAYLAND}
    if WITH_GHOST_WAYLAND
        summary_ghost += {'WITH_GHOST_WAYLAND_DYNLOAD': WITH_GHOST_WAYLAND_DYNLOAD}
        summary_ghost += {'WITH_GHOST_WAYLAND_LIBDECOR': WITH_GHOST_WAYLAND_LIBDECOR}
    endif
endif

summary_sys += {'WITH_SYSTEM_FREETYPE': WITH_SYSTEM_FREETYPE}
summary_sys += {'WITH_SYSTEM_EIGEN3': WITH_SYSTEM_EIGEN3}

summary_build += {'WITH_MEM_JEMALLOC': WITH_MEM_JEMALLOC}
summary_build += {'WITH_MEM_VALGRIND': WITH_MEM_VALGRIND}
summary_build += {'WITH_CXX_GUARDEDALLOC': WITH_CXX_GUARDEDALLOC}
summary_build += {'WITH_STRSIZE_DEBUG': WITH_STRSIZE_DEBUG}
summary_build += {'WITH_OPENGL_BACKEND': WITH_OPENGL_BACKEND}
summary_build += {'WITH_VULKAN_BACKEND': WITH_VULKAN_BACKEND}
summary_build += {'WITH_VULKAN_GUARDEDALLOC': WITH_VULKAN_GUARDEDALLOC}
summary_build += {'WITH_LINKER_GOLD': WITH_LINKER_GOLD}
summary_build += {'WITH_LINKER_LLD': WITH_LINKER_LLD}
summary_build += {'WITH_LINKER_MOLD': WITH_LINKER_MOLD}