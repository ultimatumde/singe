// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// color_representation_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2022 Simon Ser
    Copyright 2022 Red Hat, Inc.
    Copyright 2022 Collabora, Ltd.
    Copyright 2022-2025 Red Hat, Inc.

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
#include "color-representation-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_color_representation_manager_v1_interface;
extern const wl_interface wp_color_representation_surface_v1_interface;
extern const wl_interface wl_surface_interface;

static void _CWpColorRepresentationManagerV1SupportedAlphaMode(void* data, void* resource, uint32_t alpha_mode) {
    const auto PO = (CCWpColorRepresentationManagerV1*)data;
    if (PO && PO->requests.supportedAlphaMode)
        PO->requests.supportedAlphaMode(PO, alpha_mode);
}

static void _CWpColorRepresentationManagerV1SupportedCoefficientsAndRanges(void* data, void* resource, uint32_t coefficients, uint32_t range) {
    const auto PO = (CCWpColorRepresentationManagerV1*)data;
    if (PO && PO->requests.supportedCoefficientsAndRanges)
        PO->requests.supportedCoefficientsAndRanges(PO, coefficients, range);
}

static void _CWpColorRepresentationManagerV1Done(void* data, void* resource) {
    const auto PO = (CCWpColorRepresentationManagerV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static const void* _CCWpColorRepresentationManagerV1VTable[] = {
    (void*)_CWpColorRepresentationManagerV1SupportedAlphaMode,
    (void*)_CWpColorRepresentationManagerV1SupportedCoefficientsAndRanges,
    (void*)_CWpColorRepresentationManagerV1Done,
};

void CCWpColorRepresentationManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpColorRepresentationManagerV1::sendGetSurface(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_color_representation_surface_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CWpColorRepresentationManagerV1GetSurfaceTypes[] = {
    &wp_color_representation_surface_v1_interface,
    &wl_surface_interface,
};
static const wl_interface* _CWpColorRepresentationManagerV1SupportedAlphaModeTypes[] = {
    nullptr,
};
static const wl_interface* _CWpColorRepresentationManagerV1SupportedCoefficientsAndRangesTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CWpColorRepresentationManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_surface", "no", _CWpColorRepresentationManagerV1GetSurfaceTypes + 0},
};

static const wl_message _CWpColorRepresentationManagerV1Events[] = {
    { "supported_alpha_mode", "u", _CWpColorRepresentationManagerV1SupportedAlphaModeTypes + 0},
    { "supported_coefficients_and_ranges", "uu", _CWpColorRepresentationManagerV1SupportedCoefficientsAndRangesTypes + 0},
    { "done", "", dummyTypes + 0},
};

const wl_interface wp_color_representation_manager_v1_interface = {
    "wp_color_representation_manager_v1", 1,
    2, _CWpColorRepresentationManagerV1Requests,
    3, _CWpColorRepresentationManagerV1Events,
};

CCWpColorRepresentationManagerV1::CCWpColorRepresentationManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpColorRepresentationManagerV1VTable, this);
}

CCWpColorRepresentationManagerV1::~CCWpColorRepresentationManagerV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpColorRepresentationManagerV1::setSupportedAlphaMode(F<void(CCWpColorRepresentationManagerV1*, uint32_t)> handler) {
    requests.supportedAlphaMode = handler;
}

void CCWpColorRepresentationManagerV1::setSupportedCoefficientsAndRanges(F<void(CCWpColorRepresentationManagerV1*, uint32_t, uint32_t)> handler) {
    requests.supportedCoefficientsAndRanges = handler;
}

void CCWpColorRepresentationManagerV1::setDone(F<void(CCWpColorRepresentationManagerV1*)> handler) {
    requests.done = handler;
}

static const void* _CCWpColorRepresentationSurfaceV1VTable[] = {
};

void CCWpColorRepresentationSurfaceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpColorRepresentationSurfaceV1::sendSetAlphaMode(wpColorRepresentationSurfaceV1AlphaMode alpha_mode) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, alpha_mode);
    proxy;
}

void CCWpColorRepresentationSurfaceV1::sendSetCoefficientsAndRange(wpColorRepresentationSurfaceV1Coefficients coefficients, wpColorRepresentationSurfaceV1Range range) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, coefficients, range);
    proxy;
}

void CCWpColorRepresentationSurfaceV1::sendSetChromaLocation(wpColorRepresentationSurfaceV1ChromaLocation chroma_location) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, chroma_location);
    proxy;
}
static const wl_interface* _CWpColorRepresentationSurfaceV1SetAlphaModeTypes[] = {
    nullptr,
};
static const wl_interface* _CWpColorRepresentationSurfaceV1SetCoefficientsAndRangeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CWpColorRepresentationSurfaceV1SetChromaLocationTypes[] = {
    nullptr,
};

static const wl_message _CWpColorRepresentationSurfaceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_alpha_mode", "u", _CWpColorRepresentationSurfaceV1SetAlphaModeTypes + 0},
    { "set_coefficients_and_range", "uu", _CWpColorRepresentationSurfaceV1SetCoefficientsAndRangeTypes + 0},
    { "set_chroma_location", "u", _CWpColorRepresentationSurfaceV1SetChromaLocationTypes + 0},
};

const wl_interface wp_color_representation_surface_v1_interface = {
    "wp_color_representation_surface_v1", 1,
    4, _CWpColorRepresentationSurfaceV1Requests,
    0, nullptr,
};

CCWpColorRepresentationSurfaceV1::CCWpColorRepresentationSurfaceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpColorRepresentationSurfaceV1VTable, this);
}

CCWpColorRepresentationSurfaceV1::~CCWpColorRepresentationSurfaceV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
