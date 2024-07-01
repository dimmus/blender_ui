inc_ghost = [
    include_directories('.'),
    include_directories('./intern'),
]

inc_ghost_private = [
    inc_ghost,
    include_directories('../blenlib'),
    include_directories('../makesdna'),
    include_directories('../clog'),
    include_directories('../imbuf'),
]

# dep_ghost = [bli, dna, clog]
dep_ghost = []

src_ghost = files(
  'intern/GHOST_Buttons.cc',
  'intern/GHOST_C-api.cc',
  'intern/GHOST_CallbackEventConsumer.cc',
  'intern/GHOST_Context.cc',
  'intern/GHOST_ContextNone.cc',
  'intern/GHOST_DisplayManager.cc',
  'intern/GHOST_EventManager.cc',
  'intern/GHOST_ISystem.cc',
  'intern/GHOST_ISystemPaths.cc',
  'intern/GHOST_ModifierKeys.cc',
  'intern/GHOST_Path-api.cc',
  'intern/GHOST_PathUtils.cc',
  'intern/GHOST_Rect.cc',
  'intern/GHOST_System.cc',
  'intern/GHOST_TimerManager.cc',
  'intern/GHOST_Window.cc',
  'intern/GHOST_WindowManager.cc',

  'GHOST_C-api.h',
  'GHOST_IContext.hh',
  'GHOST_IEvent.hh',
  'GHOST_IEventConsumer.hh',
  'GHOST_ISystem.hh',
  'GHOST_ISystemPaths.hh',
  'GHOST_ITimerTask.hh',
  'GHOST_IWindow.hh',
  'GHOST_Path-api.hh',
  'GHOST_Rect.hh',
  'GHOST_Types.h',

  'intern/GHOST_Buttons.hh',
  'intern/GHOST_CallbackEventConsumer.hh',
  'intern/GHOST_Context.hh',
  'intern/GHOST_ContextNone.hh',
  'intern/GHOST_Debug.hh',
  'intern/GHOST_DisplayManager.hh',
  'intern/GHOST_Event.hh',
  'intern/GHOST_EventButton.hh',
  'intern/GHOST_EventCursor.hh',
  'intern/GHOST_EventDragnDrop.hh',
  'intern/GHOST_EventKey.hh',
  'intern/GHOST_EventManager.hh',
  'intern/GHOST_EventString.hh',
  'intern/GHOST_EventTrackpad.hh',
  'intern/GHOST_EventWheel.hh',
  'intern/GHOST_ModifierKeys.hh',
  'intern/GHOST_PathUtils.hh',
  'intern/GHOST_System.hh',
  'intern/GHOST_SystemPaths.hh',
  'intern/GHOST_TimerManager.hh',
  'intern/GHOST_TimerTask.hh',
  'intern/GHOST_Util.hh',
  'intern/GHOST_Window.hh',
  'intern/GHOST_WindowManager.hh',
  'intern/GHOST_utildefines.hh',
  'intern/GHOST_utildefines_variadic.hh',
)

if WITH_OPENGL_BACKEND
    dep_ghost += dep_epoxy
endif

if WITH_GHOST_DEBUG
    src_ghost += files(
        'intern/GHOST_EventPrinter.cc',
        'intern/GHOST_EventPrinter.hh',
    )
    # add_project_arguments('-DWITH_GHOST_DEBUG', language: langs)
endif

src_ghost += files(
    'intern/GHOST_DisplayManagerNULL.hh',
    'intern/GHOST_SystemHeadless.hh',
    'intern/GHOST_WindowNULL.hh',
)

if WITH_GHOST_WAYLAND
    dep_ghost += dep_xkbcommon

    if WITH_GHOST_WAYLAND_DYNLOAD
        src_ghost += files()
        inc_ghost += include_directories('../wayland_dynload/extern')
        dep_ghost += wayland_dynload
    else
        dep_ghost += [dep_wayland_client, dep_wayland_egl, dep_wayland_cursor]
    endif

    if WITH_GHOST_WAYLAND_LIBDECOR
        if not WITH_GHOST_WAYLAND_DYNLOAD
            dep_ghost += dep_libdecor
        endif
    endif

    # include(CheckSymbolExists)
    # set(CMAKE_REQUIRED_DEFINITIONS "-D_GNU_SOURCE")
    # check_symbol_exists(memfd_create "sys/mman.h" HAVE_MEMFD_CREATE)
    # unset(CMAKE_REQUIRED_DEFINITIONS)
    if HAVE_MEMFD_CREATE
        add_project_arguments('-DHAVE_MEMFD_CREATE', language: langs)
    endif

    # check_symbol_exists(poll "poll.h" HAVE_POLL)
    if HAVE_POLL
        add_project_arguments('-DHAVE_POLL', language: langs)
    endif

    if WITH_GHOST_WAYLAND_LIBDECOR
        # See code-comment for `USE_LIBDECOR_CONFIG_COPY_WORKAROUND`.
        # check_symbol_exists(malloc_usable_size "malloc.h" HAVE_MALLOC_USABLE_SIZE)
        if HAVE_MALLOC_USABLE_SIZE
            add_project_arguments('-DHAVE_MALLOC_USABLE_SIZE', language: langs)
        endif
    endif

    src_ghost += files(
        'intern/GHOST_SystemWayland.cc',
        'intern/GHOST_WindowWayland.cc',
        'intern/GHOST_SystemWayland.hh',
        'intern/GHOST_WaylandUtils.hh',
        'intern/GHOST_WindowWayland.hh',
    )

    wayland_protocols = [
        ['xdg-shell', 'stable'], # Used when: LIBDECOR is not needed.
        ['viewporter', 'stable'],
        ['xdg-activation', 'staging', 'v1'],
        ['fractional-scale', 'staging', 'v1'],
        ['pointer-constraints', 'unstable', 'v1'],
        ['pointer-gestures', 'unstable', 'v1'],
        ['primary-selection', 'unstable', 'v1'],
        ['relative-pointer', 'unstable', 'v1'],
        ['tablet', 'unstable', 'v2'],
        ['xdg-output', 'unstable', 'v1'],       
        ['xdg-decoration', 'unstable', 'v1'], # Used when: LIBDECOR is not needed.
    ]

    if WITH_INPUT_IME
        wayland_protocol += ['text-input', 'unstable', 'v3']
    endif

    bin_wayland_scanner = find_program('wayland-scanner', native: true)

    dir_protocols = dep_wayland_protocols.get_variable('pkgdatadir')
    assert(dir_protocols != '', 'Could not get pkgdatadir from wayland-protocols.pc')

    hdr_wayland_protocol_client = []
    src_wayland_protocol = []

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

    dep_ghost += wayland_protocol

    # add_project_arguments('-DWITH_GHOST_WAYLAND', language: langs)
    if not (WITH_GHOST_WAYLAND_APP_ID == '')
        add_project_arguments('-DWITH_GHOST_WAYLAND_APP_ID=@0@'.format(WITH_GHOST_WAYLAND_APP_ID), language: langs)
    endif
endif

if LINUX and not APPLE
  if WITH_OPENGL_BACKEND
    src_ghost += files(
      'intern/GHOST_ContextEGL.cc',
      'intern/GHOST_ContextEGL.hh',
    )
  endif
endif

if APPLE
    src_ghost += files(
        'intern/GHOST_SystemPathsCocoa.hh',
        'intern/GHOST_SystemPathsCocoa.mm',
    )
elif LINUX
    src_ghost += files(
        'intern/GHOST_SystemPathsUnix.cc',
        'intern/GHOST_SystemPathsUnix.hh',
    )
    if not WITH_INSTALL_PORTABLE
        # add_definitions(-DPREFIX="${CMAKE_INSTALL_PREFIX}")
    endif
endif

lib_ghost = static_library(
  'acc_ghost',
  src_ghost,
  include_directories: inc_ghost_private,
  dependencies: dep_ghost,
  install: true,
)

ghost = declare_dependency(
  include_directories: inc_ghost,
  link_with: lib_ghost,
)