inc_imbuf = include_directories('.')

src_imbuf = files(
  'IMB_imbuf_enums.h',
  'IMB_imbuf_types.hh',
)

hdr_imbuf = files(
  'IMB_imbuf_enums.h',
  'IMB_imbuf_types.hh',
)

lib_imbuf = library(
  'acc_imbuf',
  src_imbuf,
  include_directories: [inc_imbuf],
  install: true,
  version: version,
)

imbuf = declare_dependency(
  include_directories: [inc_imbuf],
  link_with: lib_imbuf,
)

install_headers(
  hdr_imbuf,
  install_dir: dir_include,
)