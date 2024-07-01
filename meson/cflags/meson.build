COMPILER_IS_GNUCC = cc.get_id() == 'gcc'
COMPILER_IS_CLANG = cc.get_id() == 'clang' # Matches both "Clang" & "AppleClang" on macOS.
COMPILER_IS_CLANG_CL = cc.get_id() == 'clang-cl' # MSVC_CLANG
COMPILER_IS_MSVC = cc.get_id() == 'msvc'
COMPILER_IS_INTEL = cc.get_id() == 'intel'

c_compiler_flags = []
cxx_compiler_flags = []

# Visual Studio has all standards it supports available by default
# Clang on windows copies this behavior and does not support these switches
if COMPILER_IS_GNUCC or (COMPILER_IS_CLANG and not COMPILER_IS_MSVC) or (COMPILER_IS_INTEL)
  # Use C11 + GNU extensions, works with GCC, Clang, ICC
  # project('acc', default_options: 'c_std=gnu11')
endif

if COMPILER_IS_GNUCC
  # C_WARNINGS
  c_compiler_flags += [
    # '-Wall' # set by warning_level=2
    '-Werror=implicit-function-declaration',

    # System headers sometimes do this, disable for now, was: `-Werror=strict-prototypes`.
    '-Wstrict-prototypes',

    '-Werror=return-type',
    '-Werror=vla',
    '-Wmissing-prototypes',
    '-Wno-char-subscripts',
    '-Wno-unknown-pragmas',
    '-Wpointer-arith',
    '-Wunused-parameter',
    '-Wwrite-strings',
    '-Wlogical-op',
    '-Wundef',

    # Needs: `-Wuninitialized`.
    '-Winit-self',

    '-Wmissing-include-dirs',
    '-Wno-div-by-zero',
    '-Wtype-limits',
    '-Wformat-signedness',
    '-Wrestrict',

    # Useful but too many false positives and inconvenient to suppress each occurrence.
    '-Wno-stringop-overread',
    '-Wno-stringop-overflow',

    # C-only.
    '-Wnonnull',
    '-Wabsolute-value',

    '-Wuninitialized',
    '-Wredundant-decls',
    '-Wshadow',

    # Disable because it gives warnings for printf() & friends.
    # -Wdouble-promotion -Wno-error=double-promotion

    # Use `ATTR_FALLTHROUGH` macro to suppress.
    '-Wimplicit-fallthrough=5',
  ]

  if not APPLE
    # C_WARNINGS
    c_compiler_flags += [
      '-Wno-error=unused-but-set-variable',
    ]
  endif
  # CXX_WARNINGS
  cxx_compiler_flags += [
    '-Wuninitialized',
    '-Wredundant-decls',

    # '-Wall' # set by warning_level=2
    '-Wno-invalid-offsetof',
    '-Wno-sign-compare',
    '-Wlogical-op',

    # Needs: `-Wuninitialized`.
    '-Winit-self',

    '-Wmissing-include-dirs',
    '-Wno-div-by-zero',
    '-Wtype-limits',
    '-Werror=return-type',
    '-Wno-char-subscripts',
    '-Wno-unknown-pragmas',
    '-Wpointer-arith',
    '-Wunused-parameter',
    '-Wwrite-strings',
    '-Wundef',
    '-Wcomma-subscript',
    '-Wformat-signedness',
    '-Wrestrict',
    '-Wno-suggest-override',
    '-Wuninitialized',

    # NOTE(@ideasman42): In GCC 13.2.1 on Linux this causes internal compiler errors.
    # The crashes can be resolved by disabling the flag per module (but not via pragmas).
    # However this also causes a type mix-up FreeStyle  (Blender & FreeStyle's `Curve`)
    # so it seems to impact GCC's the internal state enough that it's too risky to enable.
    # When this is resolved the check can be enabled for fixed GCC versions.
    #
    # Prevents linking errors with MSVC.
    # '-Wmismatched-tags'

    # Useful but too many false positives and inconvenient to suppress each occurrence.
    '-Wno-stringop-overread',
    '-Wno-stringop-overflow',

    # Use `[[fallthrough]]` or `ATTR_FALLTHROUGH` macro to suppress.
    '-Wimplicit-fallthrough=5',
  ]

  # causes too many warnings
  if not APPLE
    # CXX_WARNINGS
    cxx_compiler_flags += [
      '-Wundef',
      '-Wmissing-declarations',
    ]
  endif

  # ---------------------
  # Suppress Strict Flags
  #
  # Exclude the following warnings from this list:
  # - `-Wno-address`:
  #   This can give useful hints that point to bugs/misleading logic.
  # - `-Wno-strict-prototypes`:
  #   No need to support older C-style prototypes.
  #
  # If code in `./extern/` needs to suppress these flags that can be done on a case-by-case basis.

  # flags to undo strict flags
  # C_REMOVE_STRICT_FLAGS
  c_compiler_flags += [
    '-Wno-deprecated-declarations',
    '-Wno-unused-parameter',
    '-Wno-unused-function',
    '-Wno-type-limits',
    '-Wno-int-in-bool-context',
    '-Wno-format',
    '-Wno-switch',
    '-Wno-unused-variable',
    '-Wno-uninitialized',
    '-Wno-implicit-fallthrough',
  ]

  # CXX_REMOVE_STRICT_FLAGS
  cxx_compiler_flags += [
    '-Wno-class-memaccess',
    '-Wno-comment',
    '-Wno-unused-local-typedefs',
    '-Wno-unused-variable',
    '-Wno-uninitialized',
  ]

  if not APPLE
    # C_REMOVE_STRICT_FLAGS
    c_compiler_flags += [
      '-Wno-error=unused-but-set-variable',
    ]
  endif
endif

if COMPILER_IS_CLANG
  # C_WARNINGS
  c_compiler_flags += [
    # Strange, clang complains these are not supported, but then uses them.
    # '-Wall' # set by warning_level=2
    '-Werror=implicit-function-declaration',
    '-Werror=return-type',
    '-Wno-tautological-compare',
    '-Wno-unknown-pragmas',
    '-Wno-char-subscripts',
    '-Wstrict-prototypes',
    '-Wmissing-prototypes',
    '-Wunused-parameter',
    '-Wundef',
    '-Wundef-prefix',

    '-Werror=unguarded-availability-new',
  ]
  # CXX_WARNINGS
  cxx_compiler_flags += [
    # '-Wall' # set by warning_level=2
    # Using C++20 features while having C++17 as the project language isn't allowed by MSVC.
    '-Wc++20-designator',

    '-Wno-tautological-compare',
    '-Wno-unknown-pragmas',
    '-Wno-char-subscripts',

    # We get a lot of these, if its a problem a dev needs to look into it.
    '-Wno-overloaded-virtual',

    '-Wno-sign-compare',
    '-Wno-invalid-offsetof',

    # Apple Clang (tested on version 12) doesn't support this flag while LLVM Clang 11 does.
    '-Wno-suggest-override',

    '-Wundef',
    '-Wundef-prefix',
    '-Wunused-parameter',

    # Prevents linking errors with MSVC.
    '-Wmismatched-tags',

    # Gives too many unfixable warnings.
    # '-Wunused-macros',

    '-Werror=unguarded-availability-new',
  ]

  if COMPILER_IS_CLANG_CL
    # clang-cl produces an unhealthy ammount of warnings in its default
    # configuration as it for reasons unknown decided to enable all
    # warnings known to mankind. Resulting in a 5.5GB build log containing
    # well over 11 million warnings. The code below disables every single
    # one of them indiscriminately. Someone with time on their hands,
    # could/should go over these and either fix them or describe why we
    # would want to disable the warning. The list below contains both C
    # and C++ warnings for all warnings since clang has seemingly no
    # easy way to tell if something is a C or C++ specific warning and
    # manually auditing every single one of them just isn't in the cards
    # right now.

    # /W3 is being removed, then added back again, this is because order
    # matters for clang and these flags are being placed before the
    # CMAKE_[LANGUAGE]_FLAGS which normally contain /W3, so we would
    # disable certain warings here only for them to be re-enabled by /W3
    # later on.
    #
    # remove_cc_flag("/W3")

    # C_WARNINGS
    c_compiler_flags += [
      '/W3',
      # The number behind each warn is the number of unique warning were
      # generated on 2024-04-24 (d2be9cecc28a03ff1f799e8c63f1f9f8eda7cce3)
      # especially the ones in the single and low double digits are likely
      # genuine problems that can be investigated.
      '-Wno-c++98-compat', # 352692
      '-Wno-old-style-cast', # 178608
      '-Wno-unsafe-buffer-usage', # 89032
      '-Wno-missing-prototypes', # 25587
      '-Wno-sign-conversion', # 20109
      '-Wno-missing-field-initializers', # 20060
      '-Wno-extra-semi', # 12513
      '-Wno-language-extension-token', # 11032
      '-Wno-implicit-float-conversion', # 11003
      '-Wno-c++98-compat-pedantic', # 10336
      '-Wno-implicit-int-float-conversion', # 7354
      '-Wno-double-promotion', # 7350
      '-Wno-pre-c++17-compat', # 7303
      '-Wno-shorten-64-to-32', # 7085
      '-Wno-c++98-compat-local-type-template-args', # 6906
      '-Wno-reserved-identifier', # 5886
      '-Wno-cast-align', # 5513
      '-Wno-documentation', # 5107
      '-Wno-disabled-macro-expansion', # 4449
      '-Wno-extra-semi-stmt', # 4349
      '-Wno-zero-as-null-pointer-constant', # 3209
      '-Wno-float-conversion', # 2869
      '-Wno-reserved-macro-identifier', # 2862
      '-Wno-cast-function-type-strict', # 2663
      '-Wno-float-equal', # 2153
      '-Wno-implicit-int-conversion', # 2117
      '-Wno-shadow', # 2068
      '-Wno-shadow-field-in-constructor', # 1829
      '-Wno-cast-qual', # 1742
      '-Wno-pre-c++14-compat', # 1569
      '-Wno-global-constructors', # 1402
      '-Wno-switch-enum', # 973
      '-Wno-exit-time-destructors', # 940
      '-Wno-ctad-maybe-unsupported', # 891
      '-Wno-undefined-func-template', # 863
      '-Wno-c++98-compat-extra-semi', # 848
      '-Wno-cast-function-type', # 807
      '-Wno-nullability-extension', # 602
      '-Wno-shadow-field', # 585
      '-Wno-conditional-uninitialized', # 555
      '-Wno-unused-parameter', # 539
      '-Wno-suggest-destructor-override', # 356
      '-Wno-shadow-uncaptured-local', # 355
      '-Wno-unused-macros', # 289
      '-Wno-covered-switch-default', # 233
      '-Wno-signed-enum-bitfield', # 229
      '-Wno-declaration-after-statement', # 228
      '-Wno-implicit-fallthrough', # 164
      '-Wno-non-virtual-dtor', # 161
      '-Wno-nested-anon-types', # 140
      '-Wno-gnu-zero-variadic-macro-arguments', # 132
      '-Wno-unreachable-code-break', # 115
      '-Wno-inconsistent-missing-destructor-override', # 104
      '-Wno-format-pedantic', # 97
      '-Wno-nonportable-system-include-path', # 95
      '-Wno-undef', # 94
      '-Wno-ignored-qualifiers', # 93
      '-Wno-used-but-marked-unused', # 83
      '-Wno-header-hygiene', # 79
      '-Wno-char-subscripts', # 76
      '-Wno-unreachable-code-return', # 71
      '-Wno-unused-template', # 66
      '-Wno-gnu-anonymous-struct', # 63
      '-Wno-deprecated-copy-with-user-provided-dtor', # 62
      '-Wno-inconsistent-missing-override', # 54
      '-Wno-unreachable-code', # 52
      '-Wno-deprecated-dynamic-exception-spec', # 51
      '-Wno-bad-function-cast', # 50
      '-Wno-microsoft-enum-value', # 47
      '-Wno-deprecated-copy-with-user-provided-copy', # 41
      '-Wno-zero-length-array', # 39
      '-Wno-unused-function', # 38
      '-Wno-pedantic', # 38
      '-Wno-deprecated-copy-with-dtor', # 37
      '-Wno-documentation-unknown-command', # 34
      '-Wno-undefined-reinterpret-cast', # 33
      '-Wno-format-nonliteral', # 29
      '-Wno-comma', # 27
      '-Wno-documentation-deprecated-sync', # 26
      '-Wno-shift-sign-overflow', # 24
      '-Wno-pre-c++17-compat-pedantic', # 24
      '-Wno-c++98-compat-unnamed-type-template-args', # 22
      '-Wno-sign-compare', # 21
      '-Wno-format', # 21
      '-Wno-c++98-compat-bind-to-temporary-copy', # 21
      '-Wno-enum-enum-conversion', # 20
      '-Wno-anon-enum-enum-conversion', # 14
      '-Wno-range-loop-bind-reference', # 14
      '-Wno-enum-float-conversion', # 12
      '-Wno-keyword-macro', # 10
      '-Wno-deprecated-copy', # 10
      '-Wno-unused-member-function', # 9
      '-Wno-missing-noreturn', # 8
      '-Wno-missing-variable-declarations', # 8
      '-Wno-documentation-html', # 6
      '-Wno-gnu-redeclared-enum', # 6
      '-Wno-deprecated-declarations', # 6
      '-Wno-overloaded-virtual', # 5
      '-Wno-c++98-c++11-compat-binary-literal', # 4
      '-Wno-deprecated-redundant-constexpr-static-def', # 4
      '-Wno-missing-braces', # 4
      '-Wno-c99-extensions', # 4
      '-Wno-strict-prototypes', # 4
      '-Wno-unreachable-code-loop-increment', # 4
      '-Wno-gnu-case-range', # 4
      '-Wno-duplicate-enum', # 3
      '-Wno-null-pointer-subtraction', # 2
      '-Wno-deprecated-literal-operator', # 2
      '-Wno-newline-eof', # 2
      '-Wno-microsoft-cast', # 2
      '-Wno-date-time', # 2
      '-Wno-delete-non-abstract-non-virtual-dtor', # 2
      '-Wno-unused-private-field', # 2
      '-Wno-flexible-array-extensions', # 2
      '-Wno-string-conversion', # 2
      '-Wno-final-dtor-non-final-class', # 2
      '-Wno-microsoft-unqualified-friend', # 2
      '-Wno-invalid-noreturn', # 1
      '-Wno-invalid-utf8', # 1
      '-Wno-four-char-constants', # 1
      '-Wno-parentheses', # 1
      '-Wno-pessimizing-move', # 1
      '-Wno-deprecated-non-prototype', # 1
      '-Wno-bitfield-enum-conversion', # 1
      '-Wno-unused-lambda-capture', # 1
      '-Wno-shadow-field-in-constructor-modified', # 1
    ]
    # CXX_WARNINGS
    cxx_compiler_flags += [
      '/W3',
      '-Wno-c++98-compat', # 352692
      '-Wno-old-style-cast', # 178608
      '-Wno-unsafe-buffer-usage', # 89032
      '-Wno-missing-prototypes', # 25587
      '-Wno-sign-conversion', # 20109
      '-Wno-missing-field-initializers', # 20060
      '-Wno-extra-semi', # 12513
      '-Wno-language-extension-token', # 11032
      '-Wno-implicit-float-conversion', # 11003
      '-Wno-c++98-compat-pedantic', # 10336
      '-Wno-implicit-int-float-conversion', # 7354
      '-Wno-double-promotion', # 7350
      '-Wno-pre-c++17-compat', # 7303
      '-Wno-shorten-64-to-32', # 7085
      '-Wno-c++98-compat-local-type-template-args', # 6906
      '-Wno-reserved-identifier', # 5886
      '-Wno-cast-align', # 5513
      '-Wno-documentation', # 5107
      '-Wno-disabled-macro-expansion', # 4449
      '-Wno-extra-semi-stmt', # 4349
      '-Wno-zero-as-null-pointer-constant', # 3209
      '-Wno-float-conversion', # 2869
      '-Wno-reserved-macro-identifier', # 2862
      '-Wno-cast-function-type-strict', # 2663
      '-Wno-float-equal', # 2153
      '-Wno-implicit-int-conversion', # 2117
      '-Wno-shadow', # 2068
      '-Wno-shadow-field-in-constructor', # 1829
      '-Wno-cast-qual', # 1742
      '-Wno-pre-c++14-compat', # 1569
      '-Wno-global-constructors', # 1402
      '-Wno-switch-enum', # 973
      '-Wno-exit-time-destructors', # 940
      '-Wno-ctad-maybe-unsupported', # 891
      '-Wno-undefined-func-template', # 863
      '-Wno-c++98-compat-extra-semi', # 848
      '-Wno-cast-function-type', # 807
      '-Wno-nullability-extension', # 602
      '-Wno-shadow-field', # 585
      '-Wno-conditional-uninitialized', # 555
      '-Wno-unused-parameter', # 539
      '-Wno-suggest-destructor-override', # 356
      '-Wno-shadow-uncaptured-local', # 355
      '-Wno-unused-macros', # 289
      '-Wno-covered-switch-default', # 233
      '-Wno-signed-enum-bitfield', # 229
      '-Wno-declaration-after-statement', # 228
      '-Wno-implicit-fallthrough', # 164
      '-Wno-non-virtual-dtor', # 161
      '-Wno-nested-anon-types', # 140
      '-Wno-gnu-zero-variadic-macro-arguments', # 132
      '-Wno-unreachable-code-break', # 115
      '-Wno-inconsistent-missing-destructor-override', # 104
      '-Wno-format-pedantic', # 97
      '-Wno-nonportable-system-include-path', # 95
      '-Wno-undef', # 94
      '-Wno-ignored-qualifiers', # 93
      '-Wno-used-but-marked-unused', # 83
      '-Wno-header-hygiene', # 79
      '-Wno-char-subscripts', # 76
      '-Wno-unreachable-code-return', # 71
      '-Wno-unused-template', # 66
      '-Wno-gnu-anonymous-struct', # 63
      '-Wno-deprecated-copy-with-user-provided-dtor', # 62
      '-Wno-inconsistent-missing-override', # 54
      '-Wno-unreachable-code', # 52
      '-Wno-deprecated-dynamic-exception-spec', # 51
      '-Wno-bad-function-cast', # 50
      '-Wno-microsoft-enum-value', # 47
      '-Wno-deprecated-copy-with-user-provided-copy', # 41
      '-Wno-zero-length-array', # 39
      '-Wno-unused-function', # 38
      '-Wno-pedantic', # 38
      '-Wno-deprecated-copy-with-dtor', # 37
      '-Wno-documentation-unknown-command', # 34
      '-Wno-undefined-reinterpret-cast', # 33
      '-Wno-format-nonliteral', # 29
      '-Wno-comma', # 27
      '-Wno-documentation-deprecated-sync', # 26
      '-Wno-shift-sign-overflow', # 24
      '-Wno-pre-c++17-compat-pedantic', # 24
      '-Wno-c++98-compat-unnamed-type-template-args', # 22
      '-Wno-sign-compare', # 21
      '-Wno-format', # 21
      '-Wno-c++98-compat-bind-to-temporary-copy', # 21
      '-Wno-enum-enum-conversion', # 20
      '-Wno-anon-enum-enum-conversion', # 14
      '-Wno-range-loop-bind-reference', # 14
      '-Wno-enum-float-conversion', # 12
      '-Wno-keyword-macro', # 10
      '-Wno-deprecated-copy', # 10
      '-Wno-unused-member-function', # 9
      '-Wno-missing-noreturn', # 8
      '-Wno-missing-variable-declarations', # 8
      '-Wno-documentation-html', # 6
      '-Wno-gnu-redeclared-enum', # 6
      '-Wno-deprecated-declarations', # 6
      '-Wno-overloaded-virtual', # 5
      '-Wno-c++98-c++11-compat-binary-literal', # 4
      '-Wno-deprecated-redundant-constexpr-static-def', # 4
      '-Wno-missing-braces', # 4
      '-Wno-c99-extensions', # 4
      '-Wno-strict-prototypes', # 4
      '-Wno-unreachable-code-loop-increment', # 4
      '-Wno-gnu-case-range', # 4
      '-Wno-duplicate-enum', # 3
      '-Wno-null-pointer-subtraction', # 2
      '-Wno-deprecated-literal-operator', # 2
      '-Wno-newline-eof', # 2
      '-Wno-microsoft-cast', # 2
      '-Wno-date-time', # 2
      '-Wno-delete-non-abstract-non-virtual-dtor', # 2
      '-Wno-unused-private-field', # 2
      '-Wno-flexible-array-extensions', # 2
      '-Wno-string-conversion', # 2
      '-Wno-final-dtor-non-final-class', # 2
      '-Wno-microsoft-unqualified-friend', # 2
      '-Wno-invalid-noreturn', # 1
      '-Wno-invalid-utf8', # 1
      '-Wno-four-char-constants', # 1
      '-Wno-parentheses', # 1
      '-Wno-pessimizing-move', # 1
      '-Wno-deprecated-non-prototype', # 1
      '-Wno-bitfield-enum-conversion', # 1
      '-Wno-unused-lambda-capture', # 1
      '-Wno-shadow-field-in-constructor-modified', # 1
    ]
  endif

  # ---------------------
  # Suppress Strict Flags

  # flags to undo strict flags
  # C_REMOVE_STRICT_FLAGS
  c_compiler_flags += [
    '-Wno-unused-parameter',
    '-Wno-unused-variable',
    '-Wno-unused-macros',
    '-Wno-misleading-indentation',

    '-Wno-missing-variable-declarations',
    '-Wno-incompatible-pointer-types-discards-qualifiers',
    '-Wno-unused-function',
    '-Wno-int-to-void-pointer-cast',
    '-Wno-missing-prototypes',
    '-Wno-duplicate-enum',
    '-Wno-undef',
    '-Wno-missing-noreturn',
    '-Wno-unused-but-set-variable',
    '-Wno-deprecated-declarations',
    '-Wno-strict-prototypes',
    '-Wno-bitwise-instead-of-logical',
    '-Wno-implicit-const-int-float-conversion',
    '-Wno-single-bit-bitfield-constant-conversion',
  ]
  # CXX_REMOVE_STRICT_FLAGS
  cxx_compiler_flags += [
    '-Wno-unused-parameter',
    '-Wno-unused-private-field',
    '-Wno-c++11-narrowing',
    '-Wno-non-virtual-dtor',
    '-Wno-unused-macros',
    '-Wno-unused-variable',
    '-Wno-reorder',
    '-Wno-comment',
    '-Wno-unused-local-typedefs',
    '-Wno-undefined-var-template',
    '-Wno-instantiation-after-specialization',
    '-Wno-misleading-indentation',
    '-Wno-bitwise-instead-of-logical',
    '-Wno-implicit-const-int-float-conversion',
    '-Wno-undef',
    '-Wno-undef-prefix',
  ]
endif

if COMPILER_IS_INTEL
  # C_WARNINGS
  c_compiler_flags += [
    # '-Wall' # set by warning_level=2
    '-Wpointer-arith',
    '-Wno-unknown-pragmas',
  ]
  # CXX_WARNINGS
  cxx_compiler_flags += [
    # '-Wall' # set by warning_level=2
    '-Wno-invalid-offsetof',
    '-Wno-sign-compare',
  ]

  # Disable numbered, false positives.
  # string(APPEND C_WARNINGS " -wd188,186,144,913,556,858,597,177,1292,167,279,592,94,2722,3199")
  # string(APPEND CXX_WARNINGS " -wd188,186,144,913,556,858,597,177,1292,167,279,592,94,2722,3199")
endif

if COMPILER_IS_MSVC
  # most msvc warnings are C & C++
  c_compiler_flags += [
    # warning level:
    '/W3',
    '/w34062', # switch statement contains 'default' but no 'case' labels
    '/w34100', # 'identifier' : unreferenced formal parameter
    '/w34115', # 'type' : named type definition in parentheses
    '/w34189', # local variable is initialized but not referenced
    # see https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/c5038?view=vs-2017
    '/w35038', # order of initialization in c++ constructors
    # disable:
    '/wd4018', # signed/unsigned mismatch
    '/wd4146', # unary minus operator applied to unsigned type, result still unsigned
    '/wd4065', # switch statement contains 'default' but no 'case' labels
    '/wd4127', # conditional expression is constant
    '/wd4181', # qualifier applied to reference type; ignored
    '/wd4200', # zero-sized array in struct/union
    '/wd4244', # conversion from 'type1' to 'type2', possible loss of data
    '/wd4267', # conversion from 'size_t' to 'type', possible loss of data
    '/wd4305', # truncation from 'type1' to 'type2'
    '/wd4800', # forcing value to bool 'true' or 'false'
    '/wd4828', # The file contains a character that is illegal
    '/wd4996', # identifier was declared deprecated
    '/wd4661', # no suitable definition provided for explicit template instantiation request
    '/wd4848', # 'no_unique_address' is a vendor extension in C++17
    # errors:
    '/we4013', # 'function' undefined; assuming extern returning int
    '/we4133', # incompatible pointer types
    '/we4431', # missing type specifier - int assumed
    '/we4033', # 'function' must return a value
  ]
  cxx_compiler_flags = c_compiler_flags
endif

# Visual Studio has all standards it supports available by default
# Clang on windows copies this behavior and does not support these switches
if COMPILER_IS_GNUCC or COMPILER_IS_INTEL or (COMPILER_IS_CLANG and not COMPILER_IS_MSVC)

  # Use C11 + GNU extensions, works with GCC, Clang, ICC
  # string(APPEND CMAKE_C_FLAGS " -std=gnu11")
endif

subdir('platform')

# Include warnings first, so its possible to disable them with user defined flags
# eg: -Wno-uninitialized
# CMAKE_C_FLAGS = C_WARNINGS + CMAKE_C_FLAGS + PLATFORM_CFLAGS
# CMAKE_CXX_FLAGS = CXX_WARNINGS + CMAKE_CXX_FLAGS + PLATFORM_CFLAGS

user_c_flags = cc.get_supported_arguments(c_compiler_flags + platform_c_flags)
user_cxx_flags = cxx.get_supported_arguments(cxx_compiler_flags + platform_c_flags)

add_project_arguments(user_c_flags, native: false, language: 'c')
add_project_arguments(user_cxx_flags, native: false, language: 'cpp')

# Compilation informations
summary_compiler += {'PLATFORM': host_machine.system().to_lower()}
summary_compiler += {'ARCHITECTURE': host_machine.cpu_family()}
summary_compiler += {'ENDIANNESS': build_machine.endian()}

summary_compiler += {'C COMPILER': ''.join(meson.get_compiler('c').cmd_array(), ' (', cc.get_id(), ')')}
summary_compiler += {'C++ COMPILER': ' '.join(meson.get_compiler('cpp').cmd_array())}

summary_compiler += {'CFLAGS': ' '.join(get_option('c_args'))}
summary_compiler += {'CXXFLAGS': ' '.join(get_option('cpp_args'))}

summary_compiler += {'LTO': get_option('b_lto')}
summary_compiler += {'PIE': get_option('b_pie')}
summary_compiler += {'GCOV': get_option('b_coverage')}
summary_compiler += {'DEBUG': get_option('debug')}

summary_compiler += {'SHORT_FILE_MACRO': WITH_COMPILER_SHORT_FILE_MACRO}