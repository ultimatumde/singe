// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// fullscreen_shell_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2016 Yong Bakos
    Copyright © 2015 Jason Ekstrand
    Copyright © 2015 Jonas Ådahl

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
#include "fullscreen-shell-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_fullscreen_shell_v1_interface;
extern const wl_interface zwp_fullscreen_shell_mode_feedback_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_output_interface;

static void _CZwpFullscreenShellV1Release(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpFullscreenShellV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.release)
        PO->requests.release(PO);
}

static void _CZwpFullscreenShellV1PresentSurface(wl_client* client, wl_resource* resource, wl_resource* surface, zwpFullscreenShellV1PresentMethod method, wl_resource* output) {
    const auto PO = (CZwpFullscreenShellV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.presentSurface)
        PO->requests.presentSurface(PO, surface, method, output);
}

static void _CZwpFullscreenShellV1PresentSurfaceForMode(wl_client* client, wl_resource* resource, wl_resource* surface, wl_resource* output, int32_t framerate, uint32_t feedback) {
    const auto PO = (CZwpFullscreenShellV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.presentSurfaceForMode)
        PO->requests.presentSurfaceForMode(PO, surface, output, framerate, feedback);
}

static void _CZwpFullscreenShellV1__DestroyListener(wl_listener* l, void* d) {
    CZwpFullscreenShellV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpFullscreenShellV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpFullscreenShellV1VTable[] = {
    (void*)_CZwpFullscreenShellV1Release,
    (void*)_CZwpFullscreenShellV1PresentSurface,
    (void*)_CZwpFullscreenShellV1PresentSurfaceForMode,
};

void CZwpFullscreenShellV1::sendCapability(zwpFullscreenShellV1Capability capability) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, capability);
}

void CZwpFullscreenShellV1::sendCapabilityRaw(zwpFullscreenShellV1Capability capability) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, capability);
}
static const wl_interface* _CZwpFullscreenShellV1PresentSurfaceTypes[] = {
    &wl_surface_interface,
    nullptr,
    &wl_output_interface,
};
static const wl_interface* _CZwpFullscreenShellV1PresentSurfaceForModeTypes[] = {
    &wl_surface_interface,
    &wl_output_interface,
    nullptr,
    &zwp_fullscreen_shell_mode_feedback_v1_interface,
};
static const wl_interface* _CZwpFullscreenShellV1CapabilityTypes[] = {
    nullptr,
};

static const wl_message _CZwpFullscreenShellV1Requests[] = {
    { "release", "", dummyTypes + 0},
    { "present_surface", "?ou?o", _CZwpFullscreenShellV1PresentSurfaceTypes + 0},
    { "present_surface_for_mode", "ooin", _CZwpFullscreenShellV1PresentSurfaceForModeTypes + 0},
};

static const wl_message _CZwpFullscreenShellV1Events[] = {
    { "capability", "u", _CZwpFullscreenShellV1CapabilityTypes + 0},
};

const wl_interface zwp_fullscreen_shell_v1_interface = {
    "zwp_fullscreen_shell_v1", 1,
    3, _CZwpFullscreenShellV1Requests,
    1, _CZwpFullscreenShellV1Events,
};

CZwpFullscreenShellV1::CZwpFullscreenShellV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_fullscreen_shell_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpFullscreenShellV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpFullscreenShellV1VTable, this, nullptr);
}

CZwpFullscreenShellV1::~CZwpFullscreenShellV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpFullscreenShellV1::onDestroyCalled() {
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

void CZwpFullscreenShellV1::setRelease(F<void(CZwpFullscreenShellV1*)> handler) {
    requests.release = handler;
}

void CZwpFullscreenShellV1::setPresentSurface(F<void(CZwpFullscreenShellV1*, wl_resource*, zwpFullscreenShellV1PresentMethod, wl_resource*)> handler) {
    requests.presentSurface = handler;
}

void CZwpFullscreenShellV1::setPresentSurfaceForMode(F<void(CZwpFullscreenShellV1*, wl_resource*, wl_resource*, int32_t, uint32_t)> handler) {
    requests.presentSurfaceForMode = handler;
}

static void _CZwpFullscreenShellModeFeedbackV1__DestroyListener(wl_listener* l, void* d) {
    CZwpFullscreenShellModeFeedbackV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpFullscreenShellModeFeedbackV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpFullscreenShellModeFeedbackV1VTable[] = {
};

void CZwpFullscreenShellModeFeedbackV1::sendModeSuccessful() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CZwpFullscreenShellModeFeedbackV1::sendModeFailed() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZwpFullscreenShellModeFeedbackV1::sendPresentCancelled() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2);
}

void CZwpFullscreenShellModeFeedbackV1::sendModeSuccessfulRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CZwpFullscreenShellModeFeedbackV1::sendModeFailedRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZwpFullscreenShellModeFeedbackV1::sendPresentCancelledRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2);
}

static const wl_message _CZwpFullscreenShellModeFeedbackV1Events[] = {
    { "mode_successful", "", dummyTypes + 0},
    { "mode_failed", "", dummyTypes + 0},
    { "present_cancelled", "", dummyTypes + 0},
};

const wl_interface zwp_fullscreen_shell_mode_feedback_v1_interface = {
    "zwp_fullscreen_shell_mode_feedback_v1", 1,
    0, nullptr,
    3, _CZwpFullscreenShellModeFeedbackV1Events,
};

CZwpFullscreenShellModeFeedbackV1::CZwpFullscreenShellModeFeedbackV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_fullscreen_shell_mode_feedback_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpFullscreenShellModeFeedbackV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpFullscreenShellModeFeedbackV1VTable, this, nullptr);
}

CZwpFullscreenShellModeFeedbackV1::~CZwpFullscreenShellModeFeedbackV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpFullscreenShellModeFeedbackV1::onDestroyCalled() {
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

#undef F
