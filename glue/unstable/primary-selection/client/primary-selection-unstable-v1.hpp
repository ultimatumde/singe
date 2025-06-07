// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// wp_primary_selection_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2015, 2016 Red Hat

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


class CCZwpPrimarySelectionDeviceManagerV1;
class CCZwpPrimarySelectionSourceV1;
class CCZwpPrimarySelectionDeviceV1;
class CCWlSeat;
class CCZwpPrimarySelectionDeviceV1;
class CCZwpPrimarySelectionSourceV1;
class CCZwpPrimarySelectionOfferV1;
class CCZwpPrimarySelectionOfferV1;
class CCZwpPrimarySelectionOfferV1;
class CCZwpPrimarySelectionSourceV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_primary_selection_device_manager_v1_interface;
extern const wl_interface zwp_primary_selection_device_v1_interface;
extern const wl_interface zwp_primary_selection_offer_v1_interface;
extern const wl_interface zwp_primary_selection_source_v1_interface;

#endif


class CCZwpPrimarySelectionDeviceManagerV1 {
  public:
    CCZwpPrimarySelectionDeviceManagerV1(wl_proxy*);
    ~CCZwpPrimarySelectionDeviceManagerV1();


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

    wl_proxy* sendCreateSource();
    wl_proxy* sendGetDevice(wl_proxy*);
    void sendDestroy();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpPrimarySelectionDeviceV1 {
  public:
    CCZwpPrimarySelectionDeviceV1(wl_proxy*);
    ~CCZwpPrimarySelectionDeviceV1();


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

    void setDataOffer(F<void(CCZwpPrimarySelectionDeviceV1*, wl_proxy*)> handler);
    void setSelection(F<void(CCZwpPrimarySelectionDeviceV1*, wl_proxy*)> handler);

    // --------------- Events --------------- //

    void sendSetSelection(CCZwpPrimarySelectionSourceV1*, uint32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpPrimarySelectionDeviceV1*, wl_proxy*)> dataOffer;
        F<void(CCZwpPrimarySelectionDeviceV1*, wl_proxy*)> selection;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpPrimarySelectionOfferV1 {
  public:
    CCZwpPrimarySelectionOfferV1(wl_proxy*);
    ~CCZwpPrimarySelectionOfferV1();


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

    void setOffer(F<void(CCZwpPrimarySelectionOfferV1*, const char*)> handler);

    // --------------- Events --------------- //

    void sendReceive(const char*, int32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpPrimarySelectionOfferV1*, const char*)> offer;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpPrimarySelectionSourceV1 {
  public:
    CCZwpPrimarySelectionSourceV1(wl_proxy*);
    ~CCZwpPrimarySelectionSourceV1();


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

    void setSend(F<void(CCZwpPrimarySelectionSourceV1*, const char*, int32_t)> handler);
    void setCancelled(F<void(CCZwpPrimarySelectionSourceV1*)> handler);

    // --------------- Events --------------- //

    void sendOffer(const char*);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpPrimarySelectionSourceV1*, const char*, int32_t)> send;
        F<void(CCZwpPrimarySelectionSourceV1*)> cancelled;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
