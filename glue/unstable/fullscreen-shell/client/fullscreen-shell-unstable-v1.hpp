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
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

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


class CCZwpFullscreenShellV1;
class CCWlSurface;
class CCWlOutput;
class CCWlSurface;
class CCWlOutput;
class CCZwpFullscreenShellModeFeedbackV1;
class CCZwpFullscreenShellModeFeedbackV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_fullscreen_shell_v1_interface;
extern const wl_interface zwp_fullscreen_shell_mode_feedback_v1_interface;

#endif


class CCZwpFullscreenShellV1 {
  public:
    CCZwpFullscreenShellV1(wl_proxy*);
    ~CCZwpFullscreenShellV1();


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

    void setCapability(F<void(CCZwpFullscreenShellV1*, zwpFullscreenShellV1Capability)> handler);

    // --------------- Events --------------- //

    void sendRelease();
    void sendPresentSurface(wl_proxy*, zwpFullscreenShellV1PresentMethod, wl_proxy*);
    wl_proxy* sendPresentSurfaceForMode(wl_proxy*, wl_proxy*, int32_t);

  private:
    struct {
        F<void(CCZwpFullscreenShellV1*, zwpFullscreenShellV1Capability)> capability;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpFullscreenShellModeFeedbackV1 {
  public:
    CCZwpFullscreenShellModeFeedbackV1(wl_proxy*);
    ~CCZwpFullscreenShellModeFeedbackV1();


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

    void setModeSuccessful(F<void(CCZwpFullscreenShellModeFeedbackV1*)> handler);
    void setModeFailed(F<void(CCZwpFullscreenShellModeFeedbackV1*)> handler);
    void setPresentCancelled(F<void(CCZwpFullscreenShellModeFeedbackV1*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CCZwpFullscreenShellModeFeedbackV1*)> modeSuccessful;
        F<void(CCZwpFullscreenShellModeFeedbackV1*)> modeFailed;
        F<void(CCZwpFullscreenShellModeFeedbackV1*)> presentCancelled;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
