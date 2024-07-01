inc_dna = include_directories('.')

# if get_option('WITH_FREESTYLE')
#   # add_definitions(-DWITH_FREESTYLE)
# endif

dep_dna = [atomic, mem]

hdr_dna_inc = [
  'DNA_ID.h',
  'DNA_ID_enums.h',
  'DNA_action_types.h',
  'DNA_anim_types.h',
  'DNA_armature_types.h',
  'DNA_asset_types.h',
  'DNA_boid_types.h',
  'DNA_brush_enums.h',
  'DNA_brush_types.h',
  'DNA_cachefile_types.h',
  'DNA_camera_types.h',
  'DNA_cloth_types.h',
  'DNA_collection_types.h',
  'DNA_color_types.h',
  'DNA_constraint_types.h',
  'DNA_curve_types.h',
  'DNA_curveprofile_types.h',
  'DNA_curves_types.h',
  'DNA_customdata_types.h',
  'DNA_defs.h',
  'DNA_documentation.h',
  'DNA_dynamicpaint_types.h',
  'DNA_effect_types.h',
  'DNA_fileglobal_types.h',
  'DNA_fluid_types.h',
  'DNA_freestyle_types.h',
  'DNA_genfile.h',
  'DNA_gpencil_legacy_types.h',
  'DNA_gpencil_modifier_types.h',
  'DNA_gpu_types.h',
  'DNA_grease_pencil_types.h',
  'DNA_image_types.h',
  'DNA_ipo_types.h',
  'DNA_key_types.h',
  'DNA_lattice_types.h',
  'DNA_layer_types.h',
  'DNA_light_types.h',
  'DNA_lightprobe_types.h',
  'DNA_lineart_types.h',
  'DNA_linestyle_types.h',
  'DNA_listBase.h',
  'DNA_mask_types.h',
  'DNA_material_types.h',
  'DNA_mesh_types.h',
  'DNA_meshdata_types.h',
  'DNA_meta_types.h',
  'DNA_modifier_types.h',
  'DNA_movieclip_types.h',
  'DNA_nla_types.h',
  'DNA_node_tree_interface_types.h',
  'DNA_node_types.h',
  'DNA_object_enums.h',
  'DNA_object_fluidsim_types.h',
  'DNA_object_force_types.h',
  'DNA_object_types.h',
  'DNA_outliner_types.h',
  'DNA_packedFile_types.h',
  'DNA_particle_types.h',
  'DNA_pointcache_types.h',
  'DNA_pointcloud_types.h',
  'DNA_rigidbody_types.h',
  'DNA_scene_enums.h',
  'DNA_scene_types.h',
  'DNA_screen_types.h',
  'DNA_sdna_types.h',
  'DNA_sequence_types.h',
  'DNA_session_uid_types.h',
  'DNA_shader_fx_types.h',
  'DNA_sound_types.h',
  'DNA_space_types.h',
  'DNA_speaker_types.h',
  'DNA_text_types.h',
  'DNA_texture_types.h',
  'DNA_tracking_types.h',
  'DNA_userdef_enums.h',
  'DNA_userdef_types.h',
  'DNA_uuid_types.h',
  'DNA_vec_types.h',
  'DNA_vfont_types.h',
  'DNA_view2d_types.h',
  'DNA_view3d_enums.h',
  'DNA_view3d_types.h',
  'DNA_viewer_path_types.h',
  'DNA_volume_types.h',
  'DNA_windowmanager_types.h',
  'DNA_workspace_types.h',
  'DNA_world_types.h',
  'DNA_xr_types.h',
]

hdr_dna_defaults_inc = files(
  'DNA_armature_defaults.h',
  'DNA_asset_defaults.h',
  'DNA_brush_defaults.h',
  'DNA_cachefile_defaults.h',
  'DNA_camera_defaults.h',
  'DNA_collection_defaults.h',
  'DNA_curve_defaults.h',
  'DNA_curves_defaults.h',
  'DNA_defaults.h',
  'DNA_fluid_defaults.h',
  'DNA_gpencil_modifier_defaults.h',
  'DNA_grease_pencil_defaults.h',
  'DNA_image_defaults.h',
  'DNA_lattice_defaults.h',
  'DNA_light_defaults.h',
  'DNA_lightprobe_defaults.h',
  'DNA_linestyle_defaults.h',
  'DNA_material_defaults.h',
  'DNA_mesh_defaults.h',
  'DNA_meta_defaults.h',
  'DNA_modifier_defaults.h',
  'DNA_movieclip_defaults.h',
  'DNA_object_defaults.h',
  'DNA_particle_defaults.h',
  'DNA_pointcloud_defaults.h',
  'DNA_scene_defaults.h',
  'DNA_space_defaults.h',
  'DNA_speaker_defaults.h',
  'DNA_texture_defaults.h',
  'DNA_userdef_defaults.h',
  'DNA_vec_defaults.h',
  'DNA_view3d_defaults.h',
  'DNA_volume_defaults.h',
  'DNA_world_defaults.h',
)

# set(dna_header_include_file "${CMAKE_CURRENT_BINARY_DIR}/dna_includes_all.h")
# set(dna_header_string_file "${CMAKE_CURRENT_BINARY_DIR}/dna_includes_as_strings.h")

# set(DNA_INCLUDE_TEXT "/* Do not edit manually, changes will be overwritten. */\n")
# set(DNA_FILE_LIST "/* Do not edit manually, changes will be overwritten. */\n")
# foreach(header ${SRC_DNA_INC})
#   get_filename_component(dna_header_file ${header} NAME)
#   string(APPEND DNA_INCLUDE_TEXT "#include \"${header}\"\n")
#   string(APPEND DNA_FILE_LIST "\t\"${dna_header_file}\",\n")
# endforeach()

# file(GENERATE OUTPUT ${dna_header_include_file} CONTENT "${DNA_INCLUDE_TEXT}")
# file(GENERATE OUTPUT ${dna_header_string_file} CONTENT "${DNA_FILE_LIST}")

# fs = import('fs')
path = join_paths(dir_source, 'src/lib/makesdna')

# meson.add_install_script(
#   'sh',
#   '-c', 'touch @0@/intern/dna_includes_all.h'.format(path),
# )
# message('touch @0@/intern/dna_includes_all.h'.format(path))
# foreach h_dna : hdr_dna_inc
#   meson.add_install_script(
#     'sh',
#     '-c', 'echo "#include \"@0@@1@\" >> @0@/intern/dna_includes_all.h'.format(path, h_dna),
#   )
#   # message('#include \"@0@@1@\" >> @0@/intern/dna_includes_all.h'.format(path, h_dna))
# endforeach

echo = find_program('echo', native: true, required: false)
foreach h_dna : hdr_dna_inc
  # run_command(
  #   echo,
  #   '\'',
  #   '#include "@0@/@1@"'.format(path, h_dna),
  #   '\'',
  #   '>> @0@/intern/TMP_dna_includes_all.h'.format(path),
  #   check: false,
  # )
  # run_command(
  #   find_program('sed'),
  #   '-i', '"$ a #include "@0@/@1@""'.format(path, h_dna),
  #   '@0@/intern/TMP_dna_includes_all.h'.format(path),
  # )
  # message('echo \'#include "@0@/@1@"\' >> @0@/intern/TMP_dna_includes_all.h'.format(path, h_dna))
  # message(
  #   'echo',
  #   '\'',
  #   '#include "@0@/@1@"'.format(path, h_dna),
  #   '\'',
  #   '>> @0@/intern/TMP_dna_includes_all.h'.format(path),
  # )
  # message(
  #   'sed',
  #   '-i', '"$ a #include "@0@/@1@""'.format(path, h_dna),
  #   '@0@/intern/TMP_dna_includes_all.h'.format(path),
  # )
endforeach

hdr_dna_inc += 'intern/dna_includes_all.h'
hdr_dna_inc += 'intern/dna_includes_as_strings.h'

# Subset of blenlib used by makesdna.
src_local_blenlib = files(
  '../blenlib/intern/BLI_assert.c',
  '../blenlib/intern/BLI_ghash.c',
  '../blenlib/intern/BLI_ghash_utils.cc',
  '../blenlib/intern/BLI_linklist.c',
  '../blenlib/intern/BLI_memarena.c',
  '../blenlib/intern/BLI_mempool.c',
  '../blenlib/intern/endian_switch.c',

  # Dependencies of BLI_mempool.c when ASAN is enabled.
  '../blenlib/intern/gsqueue.c',

  # Dependency of BLI_ghash.c
  '../blenlib/intern/hash_mm2a.cc',
  '../blenlib/intern/listbase.cc',
  '../blenlib/intern/string.c',
  '../blenlib/intern/threads.cc',
  '../blenlib/intern/time.c',
)

# -----------------------------------------------------------------------------
# Build makesdna executable

src_bin_dna = files(
  'intern/dna_includes_all.h',
  'intern/dna_includes_as_strings.h',
  'intern/dna_utils.cc',
  'intern/makesdna.cc',
)

src_bin_dna += src_local_blenlib

bin_dna = executable(
  'acc_dna',
  src_bin_dna,
  include_directories: [
    inc_mem,
    inc_dna,
    include_directories('./intern'),
    include_directories('../blenlib'),
  ],
  dependencies: dep_dna,
  install: false,
)

# Output dna.c
#

gen_files = custom_target(
  output: ['dna.c', 'dna_type_offsets.h', 'dna_verify.c'],
  install: false,
  # install_dir: join_paths(dir_source, 'src/lib/makesdna/intern/'),
  command: [
    bin_dna,
    'dna.c',
    'dna_type_offsets.h',
    'dna_verify.c',
    join_paths(dir_source, 'src/lib/makesdna/'),
  ],
)

if fs.is_file(dir_build / 'dna.c')
  message('moving files ...')
  gen_files = ['dna.c', 'dna_type_offsets.h', 'dna_verify.c']
  foreach f : gen_files
    source = dir_build / f
    dest = dir_build / 'src/lib/makesdna/'
    run_command('mv', source, dest, check: false)
    # fs.copyfile(source, dest)
  endforeach
endif

# -----------------------------------------------------------------------------
# Build bf_dna library

src_dna = files(
  'intern/dna_defaults.c',
  'intern/dna_genfile.cc',
  'intern/dna_rename_defs.h',
  'intern/dna_utils.cc',
  'intern/dna_utils.h',
)

lib_dna = static_library(
  'acc_dna',
  src_dna,
  gen_files,
  hdr_dna_inc,
  include_directories: [
    inc_mem,
    inc_dna,
    include_directories('./intern'),
    include_directories('../blenlib'),
    include_directories('../imbuf'),
    include_directories('../../../../build_linux'),
  ],
  dependencies: dep_dna,
  install: true,
)

dna = declare_dependency(
  include_directories: inc_dna,
  link_with: lib_dna,
)

# -----------------------------------------------------------------------------
# Build bf_dna_blenlib library

src_dna_blenlib = src_local_blenlib + hdr_dna_defaults_inc

lib_dna_blenlib = static_library(
  'acc_dna_blenlib',
  src_dna_blenlib,
  include_directories: [
    inc_mem,
    inc_dna,
    include_directories('./intern'),
    include_directories('../blenlib'),
    include_directories('../'),
    include_directories('../../'),
  ],
  dependencies: dep_dna,
  install: true,
)

dna_blenlib = declare_dependency(
  include_directories: [
    inc_dna,
  ],
  link_with: lib_dna_blenlib,
)