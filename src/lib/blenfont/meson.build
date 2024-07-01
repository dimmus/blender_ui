inc_blf = include_directories('.')

inc_blf_private = [
  include_directories('../blenkernel'),
  include_directories('../blentranslation'),
  include_directories('../gpu'),
  include_directories('../imbuf'),
  include_directories('../makesrna'),
]

inc_blf_private += [
    inc_mem, inc_dna, inc_bli, inc_blf
]

dep_blf_private = [
    gpu, dep_brotli, dep_freetype
]

src_blf = files(
  'intern/blf.cc',
  'intern/blf_default.cc',
  'intern/blf_dir.cc',
  'intern/blf_font.cc',
  'intern/blf_font_default.cc',
  'intern/blf_glyph.cc',
  'intern/blf_thumbs.cc',
  'BLF_api.hh',
  'intern/blf_internal.hh',
  'intern/blf_internal_types.hh',
)

# if(WIN32)
#   list(APPEND SRC
#     intern/blf_font_win32_compat.cc
#   )
# endif()

# if(WITH_PYTHON)
#   add_definitions(-DWITH_PYTHON)
#   list(APPEND INC
#     ../python
#   )
# endif()

lib_blf = static_library('acc_blf',
  src_blf,
  include_directories: inc_blf_private,
  dependencies: dep_blf_private,
  install: true,
)

blf = declare_dependency(
  include_directories: inc_blf,
  link_with: lib_blf,
)