// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_background_effect_v1

/*
 This protocol's authors' copyright notice is:


    Copyright (C) 2015 Martin Gräßlin
    Copyright (C) 2015 Marco Martin
    Copyright (C) 2020 Vlad Zahorodnii
    Copyright (C) 2024 Xaver Hugl

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
#include "ext-background-effect-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_background_effect_manager_v1_interface;
extern const wl_interface ext_background_effect_surface_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_region_interface;

static void _CExtBackgroundEffectManagerV1Capabilities(void* data, void* resource, extBackgroundEffectManagerV1Capability flags) {
    const auto PO = (CCExtBackgroundEffectManagerV1*)data;
    if (PO && PO->requests.capabilities)
        PO->requests.capabilities(PO, flags);
}

static const void* _CCExtBackgroundEffectManagerV1VTable[] = {
    (void*)_CExtBackgroundEffectManagerV1Capabilities,
};

void CCExtBackgroundEffectManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCExtBackgroundEffectManagerV1::sendGetBackgroundEffect(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &ext_background_effect_surface_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CExtBackgroundEffectManagerV1GetBackgroundEffectTypes[] = {
    &ext_background_effect_surface_v1_interface,
    &wl_surface_interface,
};
static const wl_interface* _CExtBackgroundEffectManagerV1CapabilitiesTypes[] = {
    nullptr,
};

static const wl_message _CExtBackgroundEffectManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_background_effect", "no", _CExtBackgroundEffectManagerV1GetBackgroundEffectTypes + 0},
};

static const wl_message _CExtBackgroundEffectManagerV1Events[] = {
    { "capabilities", "u", _CExtBackgroundEffectManagerV1CapabilitiesTypes + 0},
};

const wl_interface ext_background_effect_manager_v1_interface = {
    "ext_background_effect_manager_v1", 1,
    2, _CExtBackgroundEffectManagerV1Requests,
    1, _CExtBackgroundEffectManagerV1Events,
};

CCExtBackgroundEffectManagerV1::CCExtBackgroundEffectManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtBackgroundEffectManagerV1VTable, this);
}

CCExtBackgroundEffectManagerV1::~CCExtBackgroundEffectManagerV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtBackgroundEffectManagerV1::setCapabilities(F<void(CCExtBackgroundEffectManagerV1*, extBackgroundEffectManagerV1Capability)> handler) {
    requests.capabilities = handler;
}

static const void* _CCExtBackgroundEffectSurfaceV1VTable[] = {
};

void CCExtBackgroundEffectSurfaceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCExtBackgroundEffectSurfaceV1::sendSetBlurRegion(wl_proxy* region) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, region);
    proxy;
}
static const wl_interface* _CExtBackgroundEffectSurfaceV1SetBlurRegionTypes[] = {
    &wl_region_interface,
};

static const wl_message _CExtBackgroundEffectSurfaceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_blur_region", "?o", _CExtBackgroundEffectSurfaceV1SetBlurRegionTypes + 0},
};

const wl_interface ext_background_effect_surface_v1_interface = {
    "ext_background_effect_surface_v1", 1,
    2, _CExtBackgroundEffectSurfaceV1Requests,
    0, nullptr,
};

CCExtBackgroundEffectSurfaceV1::CCExtBackgroundEffectSurfaceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtBackgroundEffectSurfaceV1VTable, this);
}

CCExtBackgroundEffectSurfaceV1::~CCExtBackgroundEffectSurfaceV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
