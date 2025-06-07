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

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum zwpLinuxExplicitSynchronizationV1Error : uint32_t {
    ZWP_LINUX_EXPLICIT_SYNCHRONIZATION_V1_ERROR_SYNCHRONIZATION_EXISTS = 0,
};

enum zwpLinuxSurfaceSynchronizationV1Error : uint32_t {
    ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_INVALID_FENCE = 0,
    ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_DUPLICATE_FENCE = 1,
    ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_DUPLICATE_RELEASE = 2,
    ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_NO_SURFACE = 3,
    ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_UNSUPPORTED_BUFFER = 4,
    ZWP_LINUX_SURFACE_SYNCHRONIZATION_V1_ERROR_NO_BUFFER = 5,
};


class CCZwpLinuxExplicitSynchronizationV1;
class CCZwpLinuxSurfaceSynchronizationV1;
class CCWlSurface;
class CCZwpLinuxSurfaceSynchronizationV1;
class CCZwpLinuxBufferReleaseV1;
class CCZwpLinuxBufferReleaseV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_linux_explicit_synchronization_v1_interface;
extern const wl_interface zwp_linux_surface_synchronization_v1_interface;
extern const wl_interface zwp_linux_buffer_release_v1_interface;

#endif


class CCZwpLinuxExplicitSynchronizationV1 {
  public:
    CCZwpLinuxExplicitSynchronizationV1(wl_proxy*);
    ~CCZwpLinuxExplicitSynchronizationV1();


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
    wl_proxy* sendGetSynchronization(wl_proxy*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpLinuxSurfaceSynchronizationV1 {
  public:
    CCZwpLinuxSurfaceSynchronizationV1(wl_proxy*);
    ~CCZwpLinuxSurfaceSynchronizationV1();


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
    void sendSetAcquireFence(int32_t);
    wl_proxy* sendGetRelease();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpLinuxBufferReleaseV1 {
  public:
    CCZwpLinuxBufferReleaseV1(wl_proxy*);
    ~CCZwpLinuxBufferReleaseV1();


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

    void setFencedRelease(F<void(CCZwpLinuxBufferReleaseV1*, int32_t)> handler);
    void setImmediateRelease(F<void(CCZwpLinuxBufferReleaseV1*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CCZwpLinuxBufferReleaseV1*, int32_t)> fencedRelease;
        F<void(CCZwpLinuxBufferReleaseV1*)> immediateRelease;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
