dep_null = dependency('', required: false)

dep_m = cc.find_library('m') # datatoc

if WITH_OPENGL_BACKEND
    dep_epoxy = dependency('epoxy', required: WITH_OPENGL_BACKEND) # gpu
endif

dep_freetype = dependency('freetype2', required: false) # bke
dep_brotli = dependency('libbrotlicommon', required: false) # bke
dep_zlib = dependency('zlib', required: false) # bke, bli
dep_zstd = dependency('libzstd', required: true) # bli

if WITH_GHOST_WAYLAND
    dep_wayland_protocols = dependency('wayland-protocols')
    dep_wayland_client = dependency('wayland-client', version: '>=1.12')
    dep_wayland_server = dependency('wayland-server')
    dep_wayland_egl = dependency('wayland-egl')
    dep_wayland_cursor = dependency('wayland-cursor')
    dep_xkbcommon = dependency('xkbcommon')
    if WITH_GHOST_WAYLAND_LIBDECOR
        dep_libdecor = dependency('libdecor')
    endif
endif

dep_jpeg = dependency('libjpeg') # imbuf
dep_png = dependency('libpng') # datatoc

if WINDOWS
  dep_dxgi = dependency('dxgi', required: false) # bli
endif

# if WITH_TBB
#   dep_tbb = dependency('libtbb', required: true) # bli
# endif

# if WITH_GMP
#   dep_gmp = dependency('libgmp', required: true) # bli
# endif

# if WITH_FFTW3
#   dep_fftw3 = dependency('libfftw3', required: true) # bli
# endif

# if WITH_OPENMP and WITH_OPENMP_STATIC)
#   dep_openmp = dependency('openmp') # eigen
# endif