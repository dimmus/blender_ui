inc_mem = include_directories('.')

dep_mem = [atomic]

src_mem = files(
  'intern/leak_detector.cc',
  'intern/mallocn.cc',
  'intern/mallocn_guarded_impl.cc',
  'intern/mallocn_lockfree_impl.cc',
  'intern/memory_usage.cc',
)

if WITH_CXX_GUARDEDALLOC
  src_mem += files('cpp/mallocn.cpp')
endif

# Jemalloc 5.0.0+ needs extra configuration.
if WITH_MEM_JEMALLOC
  # if(NOT ("${JEMALLOC_VERSION}" VERSION_LESS "5.0.0"))
  #   add_definitions(-DWITH_JEMALLOC_CONF)
  # endif
endif

lib_mem = static_library(
  'acc_mem',
  src_mem,
  include_directories: inc_mem,
  dependencies: dep_mem,
  install: true,
)

mem = declare_dependency(
  include_directories: inc_mem,
  link_with: lib_mem,
)

hdr_mem = files(
  'MEM_guardedalloc.h',
)

install_headers(
  hdr_mem,
  install_dir: dir_include,
)