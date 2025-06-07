// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_toplevel_drag_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2023 David Redondo

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
#include "xdg-toplevel-drag-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface xdg_toplevel_drag_manager_v1_interface;
extern const wl_interface xdg_toplevel_drag_v1_interface;
extern const wl_interface wl_data_source_interface;
extern const wl_interface xdg_toplevel_interface;

static const void* _CCXdgToplevelDragManagerV1VTable[] = {
};

void CCXdgToplevelDragManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCXdgToplevelDragManagerV1::sendGetXdgToplevelDrag(wl_proxy* data_source) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &xdg_toplevel_drag_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, data_source);

    return proxy;
}
static const wl_interface* _CXdgToplevelDragManagerV1GetXdgToplevelDragTypes[] = {
    &xdg_toplevel_drag_v1_interface,
    &wl_data_source_interface,
};

static const wl_message _CXdgToplevelDragManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_xdg_toplevel_drag", "no", _CXdgToplevelDragManagerV1GetXdgToplevelDragTypes + 0},
};

const wl_interface xdg_toplevel_drag_manager_v1_interface = {
    "xdg_toplevel_drag_manager_v1", 1,
    2, _CXdgToplevelDragManagerV1Requests,
    0, nullptr,
};

CCXdgToplevelDragManagerV1::CCXdgToplevelDragManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgToplevelDragManagerV1VTable, this);
}

CCXdgToplevelDragManagerV1::~CCXdgToplevelDragManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCXdgToplevelDragV1VTable[] = {
};

void CCXdgToplevelDragV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCXdgToplevelDragV1::sendAttach(wl_proxy* toplevel, int32_t x_offset, int32_t y_offset) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, toplevel, x_offset, y_offset);
    proxy;
}
static const wl_interface* _CXdgToplevelDragV1AttachTypes[] = {
    &xdg_toplevel_interface,
    nullptr,
    nullptr,
};

static const wl_message _CXdgToplevelDragV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "attach", "oii", _CXdgToplevelDragV1AttachTypes + 0},
};

const wl_interface xdg_toplevel_drag_v1_interface = {
    "xdg_toplevel_drag_v1", 1,
    2, _CXdgToplevelDragV1Requests,
    0, nullptr,
};

CCXdgToplevelDragV1::CCXdgToplevelDragV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgToplevelDragV1VTable, this);
}

CCXdgToplevelDragV1::~CCXdgToplevelDragV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
