inc_eigen = include_directories('.')

src_eigen = files(
  'intern/eigenvalues.cc',
  'intern/eigenvalues.h',
  'intern/linear_solver.cc',
  'intern/linear_solver.h',
  'intern/matrix.cc',
  'intern/matrix.h',
  'intern/svd.cc',
  'intern/svd.h',
  'eigen_capi.h',
)

hdr_eigen = files(
  'eigen_capi.h',
)

dep_eigen = [dep_null]
# if WITH_OPENMP and WITH_OPENMP_STATIC)
#   dep_eigen += dep_openmp
# endif

lib_eigen = static_library(
  'acc_eigen',
  src_eigen,
  include_directories: [inc_eigen, inc_eigen_ext],
  dependencies: dep_eigen,
  install: true,
)

eigen = declare_dependency(
  include_directories: [inc_eigen],
  link_with: lib_eigen,
)

install_headers(
  hdr_eigen,
  install_dir: dir_include,
)