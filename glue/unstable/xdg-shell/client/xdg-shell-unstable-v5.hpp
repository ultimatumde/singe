// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_shell_unstable_v5

/*
 This protocol's authors' copyright notice is:


    Copyright © 2008-2013 Kristian Høgsberg
    Copyright © 2013      Rafael Antognolli
    Copyright © 2013      Jasper St. Pierre
    Copyright © 2010-2013 Intel Corporation

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

enum xdgShellVersion : uint32_t {
    XDG_SHELL_VERSION_CURRENT = 5,
};

enum xdgShellError : uint32_t {
    XDG_SHELL_ERROR_ROLE = 0,
    XDG_SHELL_ERROR_DEFUNCT_SURFACES = 1,
    XDG_SHELL_ERROR_NOT_THE_TOPMOST_POPUP = 2,
    XDG_SHELL_ERROR_INVALID_POPUP_PARENT = 3,
};

enum xdgSurfaceResizeEdge : uint32_t {
    XDG_SURFACE_RESIZE_EDGE_NONE = 0,
    XDG_SURFACE_RESIZE_EDGE_TOP = 1,
    XDG_SURFACE_RESIZE_EDGE_BOTTOM = 2,
    XDG_SURFACE_RESIZE_EDGE_LEFT = 4,
    XDG_SURFACE_RESIZE_EDGE_TOP_LEFT = 5,
    XDG_SURFACE_RESIZE_EDGE_BOTTOM_LEFT = 6,
    XDG_SURFACE_RESIZE_EDGE_RIGHT = 8,
    XDG_SURFACE_RESIZE_EDGE_TOP_RIGHT = 9,
    XDG_SURFACE_RESIZE_EDGE_BOTTOM_RIGHT = 10,
};

enum xdgSurfaceState : uint32_t {
    XDG_SURFACE_STATE_MAXIMIZED = 1,
    XDG_SURFACE_STATE_FULLSCREEN = 2,
    XDG_SURFACE_STATE_RESIZING = 3,
    XDG_SURFACE_STATE_ACTIVATED = 4,
};


class CCXdgShell;
class CCXdgSurface;
class CCWlSurface;
class CCXdgPopup;
class CCWlSurface;
class CCWlSurface;
class CCWlSeat;
class CCXdgSurface;
class CCXdgSurface;
class CCWlSeat;
class CCWlSeat;
class CCWlSeat;
class CCWlOutput;
class CCXdgPopup;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface xdg_shell_interface;
extern const wl_interface xdg_surface_interface;
extern const wl_interface xdg_popup_interface;

#endif


class CCXdgShell {
  public:
    CCXdgShell(wl_proxy*);
    ~CCXdgShell();


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

    void setPing(F<void(CCXdgShell*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendUseUnstableVersion(int32_t);
    wl_proxy* sendGetXdgSurface(wl_proxy*);
    wl_proxy* sendGetXdgPopup(wl_proxy*, wl_proxy*, wl_proxy*, uint32_t, int32_t, int32_t);
    void sendPong(uint32_t);

  private:
    struct {
        F<void(CCXdgShell*, uint32_t)> ping;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCXdgSurface {
  public:
    CCXdgSurface(wl_proxy*);
    ~CCXdgSurface();


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

    void setConfigure(F<void(CCXdgSurface*, int32_t, int32_t, wl_array*, uint32_t)> handler);
    void setClose(F<void(CCXdgSurface*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendSetParent(CCXdgSurface*);
    void sendSetTitle(const char*);
    void sendSetAppId(const char*);
    void sendShowWindowMenu(wl_proxy*, uint32_t, int32_t, int32_t);
    void sendMove(wl_proxy*, uint32_t);
    void sendResize(wl_proxy*, uint32_t, uint32_t);
    void sendAckConfigure(uint32_t);
    void sendSetWindowGeometry(int32_t, int32_t, int32_t, int32_t);
    void sendSetMaximized();
    void sendUnsetMaximized();
    void sendSetFullscreen(wl_proxy*);
    void sendUnsetFullscreen();
    void sendSetMinimized();

  private:
    struct {
        F<void(CCXdgSurface*, int32_t, int32_t, wl_array*, uint32_t)> configure;
        F<void(CCXdgSurface*)> close;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCXdgPopup {
  public:
    CCXdgPopup(wl_proxy*);
    ~CCXdgPopup();


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

    void setPopupDone(F<void(CCXdgPopup*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCXdgPopup*)> popupDone;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
