// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_image_capture_source_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2022 Andri Yngvason
    Copyright © 2024 Simon Ser

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


class CCExtImageCaptureSourceV1;
class CCExtOutputImageCaptureSourceManagerV1;
class CCExtImageCaptureSourceV1;
class CCWlOutput;
class CCExtForeignToplevelImageCaptureSourceManagerV1;
class CCExtImageCaptureSourceV1;
class CCExtForeignToplevelHandleV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface ext_image_capture_source_v1_interface;
extern const wl_interface ext_output_image_capture_source_manager_v1_interface;
extern const wl_interface ext_foreign_toplevel_image_capture_source_manager_v1_interface;

#endif


class CCExtImageCaptureSourceV1 {
  public:
    CCExtImageCaptureSourceV1(wl_proxy*);
    ~CCExtImageCaptureSourceV1();


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

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtOutputImageCaptureSourceManagerV1 {
  public:
    CCExtOutputImageCaptureSourceManagerV1(wl_proxy*);
    ~CCExtOutputImageCaptureSourceManagerV1();


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

    wl_proxy* sendCreateSource(wl_proxy*);
    void sendDestroy();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtForeignToplevelImageCaptureSourceManagerV1 {
  public:
    CCExtForeignToplevelImageCaptureSourceManagerV1(wl_proxy*);
    ~CCExtForeignToplevelImageCaptureSourceManagerV1();


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

    wl_proxy* sendCreateSource(wl_proxy*);
    void sendDestroy();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
