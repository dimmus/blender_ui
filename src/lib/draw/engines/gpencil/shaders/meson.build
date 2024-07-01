src_drw_eng_gpensil_shaders = [
  'gpencil_frag',
  'gpencil_vert',
  'gpencil_antialiasing_frag',
  'gpencil_antialiasing_vert',
  'gpencil_common_lib',
  'gpencil_layer_blend_frag',
  'gpencil_mask_invert_frag',
  'gpencil_depth_merge_frag',
  'gpencil_depth_merge_vert',
  'gpencil_vfx_frag',
]

foreach shader_c : src_drw_eng_gpensil_shaders
    src_drw_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach