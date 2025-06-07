// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// tablet_v2

/*
 This protocol's authors' copyright notice is:


    Copyright 2014 © Stephen "Lyude" Chandler Paul
    Copyright 2015-2024 © Red Hat, Inc.

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

enum zwpTabletToolV2Type : uint32_t {
    ZWP_TABLET_TOOL_V2_TYPE_PEN = 320,
    ZWP_TABLET_TOOL_V2_TYPE_ERASER = 321,
    ZWP_TABLET_TOOL_V2_TYPE_BRUSH = 322,
    ZWP_TABLET_TOOL_V2_TYPE_PENCIL = 323,
    ZWP_TABLET_TOOL_V2_TYPE_AIRBRUSH = 324,
    ZWP_TABLET_TOOL_V2_TYPE_FINGER = 325,
    ZWP_TABLET_TOOL_V2_TYPE_MOUSE = 326,
    ZWP_TABLET_TOOL_V2_TYPE_LENS = 327,
};

enum zwpTabletToolV2Capability : uint32_t {
    ZWP_TABLET_TOOL_V2_CAPABILITY_TILT = 1,
    ZWP_TABLET_TOOL_V2_CAPABILITY_PRESSURE = 2,
    ZWP_TABLET_TOOL_V2_CAPABILITY_DISTANCE = 3,
    ZWP_TABLET_TOOL_V2_CAPABILITY_ROTATION = 4,
    ZWP_TABLET_TOOL_V2_CAPABILITY_SLIDER = 5,
    ZWP_TABLET_TOOL_V2_CAPABILITY_WHEEL = 6,
};

enum zwpTabletToolV2ButtonState : uint32_t {
    ZWP_TABLET_TOOL_V2_BUTTON_STATE_RELEASED = 0,
    ZWP_TABLET_TOOL_V2_BUTTON_STATE_PRESSED = 1,
};

enum zwpTabletToolV2Error : uint32_t {
    ZWP_TABLET_TOOL_V2_ERROR_ROLE = 0,
};

enum zwpTabletV2Bustype : uint32_t {
    ZWP_TABLET_V2_BUSTYPE_USB = 3,
    ZWP_TABLET_V2_BUSTYPE_BLUETOOTH = 5,
    ZWP_TABLET_V2_BUSTYPE_VIRTUAL = 6,
    ZWP_TABLET_V2_BUSTYPE_SERIAL = 17,
    ZWP_TABLET_V2_BUSTYPE_I2C = 24,
};

enum zwpTabletPadRingV2Source : uint32_t {
    ZWP_TABLET_PAD_RING_V2_SOURCE_FINGER = 1,
};

enum zwpTabletPadStripV2Source : uint32_t {
    ZWP_TABLET_PAD_STRIP_V2_SOURCE_FINGER = 1,
};

enum zwpTabletPadV2ButtonState : uint32_t {
    ZWP_TABLET_PAD_V2_BUTTON_STATE_RELEASED = 0,
    ZWP_TABLET_PAD_V2_BUTTON_STATE_PRESSED = 1,
};


class CCZwpTabletManagerV2;
class CCZwpTabletSeatV2;
class CCWlSeat;
class CCZwpTabletSeatV2;
class CCZwpTabletV2;
class CCZwpTabletToolV2;
class CCZwpTabletPadV2;
class CCZwpTabletToolV2;
class CCWlSurface;
class CCZwpTabletV2;
class CCWlSurface;
class CCZwpTabletV2;
class CCZwpTabletPadRingV2;
class CCZwpTabletPadStripV2;
class CCZwpTabletPadGroupV2;
class CCZwpTabletPadRingV2;
class CCZwpTabletPadStripV2;
class CCZwpTabletPadDialV2;
class CCZwpTabletPadV2;
class CCZwpTabletPadGroupV2;
class CCZwpTabletV2;
class CCWlSurface;
class CCWlSurface;
class CCZwpTabletPadDialV2;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_tablet_manager_v2_interface;
extern const wl_interface zwp_tablet_seat_v2_interface;
extern const wl_interface zwp_tablet_tool_v2_interface;
extern const wl_interface zwp_tablet_v2_interface;
extern const wl_interface zwp_tablet_pad_ring_v2_interface;
extern const wl_interface zwp_tablet_pad_strip_v2_interface;
extern const wl_interface zwp_tablet_pad_group_v2_interface;
extern const wl_interface zwp_tablet_pad_v2_interface;
extern const wl_interface zwp_tablet_pad_dial_v2_interface;

#endif


class CCZwpTabletManagerV2 {
  public:
    CCZwpTabletManagerV2(wl_proxy*);
    ~CCZwpTabletManagerV2();


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



class CCZwpTabletSeatV2 {
  public:
    CCZwpTabletSeatV2(wl_proxy*);
    ~CCZwpTabletSeatV2();


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

    void setTabletAdded(F<void(CCZwpTabletSeatV2*, wl_proxy*)> handler);
    void setToolAdded(F<void(CCZwpTabletSeatV2*, wl_proxy*)> handler);
    void setPadAdded(F<void(CCZwpTabletSeatV2*, wl_proxy*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletSeatV2*, wl_proxy*)> tabletAdded;
        F<void(CCZwpTabletSeatV2*, wl_proxy*)> toolAdded;
        F<void(CCZwpTabletSeatV2*, wl_proxy*)> padAdded;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletToolV2 {
  public:
    CCZwpTabletToolV2(wl_proxy*);
    ~CCZwpTabletToolV2();


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

    void setType(F<void(CCZwpTabletToolV2*, zwpTabletToolV2Type)> handler);
    void setHardwareSerial(F<void(CCZwpTabletToolV2*, uint32_t, uint32_t)> handler);
    void setHardwareIdWacom(F<void(CCZwpTabletToolV2*, uint32_t, uint32_t)> handler);
    void setCapability(F<void(CCZwpTabletToolV2*, zwpTabletToolV2Capability)> handler);
    void setDone(F<void(CCZwpTabletToolV2*)> handler);
    void setRemoved(F<void(CCZwpTabletToolV2*)> handler);
    void setProximityIn(F<void(CCZwpTabletToolV2*, uint32_t, wl_proxy*, wl_proxy*)> handler);
    void setProximityOut(F<void(CCZwpTabletToolV2*)> handler);
    void setDown(F<void(CCZwpTabletToolV2*, uint32_t)> handler);
    void setUp(F<void(CCZwpTabletToolV2*)> handler);
    void setMotion(F<void(CCZwpTabletToolV2*, wl_fixed_t, wl_fixed_t)> handler);
    void setPressure(F<void(CCZwpTabletToolV2*, uint32_t)> handler);
    void setDistance(F<void(CCZwpTabletToolV2*, uint32_t)> handler);
    void setTilt(F<void(CCZwpTabletToolV2*, wl_fixed_t, wl_fixed_t)> handler);
    void setRotation(F<void(CCZwpTabletToolV2*, wl_fixed_t)> handler);
    void setSlider(F<void(CCZwpTabletToolV2*, int32_t)> handler);
    void setWheel(F<void(CCZwpTabletToolV2*, wl_fixed_t, int32_t)> handler);
    void setButton(F<void(CCZwpTabletToolV2*, uint32_t, uint32_t, zwpTabletToolV2ButtonState)> handler);
    void setFrame(F<void(CCZwpTabletToolV2*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendSetCursor(uint32_t, wl_proxy*, int32_t, int32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletToolV2*, zwpTabletToolV2Type)> type;
        F<void(CCZwpTabletToolV2*, uint32_t, uint32_t)> hardwareSerial;
        F<void(CCZwpTabletToolV2*, uint32_t, uint32_t)> hardwareIdWacom;
        F<void(CCZwpTabletToolV2*, zwpTabletToolV2Capability)> capability;
        F<void(CCZwpTabletToolV2*)> done;
        F<void(CCZwpTabletToolV2*)> removed;
        F<void(CCZwpTabletToolV2*, uint32_t, wl_proxy*, wl_proxy*)> proximityIn;
        F<void(CCZwpTabletToolV2*)> proximityOut;
        F<void(CCZwpTabletToolV2*, uint32_t)> down;
        F<void(CCZwpTabletToolV2*)> up;
        F<void(CCZwpTabletToolV2*, wl_fixed_t, wl_fixed_t)> motion;
        F<void(CCZwpTabletToolV2*, uint32_t)> pressure;
        F<void(CCZwpTabletToolV2*, uint32_t)> distance;
        F<void(CCZwpTabletToolV2*, wl_fixed_t, wl_fixed_t)> tilt;
        F<void(CCZwpTabletToolV2*, wl_fixed_t)> rotation;
        F<void(CCZwpTabletToolV2*, int32_t)> slider;
        F<void(CCZwpTabletToolV2*, wl_fixed_t, int32_t)> wheel;
        F<void(CCZwpTabletToolV2*, uint32_t, uint32_t, zwpTabletToolV2ButtonState)> button;
        F<void(CCZwpTabletToolV2*, uint32_t)> frame;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletV2 {
  public:
    CCZwpTabletV2(wl_proxy*);
    ~CCZwpTabletV2();


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

    void setName(F<void(CCZwpTabletV2*, const char*)> handler);
    void setId(F<void(CCZwpTabletV2*, uint32_t, uint32_t)> handler);
    void setPath(F<void(CCZwpTabletV2*, const char*)> handler);
    void setDone(F<void(CCZwpTabletV2*)> handler);
    void setRemoved(F<void(CCZwpTabletV2*)> handler);
    void setBustype(F<void(CCZwpTabletV2*, zwpTabletV2Bustype)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletV2*, const char*)> name;
        F<void(CCZwpTabletV2*, uint32_t, uint32_t)> id;
        F<void(CCZwpTabletV2*, const char*)> path;
        F<void(CCZwpTabletV2*)> done;
        F<void(CCZwpTabletV2*)> removed;
        F<void(CCZwpTabletV2*, zwpTabletV2Bustype)> bustype;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletPadRingV2 {
  public:
    CCZwpTabletPadRingV2(wl_proxy*);
    ~CCZwpTabletPadRingV2();


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

    void setSource(F<void(CCZwpTabletPadRingV2*, zwpTabletPadRingV2Source)> handler);
    void setAngle(F<void(CCZwpTabletPadRingV2*, wl_fixed_t)> handler);
    void setStop(F<void(CCZwpTabletPadRingV2*)> handler);
    void setFrame(F<void(CCZwpTabletPadRingV2*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendSetFeedback(const char*, uint32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletPadRingV2*, zwpTabletPadRingV2Source)> source;
        F<void(CCZwpTabletPadRingV2*, wl_fixed_t)> angle;
        F<void(CCZwpTabletPadRingV2*)> stop;
        F<void(CCZwpTabletPadRingV2*, uint32_t)> frame;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletPadStripV2 {
  public:
    CCZwpTabletPadStripV2(wl_proxy*);
    ~CCZwpTabletPadStripV2();


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

    void setSource(F<void(CCZwpTabletPadStripV2*, zwpTabletPadRingV2Source)> handler);
    void setPosition(F<void(CCZwpTabletPadStripV2*, uint32_t)> handler);
    void setStop(F<void(CCZwpTabletPadStripV2*)> handler);
    void setFrame(F<void(CCZwpTabletPadStripV2*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendSetFeedback(const char*, uint32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletPadStripV2*, zwpTabletPadRingV2Source)> source;
        F<void(CCZwpTabletPadStripV2*, uint32_t)> position;
        F<void(CCZwpTabletPadStripV2*)> stop;
        F<void(CCZwpTabletPadStripV2*, uint32_t)> frame;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletPadGroupV2 {
  public:
    CCZwpTabletPadGroupV2(wl_proxy*);
    ~CCZwpTabletPadGroupV2();


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

    void setButtons(F<void(CCZwpTabletPadGroupV2*, wl_array*)> handler);
    void setRing(F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> handler);
    void setStrip(F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> handler);
    void setModes(F<void(CCZwpTabletPadGroupV2*, uint32_t)> handler);
    void setDone(F<void(CCZwpTabletPadGroupV2*)> handler);
    void setModeSwitch(F<void(CCZwpTabletPadGroupV2*, uint32_t, uint32_t, uint32_t)> handler);
    void setDial(F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletPadGroupV2*, wl_array*)> buttons;
        F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> ring;
        F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> strip;
        F<void(CCZwpTabletPadGroupV2*, uint32_t)> modes;
        F<void(CCZwpTabletPadGroupV2*)> done;
        F<void(CCZwpTabletPadGroupV2*, uint32_t, uint32_t, uint32_t)> modeSwitch;
        F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> dial;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletPadV2 {
  public:
    CCZwpTabletPadV2(wl_proxy*);
    ~CCZwpTabletPadV2();


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

    void setGroup(F<void(CCZwpTabletPadV2*, wl_proxy*)> handler);
    void setPath(F<void(CCZwpTabletPadV2*, const char*)> handler);
    void setButtons(F<void(CCZwpTabletPadV2*, uint32_t)> handler);
    void setDone(F<void(CCZwpTabletPadV2*)> handler);
    void setButton(F<void(CCZwpTabletPadV2*, uint32_t, uint32_t, zwpTabletToolV2ButtonState)> handler);
    void setEnter(F<void(CCZwpTabletPadV2*, uint32_t, wl_proxy*, wl_proxy*)> handler);
    void setLeave(F<void(CCZwpTabletPadV2*, uint32_t, wl_proxy*)> handler);
    void setRemoved(F<void(CCZwpTabletPadV2*)> handler);

    // --------------- Events --------------- //

    void sendSetFeedback(uint32_t, const char*, uint32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletPadV2*, wl_proxy*)> group;
        F<void(CCZwpTabletPadV2*, const char*)> path;
        F<void(CCZwpTabletPadV2*, uint32_t)> buttons;
        F<void(CCZwpTabletPadV2*)> done;
        F<void(CCZwpTabletPadV2*, uint32_t, uint32_t, zwpTabletToolV2ButtonState)> button;
        F<void(CCZwpTabletPadV2*, uint32_t, wl_proxy*, wl_proxy*)> enter;
        F<void(CCZwpTabletPadV2*, uint32_t, wl_proxy*)> leave;
        F<void(CCZwpTabletPadV2*)> removed;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTabletPadDialV2 {
  public:
    CCZwpTabletPadDialV2(wl_proxy*);
    ~CCZwpTabletPadDialV2();


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

    void setDelta(F<void(CCZwpTabletPadDialV2*, int32_t)> handler);
    void setFrame(F<void(CCZwpTabletPadDialV2*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendSetFeedback(const char*, uint32_t);
    void sendDestroy();

  private:
    struct {
        F<void(CCZwpTabletPadDialV2*, int32_t)> delta;
        F<void(CCZwpTabletPadDialV2*, uint32_t)> frame;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
