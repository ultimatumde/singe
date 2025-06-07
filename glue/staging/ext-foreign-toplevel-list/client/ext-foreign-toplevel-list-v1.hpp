// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_foreign_toplevel_list_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2018 Ilia Bozhinov
    Copyright © 2020 Isaac Freund
    Copyright © 2022 wb9688
    Copyright © 2023 i509VCB

    Permission to use, copy, modify, distribute, and sell this
    software and its documentation for any purpose is hereby granted
    without fee, provided that the above copyright notice appear in
    all copies and that both that copyright notice and this permission
    notice appear in supporting documentation, and that the name of
    the copyright holders not be used in advertising or publicity
    pertaining to distribution of the software without specific,
    written prior permission.  The copyright holders make no
    representations about the suitability of this software for any
    purpose.  It is provided "as is" without express or implied
    warranty.

    THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
    SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
    FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
    SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
    AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
    ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
    THIS SOFTWARE.
  
*/

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;


class CCExtForeignToplevelListV1;
class CCExtForeignToplevelHandleV1;
class CCExtForeignToplevelHandleV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface ext_foreign_toplevel_list_v1_interface;
extern const wl_interface ext_foreign_toplevel_handle_v1_interface;

#endif


class CCExtForeignToplevelListV1 {
  public:
    CCExtForeignToplevelListV1(wl_proxy*);
    ~CCExtForeignToplevelListV1();


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

    void setToplevel(F<void(CCExtForeignToplevelListV1*, wl_proxy*)> handler);
    void setFinished(F<void(CCExtForeignToplevelListV1*)> handler);

    // --------------- Events --------------- //

    void sendStop();
    void sendDestroy();

  private:
    struct {
        F<void(CCExtForeignToplevelListV1*, wl_proxy*)> toplevel;
        F<void(CCExtForeignToplevelListV1*)> finished;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtForeignToplevelHandleV1 {
  public:
    CCExtForeignToplevelHandleV1(wl_proxy*);
    ~CCExtForeignToplevelHandleV1();


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

    void setClosed(F<void(CCExtForeignToplevelHandleV1*)> handler);
    void setDone(F<void(CCExtForeignToplevelHandleV1*)> handler);
    void setTitle(F<void(CCExtForeignToplevelHandleV1*, const char*)> handler);
    void setAppId(F<void(CCExtForeignToplevelHandleV1*, const char*)> handler);
    void setIdentifier(F<void(CCExtForeignToplevelHandleV1*, const char*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCExtForeignToplevelHandleV1*)> closed;
        F<void(CCExtForeignToplevelHandleV1*)> done;
        F<void(CCExtForeignToplevelHandleV1*, const char*)> title;
        F<void(CCExtForeignToplevelHandleV1*, const char*)> appId;
        F<void(CCExtForeignToplevelHandleV1*, const char*)> identifier;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
