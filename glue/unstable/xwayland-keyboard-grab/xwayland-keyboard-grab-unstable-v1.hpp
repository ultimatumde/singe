// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xwayland_keyboard_grab_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2017 Red Hat Inc.

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


class CZwpXwaylandKeyboardGrabManagerV1;
class CZwpXwaylandKeyboardGrabV1;
class CWlSurface;
class CWlSeat;
class CZwpXwaylandKeyboardGrabV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_xwayland_keyboard_grab_manager_v1_interface;
extern const wl_interface zwp_xwayland_keyboard_grab_v1_interface;

#endif

struct CZwpXwaylandKeyboardGrabManagerV1DestroyWrapper {
    wl_listener listener;
    CZwpXwaylandKeyboardGrabManagerV1* parent = nullptr;
};
            

class CZwpXwaylandKeyboardGrabManagerV1 {
  public:
    CZwpXwaylandKeyboardGrabManagerV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpXwaylandKeyboardGrabManagerV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpXwaylandKeyboardGrabManagerV1*)> handler) {
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

    void setDestroy(F<void(CZwpXwaylandKeyboardGrabManagerV1*)> handler);
    void setGrabKeyboard(F<void(CZwpXwaylandKeyboardGrabManagerV1*, uint32_t, wl_resource*, wl_resource*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZwpXwaylandKeyboardGrabManagerV1*)> destroy;
        F<void(CZwpXwaylandKeyboardGrabManagerV1*, uint32_t, wl_resource*, wl_resource*)> grabKeyboard;
    } requests;

    void onDestroyCalled();

    F<void(CZwpXwaylandKeyboardGrabManagerV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpXwaylandKeyboardGrabManagerV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpXwaylandKeyboardGrabV1DestroyWrapper {
    wl_listener listener;
    CZwpXwaylandKeyboardGrabV1* parent = nullptr;
};
            

class CZwpXwaylandKeyboardGrabV1 {
  public:
    CZwpXwaylandKeyboardGrabV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpXwaylandKeyboardGrabV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpXwaylandKeyboardGrabV1*)> handler) {
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

    void setDestroy(F<void(CZwpXwaylandKeyboardGrabV1*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZwpXwaylandKeyboardGrabV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CZwpXwaylandKeyboardGrabV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpXwaylandKeyboardGrabV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
