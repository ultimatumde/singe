// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_toplevel_drag_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2023 David Redondo

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

enum xdgToplevelDragManagerV1Error : uint32_t {
    XDG_TOPLEVEL_DRAG_MANAGER_V1_ERROR_INVALID_SOURCE = 0,
};

enum xdgToplevelDragV1Error : uint32_t {
    XDG_TOPLEVEL_DRAG_V1_ERROR_TOPLEVEL_ATTACHED = 0,
    XDG_TOPLEVEL_DRAG_V1_ERROR_ONGOING_DRAG = 1,
};


class CXdgToplevelDragManagerV1;
class CXdgToplevelDragV1;
class CWlDataSource;
class CXdgToplevelDragV1;
class CXdgToplevel;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface xdg_toplevel_drag_manager_v1_interface;
extern const wl_interface xdg_toplevel_drag_v1_interface;

#endif

struct CXdgToplevelDragManagerV1DestroyWrapper {
    wl_listener listener;
    CXdgToplevelDragManagerV1* parent = nullptr;
};
            

class CXdgToplevelDragManagerV1 {
  public:
    CXdgToplevelDragManagerV1(wl_client* client, uint32_t version, uint32_t id);
    ~CXdgToplevelDragManagerV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CXdgToplevelDragManagerV1*)> handler) {
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

    void setDestroy(F<void(CXdgToplevelDragManagerV1*)> handler);
    void setGetXdgToplevelDrag(F<void(CXdgToplevelDragManagerV1*, uint32_t, wl_resource*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CXdgToplevelDragManagerV1*)> destroy;
        F<void(CXdgToplevelDragManagerV1*, uint32_t, wl_resource*)> getXdgToplevelDrag;
    } requests;

    void onDestroyCalled();

    F<void(CXdgToplevelDragManagerV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CXdgToplevelDragManagerV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CXdgToplevelDragV1DestroyWrapper {
    wl_listener listener;
    CXdgToplevelDragV1* parent = nullptr;
};
            

class CXdgToplevelDragV1 {
  public:
    CXdgToplevelDragV1(wl_client* client, uint32_t version, uint32_t id);
    ~CXdgToplevelDragV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CXdgToplevelDragV1*)> handler) {
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

    void setDestroy(F<void(CXdgToplevelDragV1*)> handler);
    void setAttach(F<void(CXdgToplevelDragV1*, wl_resource*, int32_t, int32_t)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CXdgToplevelDragV1*)> destroy;
        F<void(CXdgToplevelDragV1*, wl_resource*, int32_t, int32_t)> attach;
    } requests;

    void onDestroyCalled();

    F<void(CXdgToplevelDragV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CXdgToplevelDragV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
