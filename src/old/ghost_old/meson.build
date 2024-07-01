inc_ghost = include_directories('.')

with_opengl = get_option('WITH_OPENGL_BACKEND')
with_ghost_debug = get_option('WITH_GHOST_DEBUG')

dep_wayland_protocols = dependency('wayland-protocols')
dep_wayland_client = dependency('wayland-client', version: '>=1.12')
dep_wayland = [
  dep_wayland_protocols,
  dep_wayland_client,
  dependency('wayland-server'),
  dependency('wayland-egl'),
  dependency('wayland-cursor'),
  dependency('xkbcommon'),
]

dep_ghost = [bli, dna, clog, imbuf]
dep_ghost_ext = [dep_wayland, with_opengl ? dep_epoxy : dep_null]

# protocols - start
bin_wayland_scanner = find_program('wayland-scanner', native: true)

dir_protocols = dep_wayland_protocols.get_variable('pkgdatadir')
assert(dir_protocols != '', 'Could not get pkgdatadir from wayland-protocols.pc')

hdr_wayland_protocol_client = []
src_wayland_protocol = []

wayland_protocols = [
  ['xdg-shell', 'stable'],
  ['viewporter', 'stable'],
  ['xdg-activation', 'staging', 'v1'],
  ['fractional-scale', 'staging', 'v1'],
  ['pointer-constraints', 'unstable', 'v1'],
  ['pointer-gestures', 'unstable', 'v1'],
  ['primary-selection', 'unstable', 'v1'],
  ['relative-pointer', 'unstable', 'v1'],
  ['tablet', 'unstable', 'v2'],
  ['xdg-output', 'unstable', 'v1'],
  ['text-input', 'unstable', 'v3'],
  ['xdg-decoration', 'unstable', 'v1'],
]

foreach p : wayland_protocols
  protocol_name = p.get(0)
  protocol_type = p.get(1)

  if p.length() == 3
    protocol_version = p.get(2)
  endif

  if protocol_type == 'stable'
    if p.length() == 3
      # 'stable' but with version
      output_base = '@0@-@1@'.format(protocol_name, protocol_version)
    else
      output_base = protocol_name
    endif
    xml_path = dir_protocols / protocol_type / protocol_name / '@0@.xml'.format(output_base)
  elif protocol_type == 'staging'
    output_base = '@0@-@1@'.format(protocol_name, protocol_version)
    xml_path = dir_protocols / protocol_type / protocol_name / '@0@.xml'.format(output_base)
  elif protocol_type == 'unstable'
    output_base = '@0@-unstable-@1@'.format(protocol_name, protocol_version)
    xml_path = dir_protocols / protocol_type / protocol_name / '@0@.xml'.format(output_base)
  elif protocol_type == 'internal'
    output_base = protocol_name
    xml_path = '@0@.xml'.format(protocol_name)
  else
    output_base = '@0@-@1@-@2@'.format(protocol_name, protocol_type, protocol_version)
    xml_path = dir_protocols / protocol_type / protocol_name / '@0@.xml'.format(output_base)
  endif

  # header_server = custom_target(
  #   '@0@ server header'.format(output_base),
  #   input: xml_path,
  #   output: '@0@-server-protocol.h'.format(output_base),
  #   command: [bin_wayland_scanner, 'server-header', '@INPUT@', '@OUTPUT@'],
  # )

  header_client = custom_target(
    '@0@ client header'.format(output_base),
    input: xml_path,
    output: '@0@-client-protocol.h'.format(output_base),
    command: [bin_wayland_scanner, 'client-header', '@INPUT@', '@OUTPUT@'],
  )

  source_protocol = custom_target(
    '@0@ source'.format(output_base),
    input: xml_path,
    output: '@0@-protocol.c'.format(output_base),
    command: [bin_wayland_scanner, 'private-code', '@INPUT@', '@OUTPUT@'],
  )

  hdr_wayland_protocol_client += header_client
  src_wayland_protocol += source_protocol
endforeach

hdr_wayland_protocol = hdr_wayland_protocol_client

wayland_protocol = declare_dependency(
  include_directories: inc_ghost,
  sources: hdr_wayland_protocol,
  dependencies: dep_wayland_client,
)

# protocols - end

src_ghost = files(
  'intern/GHOST_Buttons.cc',
  'intern/GHOST_Buttons.hh',
  'intern/GHOST_Context.cc',
  'intern/GHOST_Context.hh',
  'intern/GHOST_ContextNone.cc',
  'intern/GHOST_ContextNone.hh',
  'intern/GHOST_Debug.hh',
  'intern/GHOST_DisplayManager.cc',
  'intern/GHOST_DisplayManager.hh',
  'intern/GHOST_Event.hh',
  'intern/GHOST_EventButton.hh',
  'intern/GHOST_EventCursor.hh',
  'intern/GHOST_EventDragnDrop copy.hh',
  'intern/GHOST_EventDragnDrop.hh',
  'intern/GHOST_EventKey.hh',
  'intern/GHOST_EventManager.hh',
  'intern/GHOST_EventTrackpad.hh',
  'intern/GHOST_EventWheel.hh',
  'intern/GHOST_ModifierKeys.cc',
  'intern/GHOST_ModifierKeys.hh',
  'intern/GHOST_PathUtils.cc',
  'intern/GHOST_PathUtils.hh',
  'intern/GHOST_System.cc',
  'intern/GHOST_System.hh',
  'intern/GHOST_SystemWayland.cc',
  'intern/GHOST_SystemWayland.hh',
  'intern/GHOST_TimerManager.cc',
  'intern/GHOST_TimerManager.hh',
  'intern/GHOST_TimerTask.hh',
  'intern/GHOST_WaylandUtils.hh',
  'intern/GHOST_Window.cc',
  'intern/GHOST_Window.hh',
  'intern/GHOST_WindowManager.cc',
  'intern/GHOST_WindowManager.hh',
  'intern/GHOST_WindowWayland.cc',
  'intern/GHOST_WindowWayland.hh',
  'intern/GHOST_utildefines.hh',
  'intern/GHOST_utildefines_variadic.hh',
)

if with_opengl
  src_ghost += files('intern/GHOST_ContextEGL.cc')
endif

if with_ghost_debug
  src_ghost += files('intern/GHOST_EventPrinter.cc', 'intern/GHOST_EventPrinter.hh')
endif

lib_ghost = library(
  'acc_ghost',
  src_ghost,
  include_directories: [inc_atomic, inc_mem, inc_imbuf, inc_clog, inc_ghost],
  dependencies: [dep_ghost, dep_wayland, wayland_protocol],
  install: true,
  version: version,
)

ghost = declare_dependency(
  include_directories: [inc_atomic, inc_mem],
  link_with: lib_ghost,
)

hdr_ghost = files(
  'GHOST_IContext.hh',
  'GHOST_IEvent.hh',
  'GHOST_IEventConsumer.hh',
  'GHOST_ISystem.hh',
  'GHOST_ITimerTask.hh',
  'GHOST_IWindow.hh',
  'GHOST_Rect.hh',
  'GHOST_Types.h',
)

install_headers(
  hdr_ghost,
  install_dir: dir_include,
)