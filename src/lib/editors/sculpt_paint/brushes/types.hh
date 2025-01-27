/* SPDX-FileCopyrightText: 2024 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "BLI_span.hh"

struct Sculpt;
struct Object;
struct PBVHNode;

namespace blender::ed::sculpt_paint {

void do_displacement_eraser_brush(const Sculpt &sd, Object &ob, Span<PBVHNode *> nodes);
/** A simple normal-direction displacement. */
void do_draw_brush(const Sculpt &sd, Object &object, Span<PBVHNode *> nodes);
/** A simple normal-direction displacement based on image texture RGB/XYZ values. */
void do_draw_vector_displacement_brush(const Sculpt &sd, Object &object, Span<PBVHNode *> nodes);
void do_fill_brush(const Sculpt &sd, Object &object, Span<PBVHNode *> nodes);
void do_flatten_brush(const Sculpt &sd, Object &ob, Span<PBVHNode *> nodes);
void do_inflate_brush(const Sculpt &sd, Object &ob, Span<PBVHNode *> nodes);
void do_nudge_brush(const Sculpt &sd, Object &object, Span<PBVHNode *> nodes);
void do_scrape_brush(const Sculpt &sd, Object &object, Span<PBVHNode *> nodes);
/** Smooth positions with neighboring vertices. */
void do_smooth_brush(const Sculpt &sd,
                     Object &object,
                     Span<PBVHNode *> nodes,
                     float brush_strength);

}  // namespace blender::ed::sculpt_paint
