// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// single_pixel_buffer_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2022 Simon Ser

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice (including the next
    paragraph) shall be included in all copies or substantial portions of the
    Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "single-pixel-buffer-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_single_pixel_buffer_manager_v1_interface;
extern const wl_interface wl_buffer_interface;

static const void* _CCWpSinglePixelBufferManagerV1VTable[] = {
};

void CCWpSinglePixelBufferManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpSinglePixelBufferManagerV1::sendCreateU32RgbaBuffer(uint32_t r, uint32_t g, uint32_t b, uint32_t a) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wl_buffer_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, r, g, b, a);

    return proxy;
}
static const wl_interface* _CWpSinglePixelBufferManagerV1CreateU32RgbaBufferTypes[] = {
    &wl_buffer_interface,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CWpSinglePixelBufferManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "create_u32_rgba_buffer", "nuuuu", _CWpSinglePixelBufferManagerV1CreateU32RgbaBufferTypes + 0},
};

const wl_interface wp_single_pixel_buffer_manager_v1_interface = {
    "wp_single_pixel_buffer_manager_v1", 1,
    2, _CWpSinglePixelBufferManagerV1Requests,
    0, nullptr,
};

CCWpSinglePixelBufferManagerV1::CCWpSinglePixelBufferManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpSinglePixelBufferManagerV1VTable, this);
}

CCWpSinglePixelBufferManagerV1::~CCWpSinglePixelBufferManagerV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
