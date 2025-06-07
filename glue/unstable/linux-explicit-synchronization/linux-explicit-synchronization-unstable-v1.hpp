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
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;

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


class CZwpLinuxExplicitSynchronizationV1;
class CZwpLinuxSurfaceSynchronizationV1;
class CWlSurface;
class CZwpLinuxSurfaceSynchronizationV1;
class CZwpLinuxBufferReleaseV1;
class CZwpLinuxBufferReleaseV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_linux_explicit_synchronization_v1_interface;
extern const wl_interface zwp_linux_surface_synchronization_v1_interface;
extern const wl_interface zwp_linux_buffer_release_v1_interface;

#endif

struct CZwpLinuxExplicitSynchronizationV1DestroyWrapper {
    wl_listener listener;
    CZwpLinuxExplicitSynchronizationV1* parent = nullptr;
};
            

class CZwpLinuxExplicitSynchronizationV1 {
  public:
    CZwpLinuxExplicitSynchronizationV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpLinuxExplicitSynchronizationV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpLinuxExplicitSynchronizationV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //

    void setDestroy(F<void(CZwpLinuxExplicitSynchronizationV1*)> handler);
    void setGetSynchronization(F<void(CZwpLinuxExplicitSynchronizationV1*, uint32_t, wl_resource*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZwpLinuxExplicitSynchronizationV1*)> destroy;
        F<void(CZwpLinuxExplicitSynchronizationV1*, uint32_t, wl_resource*)> getSynchronization;
    } requests;

    void onDestroyCalled();

    F<void(CZwpLinuxExplicitSynchronizationV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpLinuxExplicitSynchronizationV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpLinuxSurfaceSynchronizationV1DestroyWrapper {
    wl_listener listener;
    CZwpLinuxSurfaceSynchronizationV1* parent = nullptr;
};
            

class CZwpLinuxSurfaceSynchronizationV1 {
  public:
    CZwpLinuxSurfaceSynchronizationV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpLinuxSurfaceSynchronizationV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpLinuxSurfaceSynchronizationV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //

    void setDestroy(F<void(CZwpLinuxSurfaceSynchronizationV1*)> handler);
    void setSetAcquireFence(F<void(CZwpLinuxSurfaceSynchronizationV1*, int32_t)> handler);
    void setGetRelease(F<void(CZwpLinuxSurfaceSynchronizationV1*, uint32_t)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZwpLinuxSurfaceSynchronizationV1*)> destroy;
        F<void(CZwpLinuxSurfaceSynchronizationV1*, int32_t)> setAcquireFence;
        F<void(CZwpLinuxSurfaceSynchronizationV1*, uint32_t)> getRelease;
    } requests;

    void onDestroyCalled();

    F<void(CZwpLinuxSurfaceSynchronizationV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpLinuxSurfaceSynchronizationV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpLinuxBufferReleaseV1DestroyWrapper {
    wl_listener listener;
    CZwpLinuxBufferReleaseV1* parent = nullptr;
};
            

class CZwpLinuxBufferReleaseV1 {
  public:
    CZwpLinuxBufferReleaseV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpLinuxBufferReleaseV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpLinuxBufferReleaseV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    void sendFencedRelease(int32_t);
    void sendImmediateRelease();
    void sendFencedReleaseRaw(int32_t);
    void sendImmediateReleaseRaw();

  private:
    struct {
    } requests;

    void onDestroyCalled();

    F<void(CZwpLinuxBufferReleaseV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpLinuxBufferReleaseV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
