src_drw_eng_image_shaders = [
  'image_engine_color_frag',
  'image_engine_color_vert',
  'image_engine_depth_frag',
  'image_engine_depth_vert',
]

foreach shader_c : src_drw_eng_image_shaders
    src_drw_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach