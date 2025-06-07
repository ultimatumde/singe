// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// pointer_constraints_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2014      Jonas Ådahl
    Copyright © 2015      Red Hat Inc.

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

enum zwpPointerConstraintsV1Error : uint32_t {
    ZWP_POINTER_CONSTRAINTS_V1_ERROR_ALREADY_CONSTRAINED = 1,
};

enum zwpPointerConstraintsV1Lifetime : uint32_t {
    ZWP_POINTER_CONSTRAINTS_V1_LIFETIME_ONESHOT = 1,
    ZWP_POINTER_CONSTRAINTS_V1_LIFETIME_PERSISTENT = 2,
};


class CCZwpPointerConstraintsV1;
class CCZwpLockedPointerV1;
class CCWlSurface;
class CCWlPointer;
class CCWlRegion;
class CCZwpConfinedPointerV1;
class CCWlSurface;
class CCWlPointer;
class CCWlRegion;
class CCZwpLockedPointerV1;
class CCWlRegion;
class CCZwpConfinedPointerV1;
class CCWlRegion;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_pointer_constraints_v1_interface;
extern const wl_interface zwp_locked_pointer_v1_interface;
extern const wl_interface zwp_confined_pointer_v1_interface;

#endif


class CCZwpPointerConstraintsV1 {
  public:
    CCZwpPointerConstraintsV1(wl_proxy*);
    ~CCZwpPointerConstraintsV1();


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
    wl_proxy* sendLockPointer(wl_proxy*, wl_proxy*, wl_proxy*, zwpPointerConstraintsV1Lifetime);
    wl_proxy* sendConfinePointer(wl_proxy*, wl_proxy*, wl_proxy*, zwpPointerConstraintsV1Lifetime);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpLockedPointerV1 {
  public:
    CCZwpLockedPointerV1(wl_proxy*);
    ~CCZwpLockedPointerV1();


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

    void setLocked(F<void(CCZwpLockedPointerV1*)> handler);
    void setUnlocked(F<void(CCZwpLockedPointerV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendSetCursorPositionHint(wl_fixed_t, wl_fixed_t);
    void sendSetRegion(wl_proxy*);

  private:
    struct {
        F<void(CCZwpLockedPointerV1*)> locked;
        F<void(CCZwpLockedPointerV1*)> unlocked;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpConfinedPointerV1 {
  public:
    CCZwpConfinedPointerV1(wl_proxy*);
    ~CCZwpConfinedPointerV1();


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

    void setConfined(F<void(CCZwpConfinedPointerV1*)> handler);
    void setUnconfined(F<void(CCZwpConfinedPointerV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendSetRegion(wl_proxy*);

  private:
    struct {
        F<void(CCZwpConfinedPointerV1*)> confined;
        F<void(CCZwpConfinedPointerV1*)> unconfined;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
