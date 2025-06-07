// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// zwp_linux_explicit_synchronization_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2016 The Chromium Authors.
    Copyright 2017 Intel Corporation
    Copyright 2018 Collabora, Ltd

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
#include "linux-explicit-synchronization-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_linux_explicit_synchronization_v1_interface;
extern const wl_interface zwp_linux_surface_synchronization_v1_interface;
extern const wl_interface zwp_linux_buffer_release_v1_interface;
extern const wl_interface wl_surface_interface;

static void _CZwpLinuxExplicitSynchronizationV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpLinuxExplicitSynchronizationV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpLinuxExplicitSynchronizationV1GetSynchronization(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CZwpLinuxExplicitSynchronizationV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getSynchronization)
        PO->requests.getSynchronization(PO, id, surface);
}

static void _CZwpLinuxExplicitSynchronizationV1__DestroyListener(wl_listener* l, void* d) {
    CZwpLinuxExplicitSynchronizationV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpLinuxExplicitSynchronizationV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpLinuxExplicitSynchronizationV1VTable[] = {
    (void*)_CZwpLinuxExplicitSynchronizationV1Destroy,
    (void*)_CZwpLinuxExplicitSynchronizationV1GetSynchronization,
};
static const wl_interface* _CZwpLinuxExplicitSynchronizationV1GetSynchronizationTypes[] = {
    &zwp_linux_surface_synchronization_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CZwpLinuxExplicitSynchronizationV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_synchronization", "no", _CZwpLinuxExplicitSynchronizationV1GetSynchronizationTypes + 0},
};

const wl_interface zwp_linux_explicit_synchronization_v1_interface = {
    "zwp_linux_explicit_synchronization_v1", 2,
    2, _CZwpLinuxExplicitSynchronizationV1Requests,
    0, nullptr,
};

CZwpLinuxExplicitSynchronizationV1::CZwpLinuxExplicitSynchronizationV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_linux_explicit_synchronization_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpLinuxExplicitSynchronizationV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpLinuxExplicitSynchronizationV1VTable, this, nullptr);
}

CZwpLinuxExplicitSynchronizationV1::~CZwpLinuxExplicitSynchronizationV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpLinuxExplicitSynchronizationV1::onDestroyCalled() {
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

void CZwpLinuxExplicitSynchronizationV1::setDestroy(F<void(CZwpLinuxExplicitSynchronizationV1*)> handler) {
    requests.destroy = handler;
}

void CZwpLinuxExplicitSynchronizationV1::setGetSynchronization(F<void(CZwpLinuxExplicitSynchronizationV1*, uint32_t, wl_resource*)> handler) {
    requests.getSynchronization = handler;
}

static void _CZwpLinuxSurfaceSynchronizationV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpLinuxSurfaceSynchronizationV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpLinuxSurfaceSynchronizationV1SetAcquireFence(wl_client* client, wl_resource* resource, int32_t fd) {
    const auto PO = (CZwpLinuxSurfaceSynchronizationV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setAcquireFence)
        PO->requests.setAcquireFence(PO, fd);
}

static void _CZwpLinuxSurfaceSynchronizationV1GetRelease(wl_client* client, wl_resource* resource, uint32_t release) {
    const auto PO = (CZwpLinuxSurfaceSynchronizationV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getRelease)
        PO->requests.getRelease(PO, release);
}

static void _CZwpLinuxSurfaceSynchronizationV1__DestroyListener(wl_listener* l, void* d) {
    CZwpLinuxSurfaceSynchronizationV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpLinuxSurfaceSynchronizationV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpLinuxSurfaceSynchronizationV1VTable[] = {
    (void*)_CZwpLinuxSurfaceSynchronizationV1Destroy,
    (void*)_CZwpLinuxSurfaceSynchronizationV1SetAcquireFence,
    (void*)_CZwpLinuxSurfaceSynchronizationV1GetRelease,
};
static const wl_interface* _CZwpLinuxSurfaceSynchronizationV1SetAcquireFenceTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpLinuxSurfaceSynchronizationV1GetReleaseTypes[] = {
    &zwp_linux_buffer_release_v1_interface,
};

static const wl_message _CZwpLinuxSurfaceSynchronizationV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_acquire_fence", "h", _CZwpLinuxSurfaceSynchronizationV1SetAcquireFenceTypes + 0},
    { "get_release", "n", _CZwpLinuxSurfaceSynchronizationV1GetReleaseTypes + 0},
};

const wl_interface zwp_linux_surface_synchronization_v1_interface = {
    "zwp_linux_surface_synchronization_v1", 2,
    3, _CZwpLinuxSurfaceSynchronizationV1Requests,
    0, nullptr,
};

CZwpLinuxSurfaceSynchronizationV1::CZwpLinuxSurfaceSynchronizationV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_linux_surface_synchronization_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpLinuxSurfaceSynchronizationV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpLinuxSurfaceSynchronizationV1VTable, this, nullptr);
}

CZwpLinuxSurfaceSynchronizationV1::~CZwpLinuxSurfaceSynchronizationV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpLinuxSurfaceSynchronizationV1::onDestroyCalled() {
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

void CZwpLinuxSurfaceSynchronizationV1::setDestroy(F<void(CZwpLinuxSurfaceSynchronizationV1*)> handler) {
    requests.destroy = handler;
}

void CZwpLinuxSurfaceSynchronizationV1::setSetAcquireFence(F<void(CZwpLinuxSurfaceSynchronizationV1*, int32_t)> handler) {
    requests.setAcquireFence = handler;
}

void CZwpLinuxSurfaceSynchronizationV1::setGetRelease(F<void(CZwpLinuxSurfaceSynchronizationV1*, uint32_t)> handler) {
    requests.getRelease = handler;
}

static void _CZwpLinuxBufferReleaseV1__DestroyListener(wl_listener* l, void* d) {
    CZwpLinuxBufferReleaseV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpLinuxBufferReleaseV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpLinuxBufferReleaseV1VTable[] = {
};

void CZwpLinuxBufferReleaseV1::sendFencedRelease(int32_t fence) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, fence);
}

void CZwpLinuxBufferReleaseV1::sendImmediateRelease() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZwpLinuxBufferReleaseV1::sendFencedReleaseRaw(int32_t fence) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, fence);
}

void CZwpLinuxBufferReleaseV1::sendImmediateReleaseRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}
static const wl_interface* _CZwpLinuxBufferReleaseV1FencedReleaseTypes[] = {
    nullptr,
};

static const wl_message _CZwpLinuxBufferReleaseV1Events[] = {
    { "fenced_release", "h", _CZwpLinuxBufferReleaseV1FencedReleaseTypes + 0},
    { "immediate_release", "", dummyTypes + 0},
};

const wl_interface zwp_linux_buffer_release_v1_interface = {
    "zwp_linux_buffer_release_v1", 1,
    0, nullptr,
    2, _CZwpLinuxBufferReleaseV1Events,
};

CZwpLinuxBufferReleaseV1::CZwpLinuxBufferReleaseV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_linux_buffer_release_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpLinuxBufferReleaseV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpLinuxBufferReleaseV1VTable, this, nullptr);
}

CZwpLinuxBufferReleaseV1::~CZwpLinuxBufferReleaseV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpLinuxBufferReleaseV1::onDestroyCalled() {
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
