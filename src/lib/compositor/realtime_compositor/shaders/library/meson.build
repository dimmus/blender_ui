src_com_rt_lib_shaders = [
  'gpu_shader_compositor_alpha_over',
  'gpu_shader_compositor_blur_common',
  'gpu_shader_compositor_bright_contrast',
  'gpu_shader_compositor_channel_matte',
  'gpu_shader_compositor_chroma_matte',
  'gpu_shader_compositor_color_balance',
  'gpu_shader_compositor_color_correction',
  'gpu_shader_compositor_color_matte',
  'gpu_shader_compositor_color_spill',
  'gpu_shader_compositor_color_to_luminance',
  'gpu_shader_compositor_difference_matte',
  'gpu_shader_compositor_distance_matte',
  'gpu_shader_compositor_exposure',
  'gpu_shader_compositor_gamma',
  'gpu_shader_compositor_hue_correct',
  'gpu_shader_compositor_hue_saturation_value',
  'gpu_shader_compositor_image_diagonals',
  'gpu_shader_compositor_invert',
  'gpu_shader_compositor_jump_flooding_lib',
  'gpu_shader_compositor_luminance_matte',
  'gpu_shader_compositor_main',
  'gpu_shader_compositor_map_value',
  'gpu_shader_compositor_motion_blur_lib',
  'gpu_shader_compositor_normal',
  'gpu_shader_compositor_ocio_processor',
  'gpu_shader_compositor_posterize',
  'gpu_shader_compositor_separate_combine',
  'gpu_shader_compositor_set_alpha',
  'gpu_shader_compositor_store_output',
  'gpu_shader_compositor_summed_area_table_lib',
  'gpu_shader_compositor_texture_utilities',
  'gpu_shader_compositor_type_conversion',
]

foreach shader_c : src_com_rt_lib_shaders
    src_com_rt_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach