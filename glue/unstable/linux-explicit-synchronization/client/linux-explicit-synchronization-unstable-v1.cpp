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

static const void* _CCZwpLinuxExplicitSynchronizationV1VTable[] = {
};

void CCZwpLinuxExplicitSynchronizationV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpLinuxExplicitSynchronizationV1::sendGetSynchronization(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_linux_surface_synchronization_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
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

CCZwpLinuxExplicitSynchronizationV1::CCZwpLinuxExplicitSynchronizationV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpLinuxExplicitSynchronizationV1VTable, this);
}

CCZwpLinuxExplicitSynchronizationV1::~CCZwpLinuxExplicitSynchronizationV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCZwpLinuxSurfaceSynchronizationV1VTable[] = {
};

void CCZwpLinuxSurfaceSynchronizationV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZwpLinuxSurfaceSynchronizationV1::sendSetAcquireFence(int32_t fd) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, fd);
    proxy;
}

wl_proxy* CCZwpLinuxSurfaceSynchronizationV1::sendGetRelease() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &zwp_linux_buffer_release_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}
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

CCZwpLinuxSurfaceSynchronizationV1::CCZwpLinuxSurfaceSynchronizationV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpLinuxSurfaceSynchronizationV1VTable, this);
}

CCZwpLinuxSurfaceSynchronizationV1::~CCZwpLinuxSurfaceSynchronizationV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CZwpLinuxBufferReleaseV1FencedRelease(void* data, void* resource, int32_t fence) {
    const auto PO = (CCZwpLinuxBufferReleaseV1*)data;
    if (PO && PO->requests.fencedRelease)
        PO->requests.fencedRelease(PO, fence);
}

static void _CZwpLinuxBufferReleaseV1ImmediateRelease(void* data, void* resource) {
    const auto PO = (CCZwpLinuxBufferReleaseV1*)data;
    if (PO && PO->requests.immediateRelease)
        PO->requests.immediateRelease(PO);
}

static const void* _CCZwpLinuxBufferReleaseV1VTable[] = {
    (void*)_CZwpLinuxBufferReleaseV1FencedRelease,
    (void*)_CZwpLinuxBufferReleaseV1ImmediateRelease,
};
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

CCZwpLinuxBufferReleaseV1::CCZwpLinuxBufferReleaseV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpLinuxBufferReleaseV1VTable, this);
}

CCZwpLinuxBufferReleaseV1::~CCZwpLinuxBufferReleaseV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCZwpLinuxBufferReleaseV1::setFencedRelease(F<void(CCZwpLinuxBufferReleaseV1*, int32_t)> handler) {
    requests.fencedRelease = handler;
}

void CCZwpLinuxBufferReleaseV1::setImmediateRelease(F<void(CCZwpLinuxBufferReleaseV1*)> handler) {
    requests.immediateRelease = handler;
}

#undef F
