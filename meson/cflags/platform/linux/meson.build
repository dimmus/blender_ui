if COMPILER_IS_GNUCC
  # ffp-contract=off:
  # Automatically turned on when building with "-march=native". This is
  # explicitly turned off here as it will make floating point math give a bit
  # different results. This will lead to automated test failures. So disable
  # this until we support it.
  platform_c_flags = [
    '-pipe',
    '-fPIC',
    '-funsigned-char',
    '-fno-strict-aliasing',
    '-ffp-contract=off'
  ]
endif