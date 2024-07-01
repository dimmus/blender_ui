inc_bke_intern = include_directories('.')

dep_bke = [atomic, mem, dna, rna, bli]

src_bke = files('intern/context.cc')

lib_bke = library(
  'acc_bke',
  src_bke,
  include_directories: [inc_atomic, inc_mem, inc_dna, inc_rna, inc_bli, inc_bke],
  dependencies: dep_bke,
  install: true,
  version: version,
)

bke = declare_dependency(
  include_directories: [inc_rna, inc_bke],
  link_with: lib_bke,
)

hdr_bke = files(
  'BKE_context.hh',
  'BKE_global.hh',
  'BKE_main.hh',
  'BKE_screen.hh',
)

install_headers(
  hdr_bke,
  install_dir: dir_include,
)