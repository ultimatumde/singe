// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// cursor_shape_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2018 The Chromium Authors
    Copyright 2023 Simon Ser

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
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
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

enum wpCursorShapeDeviceV1Shape : uint32_t {
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_DEFAULT = 1,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_CONTEXT_MENU = 2,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_HELP = 3,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_POINTER = 4,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_PROGRESS = 5,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_WAIT = 6,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_CELL = 7,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_CROSSHAIR = 8,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_TEXT = 9,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_VERTICAL_TEXT = 10,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_ALIAS = 11,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_COPY = 12,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_MOVE = 13,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_NO_DROP = 14,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_NOT_ALLOWED = 15,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_GRAB = 16,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_GRABBING = 17,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_E_RESIZE = 18,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_N_RESIZE = 19,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_NE_RESIZE = 20,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_NW_RESIZE = 21,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_S_RESIZE = 22,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_SE_RESIZE = 23,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_SW_RESIZE = 24,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_W_RESIZE = 25,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_EW_RESIZE = 26,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_NS_RESIZE = 27,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_NESW_RESIZE = 28,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_NWSE_RESIZE = 29,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_COL_RESIZE = 30,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_ROW_RESIZE = 31,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_ALL_SCROLL = 32,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_ZOOM_IN = 33,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_ZOOM_OUT = 34,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_DND_ASK = 35,
    WP_CURSOR_SHAPE_DEVICE_V1_SHAPE_ALL_RESIZE = 36,
};

enum wpCursorShapeDeviceV1Error : uint32_t {
    WP_CURSOR_SHAPE_DEVICE_V1_ERROR_INVALID_SHAPE = 1,
};


class CCWpCursorShapeManagerV1;
class CCWpCursorShapeDeviceV1;
class CCWlPointer;
class CCWpCursorShapeDeviceV1;
class CCZwpTabletToolV2;
class CCWpCursorShapeDeviceV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_cursor_shape_manager_v1_interface;
extern const wl_interface wp_cursor_shape_device_v1_interface;

#endif


class CCWpCursorShapeManagerV1 {
  public:
    CCWpCursorShapeManagerV1(wl_proxy*);
    ~CCWpCursorShapeManagerV1();


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
    wl_proxy* sendGetPointer(wl_proxy*);
    wl_proxy* sendGetTabletToolV2(wl_proxy*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpCursorShapeDeviceV1 {
  public:
    CCWpCursorShapeDeviceV1(wl_proxy*);
    ~CCWpCursorShapeDeviceV1();


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
    void sendSetShape(uint32_t, wpCursorShapeDeviceV1Shape);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
