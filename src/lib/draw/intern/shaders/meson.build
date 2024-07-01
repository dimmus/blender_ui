src_drw_intern_shaders = [
  'common_aabb_lib',
  'common_attribute_lib',
  'common_colormanagement_lib',
  'common_debug_draw_lib',
  'common_debug_print_lib',
  'common_debug_shape_lib',
  'common_fullscreen_vert',
  'common_fxaa_lib',
  'common_gpencil_lib',
  'common_grease_pencil_lib',
  'common_hair_lib',
  'common_hair_refine_comp',
  'common_intersect_lib',
  'common_math_geom_lib',
  'common_math_lib',
  'common_pointcloud_lib',
  'common_shape_lib',
  'common_subdiv_custom_data_interp_comp',
  'common_subdiv_ibo_lines_comp',
  'common_subdiv_ibo_tris_comp',
  'common_subdiv_lib',
  'common_subdiv_normals_accumulate_comp',
  'common_subdiv_normals_finalize_comp',
  'common_subdiv_patch_evaluation_comp',
  'common_subdiv_vbo_edge_fac_comp',
  'common_subdiv_vbo_edituv_strech_angle_comp',
  'common_subdiv_vbo_edituv_strech_area_comp',
  'common_subdiv_vbo_lnor_comp',
  'common_subdiv_vbo_sculpt_data_comp',
  'common_view_clipping_lib',
  'common_view_lib',
  'draw_command_generate_comp',
  'draw_debug_draw_display_frag',
  'draw_debug_draw_display_vert',
  'draw_debug_print_display_frag',
  'draw_debug_print_display_vert',
  'draw_intersect_lib',
  'draw_math_geom_lib',
  'draw_model_lib',
  'draw_resource_finalize_comp',
  'draw_view_finalize_comp',
  'draw_view_lib',
  'draw_view_reconstruction_lib',
  'draw_visibility_comp',
]

foreach shader_c : src_drw_intern_shaders
    src_drw_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach

dir_drw_intern_shaders = meson.current_source_dir()
src_drw_shaders_c += join_paths(dir_drw_intern_shaders, 'draw_debug_info.hh')