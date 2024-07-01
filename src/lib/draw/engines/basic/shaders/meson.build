src_drw_eng_basic_shaders = [
  'basic_conservative_depth_geom',
  'basic_depth_vert',
  'basic_depth_vert_conservative_no_geom',
  'basic_depth_curves_vert',
  'basic_depth_pointcloud_vert',
  'basic_depth_frag',
]

foreach shader_c : src_drw_eng_basic_shaders
    src_drw_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach