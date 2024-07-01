inc_datatoc = include_directories('.')

inc_datatoc_private = []
dep_datatoc_private = []

# -----------------------------------------------------------------------------
# Build datatoc executable
src_datatoc = files(
    'datatoc.cc',
)

bin_datatoc = executable('datatoc', src_datatoc)

# -----------------------------------------------------------------------------
# Build datatoc_icon executable

if not WITH_HEADLESS
    src_datatoc_icon = files(
        'datatoc_icon.cc',
    )
    
    if WINDOWS
        inc_datatoc_private += [
            '../blenlib',
            '../utfconv',
        ]

        # for winstuff_dir.cc
        src_datatoc += files(
        '../blenlib/intern/winstuff_dir.cc',
        '../utfconv/utfconv.cc',
        )
    endif

    dep_datatoc_private = [dep_png, dep_zlib]

    # PNG library uses pow() and floow(), so seems -lm is required for proper
    # working binary.
    if LINUX and not APPLE
        dep_datatoc_private += dep_m
    endif

    bin_datatoc_icon = executable('datatoc_icon', 
        src_datatoc_icon, 
        dependencies: dep_datatoc_private,
        include_directories: inc_datatoc_private
    )
endif
