// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xwayland_keyboard_grab_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2017 Red Hat Inc.

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
#include "xwayland-keyboard-grab-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_xwayland_keyboard_grab_manager_v1_interface;
extern const wl_interface zwp_xwayland_keyboard_grab_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;

static const void* _CCZwpXwaylandKeyboardGrabManagerV1VTable[] = {
};

void CCZwpXwaylandKeyboardGrabManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpXwaylandKeyboardGrabManagerV1::sendGrabKeyboard(wl_proxy* surface, wl_proxy* seat) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_xwayland_keyboard_grab_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface, seat);

    return proxy;
}
static const wl_interface* _CZwpXwaylandKeyboardGrabManagerV1GrabKeyboardTypes[] = {
    &zwp_xwayland_keyboard_grab_v1_interface,
    &wl_surface_interface,
    &wl_seat_interface,
};

static const wl_message _CZwpXwaylandKeyboardGrabManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "grab_keyboard", "noo", _CZwpXwaylandKeyboardGrabManagerV1GrabKeyboardTypes + 0},
};

const wl_interface zwp_xwayland_keyboard_grab_manager_v1_interface = {
    "zwp_xwayland_keyboard_grab_manager_v1", 1,
    2, _CZwpXwaylandKeyboardGrabManagerV1Requests,
    0, nullptr,
};

CCZwpXwaylandKeyboardGrabManagerV1::CCZwpXwaylandKeyboardGrabManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpXwaylandKeyboardGrabManagerV1VTable, this);
}

CCZwpXwaylandKeyboardGrabManagerV1::~CCZwpXwaylandKeyboardGrabManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCZwpXwaylandKeyboardGrabV1VTable[] = {
};

void CCZwpXwaylandKeyboardGrabV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

static const wl_message _CZwpXwaylandKeyboardGrabV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

const wl_interface zwp_xwayland_keyboard_grab_v1_interface = {
    "zwp_xwayland_keyboard_grab_v1", 1,
    1, _CZwpXwaylandKeyboardGrabV1Requests,
    0, nullptr,
};

CCZwpXwaylandKeyboardGrabV1::CCZwpXwaylandKeyboardGrabV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpXwaylandKeyboardGrabV1VTable, this);
}

CCZwpXwaylandKeyboardGrabV1::~CCZwpXwaylandKeyboardGrabV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
