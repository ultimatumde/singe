// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// idle_inhibit_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2015 Samsung Electronics Co., Ltd

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
#include "idle-inhibit-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_idle_inhibit_manager_v1_interface;
extern const wl_interface zwp_idle_inhibitor_v1_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCZwpIdleInhibitManagerV1VTable[] = {
};

void CCZwpIdleInhibitManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpIdleInhibitManagerV1::sendCreateInhibitor(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_idle_inhibitor_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CZwpIdleInhibitManagerV1CreateInhibitorTypes[] = {
    &zwp_idle_inhibitor_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CZwpIdleInhibitManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "create_inhibitor", "no", _CZwpIdleInhibitManagerV1CreateInhibitorTypes + 0},
};

const wl_interface zwp_idle_inhibit_manager_v1_interface = {
    "zwp_idle_inhibit_manager_v1", 1,
    2, _CZwpIdleInhibitManagerV1Requests,
    0, nullptr,
};

CCZwpIdleInhibitManagerV1::CCZwpIdleInhibitManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpIdleInhibitManagerV1VTable, this);
}

CCZwpIdleInhibitManagerV1::~CCZwpIdleInhibitManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCZwpIdleInhibitorV1VTable[] = {
};

void CCZwpIdleInhibitorV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

static const wl_message _CZwpIdleInhibitorV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

const wl_interface zwp_idle_inhibitor_v1_interface = {
    "zwp_idle_inhibitor_v1", 1,
    1, _CZwpIdleInhibitorV1Requests,
    0, nullptr,
};

CCZwpIdleInhibitorV1::CCZwpIdleInhibitorV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpIdleInhibitorV1VTable, this);
}

CCZwpIdleInhibitorV1::~CCZwpIdleInhibitorV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
