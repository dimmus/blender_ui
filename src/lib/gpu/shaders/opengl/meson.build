src_gpu_shaders_opengl = [
    'glsl_shader_defines',
]

foreach shader_c : src_gpu_shaders_opengl
    src_gpu_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach