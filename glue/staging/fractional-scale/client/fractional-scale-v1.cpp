// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// fractional_scale_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2022 Kenny Levinsen

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
#include "fractional-scale-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_fractional_scale_manager_v1_interface;
extern const wl_interface wp_fractional_scale_v1_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCWpFractionalScaleManagerV1VTable[] = {
};

void CCWpFractionalScaleManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpFractionalScaleManagerV1::sendGetFractionalScale(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_fractional_scale_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CWpFractionalScaleManagerV1GetFractionalScaleTypes[] = {
    &wp_fractional_scale_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CWpFractionalScaleManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_fractional_scale", "no", _CWpFractionalScaleManagerV1GetFractionalScaleTypes + 0},
};

const wl_interface wp_fractional_scale_manager_v1_interface = {
    "wp_fractional_scale_manager_v1", 1,
    2, _CWpFractionalScaleManagerV1Requests,
    0, nullptr,
};

CCWpFractionalScaleManagerV1::CCWpFractionalScaleManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpFractionalScaleManagerV1VTable, this);
}

CCWpFractionalScaleManagerV1::~CCWpFractionalScaleManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CWpFractionalScaleV1PreferredScale(void* data, void* resource, uint32_t scale) {
    const auto PO = (CCWpFractionalScaleV1*)data;
    if (PO && PO->requests.preferredScale)
        PO->requests.preferredScale(PO, scale);
}

static const void* _CCWpFractionalScaleV1VTable[] = {
    (void*)_CWpFractionalScaleV1PreferredScale,
};

void CCWpFractionalScaleV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CWpFractionalScaleV1PreferredScaleTypes[] = {
    nullptr,
};

static const wl_message _CWpFractionalScaleV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CWpFractionalScaleV1Events[] = {
    { "preferred_scale", "u", _CWpFractionalScaleV1PreferredScaleTypes + 0},
};

const wl_interface wp_fractional_scale_v1_interface = {
    "wp_fractional_scale_v1", 1,
    1, _CWpFractionalScaleV1Requests,
    1, _CWpFractionalScaleV1Events,
};

CCWpFractionalScaleV1::CCWpFractionalScaleV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpFractionalScaleV1VTable, this);
}

CCWpFractionalScaleV1::~CCWpFractionalScaleV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpFractionalScaleV1::setPreferredScale(F<void(CCWpFractionalScaleV1*, uint32_t)> handler) {
    requests.preferredScale = handler;
}

#undef F
