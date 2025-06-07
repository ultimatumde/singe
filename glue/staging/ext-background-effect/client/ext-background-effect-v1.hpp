// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_background_effect_v1

/*
 This protocol's authors' copyright notice is:


    Copyright (C) 2015 Martin Gräßlin
    Copyright (C) 2015 Marco Martin
    Copyright (C) 2020 Vlad Zahorodnii
    Copyright (C) 2024 Xaver Hugl

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

enum extBackgroundEffectManagerV1Error : uint32_t {
    EXT_BACKGROUND_EFFECT_MANAGER_V1_ERROR_BACKGROUND_EFFECT_EXISTS = 0,
};

enum extBackgroundEffectManagerV1Capability : uint32_t {
    EXT_BACKGROUND_EFFECT_MANAGER_V1_CAPABILITY_BLUR = 0,
};

enum extBackgroundEffectSurfaceV1Error : uint32_t {
    EXT_BACKGROUND_EFFECT_SURFACE_V1_ERROR_SURFACE_DESTROYED = 0,
};


class CCExtBackgroundEffectManagerV1;
class CCExtBackgroundEffectSurfaceV1;
class CCWlSurface;
class CCExtBackgroundEffectSurfaceV1;
class CCWlRegion;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface ext_background_effect_manager_v1_interface;
extern const wl_interface ext_background_effect_surface_v1_interface;

#endif


class CCExtBackgroundEffectManagerV1 {
  public:
    CCExtBackgroundEffectManagerV1(wl_proxy*);
    ~CCExtBackgroundEffectManagerV1();


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

    void setCapabilities(F<void(CCExtBackgroundEffectManagerV1*, extBackgroundEffectManagerV1Capability)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetBackgroundEffect(wl_proxy*);

  private:
    struct {
        F<void(CCExtBackgroundEffectManagerV1*, extBackgroundEffectManagerV1Capability)> capabilities;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtBackgroundEffectSurfaceV1 {
  public:
    CCExtBackgroundEffectSurfaceV1(wl_proxy*);
    ~CCExtBackgroundEffectSurfaceV1();


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
    void sendSetBlurRegion(wl_proxy*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
