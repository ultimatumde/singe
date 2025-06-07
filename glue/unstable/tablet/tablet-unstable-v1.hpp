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
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;

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


class CZwpTabletManagerV1;
class CZwpTabletSeatV1;
class CWlSeat;
class CZwpTabletSeatV1;
class CZwpTabletV1;
class CZwpTabletToolV1;
class CZwpTabletToolV1;
class CWlSurface;
class CZwpTabletV1;
class CWlSurface;
class CZwpTabletV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_tablet_manager_v1_interface;
extern const wl_interface zwp_tablet_seat_v1_interface;
extern const wl_interface zwp_tablet_tool_v1_interface;
extern const wl_interface zwp_tablet_v1_interface;

#endif

struct CZwpTabletManagerV1DestroyWrapper {
    wl_listener listener;
    CZwpTabletManagerV1* parent = nullptr;
};
            

class CZwpTabletManagerV1 {
  public:
    CZwpTabletManagerV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpTabletManagerV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpTabletManagerV1*)> handler) {
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

    void setGetTabletSeat(F<void(CZwpTabletManagerV1*, uint32_t, wl_resource*)> handler);
    void setDestroy(F<void(CZwpTabletManagerV1*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZwpTabletManagerV1*, uint32_t, wl_resource*)> getTabletSeat;
        F<void(CZwpTabletManagerV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CZwpTabletManagerV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpTabletManagerV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpTabletSeatV1DestroyWrapper {
    wl_listener listener;
    CZwpTabletSeatV1* parent = nullptr;
};
            

class CZwpTabletSeatV1 {
  public:
    CZwpTabletSeatV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpTabletSeatV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpTabletSeatV1*)> handler) {
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

    void setDestroy(F<void(CZwpTabletSeatV1*)> handler);

    // --------------- Events --------------- //

    void sendTabletAdded(CZwpTabletV1*);
    void sendToolAdded(CZwpTabletToolV1*);
    void sendTabletAddedRaw(CZwpTabletV1*);
    void sendToolAddedRaw(CZwpTabletToolV1*);

  private:
    struct {
        F<void(CZwpTabletSeatV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CZwpTabletSeatV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpTabletSeatV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpTabletToolV1DestroyWrapper {
    wl_listener listener;
    CZwpTabletToolV1* parent = nullptr;
};
            

class CZwpTabletToolV1 {
  public:
    CZwpTabletToolV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpTabletToolV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpTabletToolV1*)> handler) {
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

    void setSetCursor(F<void(CZwpTabletToolV1*, uint32_t, wl_resource*, int32_t, int32_t)> handler);
    void setDestroy(F<void(CZwpTabletToolV1*)> handler);

    // --------------- Events --------------- //

    void sendType(zwpTabletToolV1Type);
    void sendHardwareSerial(uint32_t, uint32_t);
    void sendHardwareIdWacom(uint32_t, uint32_t);
    void sendCapability(zwpTabletToolV1Capability);
    void sendDone();
    void sendRemoved();
    void sendProximityIn(uint32_t, CZwpTabletV1*, wl_resource*);
    void sendProximityOut();
    void sendDown(uint32_t);
    void sendUp();
    void sendMotion(wl_fixed_t, wl_fixed_t);
    void sendPressure(uint32_t);
    void sendDistance(uint32_t);
    void sendTilt(int32_t, int32_t);
    void sendRotation(int32_t);
    void sendSlider(int32_t);
    void sendWheel(int32_t, int32_t);
    void sendButton(uint32_t, uint32_t, zwpTabletToolV1ButtonState);
    void sendFrame(uint32_t);
    void sendTypeRaw(zwpTabletToolV1Type);
    void sendHardwareSerialRaw(uint32_t, uint32_t);
    void sendHardwareIdWacomRaw(uint32_t, uint32_t);
    void sendCapabilityRaw(zwpTabletToolV1Capability);
    void sendDoneRaw();
    void sendRemovedRaw();
    void sendProximityInRaw(uint32_t, wl_resource*, wl_resource*);
    void sendProximityOutRaw();
    void sendDownRaw(uint32_t);
    void sendUpRaw();
    void sendMotionRaw(wl_fixed_t, wl_fixed_t);
    void sendPressureRaw(uint32_t);
    void sendDistanceRaw(uint32_t);
    void sendTiltRaw(int32_t, int32_t);
    void sendRotationRaw(int32_t);
    void sendSliderRaw(int32_t);
    void sendWheelRaw(int32_t, int32_t);
    void sendButtonRaw(uint32_t, uint32_t, zwpTabletToolV1ButtonState);
    void sendFrameRaw(uint32_t);

  private:
    struct {
        F<void(CZwpTabletToolV1*, uint32_t, wl_resource*, int32_t, int32_t)> setCursor;
        F<void(CZwpTabletToolV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CZwpTabletToolV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpTabletToolV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpTabletV1DestroyWrapper {
    wl_listener listener;
    CZwpTabletV1* parent = nullptr;
};
            

class CZwpTabletV1 {
  public:
    CZwpTabletV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpTabletV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpTabletV1*)> handler) {
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

    void setDestroy(F<void(CZwpTabletV1*)> handler);

    // --------------- Events --------------- //

    void sendName(const char*);
    void sendId(uint32_t, uint32_t);
    void sendPath(const char*);
    void sendDone();
    void sendRemoved();
    void sendNameRaw(const char*);
    void sendIdRaw(uint32_t, uint32_t);
    void sendPathRaw(const char*);
    void sendDoneRaw();
    void sendRemovedRaw();

  private:
    struct {
        F<void(CZwpTabletV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CZwpTabletV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpTabletV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
