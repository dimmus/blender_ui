#pragma once

#undef wl_array_for_each
/**
 * This macro causes a warning for C++ code, define our own.
 * See: https://gitlab.freedesktop.org/wayland/wayland/-/issues/34
 */
#define WL_ARRAY_FOR_EACH(pos, array) \
  for (pos = (decltype(pos))((array)->data); \
       reinterpret_cast<const char *>(pos) < \
       (reinterpret_cast<const char *>((array)->data) + (array)->size); \
       (pos)++)
