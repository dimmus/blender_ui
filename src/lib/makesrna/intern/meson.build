inc_rna_intern = include_directories('.')

if COMPILER_IS_GNUCC
  # add here so we fail early.
  c_compiler_flags += '-Werror=implicit-function-declaration'
endif

# Needed for `mallocn.c`.
if HAVE_MALLOC_STATS_H
  add_project_arguments('-DHAVE_MALLOC_STATS_H')
endif

# files rna_access.cc rna_define.cc makesrna.cc intentionally excluded.
src_def = files(
  'rna_ID.cc',
  'rna_action.cc',
  'rna_animation.cc',
  'rna_animviz.cc',
  'rna_armature.cc',
  'rna_asset.cc',
  'rna_attribute.cc',
  'rna_boid.cc',
  'rna_brush.cc',
  'rna_cachefile.cc',
  'rna_camera.cc',
  'rna_cloth.cc',
  'rna_collection.cc',
  'rna_color.cc',
  'rna_constraint.cc',
  'rna_context.cc',
  'rna_curve.cc',
  'rna_curveprofile.cc',
  'rna_curves.cc',
  'rna_depsgraph.cc',
  'rna_dynamicpaint.cc',
  'rna_fcurve.cc',
  'rna_fluid.cc',
  'rna_gpencil_legacy.cc',
  'rna_gpencil_legacy_modifier.cc',
  'rna_image.cc',
  'rna_key.cc',
  'rna_lattice.cc',
  'rna_layer.cc',
  'rna_light.cc',
  'rna_lightprobe.cc',
  'rna_linestyle.cc',
  'rna_main.cc',
  'rna_mask.cc',
  'rna_material.cc',
  'rna_mesh.cc',
  'rna_meta.cc',
  'rna_modifier.cc',
  'rna_movieclip.cc',
  'rna_nla.cc',
  'rna_node_socket.cc',
  'rna_node_tree_interface.cc',
  'rna_nodetree.cc',
  'rna_object.cc',
  'rna_object_force.cc',
  'rna_packedfile.cc',
  'rna_palette.cc',
  'rna_particle.cc',
  'rna_pointcloud.cc',
  'rna_pose.cc',
  'rna_render.cc',
  'rna_rigidbody.cc',
  'rna_rna.cc',
  'rna_scene.cc',
  'rna_screen.cc',
  'rna_sculpt_paint.cc',
  'rna_sequencer.cc',
  'rna_shader_fx.cc',
  'rna_sound.cc',
  'rna_space.cc',
  'rna_speaker.cc',
  'rna_test.cc',
  'rna_text.cc',
  'rna_texture.cc',
  'rna_timeline.cc',
  'rna_tracking.cc',
  'rna_ui.cc',
  'rna_userdef.cc',
  'rna_vfont.cc',
  'rna_volume.cc',
  'rna_wm.cc',
  'rna_wm_gizmo.cc',
  'rna_workspace.cc',
  'rna_world.cc',
  'rna_xr.cc',
)

if WITH_USD
  src_def += files('rna_usd.cc')
  add_project_arguments('-DWITH_USD')
endif

if WITH_EXPERIMENTAL_FEATURES
  add_project_arguments('-DWITH_SIMULATION_DATABLOCK')
  add_project_arguments('-DWITH_GREASE_PENCIL_V3')
  add_project_arguments('-DWITH_ANIM_BAKLAVA')
  src_def += files('rna_grease_pencil.cc')
endif

src_api = files(
  'rna_action_api.cc',
  'rna_animation_api.cc',
  'rna_armature_api.cc',
  'rna_camera_api.cc',
  'rna_curve_api.cc',
  'rna_fcurve_api.cc',
  'rna_image_api.cc',
  'rna_lattice_api.cc',
  'rna_main_api.cc',
  'rna_material_api.cc',
  'rna_mesh_api.cc',
  'rna_meta_api.cc',
  'rna_object_api.cc',
  'rna_pose_api.cc',
  'rna_scene_api.cc',
  'rna_sequencer_api.cc',
  'rna_sound_api.cc',
  'rna_space_api.cc',
  'rna_text_api.cc',
  'rna_texture_api.cc',
  'rna_ui_api.cc',
  'rna_vfont_api.cc',
  'rna_wm_api.cc',
  'rna_wm_gizmo_api.cc',
  'rna_workspace_api.cc',
)

# string(REGEX REPLACE "rna_([a-zA-Z0-9_-]*).c" "${CMAKE_CURRENT_BINARY_DIR}/rna_\\1_gen.c" GENSRC "${DEFSRC}")
# list(APPEND GENSRC
#   "${CMAKE_CURRENT_BINARY_DIR}/rna_prototypes_gen.h"
#   "${CMAKE_CURRENT_BINARY_DIR}/../RNA_prototypes.h"
# )
# set_source_files_properties(${GENSRC} PROPERTIES GENERATED TRUE)
src_gen = files(
  # 'rna_prototypes_gen.h',
  # '../RNA_prototypes.h'
)

src_rna = files(
  'makesrna.cc',
  'rna_define.cc',
  '../../clog/clog.c',
  '../../../../release/datafiles/userdef/userdef_default.c',
  '../../../../release/datafiles/userdef/userdef_default_theme.c',
)

src_rna += [src_def, src_api]

bin_rna = executable(
  'acc_rna',
  src_rna,
  include_directories: [
    inc_rna,
    inc_dna,
    inc_rna_intern,
    inc_mem,
    inc_bli,
    inc_clog,
    inc_fmtlib,
    include_directories('../../blenkernel'),
    include_directories('../../windowmanager'),
    include_directories('../../editors/include'),
    include_directories('../../animrig'),
    include_directories('../../gpu'),
    include_directories('../../blenloader'),
    include_directories('../../imbuf'),
    include_directories('../../simulation'),
    include_directories('../../depsgraph'),
    include_directories('../../asset_system'),
    include_directories('../../blenfont'),
    include_directories('../../bmesh'),
    include_directories('../../draw'),
    include_directories('../../ikplugin'),
    include_directories('../../io/usd'),
    include_directories('../../nodes'),
    include_directories('../../nodes/geometry/include'),
    include_directories('../../sequencer'),
    include_directories('../../editors/asset'),
    include_directories('../../render'),
    include_directories('../../memutil'),
    include_directories('../../mantaflow/extern'),
    include_directories('../../cycles/blender'),
    include_directories('../../modifiers'),
  ],
  dependencies: [dna, atomic, mem, dna_blenlib],
  install: false,
)


# lib_rna = library('acc_rna', src_rna, include_directories: [inc_rna], install: true, version: version)

# rna = declare_dependency(
#   include_directories: [inc_rna],
#   link_with: lib_rna,
# )