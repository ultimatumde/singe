// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// alpha_modifier_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2024 Xaver Hugl

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
#include "alpha-modifier-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_alpha_modifier_v1_interface;
extern const wl_interface wp_alpha_modifier_surface_v1_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCWpAlphaModifierV1VTable[] = {
};

void CCWpAlphaModifierV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpAlphaModifierV1::sendGetSurface(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_alpha_modifier_surface_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CWpAlphaModifierV1GetSurfaceTypes[] = {
    &wp_alpha_modifier_surface_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CWpAlphaModifierV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_surface", "no", _CWpAlphaModifierV1GetSurfaceTypes + 0},
};

const wl_interface wp_alpha_modifier_v1_interface = {
    "wp_alpha_modifier_v1", 1,
    2, _CWpAlphaModifierV1Requests,
    0, nullptr,
};

CCWpAlphaModifierV1::CCWpAlphaModifierV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpAlphaModifierV1VTable, this);
}

CCWpAlphaModifierV1::~CCWpAlphaModifierV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpAlphaModifierSurfaceV1VTable[] = {
};

void CCWpAlphaModifierSurfaceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpAlphaModifierSurfaceV1::sendSetMultiplier(uint32_t factor) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, factor);
    proxy;
}
static const wl_interface* _CWpAlphaModifierSurfaceV1SetMultiplierTypes[] = {
    nullptr,
};

static const wl_message _CWpAlphaModifierSurfaceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_multiplier", "u", _CWpAlphaModifierSurfaceV1SetMultiplierTypes + 0},
};

const wl_interface wp_alpha_modifier_surface_v1_interface = {
    "wp_alpha_modifier_surface_v1", 1,
    2, _CWpAlphaModifierSurfaceV1Requests,
    0, nullptr,
};

CCWpAlphaModifierSurfaceV1::CCWpAlphaModifierSurfaceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpAlphaModifierSurfaceV1VTable, this);
}

CCWpAlphaModifierSurfaceV1::~CCWpAlphaModifierSurfaceV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
