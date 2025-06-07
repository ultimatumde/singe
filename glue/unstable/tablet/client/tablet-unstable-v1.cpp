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

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "tablet-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_tablet_manager_v1_interface;
extern const wl_interface zwp_tablet_seat_v1_interface;
extern const wl_interface zwp_tablet_tool_v1_interface;
extern const wl_interface zwp_tablet_v1_interface;
extern const wl_interface wl_seat_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCZwpTabletManagerV1VTable[] = {
};

wl_proxy* CCZwpTabletManagerV1::sendGetTabletSeat(wl_proxy* seat) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &zwp_tablet_seat_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, seat);

    return proxy;
}

void CCZwpTabletManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletManagerV1GetTabletSeatTypes[] = {
    &zwp_tablet_seat_v1_interface,
    &wl_seat_interface,
};

static const wl_message _CZwpTabletManagerV1Requests[] = {
    { "get_tablet_seat", "no", _CZwpTabletManagerV1GetTabletSeatTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface zwp_tablet_manager_v1_interface = {
    "zwp_tablet_manager_v1", 1,
    2, _CZwpTabletManagerV1Requests,
    0, nullptr,
};

CCZwpTabletManagerV1::CCZwpTabletManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletManagerV1VTable, this);
}

CCZwpTabletManagerV1::~CCZwpTabletManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CZwpTabletSeatV1TabletAdded(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCZwpTabletSeatV1*)data;
    if (PO && PO->requests.tabletAdded)
        PO->requests.tabletAdded(PO, id);
}

static void _CZwpTabletSeatV1ToolAdded(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCZwpTabletSeatV1*)data;
    if (PO && PO->requests.toolAdded)
        PO->requests.toolAdded(PO, id);
}

static const void* _CCZwpTabletSeatV1VTable[] = {
    (void*)_CZwpTabletSeatV1TabletAdded,
    (void*)_CZwpTabletSeatV1ToolAdded,
};

void CCZwpTabletSeatV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletSeatV1TabletAddedTypes[] = {
    &zwp_tablet_v1_interface,
};
static const wl_interface* _CZwpTabletSeatV1ToolAddedTypes[] = {
    &zwp_tablet_tool_v1_interface,
};

static const wl_message _CZwpTabletSeatV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletSeatV1Events[] = {
    { "tablet_added", "n", _CZwpTabletSeatV1TabletAddedTypes + 0},
    { "tool_added", "n", _CZwpTabletSeatV1ToolAddedTypes + 0},
};

const wl_interface zwp_tablet_seat_v1_interface = {
    "zwp_tablet_seat_v1", 1,
    1, _CZwpTabletSeatV1Requests,
    2, _CZwpTabletSeatV1Events,
};

CCZwpTabletSeatV1::CCZwpTabletSeatV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletSeatV1VTable, this);
}

CCZwpTabletSeatV1::~CCZwpTabletSeatV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletSeatV1::setTabletAdded(F<void(CCZwpTabletSeatV1*, wl_proxy*)> handler) {
    requests.tabletAdded = handler;
}

void CCZwpTabletSeatV1::setToolAdded(F<void(CCZwpTabletSeatV1*, wl_proxy*)> handler) {
    requests.toolAdded = handler;
}

static void _CZwpTabletToolV1Type(void* data, void* resource, zwpTabletToolV1Type tool_type) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.type)
        PO->requests.type(PO, tool_type);
}

static void _CZwpTabletToolV1HardwareSerial(void* data, void* resource, uint32_t hardware_serial_hi, uint32_t hardware_serial_lo) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.hardwareSerial)
        PO->requests.hardwareSerial(PO, hardware_serial_hi, hardware_serial_lo);
}

static void _CZwpTabletToolV1HardwareIdWacom(void* data, void* resource, uint32_t hardware_id_hi, uint32_t hardware_id_lo) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.hardwareIdWacom)
        PO->requests.hardwareIdWacom(PO, hardware_id_hi, hardware_id_lo);
}

static void _CZwpTabletToolV1Capability(void* data, void* resource, zwpTabletToolV1Capability capability) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.capability)
        PO->requests.capability(PO, capability);
}

static void _CZwpTabletToolV1Done(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CZwpTabletToolV1Removed(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.removed)
        PO->requests.removed(PO);
}

static void _CZwpTabletToolV1ProximityIn(void* data, void* resource, uint32_t serial, wl_proxy* tablet, wl_proxy* surface) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.proximityIn)
        PO->requests.proximityIn(PO, serial, tablet, surface);
}

static void _CZwpTabletToolV1ProximityOut(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.proximityOut)
        PO->requests.proximityOut(PO);
}

static void _CZwpTabletToolV1Down(void* data, void* resource, uint32_t serial) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.down)
        PO->requests.down(PO, serial);
}

static void _CZwpTabletToolV1Up(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.up)
        PO->requests.up(PO);
}

static void _CZwpTabletToolV1Motion(void* data, void* resource, wl_fixed_t x, wl_fixed_t y) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.motion)
        PO->requests.motion(PO, x, y);
}

static void _CZwpTabletToolV1Pressure(void* data, void* resource, uint32_t pressure) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.pressure)
        PO->requests.pressure(PO, pressure);
}

static void _CZwpTabletToolV1Distance(void* data, void* resource, uint32_t distance) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.distance)
        PO->requests.distance(PO, distance);
}

static void _CZwpTabletToolV1Tilt(void* data, void* resource, int32_t tilt_x, int32_t tilt_y) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.tilt)
        PO->requests.tilt(PO, tilt_x, tilt_y);
}

static void _CZwpTabletToolV1Rotation(void* data, void* resource, int32_t degrees) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.rotation)
        PO->requests.rotation(PO, degrees);
}

static void _CZwpTabletToolV1Slider(void* data, void* resource, int32_t position) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.slider)
        PO->requests.slider(PO, position);
}

static void _CZwpTabletToolV1Wheel(void* data, void* resource, int32_t degrees, int32_t clicks) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.wheel)
        PO->requests.wheel(PO, degrees, clicks);
}

static void _CZwpTabletToolV1Button(void* data, void* resource, uint32_t serial, uint32_t button, zwpTabletToolV1ButtonState state) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.button)
        PO->requests.button(PO, serial, button, state);
}

static void _CZwpTabletToolV1Frame(void* data, void* resource, uint32_t time) {
    const auto PO = (CCZwpTabletToolV1*)data;
    if (PO && PO->requests.frame)
        PO->requests.frame(PO, time);
}

static const void* _CCZwpTabletToolV1VTable[] = {
    (void*)_CZwpTabletToolV1Type,
    (void*)_CZwpTabletToolV1HardwareSerial,
    (void*)_CZwpTabletToolV1HardwareIdWacom,
    (void*)_CZwpTabletToolV1Capability,
    (void*)_CZwpTabletToolV1Done,
    (void*)_CZwpTabletToolV1Removed,
    (void*)_CZwpTabletToolV1ProximityIn,
    (void*)_CZwpTabletToolV1ProximityOut,
    (void*)_CZwpTabletToolV1Down,
    (void*)_CZwpTabletToolV1Up,
    (void*)_CZwpTabletToolV1Motion,
    (void*)_CZwpTabletToolV1Pressure,
    (void*)_CZwpTabletToolV1Distance,
    (void*)_CZwpTabletToolV1Tilt,
    (void*)_CZwpTabletToolV1Rotation,
    (void*)_CZwpTabletToolV1Slider,
    (void*)_CZwpTabletToolV1Wheel,
    (void*)_CZwpTabletToolV1Button,
    (void*)_CZwpTabletToolV1Frame,
};

void CCZwpTabletToolV1::sendSetCursor(uint32_t serial, wl_proxy* surface, int32_t hotspot_x, int32_t hotspot_y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, surface, hotspot_x, hotspot_y);
    proxy;
}

void CCZwpTabletToolV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletToolV1SetCursorTypes[] = {
    nullptr,
    &wl_surface_interface,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1TypeTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1HardwareSerialTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1HardwareIdWacomTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1CapabilityTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1ProximityInTypes[] = {
    nullptr,
    &zwp_tablet_v1_interface,
    &wl_surface_interface,
};
static const wl_interface* _CZwpTabletToolV1DownTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1MotionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1PressureTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1DistanceTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1TiltTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1RotationTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1SliderTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1WheelTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1ButtonTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV1FrameTypes[] = {
    nullptr,
};

static const wl_message _CZwpTabletToolV1Requests[] = {
    { "set_cursor", "u?oii", _CZwpTabletToolV1SetCursorTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletToolV1Events[] = {
    { "type", "u", _CZwpTabletToolV1TypeTypes + 0},
    { "hardware_serial", "uu", _CZwpTabletToolV1HardwareSerialTypes + 0},
    { "hardware_id_wacom", "uu", _CZwpTabletToolV1HardwareIdWacomTypes + 0},
    { "capability", "u", _CZwpTabletToolV1CapabilityTypes + 0},
    { "done", "", dummyTypes + 0},
    { "removed", "", dummyTypes + 0},
    { "proximity_in", "uoo", _CZwpTabletToolV1ProximityInTypes + 0},
    { "proximity_out", "", dummyTypes + 0},
    { "down", "u", _CZwpTabletToolV1DownTypes + 0},
    { "up", "", dummyTypes + 0},
    { "motion", "ff", _CZwpTabletToolV1MotionTypes + 0},
    { "pressure", "u", _CZwpTabletToolV1PressureTypes + 0},
    { "distance", "u", _CZwpTabletToolV1DistanceTypes + 0},
    { "tilt", "ii", _CZwpTabletToolV1TiltTypes + 0},
    { "rotation", "i", _CZwpTabletToolV1RotationTypes + 0},
    { "slider", "i", _CZwpTabletToolV1SliderTypes + 0},
    { "wheel", "ii", _CZwpTabletToolV1WheelTypes + 0},
    { "button", "uuu", _CZwpTabletToolV1ButtonTypes + 0},
    { "frame", "u", _CZwpTabletToolV1FrameTypes + 0},
};

const wl_interface zwp_tablet_tool_v1_interface = {
    "zwp_tablet_tool_v1", 1,
    2, _CZwpTabletToolV1Requests,
    19, _CZwpTabletToolV1Events,
};

CCZwpTabletToolV1::CCZwpTabletToolV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletToolV1VTable, this);
}

CCZwpTabletToolV1::~CCZwpTabletToolV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletToolV1::setType(F<void(CCZwpTabletToolV1*, zwpTabletToolV1Type)> handler) {
    requests.type = handler;
}

void CCZwpTabletToolV1::setHardwareSerial(F<void(CCZwpTabletToolV1*, uint32_t, uint32_t)> handler) {
    requests.hardwareSerial = handler;
}

void CCZwpTabletToolV1::setHardwareIdWacom(F<void(CCZwpTabletToolV1*, uint32_t, uint32_t)> handler) {
    requests.hardwareIdWacom = handler;
}

void CCZwpTabletToolV1::setCapability(F<void(CCZwpTabletToolV1*, zwpTabletToolV1Capability)> handler) {
    requests.capability = handler;
}

void CCZwpTabletToolV1::setDone(F<void(CCZwpTabletToolV1*)> handler) {
    requests.done = handler;
}

void CCZwpTabletToolV1::setRemoved(F<void(CCZwpTabletToolV1*)> handler) {
    requests.removed = handler;
}

void CCZwpTabletToolV1::setProximityIn(F<void(CCZwpTabletToolV1*, uint32_t, wl_proxy*, wl_proxy*)> handler) {
    requests.proximityIn = handler;
}

void CCZwpTabletToolV1::setProximityOut(F<void(CCZwpTabletToolV1*)> handler) {
    requests.proximityOut = handler;
}

void CCZwpTabletToolV1::setDown(F<void(CCZwpTabletToolV1*, uint32_t)> handler) {
    requests.down = handler;
}

void CCZwpTabletToolV1::setUp(F<void(CCZwpTabletToolV1*)> handler) {
    requests.up = handler;
}

void CCZwpTabletToolV1::setMotion(F<void(CCZwpTabletToolV1*, wl_fixed_t, wl_fixed_t)> handler) {
    requests.motion = handler;
}

void CCZwpTabletToolV1::setPressure(F<void(CCZwpTabletToolV1*, uint32_t)> handler) {
    requests.pressure = handler;
}

void CCZwpTabletToolV1::setDistance(F<void(CCZwpTabletToolV1*, uint32_t)> handler) {
    requests.distance = handler;
}

void CCZwpTabletToolV1::setTilt(F<void(CCZwpTabletToolV1*, int32_t, int32_t)> handler) {
    requests.tilt = handler;
}

void CCZwpTabletToolV1::setRotation(F<void(CCZwpTabletToolV1*, int32_t)> handler) {
    requests.rotation = handler;
}

void CCZwpTabletToolV1::setSlider(F<void(CCZwpTabletToolV1*, int32_t)> handler) {
    requests.slider = handler;
}

void CCZwpTabletToolV1::setWheel(F<void(CCZwpTabletToolV1*, int32_t, int32_t)> handler) {
    requests.wheel = handler;
}

void CCZwpTabletToolV1::setButton(F<void(CCZwpTabletToolV1*, uint32_t, uint32_t, zwpTabletToolV1ButtonState)> handler) {
    requests.button = handler;
}

void CCZwpTabletToolV1::setFrame(F<void(CCZwpTabletToolV1*, uint32_t)> handler) {
    requests.frame = handler;
}

static void _CZwpTabletV1Name(void* data, void* resource, const char* name) {
    const auto PO = (CCZwpTabletV1*)data;
    if (PO && PO->requests.name)
        PO->requests.name(PO, name);
}

static void _CZwpTabletV1Id(void* data, void* resource, uint32_t vid, uint32_t pid) {
    const auto PO = (CCZwpTabletV1*)data;
    if (PO && PO->requests.id)
        PO->requests.id(PO, vid, pid);
}

static void _CZwpTabletV1Path(void* data, void* resource, const char* path) {
    const auto PO = (CCZwpTabletV1*)data;
    if (PO && PO->requests.path)
        PO->requests.path(PO, path);
}

static void _CZwpTabletV1Done(void* data, void* resource) {
    const auto PO = (CCZwpTabletV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CZwpTabletV1Removed(void* data, void* resource) {
    const auto PO = (CCZwpTabletV1*)data;
    if (PO && PO->requests.removed)
        PO->requests.removed(PO);
}

static const void* _CCZwpTabletV1VTable[] = {
    (void*)_CZwpTabletV1Name,
    (void*)_CZwpTabletV1Id,
    (void*)_CZwpTabletV1Path,
    (void*)_CZwpTabletV1Done,
    (void*)_CZwpTabletV1Removed,
};

void CCZwpTabletV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletV1NameTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletV1IdTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletV1PathTypes[] = {
    nullptr,
};

static const wl_message _CZwpTabletV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletV1Events[] = {
    { "name", "s", _CZwpTabletV1NameTypes + 0},
    { "id", "uu", _CZwpTabletV1IdTypes + 0},
    { "path", "s", _CZwpTabletV1PathTypes + 0},
    { "done", "", dummyTypes + 0},
    { "removed", "", dummyTypes + 0},
};

const wl_interface zwp_tablet_v1_interface = {
    "zwp_tablet_v1", 1,
    1, _CZwpTabletV1Requests,
    5, _CZwpTabletV1Events,
};

CCZwpTabletV1::CCZwpTabletV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletV1VTable, this);
}

CCZwpTabletV1::~CCZwpTabletV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletV1::setName(F<void(CCZwpTabletV1*, const char*)> handler) {
    requests.name = handler;
}

void CCZwpTabletV1::setId(F<void(CCZwpTabletV1*, uint32_t, uint32_t)> handler) {
    requests.id = handler;
}

void CCZwpTabletV1::setPath(F<void(CCZwpTabletV1*, const char*)> handler) {
    requests.path = handler;
}

void CCZwpTabletV1::setDone(F<void(CCZwpTabletV1*)> handler) {
    requests.done = handler;
}

void CCZwpTabletV1::setRemoved(F<void(CCZwpTabletV1*)> handler) {
    requests.removed = handler;
}

#undef F
