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

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum wpLinuxDrmSyncobjManagerV1Error : uint32_t {
    WP_LINUX_DRM_SYNCOBJ_MANAGER_V1_ERROR_SURFACE_EXISTS = 0,
    WP_LINUX_DRM_SYNCOBJ_MANAGER_V1_ERROR_INVALID_TIMELINE = 1,
};

enum wpLinuxDrmSyncobjSurfaceV1Error : uint32_t {
    WP_LINUX_DRM_SYNCOBJ_SURFACE_V1_ERROR_NO_SURFACE = 1,
    WP_LINUX_DRM_SYNCOBJ_SURFACE_V1_ERROR_UNSUPPORTED_BUFFER = 2,
    WP_LINUX_DRM_SYNCOBJ_SURFACE_V1_ERROR_NO_BUFFER = 3,
    WP_LINUX_DRM_SYNCOBJ_SURFACE_V1_ERROR_NO_ACQUIRE_POINT = 4,
    WP_LINUX_DRM_SYNCOBJ_SURFACE_V1_ERROR_NO_RELEASE_POINT = 5,
    WP_LINUX_DRM_SYNCOBJ_SURFACE_V1_ERROR_CONFLICTING_POINTS = 6,
};


class CCWpLinuxDrmSyncobjManagerV1;
class CCWpLinuxDrmSyncobjSurfaceV1;
class CCWlSurface;
class CCWpLinuxDrmSyncobjTimelineV1;
class CCWpLinuxDrmSyncobjTimelineV1;
class CCWpLinuxDrmSyncobjSurfaceV1;
class CCWpLinuxDrmSyncobjTimelineV1;
class CCWpLinuxDrmSyncobjTimelineV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_linux_drm_syncobj_manager_v1_interface;
extern const wl_interface wp_linux_drm_syncobj_timeline_v1_interface;
extern const wl_interface wp_linux_drm_syncobj_surface_v1_interface;

#endif


class CCWpLinuxDrmSyncobjManagerV1 {
  public:
    CCWpLinuxDrmSyncobjManagerV1(wl_proxy*);
    ~CCWpLinuxDrmSyncobjManagerV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetSurface(wl_proxy*);
    wl_proxy* sendImportTimeline(int32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpLinuxDrmSyncobjTimelineV1 {
  public:
    CCWpLinuxDrmSyncobjTimelineV1(wl_proxy*);
    ~CCWpLinuxDrmSyncobjTimelineV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpLinuxDrmSyncobjSurfaceV1 {
  public:
    CCWpLinuxDrmSyncobjSurfaceV1(wl_proxy*);
    ~CCWpLinuxDrmSyncobjSurfaceV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    void sendDestroy();
    void sendSetAcquirePoint(CCWpLinuxDrmSyncobjTimelineV1*, uint32_t, uint32_t);
    void sendSetReleasePoint(CCWpLinuxDrmSyncobjTimelineV1*, uint32_t, uint32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
