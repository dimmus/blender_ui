inc_xxhash = include_directories('.')

src_xxhash = files(
  'xxhash.c',
)

lib_xxhash = static_library(
  'acc_xxhash',
  src_xxhash,
  include_directories: inc_xxhash,
  install: true,
)

xxhash = declare_dependency(
  include_directories: inc_xxhash,
  link_with: lib_xxhash,
)