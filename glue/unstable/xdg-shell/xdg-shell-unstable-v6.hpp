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
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;

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


class CZxdgShellV6;
class CZxdgPositionerV6;
class CZxdgSurfaceV6;
class CWlSurface;
class CZxdgPositionerV6;
class CZxdgSurfaceV6;
class CZxdgToplevelV6;
class CZxdgPopupV6;
class CZxdgSurfaceV6;
class CZxdgPositionerV6;
class CZxdgToplevelV6;
class CZxdgToplevelV6;
class CWlSeat;
class CWlSeat;
class CWlSeat;
class CWlOutput;
class CZxdgPopupV6;
class CWlSeat;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zxdg_shell_v6_interface;
extern const wl_interface zxdg_positioner_v6_interface;
extern const wl_interface zxdg_surface_v6_interface;
extern const wl_interface zxdg_toplevel_v6_interface;
extern const wl_interface zxdg_popup_v6_interface;

#endif

struct CZxdgShellV6DestroyWrapper {
    wl_listener listener;
    CZxdgShellV6* parent = nullptr;
};
            

class CZxdgShellV6 {
  public:
    CZxdgShellV6(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgShellV6();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgShellV6*)> handler) {
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

    void setDestroy(F<void(CZxdgShellV6*)> handler);
    void setCreatePositioner(F<void(CZxdgShellV6*, uint32_t)> handler);
    void setGetXdgSurface(F<void(CZxdgShellV6*, uint32_t, wl_resource*)> handler);
    void setPong(F<void(CZxdgShellV6*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendPing(uint32_t);
    void sendPingRaw(uint32_t);

  private:
    struct {
        F<void(CZxdgShellV6*)> destroy;
        F<void(CZxdgShellV6*, uint32_t)> createPositioner;
        F<void(CZxdgShellV6*, uint32_t, wl_resource*)> getXdgSurface;
        F<void(CZxdgShellV6*, uint32_t)> pong;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgShellV6*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgShellV6DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZxdgPositionerV6DestroyWrapper {
    wl_listener listener;
    CZxdgPositionerV6* parent = nullptr;
};
            

class CZxdgPositionerV6 {
  public:
    CZxdgPositionerV6(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgPositionerV6();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgPositionerV6*)> handler) {
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

    void setDestroy(F<void(CZxdgPositionerV6*)> handler);
    void setSetSize(F<void(CZxdgPositionerV6*, int32_t, int32_t)> handler);
    void setSetAnchorRect(F<void(CZxdgPositionerV6*, int32_t, int32_t, int32_t, int32_t)> handler);
    void setSetAnchor(F<void(CZxdgPositionerV6*, zxdgPositionerV6Anchor)> handler);
    void setSetGravity(F<void(CZxdgPositionerV6*, zxdgPositionerV6Gravity)> handler);
    void setSetConstraintAdjustment(F<void(CZxdgPositionerV6*, uint32_t)> handler);
    void setSetOffset(F<void(CZxdgPositionerV6*, int32_t, int32_t)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZxdgPositionerV6*)> destroy;
        F<void(CZxdgPositionerV6*, int32_t, int32_t)> setSize;
        F<void(CZxdgPositionerV6*, int32_t, int32_t, int32_t, int32_t)> setAnchorRect;
        F<void(CZxdgPositionerV6*, zxdgPositionerV6Anchor)> setAnchor;
        F<void(CZxdgPositionerV6*, zxdgPositionerV6Gravity)> setGravity;
        F<void(CZxdgPositionerV6*, uint32_t)> setConstraintAdjustment;
        F<void(CZxdgPositionerV6*, int32_t, int32_t)> setOffset;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgPositionerV6*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgPositionerV6DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZxdgSurfaceV6DestroyWrapper {
    wl_listener listener;
    CZxdgSurfaceV6* parent = nullptr;
};
            

class CZxdgSurfaceV6 {
  public:
    CZxdgSurfaceV6(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgSurfaceV6();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgSurfaceV6*)> handler) {
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

    void setDestroy(F<void(CZxdgSurfaceV6*)> handler);
    void setGetToplevel(F<void(CZxdgSurfaceV6*, uint32_t)> handler);
    void setGetPopup(F<void(CZxdgSurfaceV6*, uint32_t, wl_resource*, wl_resource*)> handler);
    void setSetWindowGeometry(F<void(CZxdgSurfaceV6*, int32_t, int32_t, int32_t, int32_t)> handler);
    void setAckConfigure(F<void(CZxdgSurfaceV6*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendConfigure(uint32_t);
    void sendConfigureRaw(uint32_t);

  private:
    struct {
        F<void(CZxdgSurfaceV6*)> destroy;
        F<void(CZxdgSurfaceV6*, uint32_t)> getToplevel;
        F<void(CZxdgSurfaceV6*, uint32_t, wl_resource*, wl_resource*)> getPopup;
        F<void(CZxdgSurfaceV6*, int32_t, int32_t, int32_t, int32_t)> setWindowGeometry;
        F<void(CZxdgSurfaceV6*, uint32_t)> ackConfigure;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgSurfaceV6*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgSurfaceV6DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZxdgToplevelV6DestroyWrapper {
    wl_listener listener;
    CZxdgToplevelV6* parent = nullptr;
};
            

class CZxdgToplevelV6 {
  public:
    CZxdgToplevelV6(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgToplevelV6();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgToplevelV6*)> handler) {
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

    void setDestroy(F<void(CZxdgToplevelV6*)> handler);
    void setSetParent(F<void(CZxdgToplevelV6*, wl_resource*)> handler);
    void setSetTitle(F<void(CZxdgToplevelV6*, const char*)> handler);
    void setSetAppId(F<void(CZxdgToplevelV6*, const char*)> handler);
    void setShowWindowMenu(F<void(CZxdgToplevelV6*, wl_resource*, uint32_t, int32_t, int32_t)> handler);
    void setMove(F<void(CZxdgToplevelV6*, wl_resource*, uint32_t)> handler);
    void setResize(F<void(CZxdgToplevelV6*, wl_resource*, uint32_t, uint32_t)> handler);
    void setSetMaxSize(F<void(CZxdgToplevelV6*, int32_t, int32_t)> handler);
    void setSetMinSize(F<void(CZxdgToplevelV6*, int32_t, int32_t)> handler);
    void setSetMaximized(F<void(CZxdgToplevelV6*)> handler);
    void setUnsetMaximized(F<void(CZxdgToplevelV6*)> handler);
    void setSetFullscreen(F<void(CZxdgToplevelV6*, wl_resource*)> handler);
    void setUnsetFullscreen(F<void(CZxdgToplevelV6*)> handler);
    void setSetMinimized(F<void(CZxdgToplevelV6*)> handler);

    // --------------- Events --------------- //

    void sendConfigure(int32_t, int32_t, wl_array*);
    void sendClose();
    void sendConfigureRaw(int32_t, int32_t, wl_array*);
    void sendCloseRaw();

  private:
    struct {
        F<void(CZxdgToplevelV6*)> destroy;
        F<void(CZxdgToplevelV6*, wl_resource*)> setParent;
        F<void(CZxdgToplevelV6*, const char*)> setTitle;
        F<void(CZxdgToplevelV6*, const char*)> setAppId;
        F<void(CZxdgToplevelV6*, wl_resource*, uint32_t, int32_t, int32_t)> showWindowMenu;
        F<void(CZxdgToplevelV6*, wl_resource*, uint32_t)> move;
        F<void(CZxdgToplevelV6*, wl_resource*, uint32_t, uint32_t)> resize;
        F<void(CZxdgToplevelV6*, int32_t, int32_t)> setMaxSize;
        F<void(CZxdgToplevelV6*, int32_t, int32_t)> setMinSize;
        F<void(CZxdgToplevelV6*)> setMaximized;
        F<void(CZxdgToplevelV6*)> unsetMaximized;
        F<void(CZxdgToplevelV6*, wl_resource*)> setFullscreen;
        F<void(CZxdgToplevelV6*)> unsetFullscreen;
        F<void(CZxdgToplevelV6*)> setMinimized;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgToplevelV6*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgToplevelV6DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZxdgPopupV6DestroyWrapper {
    wl_listener listener;
    CZxdgPopupV6* parent = nullptr;
};
            

class CZxdgPopupV6 {
  public:
    CZxdgPopupV6(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgPopupV6();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgPopupV6*)> handler) {
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

    void setDestroy(F<void(CZxdgPopupV6*)> handler);
    void setGrab(F<void(CZxdgPopupV6*, wl_resource*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendConfigure(int32_t, int32_t, int32_t, int32_t);
    void sendPopupDone();
    void sendConfigureRaw(int32_t, int32_t, int32_t, int32_t);
    void sendPopupDoneRaw();

  private:
    struct {
        F<void(CZxdgPopupV6*)> destroy;
        F<void(CZxdgPopupV6*, wl_resource*, uint32_t)> grab;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgPopupV6*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgPopupV6DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
