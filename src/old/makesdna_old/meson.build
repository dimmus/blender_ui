inc_dna = include_directories('.')

src_dna = files(
  'DNA_ID.h',
  'DNA_ID_enums.h',
  'DNA_asset_types.h',
  'DNA_color_types.h',
  'DNA_customdata_types.h',
  'DNA_defs.h',
  'DNA_image_types.h',
  'DNA_listBase.h',
  'DNA_object_enums.h',
  'DNA_texture_types.h',
  'DNA_userdef_enums.h',
  'DNA_userdef_types.h',
  'DNA_uuid_types.h',
  'DNA_vec_types.h',
)

lib_dna = library('acc_dna', src_dna, include_directories: [inc_dna], install: true, version: version)

dna = declare_dependency(
  include_directories: [inc_dna],
  link_with: lib_dna,
)