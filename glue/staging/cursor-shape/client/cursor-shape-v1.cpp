// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// cursor_shape_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2018 The Chromium Authors
    Copyright 2023 Simon Ser

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
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "cursor-shape-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_cursor_shape_manager_v1_interface;
extern const wl_interface wp_cursor_shape_device_v1_interface;
extern const wl_interface wl_pointer_interface;
extern const wl_interface zwp_tablet_tool_v2_interface;

static const void* _CCWpCursorShapeManagerV1VTable[] = {
};

void CCWpCursorShapeManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpCursorShapeManagerV1::sendGetPointer(wl_proxy* pointer) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_cursor_shape_device_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, pointer);

    return proxy;
}

wl_proxy* CCWpCursorShapeManagerV1::sendGetTabletToolV2(wl_proxy* tablet_tool) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &wp_cursor_shape_device_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, tablet_tool);

    return proxy;
}
static const wl_interface* _CWpCursorShapeManagerV1GetPointerTypes[] = {
    &wp_cursor_shape_device_v1_interface,
    &wl_pointer_interface,
};
static const wl_interface* _CWpCursorShapeManagerV1GetTabletToolV2Types[] = {
    &wp_cursor_shape_device_v1_interface,
    &zwp_tablet_tool_v2_interface,
};

static const wl_message _CWpCursorShapeManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_pointer", "no", _CWpCursorShapeManagerV1GetPointerTypes + 0},
    { "get_tablet_tool_v2", "no", _CWpCursorShapeManagerV1GetTabletToolV2Types + 0},
};

const wl_interface wp_cursor_shape_manager_v1_interface = {
    "wp_cursor_shape_manager_v1", 2,
    3, _CWpCursorShapeManagerV1Requests,
    0, nullptr,
};

CCWpCursorShapeManagerV1::CCWpCursorShapeManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpCursorShapeManagerV1VTable, this);
}

CCWpCursorShapeManagerV1::~CCWpCursorShapeManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpCursorShapeDeviceV1VTable[] = {
};

void CCWpCursorShapeDeviceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpCursorShapeDeviceV1::sendSetShape(uint32_t serial, wpCursorShapeDeviceV1Shape shape) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, shape);
    proxy;
}
static const wl_interface* _CWpCursorShapeDeviceV1SetShapeTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CWpCursorShapeDeviceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_shape", "uu", _CWpCursorShapeDeviceV1SetShapeTypes + 0},
};

const wl_interface wp_cursor_shape_device_v1_interface = {
    "wp_cursor_shape_device_v1", 2,
    2, _CWpCursorShapeDeviceV1Requests,
    0, nullptr,
};

CCWpCursorShapeDeviceV1::CCWpCursorShapeDeviceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpCursorShapeDeviceV1VTable, this);
}

CCWpCursorShapeDeviceV1::~CCWpCursorShapeDeviceV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
