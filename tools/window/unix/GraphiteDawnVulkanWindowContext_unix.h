/*
 * Copyright 2024 Google LLC
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef GraphiteDawnVulkanWindowContext_unix_DEFINED
#define GraphiteDawnVulkanWindowContext_unix_DEFINED

#include <memory>

namespace skwindow {
class WindowContext;
struct DisplayParams;
struct XlibWindowInfo;

std::unique_ptr<WindowContext> MakeGraphiteDawnVulkanForXlib(const XlibWindowInfo&,
                                                             const DisplayParams&);
}  // namespace skwindow

#endif
