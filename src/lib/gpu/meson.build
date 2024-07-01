inc_gpu = include_directories('.')

# subdir('./opengl')

inc_gpu_private = [
  # inc_gpu_opengl,
  # inc_bke,
  include_directories('./'),
  include_directories('../'),
  include_directories('../../'),
  include_directories('./dummy'),
  include_directories('./intern'),
  include_directories('./metal'),
  include_directories('./opengl'),
  include_directories('./vulkan'),
  include_directories('../blenkernel'),
  include_directories('../bmesh'),
  include_directories('../draw'),
  include_directories('../imbuf'),
  include_directories('../makesrna'),

  # For theme color access.
  include_directories('../editors/include'),

  # For *_info.hh includes.
  include_directories('../compositor/realtime_compositor'),
  include_directories('../draw/engines/eevee_next'),
  include_directories('../draw/engines/gpencil'),
  include_directories('../draw/engines/select'),
  include_directories('../draw/engines/workbench'),
  include_directories('../draw/intern'),

  # For node muting stuff.
  include_directories('../nodes'),

  include_directories('../ghost'),
  include_directories('../mantaflow/extern'),

  # Private
  inc_bli,
  inc_mem,
  inc_dna,
  # include_directories('../blenlib'),
  # include_directories('../makesdna'),
  include_directories('../atomic'),
  include_directories('../clog'),
  # include_directories('../guardedalloc'),
]

dep_gpu_private = [bli, mem, dna]

# if(WITH_RENDERDOC)
#   list(APPEND INC
#     ../../../extern/renderdoc/include
#     ../../../intern/renderdoc_dynload/include
#   )
#   add_definitions(-DWITH_RENDERDOC)
# endif()

src_gpu = files(
  'intern/gpu_batch.cc',
  'intern/gpu_batch_presets.cc',
  'intern/gpu_batch_utils.cc',
  'intern/gpu_capabilities.cc',
  'intern/gpu_codegen.cc',
  'intern/gpu_compute.cc',
  'intern/gpu_context.cc',
  'intern/gpu_debug.cc',
  'intern/gpu_drawlist.cc',
  'intern/gpu_framebuffer.cc',
  'intern/gpu_immediate.cc',
  'intern/gpu_immediate_util.cc',
  'intern/gpu_index_buffer.cc',
  'intern/gpu_init_exit.cc',
  'intern/gpu_material.cc',
  'intern/gpu_matrix.cc',
  'intern/gpu_node_graph.cc',
  'intern/gpu_platform.cc',
  'intern/gpu_query.cc',
  'intern/gpu_select.cc',
  'intern/gpu_select_next.cc',
  'intern/gpu_select_pick.cc',
  'intern/gpu_select_sample_query.cc',
  'intern/gpu_shader.cc',
  'intern/gpu_shader_builtin.cc',
  'intern/gpu_shader_create_info.cc',
  'intern/gpu_shader_dependency.cc',
  'intern/gpu_shader_interface.cc',
  'intern/gpu_shader_log.cc',
  'intern/gpu_state.cc',
  'intern/gpu_storage_buffer.cc',
  'intern/gpu_texture.cc',
  'intern/gpu_uniform_buffer.cc',
  'intern/gpu_vertex_buffer.cc',
  'intern/gpu_vertex_format.cc',
  'intern/gpu_viewport.cc',

  'GPU_batch.hh',
  'GPU_batch_presets.hh',
  'GPU_batch_utils.hh',
  'GPU_capabilities.hh',
  'GPU_common.hh',
  'GPU_common_types.hh',
  'GPU_compilation_subprocess.hh',
  'GPU_compute.hh',
  'GPU_context.hh',
  'GPU_debug.hh',
  'GPU_drawlist.hh',
  'GPU_framebuffer.hh',
  'GPU_immediate.hh',
  'GPU_immediate_util.hh',
  'GPU_index_buffer.hh',
  'GPU_init_exit.hh',
  'GPU_material.hh',
  'GPU_matrix.hh',
  'GPU_platform.hh',
  'GPU_primitive.hh',
  'GPU_select.hh',
  'GPU_shader.hh',
  'GPU_shader_builtin.hh',
  'GPU_shader_shared.hh',
  'GPU_state.hh',
  'GPU_storage_buffer.hh',
  'GPU_texture.hh',
  'GPU_uniform_buffer.hh',
  'GPU_vertex_buffer.hh',
  'GPU_vertex_format.hh',
  'GPU_viewport.hh',

  'intern/gpu_backend.hh',
  'intern/gpu_capabilities_private.hh',
  'intern/gpu_codegen.hh',
  'intern/gpu_context_private.hh',
  'intern/gpu_debug_private.hh',
  'intern/gpu_drawlist_private.hh',
  'intern/gpu_framebuffer_private.hh',
  'intern/gpu_immediate_private.hh',
  'intern/gpu_material_library.hh',
  'intern/gpu_matrix_private.hh',
  'intern/gpu_node_graph.hh',
  'intern/gpu_platform_private.hh',
  'intern/gpu_private.hh',
  'intern/gpu_query.hh',
  'intern/gpu_select_private.hh',
  'intern/gpu_shader_create_info.hh',
  'intern/gpu_shader_create_info_private.hh',
  'intern/gpu_shader_dependency_private.hh',
  'intern/gpu_shader_interface.hh',
  'intern/gpu_shader_private.hh',
  'intern/gpu_state_private.hh',
  'intern/gpu_storage_buffer_private.hh',
  'intern/gpu_texture_private.hh',
  'intern/gpu_uniform_buffer_private.hh',
  'intern/gpu_vertex_format_private.hh',

  'dummy/dummy_backend.hh',
  'dummy/dummy_batch.hh',
  'dummy/dummy_context.hh',
  'dummy/dummy_framebuffer.hh',
  'dummy/dummy_vertex_buffer.hh',
)

src_gpu_opengl = files(
  'opengl/gl_backend.cc',
  'opengl/gl_batch.cc',
  'opengl/gl_compilation_subprocess.cc',
  'opengl/gl_compute.cc',
  'opengl/gl_context.cc',
  'opengl/gl_debug.cc',
  'opengl/gl_debug_layer.cc',
  'opengl/gl_drawlist.cc',
  'opengl/gl_framebuffer.cc',
  'opengl/gl_immediate.cc',
  'opengl/gl_index_buffer.cc',
  'opengl/gl_query.cc',
  'opengl/gl_shader.cc',
  'opengl/gl_shader_interface.cc',
  'opengl/gl_shader_log.cc',
  'opengl/gl_state.cc',
  'opengl/gl_storage_buffer.cc',
  'opengl/gl_texture.cc',
  'opengl/gl_uniform_buffer.cc',
  'opengl/gl_vertex_array.cc',
  'opengl/gl_vertex_buffer.cc',

  'opengl/gl_backend.hh',
  'opengl/gl_batch.hh',
  'opengl/gl_compilation_subprocess.hh',
  'opengl/gl_compute.hh',
  'opengl/gl_context.hh',
  'opengl/gl_debug.hh',
  'opengl/gl_drawlist.hh',
  'opengl/gl_framebuffer.hh',
  'opengl/gl_immediate.hh',
  'opengl/gl_index_buffer.hh',
  'opengl/gl_primitive.hh',
  'opengl/gl_query.hh',
  'opengl/gl_shader.hh',
  'opengl/gl_shader_interface.hh',
  'opengl/gl_state.hh',
  'opengl/gl_storage_buffer.hh',
  'opengl/gl_texture.hh',
  'opengl/gl_uniform_buffer.hh',
  'opengl/gl_vertex_array.hh',
  'opengl/gl_vertex_buffer.hh',
)

# set(VULKAN_SRC
#   vulkan/vk_backend.cc
#   vulkan/vk_batch.cc
#   vulkan/vk_bindable_resource.cc
#   vulkan/vk_buffer.cc
#   vulkan/vk_command_buffer.cc
#   vulkan/vk_command_buffers.cc
#   vulkan/vk_common.cc
#   vulkan/vk_context.cc
#   vulkan/vk_data_conversion.cc
#   vulkan/vk_debug.cc
#   vulkan/vk_descriptor_pools.cc
#   vulkan/vk_descriptor_set.cc
#   vulkan/vk_descriptor_set_layouts.cc
#   vulkan/vk_device.cc
#   vulkan/vk_drawlist.cc
#   vulkan/vk_fence.cc
#   vulkan/vk_framebuffer.cc
#   vulkan/vk_image_view.cc
#   vulkan/vk_immediate.cc
#   vulkan/vk_index_buffer.cc
#   vulkan/vk_memory.cc
#   vulkan/vk_memory_layout.cc
#   vulkan/vk_pipeline.cc
#   vulkan/vk_pipeline_pool.cc
#   vulkan/vk_pipeline_state.cc
#   vulkan/vk_pixel_buffer.cc
#   vulkan/vk_push_constants.cc
#   vulkan/vk_query.cc
#   vulkan/render_graph/nodes/vk_pipeline_data.cc
#   vulkan/render_graph/vk_command_buffer_wrapper.cc
#   vulkan/render_graph/vk_command_builder.cc
#   vulkan/render_graph/vk_render_graph.cc
#   vulkan/render_graph/vk_resource_access_info.cc
#   vulkan/render_graph/vk_resource_state_tracker.cc
#   vulkan/render_graph/vk_scheduler.cc
#   vulkan/vk_resource_tracker.cc
#   vulkan/vk_sampler.cc
#   vulkan/vk_samplers.cc
#   vulkan/vk_shader.cc
#   vulkan/vk_shader_interface.cc
#   vulkan/vk_shader_log.cc
#   vulkan/vk_staging_buffer.cc
#   vulkan/vk_state_manager.cc
#   vulkan/vk_storage_buffer.cc
#   vulkan/vk_texture.cc
#   vulkan/vk_timeline_semaphore.cc
#   vulkan/vk_to_string.cc
#   vulkan/vk_uniform_buffer.cc
#   vulkan/vk_vertex_attribute_object.cc
#   vulkan/vk_vertex_buffer.cc

#   vulkan/vk_backend.hh
#   vulkan/vk_batch.hh
#   vulkan/vk_bindable_resource.hh
#   vulkan/vk_buffer.hh
#   vulkan/vk_command_buffer.hh
#   vulkan/vk_command_buffers.hh
#   vulkan/vk_common.hh
#   vulkan/vk_context.hh
#   vulkan/vk_data_conversion.hh
#   vulkan/vk_debug.hh
#   vulkan/vk_descriptor_pools.hh
#   vulkan/vk_descriptor_set.hh
#   vulkan/vk_descriptor_set_layouts.hh
#   vulkan/vk_device.hh
#   vulkan/vk_drawlist.hh
#   vulkan/vk_fence.hh
#   vulkan/vk_framebuffer.hh
#   vulkan/vk_image_view.hh
#   vulkan/vk_immediate.hh
#   vulkan/vk_index_buffer.hh
#   vulkan/vk_memory.hh
#   vulkan/vk_memory_layout.hh
#   vulkan/vk_pipeline.hh
#   vulkan/vk_pipeline_pool.hh
#   vulkan/vk_pipeline_state.hh
#   vulkan/vk_pixel_buffer.hh
#   vulkan/vk_push_constants.hh
#   vulkan/vk_query.hh
#   vulkan/render_graph/nodes/vk_blit_image_node.hh
#   vulkan/render_graph/nodes/vk_begin_rendering_node.hh
#   vulkan/render_graph/nodes/vk_clear_attachments_node.hh
#   vulkan/render_graph/nodes/vk_clear_color_image_node.hh
#   vulkan/render_graph/nodes/vk_clear_depth_stencil_image_node.hh
#   vulkan/render_graph/nodes/vk_copy_buffer_node.hh
#   vulkan/render_graph/nodes/vk_copy_buffer_to_image_node.hh
#   vulkan/render_graph/nodes/vk_copy_image_node.hh
#   vulkan/render_graph/nodes/vk_copy_image_to_buffer_node.hh
#   vulkan/render_graph/nodes/vk_dispatch_node.hh
#   vulkan/render_graph/nodes/vk_end_rendering_node.hh
#   vulkan/render_graph/nodes/vk_fill_buffer_node.hh
#   vulkan/render_graph/nodes/vk_node_info.hh
#   vulkan/render_graph/nodes/vk_pipeline_data.hh
#   vulkan/render_graph/nodes/vk_synchronization_node.hh
#   vulkan/render_graph/vk_command_buffer_wrapper.hh
#   vulkan/render_graph/vk_command_builder.hh
#   vulkan/render_graph/vk_render_graph.hh
#   vulkan/render_graph/vk_render_graph_links.hh
#   vulkan/render_graph/vk_render_graph_node.hh
#   vulkan/render_graph/vk_resource_access_info.hh
#   vulkan/render_graph/vk_resource_state_tracker.hh
#   vulkan/render_graph/vk_scheduler.hh
#   vulkan/vk_resource_tracker.hh
#   vulkan/vk_sampler.hh
#   vulkan/vk_samplers.hh
#   vulkan/vk_shader.hh
#   vulkan/vk_shader_interface.hh
#   vulkan/vk_shader_log.hh
#   vulkan/vk_staging_buffer.hh
#   vulkan/vk_state_manager.hh
#   vulkan/vk_storage_buffer.hh
#   vulkan/vk_texture.hh
#   vulkan/vk_timeline_semaphore.hh
#   vulkan/vk_to_string.hh
#   vulkan/vk_uniform_buffer.hh
#   vulkan/vk_vertex_attribute_object.hh
#   vulkan/vk_vertex_buffer.hh
# )

# set(METAL_SRC
#   metal/mtl_backend.mm
#   metal/mtl_batch.mm
#   metal/mtl_command_buffer.mm
#   metal/mtl_context.mm
#   metal/mtl_debug.mm
#   metal/mtl_drawlist.mm
#   metal/mtl_framebuffer.mm
#   metal/mtl_immediate.mm
#   metal/mtl_index_buffer.mm
#   metal/mtl_memory.mm
#   metal/mtl_query.mm
#   metal/mtl_shader.mm
#   metal/mtl_shader_generator.mm
#   metal/mtl_shader_interface.mm
#   metal/mtl_shader_log.mm
#   metal/mtl_state.mm
#   metal/mtl_storage_buffer.mm
#   metal/mtl_texture.mm
#   metal/mtl_texture_util.mm
#   metal/mtl_uniform_buffer.mm
#   metal/mtl_vertex_buffer.mm

#   metal/mtl_backend.hh
#   metal/mtl_batch.hh
#   metal/mtl_capabilities.hh
#   metal/mtl_common.hh
#   metal/mtl_context.hh
#   metal/mtl_debug.hh
#   metal/mtl_drawlist.hh
#   metal/mtl_framebuffer.hh
#   metal/mtl_immediate.hh
#   metal/mtl_index_buffer.hh
#   metal/mtl_memory.hh
#   metal/mtl_primitive.hh
#   metal/mtl_pso_descriptor_state.hh
#   metal/mtl_query.hh
#   metal/mtl_shader.hh
#   metal/mtl_shader_generator.hh
#   metal/mtl_shader_interface.hh
#   metal/mtl_shader_interface_type.hh
#   metal/mtl_shader_log.hh
#   metal/mtl_shader_shared.h
#   metal/mtl_state.hh
#   metal/mtl_storage_buffer.hh
#   metal/mtl_texture.hh
#   metal/mtl_uniform_buffer.hh
#   metal/mtl_vertex_buffer.hh
# )

# Select Backend source based on availability
if WITH_OPENGL_BACKEND
    dep_gpu_private += dep_epoxy
    src_gpu += src_gpu_opengl
endif

# if(WITH_METAL_BACKEND)
#   list(APPEND SRC ${METAL_SRC})
# endif()


# if(WITH_VULKAN_BACKEND)
#   if(APPLE)
#     list(APPEND INC_SYS
#       ${MOLTENVK_INCLUDE_DIRS}
#     )

#     list(APPEND LIB
#       ${MOLTENVK_LIBRARIES}
#     )
#   endif()

#   list(APPEND INC
#     ../../../extern/vulkan_memory_allocator
#   )
#   list(APPEND INC_SYS
#     ${VULKAN_INCLUDE_DIRS}
#   )

#   list(APPEND INC_SYS
#     ${SHADERC_INCLUDE_DIRS}
#   )
#   list(APPEND SRC
#     ${VULKAN_SRC}
#   )

#   list(APPEND LIB
#     ${VULKAN_LIBRARIES}
#     ${SHADERC_LIBRARIES}
#     extern_vulkan_memory_allocator
#   )

#   add_definitions(-DWITH_VULKAN_BACKEND)
# endif()

# if(WITH_VULKAN_GUARDEDALLOC)
#   add_definitions(-DWITH_VULKAN_GUARDEDALLOC)
# endif()

# set(MSL_SRC
#   shaders/metal/mtl_shader_defines.msl
#   shaders/metal/mtl_shader_common.msl

#   metal/kernels/compute_texture_update.msl
#   metal/kernels/compute_texture_read.msl
#   metal/kernels/depth_2d_update_float_frag.glsl
#   metal/kernels/depth_2d_update_int24_frag.glsl
#   metal/kernels/depth_2d_update_int32_frag.glsl
#   metal/kernels/depth_2d_update_vert.glsl
#   metal/kernels/gpu_shader_fullscreen_blit_vert.glsl
#   metal/kernels/gpu_shader_fullscreen_blit_frag.glsl
# )

src_gpu_shader = [
  'GPU_shader_shared.hh',
  'GPU_shader_shared_utils.hh',
]

src_gpu_shaders_c = []

foreach shader_c : src_gpu_shader
    src_gpu_shaders_c += custom_target(
        input: shader_c,
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach

subdir('shaders')
subdir('shaders/opengl')
subdir('shaders/common')
subdir('shaders/material')

lib_gpu_shaders = static_library(
  'acc_gpu_shaders',
  src_gpu_shaders_c,
  include_directories: inc_gpu,
#   dependencies: dep_anim,
  install: true,
)

gpu_shaders = declare_dependency(
  include_directories: inc_gpu,
  link_with: lib_gpu_shaders,
)

# set(GLSL_SOURCE_CONTENT "")
# foreach(GLSL_FILE ${GLSL_SRC})
#   get_filename_component(GLSL_FILE_NAME ${GLSL_FILE} NAME)
#   string(REPLACE "." "_" GLSL_FILE_NAME_UNDERSCORES ${GLSL_FILE_NAME})
#   string(APPEND GLSL_SOURCE_CONTENT "SHADER_SOURCE\(datatoc_${GLSL_FILE_NAME_UNDERSCORES}, \"${GLSL_FILE_NAME}\", \"${GLSL_FILE}\"\)\n")
# endforeach()

# set(glsl_source_list_file "${CMAKE_CURRENT_BINARY_DIR}/glsl_gpu_source_list.h")
# file(GENERATE OUTPUT ${glsl_source_list_file} CONTENT "${GLSL_SOURCE_CONTENT}")
# list(APPEND SRC ${glsl_source_list_file})
# list(APPEND INC ${CMAKE_CURRENT_BINARY_DIR})

src_gpu_shader_create_infos = files(
  '../draw/engines/basic/shaders/infos/basic_depth_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_ambient_occlusion_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_deferred_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_depth_of_field_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_film_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_hiz_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_light_culling_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_lightprobe_volume_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_lightprobe_sphere_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_lookdev_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_lut_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_material_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_motion_blur_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_shadow_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_subsurface_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_tracing_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_velocity_info.hh',
  '../draw/engines/eevee_next/shaders/infos/eevee_volume_info.hh',
  '../draw/engines/gpencil/shaders/infos/gpencil_info.hh',
  '../draw/engines/gpencil/shaders/infos/gpencil_vfx_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_antialiasing_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_armature_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_background_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_edit_mode_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_extra_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_facing_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_grid_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_outline_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_paint_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_sculpt_curves_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_sculpt_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_viewer_attribute_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_volume_info.hh',
  '../draw/engines/overlay/shaders/infos/overlay_wireframe_info.hh',
  '../draw/engines/select/shaders/infos/select_id_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_composite_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_depth_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_effect_antialiasing_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_effect_dof_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_effect_outline_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_prepass_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_shadow_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_transparent_resolve_info.hh',
  '../draw/engines/workbench/shaders/infos/workbench_volume_info.hh',
  '../draw/engines/image/shaders/infos/engine_image_info.hh',
  '../draw/intern/shaders/draw_debug_info.hh',
  '../draw/intern/shaders/draw_fullscreen_info.hh',
  '../draw/intern/shaders/draw_hair_refine_info.hh',
  '../draw/intern/shaders/draw_object_infos_info.hh',
  '../draw/intern/shaders/draw_view_info.hh',
  'shaders/infos/gpu_clip_planes_info.hh',
  'shaders/infos/gpu_shader_2D_area_borders_info.hh',
  'shaders/infos/gpu_shader_2D_checker_info.hh',
  'shaders/infos/gpu_shader_2D_diag_stripes_info.hh',
  'shaders/infos/gpu_shader_2D_image_desaturate_color_info.hh',
  'shaders/infos/gpu_shader_2D_image_info.hh',
  'shaders/infos/gpu_shader_2D_image_overlays_merge_info.hh',
  'shaders/infos/gpu_shader_2D_image_overlays_stereo_merge_info.hh',
  'shaders/infos/gpu_shader_2D_image_rect_color_info.hh',
  'shaders/infos/gpu_shader_2D_image_shuffle_color_info.hh',
  'shaders/infos/gpu_shader_2D_nodelink_info.hh',
  'shaders/infos/gpu_shader_2D_point_uniform_size_uniform_color_aa_info.hh',
  'shaders/infos/gpu_shader_2D_point_uniform_size_uniform_color_outline_aa_info.hh',
  'shaders/infos/gpu_shader_2D_point_varying_size_varying_color_info.hh',
  'shaders/infos/gpu_shader_2D_widget_info.hh',
  'shaders/infos/gpu_shader_3D_depth_only_info.hh',
  'shaders/infos/gpu_shader_3D_flat_color_info.hh',
  'shaders/infos/gpu_shader_3D_image_info.hh',
  'shaders/infos/gpu_shader_3D_point_info.hh',
  'shaders/infos/gpu_shader_3D_polyline_info.hh',
  'shaders/infos/gpu_shader_3D_smooth_color_info.hh',
  'shaders/infos/gpu_shader_3D_uniform_color_info.hh',
  'shaders/infos/gpu_shader_gpencil_stroke_info.hh',
  'shaders/infos/gpu_shader_icon_info.hh',
  'shaders/infos/gpu_shader_index_info.hh',
  'shaders/infos/gpu_shader_instance_varying_color_varying_size_info.hh',
  'shaders/infos/gpu_shader_keyframe_shape_info.hh',
  'shaders/infos/gpu_shader_line_dashed_uniform_color_info.hh',
  'shaders/infos/gpu_shader_sequencer_info.hh',
  'shaders/infos/gpu_shader_simple_lighting_info.hh',
  'shaders/infos/gpu_shader_text_info.hh',
  'shaders/infos/gpu_srgb_to_framebuffer_space_info.hh',
)

# set(SRC_SHADER_CREATE_INFOS_TEST
#   shaders/infos/gpu_shader_test_info.hh
# )


# set(SRC_SHADER_CREATE_INFOS_MTL
#   metal/kernels/depth_2d_update_info.hh
#   metal/kernels/gpu_shader_fullscreen_blit_info.hh
# )

# if(WITH_METAL_BACKEND)
#   list(APPEND SRC_SHADER_CREATE_INFOS ${SRC_SHADER_CREATE_INFOS_MTL})
# endif()

# set(SHADER_CREATE_INFOS_CONTENT "")
# foreach(DESCRIPTOR_FILE ${SRC_SHADER_CREATE_INFOS})
#   string(APPEND SHADER_CREATE_INFOS_CONTENT "#include \"${DESCRIPTOR_FILE}\"\n")
# endforeach()

# set(shader_create_info_list_file "${CMAKE_CURRENT_BINARY_DIR}/gpu_shader_create_info_list.hh")
# file(GENERATE OUTPUT ${shader_create_info_list_file} CONTENT "${SHADER_CREATE_INFOS_CONTENT}")

# if(WITH_MOD_FLUID)
#   add_definitions(-DWITH_FLUID)
# endif()

# if(WITH_OPENCOLORIO)
#   add_definitions(-DWITH_OCIO)
# endif()

# blender_add_lib(bf_gpu "${SRC}" "${INC}" "${INC_SYS}" "${LIB}")
# target_link_libraries(bf_gpu PUBLIC
#   bf_compositor_shaders
#   bf_draw_shaders
#   bf_gpu_shaders
# )

# if(WITH_OPENGL_BACKEND AND UNIX)
# target_link_libraries(bf_gpu PUBLIC rt)
# endif()

# if(WITH_OPENCOLORIO)
#   target_link_libraries(bf_gpu PUBLIC bf_ocio_shaders)
# endif()

# if(WITH_RENDERDOC)
#   target_link_libraries(bf_gpu PUBLIC bf_intern_renderdoc_dynload)
# endif()


# if(CXX_WARN_NO_SUGGEST_OVERRIDE)
#   target_compile_options(bf_gpu PRIVATE $<$<COMPILE_LANGUAGE:CXX>:-Wsuggest-override>)
# endif()

lib_gpu = static_library('acc_gpu',
  src_gpu,
  include_directories: inc_gpu_private,
  dependencies: dep_gpu_private,
  install: true,
)

gpu = declare_dependency(
  include_directories: inc_gpu,
  link_with: lib_gpu,
)

# if(WITH_GPU_BUILDTIME_SHADER_BUILDER)
#   set(_manifest)
#   if(WIN32)
#     # We can re-use the manifest from tests.exe here since it's
#     # rather generic and just selects the appropriate common
#     # controls version.
#     set(_manifest "${CMAKE_BINARY_DIR}/tests.exe.manifest")
#   endif()
#   add_executable(shader_builder
#     intern/gpu_shader_builder.cc
#     intern/gpu_shader_builder_stubs.cc
#     ${shader_create_info_list_file}
#     ${_manifest}
#   )
#   unset(_manifest)
#   setup_platform_linker_flags(shader_builder)

#   if(WITH_BUILD_INFO)
#     target_link_libraries(shader_builder PRIVATE buildinfoobj)
#   endif()
#   target_link_libraries(shader_builder PRIVATE
#     bf_gpu
#     bf_intern_clog
#     bf_blenlib
#     bf_intern_ghost
#     ${PLATFORM_LINKLIBS}
#     PRIVATE bf::intern::guardedalloc
#   )
#   target_include_directories(shader_builder SYSTEM PRIVATE ${INC_SYS})
#   target_include_directories(shader_builder PRIVATE ${INC} ${CMAKE_CURRENT_BINARY_DIR})

#   set(SRC_BAKED_CREATE_INFOS_FILE ${CMAKE_CURRENT_BINARY_DIR}/shader_baked.hh)

#   add_custom_command(
#     OUTPUT
#     ${SRC_BAKED_CREATE_INFOS_FILE}
#     COMMAND ${CMAKE_COMMAND} -E env ${PLATFORM_ENV_BUILD} $<TARGET_FILE:shader_builder> ${SRC_BAKED_CREATE_INFOS_FILE}
#     DEPENDS shader_builder
#   )
#   set(GPU_SHADER_INFO_SRC
#     intern/gpu_shader_info_baked.cc
#     ${SRC_BAKED_CREATE_INFOS_FILE}

#     # For project files to be aware of these headers.
#     ${SRC_SHADER_CREATE_INFOS}
#     shaders/infos/gpu_interface_info.hh
#   )

#   blender_add_lib(bf_gpu_shader_infos "${GPU_SHADER_INFO_SRC}" "" "" "")
# endif()
