inc_wayland_dynload = [
    include_directories('./extern'),
    include_directories('./intern')
]

dep_wayland_dynload = [dep_wayland_client, dep_wayland_cursor]

src_wayland_dynload = files(
    'intern/wayland_dynload_client.c',
    'intern/wayland_dynload_cursor.c',
    'intern/wayland_dynload_utils.c',
    'extern/wayland_dynload_API.h',
    'extern/wayland_dynload_client.h',
    'extern/wayland_dynload_cursor.h',
    'intern/wayland_dynload_utils.h',
)

if WITH_OPENGL_BACKEND
    dep_wayland_dynload += dep_wayland_egl
    src_wayland_dynload += files(
        'intern/wayland_dynload_egl.c',
        'extern/wayland_dynload_egl.h',
    )
  if WITH_GHOST_WAYLAND_LIBDECOR
    dep_wayland_dynload += dep_libdecor
    src_wayland_dynload += files(
      'intern/wayland_dynload_libdecor.c',
      'extern/wayland_dynload_libdecor.h',
    )
  endif
endif

lib_wayland_dynload = static_library(
  'acc_wayland_dynload',
  src_wayland_dynload,
  # include_directories: inc_wayland_dynload,
  dependencies: dep_wayland_dynload,
  install: true,
)

wayland_dynload = declare_dependency(
  include_directories: inc_wayland_dynload,
  link_with: lib_wayland_dynload,
)
