inc_memutil = include_directories('.')

inc_memutil_private = [
  include_directories('../')
]

dep_memutil = [bli]

src_memutil = files(
    'intern/MEM_CacheLimiterC-Api.cpp',
    'intern/MEM_RefCountedC-Api.cpp',

    'MEM_Allocator.h',
    'MEM_CacheLimiter.h',
    'MEM_CacheLimiterC-Api.h',
    'MEM_RefCounted.h',
    'MEM_RefCountedC-Api.h',
)

lib_memutil = static_library(
  'acc_memutil',
  src_memutil,
  include_directories: inc_memutil_private,
  dependencies: dep_memutil,
  install: true,
)

memutil = declare_dependency(
  include_directories: inc_memutil,
  link_with: lib_memutil,
)