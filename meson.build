project(
  'acc',
  ['c', 'cpp'],
  version: '0.1',
  default_options: ['buildtype=plain', 'warning_level=2', 'cpp_std=c++17', 'c_std=gnu11'],
)

subdir('meson/const')
subdir('meson/platform')
subdir('meson/options')
subdir('meson/deps')
subdir('meson/cflags')
subdir('meson/headers')
subdir('meson/args')

subdir('src/extern')
subdir('src/lib')
subdir('src/bin')

if FIRST_RUN
  summary(summary_dir, bool_yn: true, section: 'Directories')
  summary(summary_compiler, bool_yn: true, section: 'Compilers')
  summary(summary_sys, bool_yn: true, section: 'System Options')
  summary(summary_build, bool_yn: true, section: 'Build Options')
  summary(summary_ghost, bool_yn: true, section: 'GHOST Options')
endif