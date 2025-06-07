// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// tablet_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2014 © Stephen "Lyude" Chandler Paul
    Copyright 2015-2016 © Red Hat, Inc.

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation files
    (the "Software"), to deal in the Software without restriction,
    including without limitation the rights to use, copy, modify, merge,
    publish, distribute, sublicense, and/or sell copies of the Software,
    and to permit persons to whom the Software is furnished to do so,
    subject to the following conditions:

    The above copyright notice and this permission notice (including the
    next paragraph) shall be included in all copies or substantial
    portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
    BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
    ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
  
*/

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum zwpTabletToolV1Type : uint32_t {
    ZWP_TABLET_TOOL_V1_TYPE_PEN = 320,
    ZWP_TABLET_TOOL_V1_TYPE_ERASER = 321,
    ZWP_TABLET_TOOL_V1_TYPE_BRUSH = 322,
    ZWP_TABLET_TOOL_V1_TYPE_PENCIL = 323,
    ZWP_TABLET_TOOL_V1_TYPE_AIRBRUSH = 324,
    ZWP_TABLET_TOOL_V1_TYPE_FINGER = 325,
    ZWP_TABLET_TOOL_V1_TYPE_MOUSE = 326,
    ZWP_TABLET_TOOL_V1_TYPE_LENS = 327,
};

enum zwpTabletToolV1Capability : uint32_t {
    ZWP_TABLET_TOOL_V1_CAPABILITY_TILT = 1,
    ZWP_TABLET_TOOL_V1_CAPABILITY_PRESSURE = 2,
    ZWP_TABLET_TOOL_V1_CAPABILITY_DISTANCE = 3,
    ZWP_TABLET_TOOL_V1_CAPABILITY_ROTATION = 4,
    ZWP_TABLET_TOOL_V1_CAPABILITY_SLIDER = 5,
    ZWP_TABLET_TOOL_V1_CAPABILITY_WHEEL = 6,
};

enum zwpTabletToolV1ButtonState : uint32_t {
    ZWP_TABLET_TOOL_V1_BUTTON_STATE_RELEASED = 0,
    ZWP_TABLET_TOOL_V1_BUTTON_STATE_PRESSED = 1,
};

enum zwpTabletToolV1Error : uint32_t {
    ZWP_TABLET_TOOL_V1_ERROR_ROLE = 0,
};


class CCZwpTabletManagerV1;
class CCZwpTabletSeatV1;
class CCWlSeat;
class CCZwpTabletSeatV1;
class CCZwpTabletV1;
class CCZwpTabletToolV1;
class CCZwpTabletToolV1;
class CCWlSurface;
class CCZwpTabletV1;
class CCWlSurface;
class CCZwpTabletV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_tablet_manager_v1_interface;
extern const wl_interface zwp_tablet_seat_v1_interface;
extern const wl_interface zwp_tablet_tool_v1_interface;
extern const wl_interface zwp_tablet_v1_interface;

#endif


class CCZwpTabletManagerV1 {
  public:
    CCZwpTabletManagerV1(wl_proxy*);
    ~CCZwpTabletManagerV1();


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

    wl_proxy* sendGetTabletSeat(wl_proxy*);
    void sendDestroy();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletSeatV1 {
  public:
    CCZwpTabletSeatV1(wl_proxy*);
    ~CCZwpTabletSeatV1();


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

    void setTabletAdded(F<void(CCZwpTabletSeatV1*, wl_proxy*)> handler);
    void setToolAdded(F<void(CCZwpTabletSeatV1*, wl_proxy*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletSeatV1*, wl_proxy*)> tabletAdded;
        F<void(CCZwpTabletSeatV1*, wl_proxy*)> toolAdded;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletToolV1 {
  public:
    CCZwpTabletToolV1(wl_proxy*);
    ~CCZwpTabletToolV1();


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

    void setType(F<void(CCZwpTabletToolV1*, zwpTabletToolV1Type)> handler);
    void setHardwareSerial(F<void(CCZwpTabletToolV1*, uint32_t, uint32_t)> handler);
    void setHardwareIdWacom(F<void(CCZwpTabletToolV1*, uint32_t, uint32_t)> handler);
    void setCapability(F<void(CCZwpTabletToolV1*, zwpTabletToolV1Capability)> handler);
    void setDone(F<void(CCZwpTabletToolV1*)> handler);
    void setRemoved(F<void(CCZwpTabletToolV1*)> handler);
    void setProximityIn(F<void(CCZwpTabletToolV1*, uint32_t, wl_proxy*, wl_proxy*)> handler);
    void setProximityOut(F<void(CCZwpTabletToolV1*)> handler);
    void setDown(F<void(CCZwpTabletToolV1*, uint32_t)> handler);
    void setUp(F<void(CCZwpTabletToolV1*)> handler);
    void setMotion(F<void(CCZwpTabletToolV1*, wl_fixed_t, wl_fixed_t)> handler);
    void setPressure(F<void(CCZwpTabletToolV1*, uint32_t)> handler);
    void setDistance(F<void(CCZwpTabletToolV1*, uint32_t)> handler);
    void setTilt(F<void(CCZwpTabletToolV1*, int32_t, int32_t)> handler);
    void setRotation(F<void(CCZwpTabletToolV1*, int32_t)> handler);
    void setSlider(F<void(CCZwpTabletToolV1*, int32_t)> handler);
    void setWheel(F<void(CCZwpTabletToolV1*, int32_t, int32_t)> handler);
    void setButton(F<void(CCZwpTabletToolV1*, uint32_t, uint32_t, zwpTabletToolV1ButtonState)> handler);
    void setFrame(F<void(CCZwpTabletToolV1*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendSetCursor(uint32_t, wl_proxy*, int32_t, int32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletToolV1*, zwpTabletToolV1Type)> type;
        F<void(CCZwpTabletToolV1*, uint32_t, uint32_t)> hardwareSerial;
        F<void(CCZwpTabletToolV1*, uint32_t, uint32_t)> hardwareIdWacom;
        F<void(CCZwpTabletToolV1*, zwpTabletToolV1Capability)> capability;
        F<void(CCZwpTabletToolV1*)> done;
        F<void(CCZwpTabletToolV1*)> removed;
        F<void(CCZwpTabletToolV1*, uint32_t, wl_proxy*, wl_proxy*)> proximityIn;
        F<void(CCZwpTabletToolV1*)> proximityOut;
        F<void(CCZwpTabletToolV1*, uint32_t)> down;
        F<void(CCZwpTabletToolV1*)> up;
        F<void(CCZwpTabletToolV1*, wl_fixed_t, wl_fixed_t)> motion;
        F<void(CCZwpTabletToolV1*, uint32_t)> pressure;
        F<void(CCZwpTabletToolV1*, uint32_t)> distance;
        F<void(CCZwpTabletToolV1*, int32_t, int32_t)> tilt;
        F<void(CCZwpTabletToolV1*, int32_t)> rotation;
        F<void(CCZwpTabletToolV1*, int32_t)> slider;
        F<void(CCZwpTabletToolV1*, int32_t, int32_t)> wheel;
        F<void(CCZwpTabletToolV1*, uint32_t, uint32_t, zwpTabletToolV1ButtonState)> button;
        F<void(CCZwpTabletToolV1*, uint32_t)> frame;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletV1 {
  public:
    CCZwpTabletV1(wl_proxy*);
    ~CCZwpTabletV1();


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

    void setName(F<void(CCZwpTabletV1*, const char*)> handler);
    void setId(F<void(CCZwpTabletV1*, uint32_t, uint32_t)> handler);
    void setPath(F<void(CCZwpTabletV1*, const char*)> handler);
    void setDone(F<void(CCZwpTabletV1*)> handler);
    void setRemoved(F<void(CCZwpTabletV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletV1*, const char*)> name;
        F<void(CCZwpTabletV1*, uint32_t, uint32_t)> id;
        F<void(CCZwpTabletV1*, const char*)> path;
        F<void(CCZwpTabletV1*)> done;
        F<void(CCZwpTabletV1*)> removed;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
