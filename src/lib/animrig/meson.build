inc_anim = include_directories('.')

inc_anim_private = [ 
  include_directories('../blenkernel'),
  include_directories('../blentranslation'),
  include_directories('../editors/include'),
  include_directories('../makesrna'),
  include_directories('../windowmanager'),
  include_directories('../../extern/fmtlib/include'),
  include_directories('../depsgraph'),
  include_directories('../makesrna'), # RNA_prototypes.h
]

inc_anim_private += [
  inc_bke, inc_bli, inc_dna, inc_atomic, inc_mem, inc_clog,
]

dep_anim = [bli, dna, mem, atomic, clog] # + editor_interface

src_anim = files(
  'intern/action.cc',
  'intern/anim_rna.cc',
  'intern/animdata.cc',
  'intern/bone_collections.cc',
  'intern/bonecolor.cc',
  'intern/driver.cc',
  'intern/evaluation.cc',
  'intern/fcurve.cc',
  'intern/keyframing.cc',
  'intern/keyframing_auto.cc',
  'intern/visualkey.cc',

  'ANIM_action.hh',
  'ANIM_animdata.hh',
  'ANIM_armature_iter.hh',
  'ANIM_bone_collections.hh',
  'ANIM_bonecolor.hh',
  'ANIM_driver.hh',
  'ANIM_evaluation.hh',
  'ANIM_fcurve.hh', 
  'ANIM_keyframing.hh',
  'ANIM_keyingsets.hh',
  'ANIM_rna.hh',
  'ANIM_visualkey.hh',
  'intern/bone_collections_internal.hh',
  'intern/evaluation_internal.hh',
)

lib_anim = static_library(
  'acc_anim',
  src_anim,
  include_directories: inc_anim_private,
  dependencies: dep_anim,
  install: true,
)

anim = declare_dependency(
  include_directories: inc_anim,
  link_with: lib_anim,
)