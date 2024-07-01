inc_rna = include_directories('.')

src_rna = files('RNA_types.hh')

lib_rna = library('acc_rna', src_rna, include_directories: [inc_rna], install: true, version: version)

rna = declare_dependency(
  include_directories: [inc_rna],
  link_with: lib_rna,
)