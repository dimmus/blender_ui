src_gpu_shaders_common = [
    'gpu_shader_bicubic_sampler_lib',
    'gpu_shader_common_color_ramp',
    'gpu_shader_common_color_utils',
    'gpu_shader_common_curves',
    'gpu_shader_common_hash',
    'gpu_shader_common_math',
    'gpu_shader_common_math_utils',
    'gpu_shader_common_mix_rgb',
    'gpu_shader_debug_gradients_lib',
    'gpu_shader_math_base_lib',
    'gpu_shader_math_fast_lib',
    'gpu_shader_math_matrix_lib',
    'gpu_shader_math_rotation_lib',
    'gpu_shader_math_vector_lib',
    'gpu_shader_shared_exponent_lib',
    'gpu_shader_smaa_lib',
    'gpu_shader_test_lib',
    'gpu_shader_utildefines_lib',
]

foreach shader_c : src_gpu_shaders_common
    src_gpu_shaders_c += custom_target(
        input: shader_c + '.glsl',
        output: shader_c + '.c',
        command: [
            bin_datatoc,
            '@INPUT@', '@OUTPUT@', '--options=strip_leading_c_comments'
        ],
    )
endforeach