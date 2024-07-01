inc_bli = include_directories('.')

src_bli = files(
  'intern/BLI_assert.c',
  'intern/math_base_inline.c',
  'intern/math_bits_inline.c',
  'intern/math_geom_inline.c',
  'intern/math_vector_inline.c',
  'intern/string.c',
  'intern/system.c',
)

hdr_bli = files(
  'BLI_allocator.hh',
  'BLI_array.h',
  'BLI_array.hh',
  'BLI_assert.h',
  'BLI_compiler_attrs.h',
  'BLI_compiler_compat.h',
  'BLI_compiler_typecheck.h',
  'BLI_function_ref.hh',
  'BLI_hash.h',
  'BLI_hash.hh',
  'BLI_hash_tables.hh',
  'BLI_implicit_sharing.h',
  'BLI_index_range.hh',
  'BLI_map.hh',
  'BLI_map_slots.hh',
  'BLI_math_base.h',
  'BLI_math_base.hh',
  'BLI_math_bits.h',
  'BLI_math_geom.h',
  'BLI_math_inline.h',
  'BLI_math_numbers.hh',
  'BLI_math_vector.h',
  'BLI_math_vector.hh',
  'BLI_math_vector_types.hh',
  'BLI_memory_utils.h',
  'BLI_memory_utils.hh',
  'BLI_probing_strategies.hh',
  'BLI_random_access_iterator_mixin.hh',
  'BLI_set.hh',
  'BLI_set_slots.hh',
  'BLI_span.hh',
  'BLI_strict_flags.h',
  'BLI_string.h',
  'BLI_string_ref.hh',
  'BLI_sys_types.h',
  'BLI_system.h',
  'BLI_unroll.hh',
  'BLI_utildefines.h',
  'BLI_utildefines_variadic.h',
  'BLI_vector.hh',
)

lib_bli = library(
  'acc_bli',
  src_bli,
  include_directories: [inc_atomic, inc_mem, inc_bli],
  dependencies: mem,
  install: true,
  version: version,
)

bli = declare_dependency(
  include_directories: [inc_bli],
  link_with: lib_bli,
)