inc_fmtlib = [include_directories('.'), include_directories('./include')]

src_fmtlib = files(
  'src/format.cc',
)

lib_fmtlib = static_library(
  'acc_fmtlib',
  src_fmtlib,
  include_directories: [inc_fmtlib, include_directories('./include')],
  install: true,
)

fmtlib = declare_dependency(
  include_directories: inc_fmtlib,
  link_with: lib_fmtlib,
)