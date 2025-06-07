// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_shell_unstable_v6

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

enum zxdgShellV6Error : uint32_t {
    ZXDG_SHELL_V6_ERROR_ROLE = 0,
    ZXDG_SHELL_V6_ERROR_DEFUNCT_SURFACES = 1,
    ZXDG_SHELL_V6_ERROR_NOT_THE_TOPMOST_POPUP = 2,
    ZXDG_SHELL_V6_ERROR_INVALID_POPUP_PARENT = 3,
    ZXDG_SHELL_V6_ERROR_INVALID_SURFACE_STATE = 4,
    ZXDG_SHELL_V6_ERROR_INVALID_POSITIONER = 5,
};

enum zxdgPositionerV6Error : uint32_t {
    ZXDG_POSITIONER_V6_ERROR_INVALID_INPUT = 0,
};

enum zxdgPositionerV6Anchor : uint32_t {
    ZXDG_POSITIONER_V6_ANCHOR_NONE = 0,
    ZXDG_POSITIONER_V6_ANCHOR_TOP = 1,
    ZXDG_POSITIONER_V6_ANCHOR_BOTTOM = 2,
    ZXDG_POSITIONER_V6_ANCHOR_LEFT = 4,
    ZXDG_POSITIONER_V6_ANCHOR_RIGHT = 8,
};

enum zxdgPositionerV6Gravity : uint32_t {
    ZXDG_POSITIONER_V6_GRAVITY_NONE = 0,
    ZXDG_POSITIONER_V6_GRAVITY_TOP = 1,
    ZXDG_POSITIONER_V6_GRAVITY_BOTTOM = 2,
    ZXDG_POSITIONER_V6_GRAVITY_LEFT = 4,
    ZXDG_POSITIONER_V6_GRAVITY_RIGHT = 8,
};

enum zxdgPositionerV6ConstraintAdjustment : uint32_t {
    ZXDG_POSITIONER_V6_CONSTRAINT_ADJUSTMENT_NONE = 0,
    ZXDG_POSITIONER_V6_CONSTRAINT_ADJUSTMENT_SLIDE_X = 1,
    ZXDG_POSITIONER_V6_CONSTRAINT_ADJUSTMENT_SLIDE_Y = 2,
    ZXDG_POSITIONER_V6_CONSTRAINT_ADJUSTMENT_FLIP_X = 4,
    ZXDG_POSITIONER_V6_CONSTRAINT_ADJUSTMENT_FLIP_Y = 8,
    ZXDG_POSITIONER_V6_CONSTRAINT_ADJUSTMENT_RESIZE_X = 16,
    ZXDG_POSITIONER_V6_CONSTRAINT_ADJUSTMENT_RESIZE_Y = 32,
};

enum zxdgSurfaceV6Error : uint32_t {
    ZXDG_SURFACE_V6_ERROR_NOT_CONSTRUCTED = 1,
    ZXDG_SURFACE_V6_ERROR_ALREADY_CONSTRUCTED = 2,
    ZXDG_SURFACE_V6_ERROR_UNCONFIGURED_BUFFER = 3,
};

enum zxdgToplevelV6ResizeEdge : uint32_t {
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_NONE = 0,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_TOP = 1,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_BOTTOM = 2,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_LEFT = 4,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_TOP_LEFT = 5,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_BOTTOM_LEFT = 6,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_RIGHT = 8,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_TOP_RIGHT = 9,
    ZXDG_TOPLEVEL_V6_RESIZE_EDGE_BOTTOM_RIGHT = 10,
};

enum zxdgToplevelV6State : uint32_t {
    ZXDG_TOPLEVEL_V6_STATE_MAXIMIZED = 1,
    ZXDG_TOPLEVEL_V6_STATE_FULLSCREEN = 2,
    ZXDG_TOPLEVEL_V6_STATE_RESIZING = 3,
    ZXDG_TOPLEVEL_V6_STATE_ACTIVATED = 4,
};

enum zxdgPopupV6Error : uint32_t {
    ZXDG_POPUP_V6_ERROR_INVALID_GRAB = 0,
};


class CCZxdgShellV6;
class CCZxdgPositionerV6;
class CCZxdgSurfaceV6;
class CCWlSurface;
class CCZxdgPositionerV6;
class CCZxdgSurfaceV6;
class CCZxdgToplevelV6;
class CCZxdgPopupV6;
class CCZxdgSurfaceV6;
class CCZxdgPositionerV6;
class CCZxdgToplevelV6;
class CCZxdgToplevelV6;
class CCWlSeat;
class CCWlSeat;
class CCWlSeat;
class CCWlOutput;
class CCZxdgPopupV6;
class CCWlSeat;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zxdg_shell_v6_interface;
extern const wl_interface zxdg_positioner_v6_interface;
extern const wl_interface zxdg_surface_v6_interface;
extern const wl_interface zxdg_toplevel_v6_interface;
extern const wl_interface zxdg_popup_v6_interface;

#endif


class CCZxdgShellV6 {
  public:
    CCZxdgShellV6(wl_proxy*);
    ~CCZxdgShellV6();


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

    void setPing(F<void(CCZxdgShellV6*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendCreatePositioner();
    wl_proxy* sendGetXdgSurface(wl_proxy*);
    void sendPong(uint32_t);

  private:
    struct {
        F<void(CCZxdgShellV6*, uint32_t)> ping;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZxdgPositionerV6 {
  public:
    CCZxdgPositionerV6(wl_proxy*);
    ~CCZxdgPositionerV6();


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
    void sendSetSize(int32_t, int32_t);
    void sendSetAnchorRect(int32_t, int32_t, int32_t, int32_t);
    void sendSetAnchor(zxdgPositionerV6Anchor);
    void sendSetGravity(zxdgPositionerV6Gravity);
    void sendSetConstraintAdjustment(uint32_t);
    void sendSetOffset(int32_t, int32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZxdgSurfaceV6 {
  public:
    CCZxdgSurfaceV6(wl_proxy*);
    ~CCZxdgSurfaceV6();


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

    void setConfigure(F<void(CCZxdgSurfaceV6*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetToplevel();
    wl_proxy* sendGetPopup(CCZxdgSurfaceV6*, CCZxdgPositionerV6*);
    void sendSetWindowGeometry(int32_t, int32_t, int32_t, int32_t);
    void sendAckConfigure(uint32_t);

  private:
    struct {
        F<void(CCZxdgSurfaceV6*, uint32_t)> configure;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZxdgToplevelV6 {
  public:
    CCZxdgToplevelV6(wl_proxy*);
    ~CCZxdgToplevelV6();


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

    void setConfigure(F<void(CCZxdgToplevelV6*, int32_t, int32_t, wl_array*)> handler);
    void setClose(F<void(CCZxdgToplevelV6*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendSetParent(CCZxdgToplevelV6*);
    void sendSetTitle(const char*);
    void sendSetAppId(const char*);
    void sendShowWindowMenu(wl_proxy*, uint32_t, int32_t, int32_t);
    void sendMove(wl_proxy*, uint32_t);
    void sendResize(wl_proxy*, uint32_t, uint32_t);
    void sendSetMaxSize(int32_t, int32_t);
    void sendSetMinSize(int32_t, int32_t);
    void sendSetMaximized();
    void sendUnsetMaximized();
    void sendSetFullscreen(wl_proxy*);
    void sendUnsetFullscreen();
    void sendSetMinimized();

  private:
    struct {
        F<void(CCZxdgToplevelV6*, int32_t, int32_t, wl_array*)> configure;
        F<void(CCZxdgToplevelV6*)> close;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZxdgPopupV6 {
  public:
    CCZxdgPopupV6(wl_proxy*);
    ~CCZxdgPopupV6();


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

    void setConfigure(F<void(CCZxdgPopupV6*, int32_t, int32_t, int32_t, int32_t)> handler);
    void setPopupDone(F<void(CCZxdgPopupV6*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendGrab(wl_proxy*, uint32_t);

  private:
    struct {
        F<void(CCZxdgPopupV6*, int32_t, int32_t, int32_t, int32_t)> configure;
        F<void(CCZxdgPopupV6*)> popupDone;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
