// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// linux_drm_syncobj_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2016 The Chromium Authors.
    Copyright 2017 Intel Corporation
    Copyright 2018 Collabora, Ltd
    Copyright 2021 Simon Ser

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
#include "linux-drm-syncobj-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_linux_drm_syncobj_manager_v1_interface;
extern const wl_interface wp_linux_drm_syncobj_timeline_v1_interface;
extern const wl_interface wp_linux_drm_syncobj_surface_v1_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCWpLinuxDrmSyncobjManagerV1VTable[] = {
};

void CCWpLinuxDrmSyncobjManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpLinuxDrmSyncobjManagerV1::sendGetSurface(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_linux_drm_syncobj_surface_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}

wl_proxy* CCWpLinuxDrmSyncobjManagerV1::sendImportTimeline(int32_t fd) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &wp_linux_drm_syncobj_timeline_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, fd);

    return proxy;
}
static const wl_interface* _CWpLinuxDrmSyncobjManagerV1GetSurfaceTypes[] = {
    &wp_linux_drm_syncobj_surface_v1_interface,
    &wl_surface_interface,
};
static const wl_interface* _CWpLinuxDrmSyncobjManagerV1ImportTimelineTypes[] = {
    &wp_linux_drm_syncobj_timeline_v1_interface,
    nullptr,
};

static const wl_message _CWpLinuxDrmSyncobjManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_surface", "no", _CWpLinuxDrmSyncobjManagerV1GetSurfaceTypes + 0},
    { "import_timeline", "nh", _CWpLinuxDrmSyncobjManagerV1ImportTimelineTypes + 0},
};

const wl_interface wp_linux_drm_syncobj_manager_v1_interface = {
    "wp_linux_drm_syncobj_manager_v1", 1,
    3, _CWpLinuxDrmSyncobjManagerV1Requests,
    0, nullptr,
};

CCWpLinuxDrmSyncobjManagerV1::CCWpLinuxDrmSyncobjManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpLinuxDrmSyncobjManagerV1VTable, this);
}

CCWpLinuxDrmSyncobjManagerV1::~CCWpLinuxDrmSyncobjManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpLinuxDrmSyncobjTimelineV1VTable[] = {
};

void CCWpLinuxDrmSyncobjTimelineV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

static const wl_message _CWpLinuxDrmSyncobjTimelineV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

const wl_interface wp_linux_drm_syncobj_timeline_v1_interface = {
    "wp_linux_drm_syncobj_timeline_v1", 1,
    1, _CWpLinuxDrmSyncobjTimelineV1Requests,
    0, nullptr,
};

CCWpLinuxDrmSyncobjTimelineV1::CCWpLinuxDrmSyncobjTimelineV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpLinuxDrmSyncobjTimelineV1VTable, this);
}

CCWpLinuxDrmSyncobjTimelineV1::~CCWpLinuxDrmSyncobjTimelineV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpLinuxDrmSyncobjSurfaceV1VTable[] = {
};

void CCWpLinuxDrmSyncobjSurfaceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpLinuxDrmSyncobjSurfaceV1::sendSetAcquirePoint(CCWpLinuxDrmSyncobjTimelineV1* timeline, uint32_t point_hi, uint32_t point_lo) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, timeline ? timeline->pResource : nullptr, point_hi, point_lo);
    proxy;
}

void CCWpLinuxDrmSyncobjSurfaceV1::sendSetReleasePoint(CCWpLinuxDrmSyncobjTimelineV1* timeline, uint32_t point_hi, uint32_t point_lo) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, timeline ? timeline->pResource : nullptr, point_hi, point_lo);
    proxy;
}
static const wl_interface* _CWpLinuxDrmSyncobjSurfaceV1SetAcquirePointTypes[] = {
    &wp_linux_drm_syncobj_timeline_v1_interface,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpLinuxDrmSyncobjSurfaceV1SetReleasePointTypes[] = {
    &wp_linux_drm_syncobj_timeline_v1_interface,
    nullptr,
    nullptr,
};

static const wl_message _CWpLinuxDrmSyncobjSurfaceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_acquire_point", "ouu", _CWpLinuxDrmSyncobjSurfaceV1SetAcquirePointTypes + 0},
    { "set_release_point", "ouu", _CWpLinuxDrmSyncobjSurfaceV1SetReleasePointTypes + 0},
};

const wl_interface wp_linux_drm_syncobj_surface_v1_interface = {
    "wp_linux_drm_syncobj_surface_v1", 1,
    3, _CWpLinuxDrmSyncobjSurfaceV1Requests,
    0, nullptr,
};

CCWpLinuxDrmSyncobjSurfaceV1::CCWpLinuxDrmSyncobjSurfaceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpLinuxDrmSyncobjSurfaceV1VTable, this);
}

CCWpLinuxDrmSyncobjSurfaceV1::~CCWpLinuxDrmSyncobjSurfaceV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
