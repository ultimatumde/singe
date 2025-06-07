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
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;

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


class CXdgShell;
class CXdgSurface;
class CWlSurface;
class CXdgPopup;
class CWlSurface;
class CWlSurface;
class CWlSeat;
class CXdgSurface;
class CXdgSurface;
class CWlSeat;
class CWlSeat;
class CWlSeat;
class CWlOutput;
class CXdgPopup;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface xdg_shell_interface;
extern const wl_interface xdg_surface_interface;
extern const wl_interface xdg_popup_interface;

#endif

struct CXdgShellDestroyWrapper {
    wl_listener listener;
    CXdgShell* parent = nullptr;
};
            

class CXdgShell {
  public:
    CXdgShell(wl_client* client, uint32_t version, uint32_t id);
    ~CXdgShell();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CXdgShell*)> handler) {
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

    void setDestroy(F<void(CXdgShell*)> handler);
    void setUseUnstableVersion(F<void(CXdgShell*, int32_t)> handler);
    void setGetXdgSurface(F<void(CXdgShell*, uint32_t, wl_resource*)> handler);
    void setGetXdgPopup(F<void(CXdgShell*, uint32_t, wl_resource*, wl_resource*, wl_resource*, uint32_t, int32_t, int32_t)> handler);
    void setPong(F<void(CXdgShell*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendPing(uint32_t);
    void sendPingRaw(uint32_t);

  private:
    struct {
        F<void(CXdgShell*)> destroy;
        F<void(CXdgShell*, int32_t)> useUnstableVersion;
        F<void(CXdgShell*, uint32_t, wl_resource*)> getXdgSurface;
        F<void(CXdgShell*, uint32_t, wl_resource*, wl_resource*, wl_resource*, uint32_t, int32_t, int32_t)> getXdgPopup;
        F<void(CXdgShell*, uint32_t)> pong;
    } requests;

    void onDestroyCalled();

    F<void(CXdgShell*)> onDestroy;

    wl_resource* pResource = nullptr;

    CXdgShellDestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CXdgSurfaceDestroyWrapper {
    wl_listener listener;
    CXdgSurface* parent = nullptr;
};
            

class CXdgSurface {
  public:
    CXdgSurface(wl_client* client, uint32_t version, uint32_t id);
    ~CXdgSurface();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CXdgSurface*)> handler) {
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

    void setDestroy(F<void(CXdgSurface*)> handler);
    void setSetParent(F<void(CXdgSurface*, wl_resource*)> handler);
    void setSetTitle(F<void(CXdgSurface*, const char*)> handler);
    void setSetAppId(F<void(CXdgSurface*, const char*)> handler);
    void setShowWindowMenu(F<void(CXdgSurface*, wl_resource*, uint32_t, int32_t, int32_t)> handler);
    void setMove(F<void(CXdgSurface*, wl_resource*, uint32_t)> handler);
    void setResize(F<void(CXdgSurface*, wl_resource*, uint32_t, uint32_t)> handler);
    void setAckConfigure(F<void(CXdgSurface*, uint32_t)> handler);
    void setSetWindowGeometry(F<void(CXdgSurface*, int32_t, int32_t, int32_t, int32_t)> handler);
    void setSetMaximized(F<void(CXdgSurface*)> handler);
    void setUnsetMaximized(F<void(CXdgSurface*)> handler);
    void setSetFullscreen(F<void(CXdgSurface*, wl_resource*)> handler);
    void setUnsetFullscreen(F<void(CXdgSurface*)> handler);
    void setSetMinimized(F<void(CXdgSurface*)> handler);

    // --------------- Events --------------- //

    void sendConfigure(int32_t, int32_t, wl_array*, uint32_t);
    void sendClose();
    void sendConfigureRaw(int32_t, int32_t, wl_array*, uint32_t);
    void sendCloseRaw();

  private:
    struct {
        F<void(CXdgSurface*)> destroy;
        F<void(CXdgSurface*, wl_resource*)> setParent;
        F<void(CXdgSurface*, const char*)> setTitle;
        F<void(CXdgSurface*, const char*)> setAppId;
        F<void(CXdgSurface*, wl_resource*, uint32_t, int32_t, int32_t)> showWindowMenu;
        F<void(CXdgSurface*, wl_resource*, uint32_t)> move;
        F<void(CXdgSurface*, wl_resource*, uint32_t, uint32_t)> resize;
        F<void(CXdgSurface*, uint32_t)> ackConfigure;
        F<void(CXdgSurface*, int32_t, int32_t, int32_t, int32_t)> setWindowGeometry;
        F<void(CXdgSurface*)> setMaximized;
        F<void(CXdgSurface*)> unsetMaximized;
        F<void(CXdgSurface*, wl_resource*)> setFullscreen;
        F<void(CXdgSurface*)> unsetFullscreen;
        F<void(CXdgSurface*)> setMinimized;
    } requests;

    void onDestroyCalled();

    F<void(CXdgSurface*)> onDestroy;

    wl_resource* pResource = nullptr;

    CXdgSurfaceDestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CXdgPopupDestroyWrapper {
    wl_listener listener;
    CXdgPopup* parent = nullptr;
};
            

class CXdgPopup {
  public:
    CXdgPopup(wl_client* client, uint32_t version, uint32_t id);
    ~CXdgPopup();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CXdgPopup*)> handler) {
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

    void setDestroy(F<void(CXdgPopup*)> handler);

    // --------------- Events --------------- //

    void sendPopupDone();
    void sendPopupDoneRaw();

  private:
    struct {
        F<void(CXdgPopup*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CXdgPopup*)> onDestroy;

    wl_resource* pResource = nullptr;

    CXdgPopupDestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
