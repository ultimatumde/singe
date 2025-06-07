// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// security_context_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2021 Simon Ser

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

enum wpSecurityContextManagerV1Error : uint32_t {
    WP_SECURITY_CONTEXT_MANAGER_V1_ERROR_INVALID_LISTEN_FD = 1,
    WP_SECURITY_CONTEXT_MANAGER_V1_ERROR_NESTED = 2,
};

enum wpSecurityContextV1Error : uint32_t {
    WP_SECURITY_CONTEXT_V1_ERROR_ALREADY_USED = 1,
    WP_SECURITY_CONTEXT_V1_ERROR_ALREADY_SET = 2,
    WP_SECURITY_CONTEXT_V1_ERROR_INVALID_METADATA = 3,
};


class CCWpSecurityContextManagerV1;
class CCWpSecurityContextV1;
class CCWpSecurityContextV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_security_context_manager_v1_interface;
extern const wl_interface wp_security_context_v1_interface;

#endif


class CCWpSecurityContextManagerV1 {
  public:
    CCWpSecurityContextManagerV1(wl_proxy*);
    ~CCWpSecurityContextManagerV1();


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
    wl_proxy* sendCreateListener(int32_t, int32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpSecurityContextV1 {
  public:
    CCWpSecurityContextV1(wl_proxy*);
    ~CCWpSecurityContextV1();


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
    void sendSetSandboxEngine(const char*);
    void sendSetAppId(const char*);
    void sendSetInstanceId(const char*);
    void sendCommit();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
