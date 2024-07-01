host_os = host_machine.system().to_lower()
cc = meson.get_compiler('c')
cxx = meson.get_compiler('cpp')

LINUX   = ['linux'].contains(host_os)
BSD     = ['bsd', 'freebsd', 'dragonfly', 'netbsd', 'openbsd'].contains(host_os)
WINDOWS = ['windows', 'cygwin', 'mingw'].contains(host_os)
APPLE   = ['darwin', 'machten', 'rhapsody'].contains(host_os)
SUN     = ['sunos'].contains(host_os)
HAIKU   = ['haiku'].contains(host_os)

if LINUX
    subdir('./linux')
endif