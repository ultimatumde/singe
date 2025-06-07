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
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;

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


class CWpColorRepresentationManagerV1;
class CWpColorRepresentationSurfaceV1;
class CWlSurface;
class CWpColorRepresentationSurfaceV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_color_representation_manager_v1_interface;
extern const wl_interface wp_color_representation_surface_v1_interface;

#endif

struct CWpColorRepresentationManagerV1DestroyWrapper {
    wl_listener listener;
    CWpColorRepresentationManagerV1* parent = nullptr;
};
            

class CWpColorRepresentationManagerV1 {
  public:
    CWpColorRepresentationManagerV1(wl_client* client, uint32_t version, uint32_t id);
    ~CWpColorRepresentationManagerV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CWpColorRepresentationManagerV1*)> handler) {
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

    void setDestroy(F<void(CWpColorRepresentationManagerV1*)> handler);
    void setGetSurface(F<void(CWpColorRepresentationManagerV1*, uint32_t, wl_resource*)> handler);

    // --------------- Events --------------- //

    void sendSupportedAlphaMode(uint32_t);
    void sendSupportedCoefficientsAndRanges(uint32_t, uint32_t);
    void sendDone();
    void sendSupportedAlphaModeRaw(uint32_t);
    void sendSupportedCoefficientsAndRangesRaw(uint32_t, uint32_t);
    void sendDoneRaw();

  private:
    struct {
        F<void(CWpColorRepresentationManagerV1*)> destroy;
        F<void(CWpColorRepresentationManagerV1*, uint32_t, wl_resource*)> getSurface;
    } requests;

    void onDestroyCalled();

    F<void(CWpColorRepresentationManagerV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CWpColorRepresentationManagerV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CWpColorRepresentationSurfaceV1DestroyWrapper {
    wl_listener listener;
    CWpColorRepresentationSurfaceV1* parent = nullptr;
};
            

class CWpColorRepresentationSurfaceV1 {
  public:
    CWpColorRepresentationSurfaceV1(wl_client* client, uint32_t version, uint32_t id);
    ~CWpColorRepresentationSurfaceV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CWpColorRepresentationSurfaceV1*)> handler) {
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

    void setDestroy(F<void(CWpColorRepresentationSurfaceV1*)> handler);
    void setSetAlphaMode(F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1AlphaMode)> handler);
    void setSetCoefficientsAndRange(F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1Coefficients, wpColorRepresentationSurfaceV1Range)> handler);
    void setSetChromaLocation(F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1ChromaLocation)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CWpColorRepresentationSurfaceV1*)> destroy;
        F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1AlphaMode)> setAlphaMode;
        F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1Coefficients, wpColorRepresentationSurfaceV1Range)> setCoefficientsAndRange;
        F<void(CWpColorRepresentationSurfaceV1*, wpColorRepresentationSurfaceV1ChromaLocation)> setChromaLocation;
    } requests;

    void onDestroyCalled();

    F<void(CWpColorRepresentationSurfaceV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CWpColorRepresentationSurfaceV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
