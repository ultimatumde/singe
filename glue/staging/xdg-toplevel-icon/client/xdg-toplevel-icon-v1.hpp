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
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum xdgToplevelIconV1Error : uint32_t {
    XDG_TOPLEVEL_ICON_V1_ERROR_INVALID_BUFFER = 1,
    XDG_TOPLEVEL_ICON_V1_ERROR_IMMUTABLE = 2,
    XDG_TOPLEVEL_ICON_V1_ERROR_NO_BUFFER = 3,
};


class CCXdgToplevelIconManagerV1;
class CCXdgToplevelIconV1;
class CCXdgToplevel;
class CCXdgToplevelIconV1;
class CCXdgToplevelIconV1;
class CCWlBuffer;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface xdg_toplevel_icon_manager_v1_interface;
extern const wl_interface xdg_toplevel_icon_v1_interface;

#endif


class CCXdgToplevelIconManagerV1 {
  public:
    CCXdgToplevelIconManagerV1(wl_proxy*);
    ~CCXdgToplevelIconManagerV1();


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

    void setIconSize(F<void(CCXdgToplevelIconManagerV1*, int32_t)> handler);
    void setDone(F<void(CCXdgToplevelIconManagerV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendCreateIcon();
    void sendSetIcon(wl_proxy*, CCXdgToplevelIconV1*);

  private:
    struct {
        F<void(CCXdgToplevelIconManagerV1*, int32_t)> iconSize;
        F<void(CCXdgToplevelIconManagerV1*)> done;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCXdgToplevelIconV1 {
  public:
    CCXdgToplevelIconV1(wl_proxy*);
    ~CCXdgToplevelIconV1();


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
    void sendSetName(const char*);
    void sendAddBuffer(wl_proxy*, int32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
