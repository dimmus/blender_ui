inc_atomic = include_directories('.')

src_atomic = files(
  'intern/atomic_ops_ext.h',
  'intern/atomic_ops_msvc.h',
  'intern/atomic_ops_unix.h',
  'intern/atomic_ops_utils.h',
)

hdr_atomic = files(
  'atomic_ops.h',
)

lib_atomic = library(
  'acc_atomic',
  src_atomic,
  include_directories: [inc_atomic],
  install: true,
  version: version,
)

atomic = declare_dependency(
  include_directories: [inc_atomic],
  link_with: lib_atomic,
)

install_headers(
  hdr_atomic,
  install_dir: dir_include,
)