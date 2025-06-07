// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// color_representation_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2022 Simon Ser
    Copyright 2022 Red Hat, Inc.
    Copyright 2022 Collabora, Ltd.
    Copyright 2022-2025 Red Hat, Inc.

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

enum wpColorRepresentationManagerV1Error : uint32_t {
    WP_COLOR_REPRESENTATION_MANAGER_V1_ERROR_SURFACE_EXISTS = 1,
};

enum wpColorRepresentationSurfaceV1Error : uint32_t {
    WP_COLOR_REPRESENTATION_SURFACE_V1_ERROR_ALPHA_MODE = 1,
    WP_COLOR_REPRESENTATION_SURFACE_V1_ERROR_COEFFICIENTS = 2,
    WP_COLOR_REPRESENTATION_SURFACE_V1_ERROR_PIXEL_FORMAT = 3,
    WP_COLOR_REPRESENTATION_SURFACE_V1_ERROR_INERT = 4,
};

enum wpColorRepresentationSurfaceV1AlphaMode : uint32_t {
    WP_COLOR_REPRESENTATION_SURFACE_V1_ALPHA_MODE_PREMULTIPLIED_ELECTRICAL = 0,
    WP_COLOR_REPRESENTATION_SURFACE_V1_ALPHA_MODE_PREMULTIPLIED_OPTICAL = 1,
    WP_COLOR_REPRESENTATION_SURFACE_V1_ALPHA_MODE_STRAIGHT = 2,
};

enum wpColorRepresentationSurfaceV1Coefficients : uint32_t {
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_IDENTITY = 1,
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_BT709 = 2,
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_FCC = 3,
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_BT601 = 4,
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_SMPTE240 = 5,
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_BT2020 = 6,
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_BT2020_CL = 7,
    WP_COLOR_REPRESENTATION_SURFACE_V1_COEFFICIENTS_ICTCP = 8,
};

enum wpColorRepresentationSurfaceV1Range : uint32_t {
    WP_COLOR_REPRESENTATION_SURFACE_V1_RANGE_FULL = 1,
    WP_COLOR_REPRESENTATION_SURFACE_V1_RANGE_LIMITED = 2,
};

enum wpColorRepresentationSurfaceV1ChromaLocation : uint32_t {
    WP_COLOR_REPRESENTATION_SURFACE_V1_CHROMA_LOCATION_TYPE_0 = 1,
    WP_COLOR_REPRESENTATION_SURFACE_V1_CHROMA_LOCATION_TYPE_1 = 2,
    WP_COLOR_REPRESENTATION_SURFACE_V1_CHROMA_LOCATION_TYPE_2 = 3,
    WP_COLOR_REPRESENTATION_SURFACE_V1_CHROMA_LOCATION_TYPE_3 = 4,
    WP_COLOR_REPRESENTATION_SURFACE_V1_CHROMA_LOCATION_TYPE_4 = 5,
    WP_COLOR_REPRESENTATION_SURFACE_V1_CHROMA_LOCATION_TYPE_5 = 6,
};


class CCWpColorRepresentationManagerV1;
class CCWpColorRepresentationSurfaceV1;
class CCWlSurface;
class CCWpColorRepresentationSurfaceV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_color_representation_manager_v1_interface;
extern const wl_interface wp_color_representation_surface_v1_interface;

#endif


class CCWpColorRepresentationManagerV1 {
  public:
    CCWpColorRepresentationManagerV1(wl_proxy*);
    ~CCWpColorRepresentationManagerV1();


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

    void setSupportedAlphaMode(F<void(CCWpColorRepresentationManagerV1*, uint32_t)> handler);
    void setSupportedCoefficientsAndRanges(F<void(CCWpColorRepresentationManagerV1*, uint32_t, uint32_t)> handler);
    void setDone(F<void(CCWpColorRepresentationManagerV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetSurface(wl_proxy*);

  private:
    struct {
        F<void(CCWpColorRepresentationManagerV1*, uint32_t)> supportedAlphaMode;
        F<void(CCWpColorRepresentationManagerV1*, uint32_t, uint32_t)> supportedCoefficientsAndRanges;
        F<void(CCWpColorRepresentationManagerV1*)> done;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpColorRepresentationSurfaceV1 {
  public:
    CCWpColorRepresentationSurfaceV1(wl_proxy*);
    ~CCWpColorRepresentationSurfaceV1();


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
    void sendSetAlphaMode(wpColorRepresentationSurfaceV1AlphaMode);
    void sendSetCoefficientsAndRange(wpColorRepresentationSurfaceV1Coefficients, wpColorRepresentationSurfaceV1Range);
    void sendSetChromaLocation(wpColorRepresentationSurfaceV1ChromaLocation);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
