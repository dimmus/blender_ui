src_drw_eng_select_shaders = [
  'select_id_vert',
  'select_id_frag',
  'select_lib',
]

foreach shader_c : src_drw_eng_select_shaders
    src_drw_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach