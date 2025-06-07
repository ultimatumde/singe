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

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;

enum zwpFullscreenShellV1Capability : uint32_t {
    ZWP_FULLSCREEN_SHELL_V1_CAPABILITY_ARBITRARY_MODES = 1,
    ZWP_FULLSCREEN_SHELL_V1_CAPABILITY_CURSOR_PLANE = 2,
};

enum zwpFullscreenShellV1PresentMethod : uint32_t {
    ZWP_FULLSCREEN_SHELL_V1_PRESENT_METHOD_DEFAULT = 0,
    ZWP_FULLSCREEN_SHELL_V1_PRESENT_METHOD_CENTER = 1,
    ZWP_FULLSCREEN_SHELL_V1_PRESENT_METHOD_ZOOM = 2,
    ZWP_FULLSCREEN_SHELL_V1_PRESENT_METHOD_ZOOM_CROP = 3,
    ZWP_FULLSCREEN_SHELL_V1_PRESENT_METHOD_STRETCH = 4,
};

enum zwpFullscreenShellV1Error : uint32_t {
    ZWP_FULLSCREEN_SHELL_V1_ERROR_INVALID_METHOD = 0,
    ZWP_FULLSCREEN_SHELL_V1_ERROR_ROLE = 1,
};


class CZwpFullscreenShellV1;
class CWlSurface;
class CWlOutput;
class CWlSurface;
class CWlOutput;
class CZwpFullscreenShellModeFeedbackV1;
class CZwpFullscreenShellModeFeedbackV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_fullscreen_shell_v1_interface;
extern const wl_interface zwp_fullscreen_shell_mode_feedback_v1_interface;

#endif

struct CZwpFullscreenShellV1DestroyWrapper {
    wl_listener listener;
    CZwpFullscreenShellV1* parent = nullptr;
};
            

class CZwpFullscreenShellV1 {
  public:
    CZwpFullscreenShellV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpFullscreenShellV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpFullscreenShellV1*)> handler) {
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

    void setRelease(F<void(CZwpFullscreenShellV1*)> handler);
    void setPresentSurface(F<void(CZwpFullscreenShellV1*, wl_resource*, zwpFullscreenShellV1PresentMethod, wl_resource*)> handler);
    void setPresentSurfaceForMode(F<void(CZwpFullscreenShellV1*, wl_resource*, wl_resource*, int32_t, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendCapability(zwpFullscreenShellV1Capability);
    void sendCapabilityRaw(zwpFullscreenShellV1Capability);

  private:
    struct {
        F<void(CZwpFullscreenShellV1*)> release;
        F<void(CZwpFullscreenShellV1*, wl_resource*, zwpFullscreenShellV1PresentMethod, wl_resource*)> presentSurface;
        F<void(CZwpFullscreenShellV1*, wl_resource*, wl_resource*, int32_t, uint32_t)> presentSurfaceForMode;
    } requests;

    void onDestroyCalled();

    F<void(CZwpFullscreenShellV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpFullscreenShellV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpFullscreenShellModeFeedbackV1DestroyWrapper {
    wl_listener listener;
    CZwpFullscreenShellModeFeedbackV1* parent = nullptr;
};
            

class CZwpFullscreenShellModeFeedbackV1 {
  public:
    CZwpFullscreenShellModeFeedbackV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpFullscreenShellModeFeedbackV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpFullscreenShellModeFeedbackV1*)> handler) {
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

    void sendModeSuccessful();
    void sendModeFailed();
    void sendPresentCancelled();
    void sendModeSuccessfulRaw();
    void sendModeFailedRaw();
    void sendPresentCancelledRaw();

  private:
    struct {
    } requests;

    void onDestroyCalled();

    F<void(CZwpFullscreenShellModeFeedbackV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpFullscreenShellModeFeedbackV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
