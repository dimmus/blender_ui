inc_com_rt = include_directories('.')

inc_com_rt_private = [
    'algorithms',
    'cached_resources',
    '../../blenkernel',
    '../../blentranslation',
    '../../draw',
    '../../gpu',
    '../../imbuf',
    '../../makesrna',
    '../../nodes',
    '../../render',
    '../../gpu/intern',
]

dep_com_rt_private = [
    mem, bli, dna
]

src_com_rt = files(
  'intern/compile_state.cc',
  'intern/context.cc',
  'intern/conversion_operation.cc',
  'intern/domain.cc',
  'intern/evaluator.cc',
  'intern/input_single_value_operation.cc',
  'intern/node_operation.cc',
  'intern/operation.cc',
  'intern/profiler.cc',
  'intern/realize_on_domain_operation.cc',
  'intern/reduce_to_single_value_operation.cc',
  'intern/render_context.cc',
  'intern/result.cc',
  'intern/scheduler.cc',
  'intern/shader_node.cc',
  'intern/shader_operation.cc',
  'intern/simple_operation.cc',
  'intern/static_cache_manager.cc',
  'intern/texture_pool.cc',
  'intern/utilities.cc',

  'COM_compile_state.hh',
  'COM_context.hh',
  'COM_conversion_operation.hh',
  'COM_domain.hh',
  'COM_evaluator.hh',
  'COM_input_descriptor.hh',
  'COM_input_single_value_operation.hh',
  'COM_node_operation.hh',
  'COM_operation.hh',
  'COM_profiler.hh',
  'COM_realize_on_domain_operation.hh',
  'COM_reduce_to_single_value_operation.hh',
  'COM_render_context.hh',
  'COM_result.hh',
  'COM_scheduler.hh',
  'COM_shader_node.hh',
  'COM_shader_operation.hh',
  'COM_simple_operation.hh',
  'COM_static_cache_manager.hh',
  'COM_texture_pool.hh',
  'COM_utilities.hh',

  'algorithms/intern/deriche_gaussian_blur.cc',
  'algorithms/intern/jump_flooding.cc',
  'algorithms/intern/morphological_blur.cc',
  'algorithms/intern/morphological_distance.cc',
  'algorithms/intern/morphological_distance_feather.cc',
  'algorithms/intern/parallel_reduction.cc',
  'algorithms/intern/realize_on_domain.cc',
  'algorithms/intern/recursive_gaussian_blur.cc',
  'algorithms/intern/smaa.cc',
  'algorithms/intern/summed_area_table.cc',
  'algorithms/intern/symmetric_separable_blur.cc',
  'algorithms/intern/symmetric_separable_blur_variable_size.cc',
  'algorithms/intern/transform.cc',
  'algorithms/intern/van_vliet_gaussian_blur.cc',

  'algorithms/COM_algorithm_deriche_gaussian_blur.hh',
  'algorithms/COM_algorithm_jump_flooding.hh',
  'algorithms/COM_algorithm_morphological_blur.hh',
  'algorithms/COM_algorithm_morphological_distance.hh',
  'algorithms/COM_algorithm_morphological_distance_feather.hh',
  'algorithms/COM_algorithm_parallel_reduction.hh',
  'algorithms/COM_algorithm_realize_on_domain.hh',
  'algorithms/COM_algorithm_recursive_gaussian_blur.hh',
  'algorithms/COM_algorithm_smaa.hh',
  'algorithms/COM_algorithm_summed_area_table.hh',
  'algorithms/COM_algorithm_symmetric_separable_blur.hh',
  'algorithms/COM_algorithm_symmetric_separable_blur_variable_size.hh',
  'algorithms/COM_algorithm_transform.hh',
  'algorithms/COM_algorithm_van_vliet_gaussian_blur.hh',

  'cached_resources/intern/bokeh_kernel.cc',
  'cached_resources/intern/cached_image.cc',
  'cached_resources/intern/cached_mask.cc',
  'cached_resources/intern/cached_shader.cc',
  'cached_resources/intern/cached_texture.cc',
  'cached_resources/intern/deriche_gaussian_coefficients.cc',
  'cached_resources/intern/distortion_grid.cc',
  'cached_resources/intern/fog_glow_kernel.cc',
  'cached_resources/intern/keying_screen.cc',
  'cached_resources/intern/morphological_distance_feather_weights.cc',
  'cached_resources/intern/ocio_color_space_conversion_shader.cc',
  'cached_resources/intern/smaa_precomputed_textures.cc',
  'cached_resources/intern/symmetric_blur_weights.cc',
  'cached_resources/intern/symmetric_separable_blur_weights.cc',
  'cached_resources/intern/van_vliet_gaussian_coefficients.cc',

  'cached_resources/COM_bokeh_kernel.hh',
  'cached_resources/COM_cached_image.hh',
  'cached_resources/COM_cached_mask.hh',
  'cached_resources/COM_cached_resource.hh',
  'cached_resources/COM_cached_shader.hh',
  'cached_resources/COM_cached_texture.hh',
  'cached_resources/COM_deriche_gaussian_coefficients.hh',
  'cached_resources/COM_distortion_grid.hh',
  'cached_resources/COM_fog_glow_kernel.hh',
  'cached_resources/COM_keying_screen.hh',
  'cached_resources/COM_morphological_distance_feather_weights.hh',
  'cached_resources/COM_ocio_color_space_conversion_shader.hh',
  'cached_resources/COM_smaa_precomputed_textures.hh',
  'cached_resources/COM_symmetric_blur_weights.hh',
  'cached_resources/COM_symmetric_separable_blur_weights.hh',
  'cached_resources/COM_van_vliet_gaussian_coefficients.hh',
)

src_com_rt_shaders_c = []

subdir('shaders')
subdir('shaders/library')

lib_com_rt_shaders = static_library(
    'acc_com_shaders',
    src_com_rt_shaders_c,
    include_directories: inc_com_rt_private,
    dependencies: dep_com_rt_private,
    install: true,
)

com_shaders = declare_dependency(
    include_directories: inc_com_rt,
    link_with: lib_com_rt_shaders,
)

# set(GLSL_SOURCE_CONTENT "")
# foreach(GLSL_FILE ${GLSL_SRC})
#   get_filename_component(GLSL_FILE_NAME ${GLSL_FILE} NAME)
#   string(REPLACE "." "_" GLSL_FILE_NAME_UNDERSCORES ${GLSL_FILE_NAME})
#   string(APPEND GLSL_SOURCE_CONTENT "SHADER_SOURCE\(datatoc_${GLSL_FILE_NAME_UNDERSCORES}, \"${GLSL_FILE_NAME}\", \"${GLSL_FILE}\"\)\n")
# endforeach()

# set(glsl_source_list_file "${CMAKE_CURRENT_BINARY_DIR}/glsl_compositor_source_list.h")
# file(GENERATE OUTPUT ${glsl_source_list_file} CONTENT "${GLSL_SOURCE_CONTENT}")
# list(APPEND SRC ${glsl_source_list_file})
# list(APPEND INC ${CMAKE_CURRENT_BINARY_DIR})

# set(SRC_SHADER_CREATE_INFOS
#   shaders/infos/compositor_alpha_crop_info.hh
#   shaders/infos/compositor_bilateral_blur_info.hh
#   shaders/infos/compositor_bokeh_blur_info.hh
#   shaders/infos/compositor_bokeh_blur_variable_size_info.hh
#   shaders/infos/compositor_bokeh_image_info.hh
#   shaders/infos/compositor_box_mask_info.hh
#   shaders/infos/compositor_compute_preview_info.hh
#   shaders/infos/compositor_convert_info.hh
#   shaders/infos/compositor_cryptomatte_info.hh
#   shaders/infos/compositor_defocus_info.hh
#   shaders/infos/compositor_deriche_gaussian_blur_info.hh
#   shaders/infos/compositor_despeckle_info.hh
#   shaders/infos/compositor_directional_blur_info.hh
#   shaders/infos/compositor_displace_info.hh
#   shaders/infos/compositor_double_edge_mask_info.hh
#   shaders/infos/compositor_edge_filter_info.hh
#   shaders/infos/compositor_ellipse_mask_info.hh
#   shaders/infos/compositor_filter_info.hh
#   shaders/infos/compositor_flip_info.hh
#   shaders/infos/compositor_glare_info.hh
#   shaders/infos/compositor_id_mask_info.hh
#   shaders/infos/compositor_image_crop_info.hh
#   shaders/infos/compositor_inpaint_info.hh
#   shaders/infos/compositor_jump_flooding_info.hh
#   shaders/infos/compositor_keying_info.hh
#   shaders/infos/compositor_keying_screen_info.hh
#   shaders/infos/compositor_kuwahara_info.hh
#   shaders/infos/compositor_map_uv_info.hh
#   shaders/infos/compositor_morphological_blur_info.hh
#   shaders/infos/compositor_morphological_distance_feather_info.hh
#   shaders/infos/compositor_morphological_distance_info.hh
#   shaders/infos/compositor_morphological_distance_threshold_info.hh
#   shaders/infos/compositor_morphological_step_info.hh
#   shaders/infos/compositor_motion_blur_info.hh
#   shaders/infos/compositor_movie_distortion_info.hh
#   shaders/infos/compositor_normalize_info.hh
#   shaders/infos/compositor_parallel_reduction_info.hh
#   shaders/infos/compositor_pixelate_info.hh
#   shaders/infos/compositor_plane_deform_info.hh
#   shaders/infos/compositor_premultiply_alpha_info.hh
#   shaders/infos/compositor_projector_lens_distortion_info.hh
#   shaders/infos/compositor_read_input_info.hh
#   shaders/infos/compositor_realize_on_domain_info.hh
#   shaders/infos/compositor_scale_variable_info.hh
#   shaders/infos/compositor_screen_lens_distortion_info.hh
#   shaders/infos/compositor_smaa_info.hh
#   shaders/infos/compositor_split_info.hh
#   shaders/infos/compositor_summed_area_table_info.hh
#   shaders/infos/compositor_sun_beams_info.hh
#   shaders/infos/compositor_symmetric_blur_info.hh
#   shaders/infos/compositor_symmetric_blur_variable_size_info.hh
#   shaders/infos/compositor_symmetric_separable_blur_info.hh
#   shaders/infos/compositor_symmetric_separable_blur_variable_size_info.hh
#   shaders/infos/compositor_tone_map_photoreceptor_info.hh
#   shaders/infos/compositor_tone_map_simple_info.hh
#   shaders/infos/compositor_van_vliet_gaussian_blur_info.hh
#   shaders/infos/compositor_write_output_info.hh
#   shaders/infos/compositor_z_combine_info.hh
# )

# set(SHADER_CREATE_INFOS_CONTENT "")
# foreach(DESCRIPTOR_FILE ${SRC_SHADER_CREATE_INFOS})
#   string(APPEND SHADER_CREATE_INFOS_CONTENT "#include \"${DESCRIPTOR_FILE}\"\n")
# endforeach()

# set(shader_create_info_list_file "${CMAKE_CURRENT_BINARY_DIR}/compositor_shader_create_info_list.hh")
# file(GENERATE OUTPUT ${shader_create_info_list_file} CONTENT "${SHADER_CREATE_INFOS_CONTENT}")

# blender_add_lib(bf_realtime_compositor "${SRC}" "${INC}" "${INC_SYS}" "${LIB}")
