inc_blt = include_directories('.')

dep_blt = [mem, dna, bli]

src_blt = files(
  'intern/blt_lang.cc',
  'intern/blt_translation.cc',
  'BLT_lang.hh',
  'BLT_translation.hh',
)

if WITH_INTERNATIONAL
  add_project_arguments('-DWITH_INTERNATIONAL')
  dep_blt += locale
endif

if WITH_PYTHON
  add_project_arguments('-DWITH_PYTHON')
  # list(APPEND INC
  #   ../python
  # )
endif

if WITH_INPUT_IME
  add_project_arguments('-DWITH_INPUT_IME')
endif

lib_blt = static_library(
  'acc_blentranslation',
  src_blt,
  include_directories: [
    inc_mem, 
    inc_bli, 
    inc_blt, 
    include_directories('../makesrna'), 
    include_directories('../blenkernel'),
    include_directories('../imbuf'),
  ],
  dependencies: dep_blt,
  install: true,
)

atomic = declare_dependency(
  include_directories: inc_blt,
  link_with: lib_blt,
)

if WITH_INTERNATIONAL
  subdir('msgfmt')
endif