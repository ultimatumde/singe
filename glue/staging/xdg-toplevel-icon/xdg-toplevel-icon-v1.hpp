// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_toplevel_icon_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2023-2024 Matthias Klumpp
    Copyright ©      2024 David Edmundson

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

enum xdgToplevelIconV1Error : uint32_t {
    XDG_TOPLEVEL_ICON_V1_ERROR_INVALID_BUFFER = 1,
    XDG_TOPLEVEL_ICON_V1_ERROR_IMMUTABLE = 2,
    XDG_TOPLEVEL_ICON_V1_ERROR_NO_BUFFER = 3,
};


class CXdgToplevelIconManagerV1;
class CXdgToplevelIconV1;
class CXdgToplevel;
class CXdgToplevelIconV1;
class CXdgToplevelIconV1;
class CWlBuffer;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface xdg_toplevel_icon_manager_v1_interface;
extern const wl_interface xdg_toplevel_icon_v1_interface;

#endif

struct CXdgToplevelIconManagerV1DestroyWrapper {
    wl_listener listener;
    CXdgToplevelIconManagerV1* parent = nullptr;
};
            

class CXdgToplevelIconManagerV1 {
  public:
    CXdgToplevelIconManagerV1(wl_client* client, uint32_t version, uint32_t id);
    ~CXdgToplevelIconManagerV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CXdgToplevelIconManagerV1*)> handler) {
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

    void setDestroy(F<void(CXdgToplevelIconManagerV1*)> handler);
    void setCreateIcon(F<void(CXdgToplevelIconManagerV1*, uint32_t)> handler);
    void setSetIcon(F<void(CXdgToplevelIconManagerV1*, wl_resource*, wl_resource*)> handler);

    // --------------- Events --------------- //

    void sendIconSize(int32_t);
    void sendDone();
    void sendIconSizeRaw(int32_t);
    void sendDoneRaw();

  private:
    struct {
        F<void(CXdgToplevelIconManagerV1*)> destroy;
        F<void(CXdgToplevelIconManagerV1*, uint32_t)> createIcon;
        F<void(CXdgToplevelIconManagerV1*, wl_resource*, wl_resource*)> setIcon;
    } requests;

    void onDestroyCalled();

    F<void(CXdgToplevelIconManagerV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CXdgToplevelIconManagerV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CXdgToplevelIconV1DestroyWrapper {
    wl_listener listener;
    CXdgToplevelIconV1* parent = nullptr;
};
            

class CXdgToplevelIconV1 {
  public:
    CXdgToplevelIconV1(wl_client* client, uint32_t version, uint32_t id);
    ~CXdgToplevelIconV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CXdgToplevelIconV1*)> handler) {
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

    void setDestroy(F<void(CXdgToplevelIconV1*)> handler);
    void setSetName(F<void(CXdgToplevelIconV1*, const char*)> handler);
    void setAddBuffer(F<void(CXdgToplevelIconV1*, wl_resource*, int32_t)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CXdgToplevelIconV1*)> destroy;
        F<void(CXdgToplevelIconV1*, const char*)> setName;
        F<void(CXdgToplevelIconV1*, wl_resource*, int32_t)> addBuffer;
    } requests;

    void onDestroyCalled();

    F<void(CXdgToplevelIconV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CXdgToplevelIconV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
