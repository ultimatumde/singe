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

static void _CWpColorRepresentationManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpColorRepresentationManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CWpColorRepresentationManagerV1GetSurface(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CWpColorRepresentationManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getSurface)
        PO->requests.getSurface(PO, id, surface);
}

static void _CWpColorRepresentationManagerV1__DestroyListener(wl_listener* l, void* d) {
    CWpColorRepresentationManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpColorRepresentationManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpColorRepresentationManagerV1VTable[] = {
    (void*)_CWpColorRepresentationManagerV1Destroy,
    (void*)_CWpColorRepresentationManagerV1GetSurface,
};

void CWpColorRepresentationManagerV1::sendSupportedAlphaMode(uint32_t alpha_mode) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, alpha_mode);
}

void CWpColorRepresentationManagerV1::sendSupportedCoefficientsAndRanges(uint32_t coefficients, uint32_t range) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, coefficients, range);
}

void CWpColorRepresentationManagerV1::sendDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2);
}

void CWpColorRepresentationManagerV1::sendSupportedAlphaModeRaw(uint32_t alpha_mode) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, alpha_mode);
}

void CWpColorRepresentationManagerV1::sendSupportedCoefficientsAndRangesRaw(uint32_t coefficients, uint32_t range) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, coefficients, range);
}

void CWpColorRepresentationManagerV1::sendDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2);
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

CWpColorRepresentationManagerV1::CWpColorRepresentationManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_color_representation_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpColorRepresentationManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpColorRepresentationManagerV1VTable, this, nullptr);
}

CWpColorRepresentationManagerV1::~CWpColorRepresentationManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpColorRepresentationManagerV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CWpColorRepresentationManagerV1::setDestroy(F<void(CWpColorRepresentationManagerV1*)> handler) {
    requests.destroy = handler;
}

void CWpColorRepresentationManagerV1::setGetSurface(F<void(CWpColorRepresentationManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getSurface = handler;
}

static void _CWpColorRepresentationSurfaceV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpColorRepresentationSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CWpColorRepresentationSurfaceV1SetAlphaMode(wl_client* client, wl_resource* resource, wpColorRepresentationSurfaceV1AlphaMode alpha_mode) {
    const auto PO = (CWpColorRepresentationSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setAlphaMode)
        PO->requests.setAlphaMode(PO, alpha_mode);
}

static void _CWpColorRepresentationSurfaceV1SetCoefficientsAndRange(wl_client* client, wl_resource* resource, wpColorRepresentationSurfaceV1Coefficients coefficients, wpColorRepresentationSurfaceV1Range range) {
    const auto PO = (CWpColorRepresentationSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setCoefficientsAndRange)
        PO->requests.setCoefficientsAndRange(PO, coefficients, range);
}

static void _CWpColorRepresentationSurfaceV1SetChromaLocation(wl_client* client, wl_resource* resource, wpColorRepresentationSurfaceV1ChromaLocation chroma_location) {
    const auto PO = (CWpColorRepresentationSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setChromaLocation)
        PO->requests.setChromaLocation(PO, chroma_location);
}

static void _CWpColorRepresentationSurfaceV1__DestroyListener(wl_listener* l, void* d) {
    CWpColorRepresentationSurfaceV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpColorRepresentationSurfaceV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpColorRepresentationSurfaceV1VTable[] = {
    (void*)_CWpColorRepresentationSurfaceV1Destroy,
    (void*)_CWpColorRepresentationSurfaceV1SetAlphaMode,
    (void*)_CWpColorRepresentationSurfaceV1SetCoefficientsAndRange,
    (void*)_CWpColorRepresentationSurfaceV1SetChromaLocation,
};
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

CWpColorRepresentationSurfaceV1::CWpColorRepresentationSurfaceV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_color_representation_surface_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpColorRepresentationSurfaceV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpColorRepresentationSurfaceV1VTable, this, nullptr);
}

CWpColorRepresentationSurfaceV1::~CWpColorRepresentationSurfaceV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpColorRepresentationSurfaceV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CWpColorRepresentationSurfaceV1::setDestroy(F<void(CWpColorRepresentationSurfaceV1*)> handler) {
    requests.destroy = handler;
}

void CWpColorRepresentationSurfaceV1::setSetAlphaMode(F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1AlphaMode)> handler) {
    requests.setAlphaMode = handler;
}

void CWpColorRepresentationSurfaceV1::setSetCoefficientsAndRange(F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1Coefficients, wpColorRepresentationSurfaceV1Range)> handler) {
    requests.setCoefficientsAndRange = handler;
}

void CWpColorRepresentationSurfaceV1::setSetChromaLocation(F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1ChromaLocation)> handler) {
    requests.setChromaLocation = handler;
}

#undef F
