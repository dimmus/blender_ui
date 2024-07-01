inc_acc = include_directories('.')

dep_acc = [atomic, mem, dna, bli, clog]

src_acc = files('acc.cc')

bin_acc = executable(
  'acc',
  src_acc,
  include_directories: [inc_atomic, inc_clog, inc_mem, inc_dna, inc_rna, inc_bli, inc_acc],
  dependencies: dep_acc,
  install: true,
)

# bke = declare_dependency(
#   include_directories: [ inc_rna, inc_acc ],
#   link_with:           lib_acc,
# )

# hdr_acc = files(
#     'BKE_context.hh',
#     'BKE_main.hh',
#     'BKE_screen.hh',
# )