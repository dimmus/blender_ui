inc_drw = include_directories('.')

inc_drw_private = [
    '../blenfont',
    '../blenkernel',
    '../blenloader',
    '../blentranslation',
    '../bmesh',
    '../editors/include',
    '../editors/space_view3d',
    '../functions',
    '../gpu',
    '../gpu/intern',
    '../imbuf',
    '../makesrna',
    '../nodes',
    '../render',
    '../render/intern',
    '../compositor/realtime_compositor',
    '../compositor/realtime_compositor/algorithms',
    '../compositor/realtime_compositor/cached_resources',
    '../windowmanager',
    '../opensubdiv',
    '../depsgraph',
    '../animrig'
]

inc_drw_private += [
    inc_mem, inc_dna, inc_bli, inc_atomic, inc_clog
]

dep_drw_private = [
    atomic, mem, clog, bli, dna
]

src_drw = files(
  './intern/attribute_convert.cc',
  './intern/draw_cache.cc',
  './intern/draw_cache_extract_mesh.cc',
  './intern/draw_cache_extract_mesh_render_data.cc',
  './intern/mesh_extractors/extract_mesh.cc',
  './intern/mesh_extractors/extract_mesh_ibo_edituv.cc',
  './intern/mesh_extractors/extract_mesh_ibo_fdots.cc',
  './intern/mesh_extractors/extract_mesh_ibo_lines.cc',
  './intern/mesh_extractors/extract_mesh_ibo_lines_adjacency.cc',
  './intern/mesh_extractors/extract_mesh_ibo_lines_paint_mask.cc',
  './intern/mesh_extractors/extract_mesh_ibo_points.cc',
  './intern/mesh_extractors/extract_mesh_ibo_tris.cc',
  './intern/mesh_extractors/extract_mesh_vbo_attributes.cc',
  './intern/mesh_extractors/extract_mesh_vbo_edge_fac.cc',
  './intern/mesh_extractors/extract_mesh_vbo_edit_data.cc',
  './intern/mesh_extractors/extract_mesh_vbo_edituv_data.cc',
  './intern/mesh_extractors/extract_mesh_vbo_edituv_stretch_angle.cc',
  './intern/mesh_extractors/extract_mesh_vbo_edituv_stretch_area.cc',
  './intern/mesh_extractors/extract_mesh_vbo_fdots_edituv_data.cc',
  './intern/mesh_extractors/extract_mesh_vbo_fdots_nor.cc',
  './intern/mesh_extractors/extract_mesh_vbo_fdots_pos.cc',
  './intern/mesh_extractors/extract_mesh_vbo_fdots_uv.cc',
  './intern/mesh_extractors/extract_mesh_vbo_lnor.cc',
  './intern/mesh_extractors/extract_mesh_vbo_mesh_analysis.cc',
  './intern/mesh_extractors/extract_mesh_vbo_orco.cc',
  './intern/mesh_extractors/extract_mesh_vbo_pos.cc',
  './intern/mesh_extractors/extract_mesh_vbo_sculpt_data.cc',
  './intern/mesh_extractors/extract_mesh_vbo_select_idx.cc',
  './intern/mesh_extractors/extract_mesh_vbo_skin_roots.cc',
  './intern/mesh_extractors/extract_mesh_vbo_tan.cc',
  './intern/mesh_extractors/extract_mesh_vbo_uv.cc',
  './intern/mesh_extractors/extract_mesh_vbo_vnor.cc',
  './intern/mesh_extractors/extract_mesh_vbo_weights.cc',
  './intern/draw_attributes.cc',
  './intern/draw_cache_impl_curve.cc',
  './intern/draw_cache_impl_curves.cc',
  './intern/draw_cache_impl_gpencil_legacy.cc',
  './intern/draw_cache_impl_grease_pencil.cc',
  './intern/draw_cache_impl_lattice.cc',
  './intern/draw_cache_impl_mesh.cc',
  './intern/draw_cache_impl_particles.cc',
  './intern/draw_cache_impl_pointcloud.cc',
  './intern/draw_cache_impl_subdivision.cc',
  './intern/draw_cache_impl_volume.cc',
  './intern/draw_color_management.cc',
  './intern/draw_command.cc',
  './intern/draw_common.cc',
  './intern/draw_curves.cc',
  './intern/draw_debug.cc',
  './intern/draw_fluid.cc',
  './intern/draw_hair.cc',
  './intern/draw_instance_data.cc',
  './intern/draw_manager.cc',
  './intern/draw_manager_c.cc',
  './intern/draw_manager_data.cc',
  './intern/draw_manager_exec.cc',
  './intern/draw_manager_profiling.cc',
  './intern/draw_manager_shader.cc',
  './intern/draw_manager_text.cc',
  './intern/draw_manager_texture.cc',
  './intern/draw_pbvh.cc',
  './intern/draw_pointcloud.cc',
  './intern/draw_resource.cc',
  './intern/draw_sculpt.cc',
  './intern/draw_select_buffer.cc',
  './intern/draw_shader.cc',
  './intern/draw_texture_pool.cc',
  './intern/draw_view.cc',
  './intern/draw_view_c.cc',
  './intern/draw_view_data.cc',
  './intern/draw_volume.cc',
  './engines/basic/basic_engine.cc',
  './engines/basic/basic_shader.cc',
  './engines/compositor/compositor_engine.cc',
  './engines/image/image_engine.cc',
  './engines/image/image_shader.cc',
  './engines/eevee_next/eevee_ambient_occlusion.cc',
  './engines/eevee_next/eevee_camera.cc',
  './engines/eevee_next/eevee_cryptomatte.cc',
  './engines/eevee_next/eevee_depth_of_field.cc',
  './engines/eevee_next/eevee_engine.cc',
  './engines/eevee_next/eevee_film.cc',
  './engines/eevee_next/eevee_hizbuffer.cc',
  './engines/eevee_next/eevee_instance.cc',
  './engines/eevee_next/eevee_lightprobe_volume.cc',
  './engines/eevee_next/eevee_light.cc',
  './engines/eevee_next/eevee_lightcache.cc',
  './engines/eevee_next/eevee_lightprobe.cc',
  './engines/eevee_next/eevee_lookdev.cc',
  './engines/eevee_next/eevee_lut.cc',
  './engines/eevee_next/eevee_material.cc',
  './engines/eevee_next/eevee_motion_blur.cc',
  './engines/eevee_next/eevee_pipeline.cc',
  './engines/eevee_next/eevee_lightprobe_planar.cc',
  './engines/eevee_next/eevee_precompute.cc',
  './engines/eevee_next/eevee_raytrace.cc',
  './engines/eevee_next/eevee_lightprobe_sphere.cc',
  './engines/eevee_next/eevee_renderbuffers.cc',
  './engines/eevee_next/eevee_sampling.cc',
  './engines/eevee_next/eevee_shader.cc',
  './engines/eevee_next/eevee_shadow.cc',
  './engines/eevee_next/eevee_subsurface.cc',
  './engines/eevee_next/eevee_sync.cc',
  './engines/eevee_next/eevee_velocity.cc',
  './engines/eevee_next/eevee_view.cc',
  './engines/eevee_next/eevee_volume.cc',
  './engines/eevee_next/eevee_world.cc',
  './engines/workbench/workbench_effect_antialiasing.cc',
  './engines/workbench/workbench_effect_cavity.cc',
  './engines/workbench/workbench_effect_dof.cc',
  './engines/workbench/workbench_effect_outline.cc',
  './engines/workbench/workbench_engine.cc',
  './engines/workbench/workbench_materials.cc',
  './engines/workbench/workbench_mesh_passes.cc',
  './engines/workbench/workbench_resources.cc',
  './engines/workbench/workbench_shader_cache.cc',
  './engines/workbench/workbench_shadow.cc',
  './engines/workbench/workbench_state.cc',
  './engines/workbench/workbench_volume.cc',
  './engines/external/external_engine.cc',
  './engines/gpencil/gpencil_antialiasing.cc',
  './engines/gpencil/gpencil_cache_utils.cc',
  './engines/gpencil/gpencil_draw_data.cc',
  './engines/gpencil/gpencil_engine_c.cc',
  './engines/gpencil/gpencil_render.cc',
  './engines/gpencil/gpencil_shader_c.cc',
  './engines/gpencil/gpencil_shader_fx.cc',
  './engines/select/select_draw_utils.cc',
  './engines/select/select_engine.cc',
  './engines/select/select_instance.cc',
  './engines/overlay/overlay_antialiasing.cc',
  './engines/overlay/overlay_armature.cc',
  './engines/overlay/overlay_background.cc',
  './engines/overlay/overlay_edit_curve.cc',
  './engines/overlay/overlay_edit_curves.cc',
  './engines/overlay/overlay_edit_mesh.cc',
  './engines/overlay/overlay_edit_text.cc',
  './engines/overlay/overlay_edit_uv.cc',
  './engines/overlay/overlay_engine.cc',
  './engines/overlay/overlay_extra.cc',
  './engines/overlay/overlay_facing.cc',
  './engines/overlay/overlay_fade.cc',
  './engines/overlay/overlay_gpencil_legacy.cc',
  './engines/overlay/overlay_grease_pencil.cc',
  './engines/overlay/overlay_grid.cc',
  './engines/overlay/overlay_image.cc',
  './engines/overlay/overlay_lattice.cc',
  './engines/overlay/overlay_metaball.cc',
  './engines/overlay/overlay_mode_transfer.cc',
  './engines/overlay/overlay_motion_path.cc',
  './engines/overlay/overlay_next_engine.cc',
  './engines/overlay/overlay_next_instance.cc',
  './engines/overlay/overlay_next_shader.cc',
  './engines/overlay/overlay_next_shape.cc',
  './engines/overlay/overlay_outline.cc',
  './engines/overlay/overlay_paint.cc',
  './engines/overlay/overlay_particle.cc',
  './engines/overlay/overlay_sculpt.cc',
  './engines/overlay/overlay_sculpt_curves.cc',
  './engines/overlay/overlay_shader.cc',
  './engines/overlay/overlay_viewer_attribute.cc',
  './engines/overlay/overlay_viewer_text.cc',
  './engines/overlay/overlay_volume.cc',
  './engines/overlay/overlay_wireframe.cc',
  'DRW_engine.hh',
  'DRW_pbvh.hh',
  'DRW_select_buffer.hh',
#   './intern/DRW_drw_wrapper.hh',
  './intern/DRW_render.hh',
  './intern/attribute_convert.hh',
  './intern/draw_attributes.hh',
  './intern/draw_cache.hh',
  './intern/draw_cache_extract.hh',
  './intern/draw_cache_impl.hh',
  './intern/draw_cache_inline.hh',
  './intern/draw_color_management.hh',
  './intern/draw_command.hh',
  './intern/draw_common.hh',
  './intern/draw_common_c.hh',
  './intern/draw_common_shader_shared.hh',
  './intern/draw_curves_private.hh',
  './intern/draw_debug.hh',
  './intern/draw_debug_c.hh',
  './intern/draw_hair_private.hh',
  './intern/draw_handle.hh',
  './intern/draw_instance_data.hh',
  './intern/draw_manager.hh',
  './intern/draw_manager_c.hh',
  './intern/draw_manager_profiling.hh',
  './intern/draw_manager_testing.hh',
  './intern/draw_manager_text.hh',
  './intern/draw_pass.hh',
  './intern/draw_pbvh.hh',
  './intern/draw_resource.hh',
  './intern/draw_sculpt.hh',
  './intern/draw_shader.hh',
  './intern/draw_shader_shared.hh',
  './intern/draw_state.hh',
  './intern/draw_subdivision.hh',
  './intern/draw_texture_pool.hh',
  './intern/draw_view.hh',
  './intern/draw_view_c.hh',
  './intern/draw_view_data.hh',
  './intern/mesh_extractors/extract_mesh.hh',
  './engines/basic/basic_engine.h',
  './engines/basic/basic_private.h',
  './engines/compositor/compositor_engine.h',
  './engines/eevee_next/eevee_ambient_occlusion.hh',
  './engines/eevee_next/eevee_camera.hh',
  './engines/eevee_next/eevee_cryptomatte.hh',
  './engines/eevee_next/eevee_depth_of_field.hh',
  './engines/eevee_next/eevee_engine.h',
  './engines/eevee_next/eevee_film.hh',
  './engines/eevee_next/eevee_gbuffer.hh',
  './engines/eevee_next/eevee_hizbuffer.hh',
  './engines/eevee_next/eevee_instance.hh',
  './engines/eevee_next/eevee_lightprobe_volume.hh',
  './engines/eevee_next/eevee_light.hh',
  './engines/eevee_next/eevee_lightcache.hh',
  './engines/eevee_next/eevee_lightprobe.hh',
  './engines/eevee_next/eevee_lookdev.hh',
  './engines/eevee_next/eevee_lut.hh',
  './engines/eevee_next/eevee_material.hh',
  './engines/eevee_next/eevee_motion_blur.hh',
  './engines/eevee_next/eevee_pipeline.hh',
  './engines/eevee_next/eevee_lightprobe_planar.hh',
  './engines/eevee_next/eevee_precompute.hh',
  './engines/eevee_next/eevee_raytrace.hh',
  './engines/eevee_next/eevee_lightprobe_sphere.hh',
  './engines/eevee_next/eevee_renderbuffers.hh',
  './engines/eevee_next/eevee_sampling.hh',
  './engines/eevee_next/eevee_shader.hh',
  './engines/eevee_next/eevee_shadow.hh',
  './engines/eevee_next/eevee_subsurface.hh',
  './engines/eevee_next/eevee_sync.hh',
  './engines/eevee_next/eevee_velocity.hh',
  './engines/eevee_next/eevee_view.hh',
  './engines/eevee_next/eevee_volume.hh',
  './engines/eevee_next/eevee_world.hh',
  './engines/external/external_engine.h',
  './engines/gpencil/gpencil_engine.h',
  './engines/image/image_batches.hh',
  './engines/image/image_buffer_cache.hh',
  './engines/image/image_drawing_mode.hh',
  './engines/image/image_engine.h',
  './engines/image/image_enums.hh',
  './engines/image/image_instance_data.hh',
  './engines/image/image_partial_updater.hh',
  './engines/image/image_private.hh',
  './engines/image/image_shader_params.hh',
  './engines/image/image_space.hh',
  './engines/image/image_space_image.hh',
  './engines/image/image_space_node.hh',
  './engines/image/image_texture_info.hh',
  './engines/image/image_usage.hh',
  './engines/overlay/overlay_engine.h',
  './engines/overlay/overlay_next_background.hh',
  './engines/overlay/overlay_next_empty.hh',
  './engines/overlay/overlay_next_grid.hh',
  './engines/overlay/overlay_next_instance.hh',
  './engines/overlay/overlay_next_metaball.hh',
  './engines/overlay/overlay_next_prepass.hh',
  './engines/overlay/overlay_next_private.hh',
  './engines/overlay/overlay_private.hh',
  './engines/select/select_defines.hh',
  './engines/select/select_engine.hh',
  './engines/select/select_instance.hh',
  './engines/select/select_private.hh',
  './engines/workbench/workbench_defines.hh',
  './engines/workbench/workbench_engine.h',
  './engines/workbench/workbench_enums.hh',
  './engines/workbench/workbench_private.hh',
  './engines/workbench/workbench_shader_shared.h',
)

src_drw_shaders_c = []

subdir('engines')
subdir('intern')

lib_drw_shaders = static_library('acc_drw_shaders',
  src_drw_shaders_c,
  include_directories: inc_drw_private,
  install: true,
)

drw_shaders = declare_dependency(
  include_directories: inc_drw,
  link_with: lib_drw_shaders,
)

# set(GLSL_C)

# foreach(GLSL_FILE ${GLSL_SRC})
#   data_to_c_simple(${GLSL_FILE} GLSL_C STRIP_LEADING_C_COMMENTS)
# endforeach()

# blender_add_lib(bf_draw_shaders "${GLSL_C}" "" "" "")

# list(APPEND LIB
#   PRIVATE bf::animrig
#   bf_draw_shaders
# )

# set(GLSL_SOURCE_CONTENT "")

# foreach(GLSL_FILE ${GLSL_SRC})
#   get_filename_component(GLSL_FILE_NAME ${GLSL_FILE} NAME)
#   string(REPLACE "." "_" GLSL_FILE_NAME_UNDERSCORES ${GLSL_FILE_NAME})
#   string(APPEND GLSL_SOURCE_CONTENT "SHADER_SOURCE\(datatoc_${GLSL_FILE_NAME_UNDERSCORES}, \"${GLSL_FILE_NAME}\", \"${GLSL_FILE}\"\)\n")
# endforeach()

# set(glsl_source_list_file "${CMAKE_CURRENT_BINARY_DIR}/glsl_draw_source_list.h")
# file(GENERATE OUTPUT ${glsl_source_list_file} CONTENT "${GLSL_SOURCE_CONTENT}")
# list(APPEND SRC ${glsl_source_list_file})
# list(APPEND INC ${CMAKE_CURRENT_BINARY_DIR})

# target_include_directories(bf_draw_shaders PUBLIC ${CMAKE_CURRENT_BINARY_DIR})

# list(APPEND INC
# )

# if(WITH_DRAW_DEBUG)
#   list(APPEND SRC
#     engines/select/select_debug_engine.cc
#   )
#   add_definitions(-DWITH_DRAW_DEBUG)
# endif()

# if(WITH_OPENSUBDIV)
#   list(APPEND INC_SYS
#     ${OPENSUBDIV_INCLUDE_DIRS}
#   )
# endif()

# if(WITH_OPENVDB)
#   list(APPEND INC
#     ../../../intern/openvdb
#   )
#   list(APPEND INC_SYS
#     ${OPENVDB_INCLUDE_DIRS}
#   )
#   list(APPEND LIB
#     bf_intern_openvdb
#     ${OPENVDB_LIBRARIES}
#   )
#   add_definitions(-DWITH_OPENVDB ${OPENVDB_DEFINITIONS})
# endif()

# if(WITH_MOD_FLUID)
#   list(APPEND INC
#     ../../../intern/mantaflow/extern
#   )
#   add_definitions(-DWITH_FLUID)
# endif()

# if(WITH_FREESTYLE)
#   add_definitions(-DWITH_FREESTYLE)
# endif()

# if(WITH_XR_OPENXR)
#   add_definitions(-DWITH_XR_OPENXR)
# endif()

# if(WITH_GTESTS)
#   if(WITH_GPU_DRAW_TESTS)
#     add_definitions(-DWITH_GPU_DRAW_TESTS)
#     if(WITH_OPENGL_BACKEND)
#       add_definitions(-DWITH_OPENGL_BACKEND)
#     endif()
#     if(WITH_METAL_BACKEND)
#       add_definitions(-DWITH_METAL_BACKEND)
#     endif()
#     if(WITH_VULKAN_BACKEND)
#       add_definitions(-DWITH_VULKAN_BACKEND)
#       list(APPEND INC_SYS
#         PUBLIC ${VULKAN_INCLUDE_DIRS}
#       )
#       if(APPLE)
#         list(APPEND INC_SYS
#           ${MOLTENVK_INCLUDE_DIRS}
#         )
#       endif()
#     endif()
#   endif()
# endif()

# if(WITH_TBB)
#   add_definitions(-DWITH_TBB)

#   if(WIN32)
#     # TBB includes Windows.h which will define min/max macros
#     # that will collide with the stl versions.
#     add_definitions(-DNOMINMAX)
#   endif()

#   list(APPEND INC_SYS
#     ${TBB_INCLUDE_DIRS}
#   )

#   list(APPEND LIB
#     ${TBB_LIBRARIES}
#   )
# endif()

lib_drw = static_library('acc_drw',
  src_drw,
  include_directories: inc_drw_private,
#   dependencies: dep_anim,
  install: true,
)

drw = declare_dependency(
  include_directories: inc_drw,
  link_with: lib_drw,
)

# if(WITH_GTESTS)
#   if(WITH_GPU_DRAW_TESTS)
#     set(TEST_SRC
#       tests/draw_pass_test.cc
#       tests/draw_testing.cc
#       tests/eevee_test.cc

#       tests/draw_testing.hh
#     )
#     set(TEST_INC
#       ../../../intern/ghost
#       ../drw/tests
#     )
#     set(TEST_LIB
#     )
#     blender_add_test_suite_lib(draw "${TEST_SRC}" "${INC};${TEST_INC}" "${INC_SYS}" "${LIB};${TEST_LIB}")
#   endif()
# endif()
