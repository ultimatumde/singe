// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// drm_lease_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2018 NXP
    Copyright © 2019 Status Research & Development GmbH.
    Copyright © 2021 Xaver Hugl

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

enum wpDrmLeaseRequestV1Error : uint32_t {
    WP_DRM_LEASE_REQUEST_V1_ERROR_WRONG_DEVICE = 0,
    WP_DRM_LEASE_REQUEST_V1_ERROR_DUPLICATE_CONNECTOR = 1,
    WP_DRM_LEASE_REQUEST_V1_ERROR_EMPTY_LEASE = 2,
};


class CCWpDrmLeaseDeviceV1;
class CCWpDrmLeaseRequestV1;
class CCWpDrmLeaseConnectorV1;
class CCWpDrmLeaseConnectorV1;
class CCWpDrmLeaseRequestV1;
class CCWpDrmLeaseConnectorV1;
class CCWpDrmLeaseV1;
class CCWpDrmLeaseV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_drm_lease_device_v1_interface;
extern const wl_interface wp_drm_lease_connector_v1_interface;
extern const wl_interface wp_drm_lease_request_v1_interface;
extern const wl_interface wp_drm_lease_v1_interface;

#endif


class CCWpDrmLeaseDeviceV1 {
  public:
    CCWpDrmLeaseDeviceV1(wl_proxy*);
    ~CCWpDrmLeaseDeviceV1();


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

    void setDrmFd(F<void(CCWpDrmLeaseDeviceV1*, int32_t)> handler);
    void setConnector(F<void(CCWpDrmLeaseDeviceV1*, wl_proxy*)> handler);
    void setDone(F<void(CCWpDrmLeaseDeviceV1*)> handler);
    void setReleased(F<void(CCWpDrmLeaseDeviceV1*)> handler);

    // --------------- Events --------------- //

    wl_proxy* sendCreateLeaseRequest();
    void sendRelease();

  private:
    struct {
        F<void(CCWpDrmLeaseDeviceV1*, int32_t)> drmFd;
        F<void(CCWpDrmLeaseDeviceV1*, wl_proxy*)> connector;
        F<void(CCWpDrmLeaseDeviceV1*)> done;
        F<void(CCWpDrmLeaseDeviceV1*)> released;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpDrmLeaseConnectorV1 {
  public:
    CCWpDrmLeaseConnectorV1(wl_proxy*);
    ~CCWpDrmLeaseConnectorV1();


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

    void setName(F<void(CCWpDrmLeaseConnectorV1*, const char*)> handler);
    void setDescription(F<void(CCWpDrmLeaseConnectorV1*, const char*)> handler);
    void setConnectorId(F<void(CCWpDrmLeaseConnectorV1*, uint32_t)> handler);
    void setDone(F<void(CCWpDrmLeaseConnectorV1*)> handler);
    void setWithdrawn(F<void(CCWpDrmLeaseConnectorV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCWpDrmLeaseConnectorV1*, const char*)> name;
        F<void(CCWpDrmLeaseConnectorV1*, const char*)> description;
        F<void(CCWpDrmLeaseConnectorV1*, uint32_t)> connectorId;
        F<void(CCWpDrmLeaseConnectorV1*)> done;
        F<void(CCWpDrmLeaseConnectorV1*)> withdrawn;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpDrmLeaseRequestV1 {
  public:
    CCWpDrmLeaseRequestV1(wl_proxy*);
    ~CCWpDrmLeaseRequestV1();


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

    void sendRequestConnector(CCWpDrmLeaseConnectorV1*);
    wl_proxy* sendSubmit();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpDrmLeaseV1 {
  public:
    CCWpDrmLeaseV1(wl_proxy*);
    ~CCWpDrmLeaseV1();


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

    void setLeaseFd(F<void(CCWpDrmLeaseV1*, int32_t)> handler);
    void setFinished(F<void(CCWpDrmLeaseV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCWpDrmLeaseV1*, int32_t)> leaseFd;
        F<void(CCWpDrmLeaseV1*)> finished;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
