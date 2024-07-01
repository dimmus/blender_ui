inc_clog = include_directories('.')

dep_clog = [atomic, mem]

src_clog = files(
  'clog.c',
)

hdr_clog = files(
  'CLG_log.h',
)

# Disabled for makesdna/makesrna.
# add_global_arguments('-DWITH_CLOG_PTHREADS', language: ['c','cpp'])

lib_clog = static_library(
  'acc_clog',
  src_clog,
  include_directories: [inc_atomic, inc_mem],
  dependencies: dep_clog,
  install: true,
)

clog = declare_dependency(
  include_directories: [inc_atomic, inc_mem],
  link_with: lib_clog,
)

install_headers(
  hdr_clog,
  install_dir: dir_include,
)