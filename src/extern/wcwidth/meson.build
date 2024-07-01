inc_wcwidth = include_directories('.')

src_wcwidth = files(
  'wcwidth.c',
)

lib_wcwidth = static_library(
  'acc_wcwidth',
  src_wcwidth,
  include_directories: [inc_wcwidth],
  install: true,
)

wcwidth = declare_dependency(
  include_directories: [inc_wcwidth],
  link_with: lib_wcwidth,
)