inc_libc_compat = include_directories('.')

src_libc_compat = files(
  'libc_compat.c',
)

lib_libc_compat = static_library(
  'acc_libc_compat',
  src_libc_compat,
  install: true,
)

libc_compat = declare_dependency(
  link_with: lib_libc_compat,
)