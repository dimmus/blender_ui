summary_dir = {}
summary_compiler = {}
summary_sys = {}
summary_build = {}
summary_ghost = {}

dir_source = meson.project_source_root()
dir_build = meson.project_build_root()
version = meson.project_version()

langs = ['c', 'cpp']

fs = import('fs')
FIRST_RUN = not fs.is_dir(dir_build / 'src/lib')

dir_prefix = get_option('prefix')
dir_sysconf = dir_prefix / get_option('sysconfdir')
dir_bin = dir_prefix / get_option('bindir')
dir_data = dir_prefix / get_option('datadir')
dir_include = dir_prefix / get_option('includedir')
dir_lib = dir_prefix / get_option('libdir')

# Summary
summary_dir += {'PREFIX': dir_prefix}
summary_dir += {'BIN': dir_bin}
summary_dir += {'LIB': dir_lib}
summary_dir += {'DATA': dir_data}
summary_dir += {'INCLUDE': dir_include}