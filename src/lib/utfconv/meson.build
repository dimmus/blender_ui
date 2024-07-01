inc_utfconv = include_directories('.')

src_utfconv = files(
  'utfconv.cc',
)

# This is odd but leave it for now...
# Why have win32 check here? - this is only used for windows.
# ... because one day we might want to use it on other platforms.
if WINDOWS
  src_utfconv += files('utf_winfunc.cc')
endif

lib_utfconv = static_library(
  'acc_utfconv',
  src_utfconv,
  install: true,
)

utfconv = declare_dependency(
  link_with: lib_utfconv,
)