src_drw_eng_workbench_shaders = [
  'workbench_cavity_lib',
  'workbench_common_lib',
  'workbench_composite_frag',
  'workbench_curvature_lib',
  'workbench_effect_dof_frag',
  'workbench_effect_outline_frag',
  'workbench_effect_smaa_frag',
  'workbench_effect_smaa_vert',
  'workbench_effect_taa_frag',
  'workbench_extract_stencil',
  'workbench_image_lib',
  'workbench_matcap_lib',
  'workbench_material_lib',
  'workbench_merge_depth_frag',
  'workbench_overlay_depth_frag',
  'workbench_prepass_frag',
  'workbench_prepass_hair_vert',
  'workbench_prepass_pointcloud_vert',
  'workbench_prepass_vert',
  'workbench_shadow_caps_geom',
  'workbench_shadow_caps_vert_no_geom',
  'workbench_shadow_debug_frag',
  'workbench_shadow_geom',
  'workbench_shadow_vert',
  'workbench_shadow_visibility_comp',
  'workbench_shadow_vert_no_geom',
  'workbench_transparent_accum_frag',
  'workbench_transparent_resolve_frag',
  'workbench_volume_frag',
  'workbench_volume_vert',
  'workbench_world_light_lib',
]

foreach shader_c : src_drw_eng_workbench_shaders
    src_drw_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach