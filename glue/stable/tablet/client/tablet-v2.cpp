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

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "tablet-v2.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_tablet_manager_v2_interface;
extern const wl_interface zwp_tablet_seat_v2_interface;
extern const wl_interface zwp_tablet_tool_v2_interface;
extern const wl_interface zwp_tablet_v2_interface;
extern const wl_interface zwp_tablet_pad_ring_v2_interface;
extern const wl_interface zwp_tablet_pad_strip_v2_interface;
extern const wl_interface zwp_tablet_pad_group_v2_interface;
extern const wl_interface zwp_tablet_pad_v2_interface;
extern const wl_interface zwp_tablet_pad_dial_v2_interface;
extern const wl_interface wl_seat_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCZwpTabletManagerV2VTable[] = {
};

wl_proxy* CCZwpTabletManagerV2::sendGetTabletSeat(wl_proxy* seat) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &zwp_tablet_seat_v2_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, seat);

    return proxy;
}

void CCZwpTabletManagerV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletManagerV2GetTabletSeatTypes[] = {
    &zwp_tablet_seat_v2_interface,
    &wl_seat_interface,
};

static const wl_message _CZwpTabletManagerV2Requests[] = {
    { "get_tablet_seat", "no", _CZwpTabletManagerV2GetTabletSeatTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface zwp_tablet_manager_v2_interface = {
    "zwp_tablet_manager_v2", 2,
    2, _CZwpTabletManagerV2Requests,
    0, nullptr,
};

CCZwpTabletManagerV2::CCZwpTabletManagerV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletManagerV2VTable, this);
}

CCZwpTabletManagerV2::~CCZwpTabletManagerV2() {
    if (!destroyed)
        sendDestroy();
}

static void _CZwpTabletSeatV2TabletAdded(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCZwpTabletSeatV2*)data;
    if (PO && PO->requests.tabletAdded)
        PO->requests.tabletAdded(PO, id);
}

static void _CZwpTabletSeatV2ToolAdded(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCZwpTabletSeatV2*)data;
    if (PO && PO->requests.toolAdded)
        PO->requests.toolAdded(PO, id);
}

static void _CZwpTabletSeatV2PadAdded(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCZwpTabletSeatV2*)data;
    if (PO && PO->requests.padAdded)
        PO->requests.padAdded(PO, id);
}

static const void* _CCZwpTabletSeatV2VTable[] = {
    (void*)_CZwpTabletSeatV2TabletAdded,
    (void*)_CZwpTabletSeatV2ToolAdded,
    (void*)_CZwpTabletSeatV2PadAdded,
};

void CCZwpTabletSeatV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletSeatV2TabletAddedTypes[] = {
    &zwp_tablet_v2_interface,
};
static const wl_interface* _CZwpTabletSeatV2ToolAddedTypes[] = {
    &zwp_tablet_tool_v2_interface,
};
static const wl_interface* _CZwpTabletSeatV2PadAddedTypes[] = {
    &zwp_tablet_pad_v2_interface,
};

static const wl_message _CZwpTabletSeatV2Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletSeatV2Events[] = {
    { "tablet_added", "n", _CZwpTabletSeatV2TabletAddedTypes + 0},
    { "tool_added", "n", _CZwpTabletSeatV2ToolAddedTypes + 0},
    { "pad_added", "n", _CZwpTabletSeatV2PadAddedTypes + 0},
};

const wl_interface zwp_tablet_seat_v2_interface = {
    "zwp_tablet_seat_v2", 2,
    1, _CZwpTabletSeatV2Requests,
    3, _CZwpTabletSeatV2Events,
};

CCZwpTabletSeatV2::CCZwpTabletSeatV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletSeatV2VTable, this);
}

CCZwpTabletSeatV2::~CCZwpTabletSeatV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletSeatV2::setTabletAdded(F<void(CCZwpTabletSeatV2*, wl_proxy*)> handler) {
    requests.tabletAdded = handler;
}

void CCZwpTabletSeatV2::setToolAdded(F<void(CCZwpTabletSeatV2*, wl_proxy*)> handler) {
    requests.toolAdded = handler;
}

void CCZwpTabletSeatV2::setPadAdded(F<void(CCZwpTabletSeatV2*, wl_proxy*)> handler) {
    requests.padAdded = handler;
}

static void _CZwpTabletToolV2Type(void* data, void* resource, zwpTabletToolV2Type tool_type) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.type)
        PO->requests.type(PO, tool_type);
}

static void _CZwpTabletToolV2HardwareSerial(void* data, void* resource, uint32_t hardware_serial_hi, uint32_t hardware_serial_lo) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.hardwareSerial)
        PO->requests.hardwareSerial(PO, hardware_serial_hi, hardware_serial_lo);
}

static void _CZwpTabletToolV2HardwareIdWacom(void* data, void* resource, uint32_t hardware_id_hi, uint32_t hardware_id_lo) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.hardwareIdWacom)
        PO->requests.hardwareIdWacom(PO, hardware_id_hi, hardware_id_lo);
}

static void _CZwpTabletToolV2Capability(void* data, void* resource, zwpTabletToolV2Capability capability) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.capability)
        PO->requests.capability(PO, capability);
}

static void _CZwpTabletToolV2Done(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CZwpTabletToolV2Removed(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.removed)
        PO->requests.removed(PO);
}

static void _CZwpTabletToolV2ProximityIn(void* data, void* resource, uint32_t serial, wl_proxy* tablet, wl_proxy* surface) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.proximityIn)
        PO->requests.proximityIn(PO, serial, tablet, surface);
}

static void _CZwpTabletToolV2ProximityOut(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.proximityOut)
        PO->requests.proximityOut(PO);
}

static void _CZwpTabletToolV2Down(void* data, void* resource, uint32_t serial) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.down)
        PO->requests.down(PO, serial);
}

static void _CZwpTabletToolV2Up(void* data, void* resource) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.up)
        PO->requests.up(PO);
}

static void _CZwpTabletToolV2Motion(void* data, void* resource, wl_fixed_t x, wl_fixed_t y) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.motion)
        PO->requests.motion(PO, x, y);
}

static void _CZwpTabletToolV2Pressure(void* data, void* resource, uint32_t pressure) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.pressure)
        PO->requests.pressure(PO, pressure);
}

static void _CZwpTabletToolV2Distance(void* data, void* resource, uint32_t distance) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.distance)
        PO->requests.distance(PO, distance);
}

static void _CZwpTabletToolV2Tilt(void* data, void* resource, wl_fixed_t tilt_x, wl_fixed_t tilt_y) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.tilt)
        PO->requests.tilt(PO, tilt_x, tilt_y);
}

static void _CZwpTabletToolV2Rotation(void* data, void* resource, wl_fixed_t degrees) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.rotation)
        PO->requests.rotation(PO, degrees);
}

static void _CZwpTabletToolV2Slider(void* data, void* resource, int32_t position) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.slider)
        PO->requests.slider(PO, position);
}

static void _CZwpTabletToolV2Wheel(void* data, void* resource, wl_fixed_t degrees, int32_t clicks) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.wheel)
        PO->requests.wheel(PO, degrees, clicks);
}

static void _CZwpTabletToolV2Button(void* data, void* resource, uint32_t serial, uint32_t button, zwpTabletToolV2ButtonState state) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.button)
        PO->requests.button(PO, serial, button, state);
}

static void _CZwpTabletToolV2Frame(void* data, void* resource, uint32_t time) {
    const auto PO = (CCZwpTabletToolV2*)data;
    if (PO && PO->requests.frame)
        PO->requests.frame(PO, time);
}

static const void* _CCZwpTabletToolV2VTable[] = {
    (void*)_CZwpTabletToolV2Type,
    (void*)_CZwpTabletToolV2HardwareSerial,
    (void*)_CZwpTabletToolV2HardwareIdWacom,
    (void*)_CZwpTabletToolV2Capability,
    (void*)_CZwpTabletToolV2Done,
    (void*)_CZwpTabletToolV2Removed,
    (void*)_CZwpTabletToolV2ProximityIn,
    (void*)_CZwpTabletToolV2ProximityOut,
    (void*)_CZwpTabletToolV2Down,
    (void*)_CZwpTabletToolV2Up,
    (void*)_CZwpTabletToolV2Motion,
    (void*)_CZwpTabletToolV2Pressure,
    (void*)_CZwpTabletToolV2Distance,
    (void*)_CZwpTabletToolV2Tilt,
    (void*)_CZwpTabletToolV2Rotation,
    (void*)_CZwpTabletToolV2Slider,
    (void*)_CZwpTabletToolV2Wheel,
    (void*)_CZwpTabletToolV2Button,
    (void*)_CZwpTabletToolV2Frame,
};

void CCZwpTabletToolV2::sendSetCursor(uint32_t serial, wl_proxy* surface, int32_t hotspot_x, int32_t hotspot_y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, surface, hotspot_x, hotspot_y);
    proxy;
}

void CCZwpTabletToolV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletToolV2SetCursorTypes[] = {
    nullptr,
    &wl_surface_interface,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2TypeTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2HardwareSerialTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2HardwareIdWacomTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2CapabilityTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2ProximityInTypes[] = {
    nullptr,
    &zwp_tablet_v2_interface,
    &wl_surface_interface,
};
static const wl_interface* _CZwpTabletToolV2DownTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2MotionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2PressureTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2DistanceTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2TiltTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2RotationTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2SliderTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2WheelTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2ButtonTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletToolV2FrameTypes[] = {
    nullptr,
};

static const wl_message _CZwpTabletToolV2Requests[] = {
    { "set_cursor", "u?oii", _CZwpTabletToolV2SetCursorTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletToolV2Events[] = {
    { "type", "u", _CZwpTabletToolV2TypeTypes + 0},
    { "hardware_serial", "uu", _CZwpTabletToolV2HardwareSerialTypes + 0},
    { "hardware_id_wacom", "uu", _CZwpTabletToolV2HardwareIdWacomTypes + 0},
    { "capability", "u", _CZwpTabletToolV2CapabilityTypes + 0},
    { "done", "", dummyTypes + 0},
    { "removed", "", dummyTypes + 0},
    { "proximity_in", "uoo", _CZwpTabletToolV2ProximityInTypes + 0},
    { "proximity_out", "", dummyTypes + 0},
    { "down", "u", _CZwpTabletToolV2DownTypes + 0},
    { "up", "", dummyTypes + 0},
    { "motion", "ff", _CZwpTabletToolV2MotionTypes + 0},
    { "pressure", "u", _CZwpTabletToolV2PressureTypes + 0},
    { "distance", "u", _CZwpTabletToolV2DistanceTypes + 0},
    { "tilt", "ff", _CZwpTabletToolV2TiltTypes + 0},
    { "rotation", "f", _CZwpTabletToolV2RotationTypes + 0},
    { "slider", "i", _CZwpTabletToolV2SliderTypes + 0},
    { "wheel", "fi", _CZwpTabletToolV2WheelTypes + 0},
    { "button", "uuu", _CZwpTabletToolV2ButtonTypes + 0},
    { "frame", "u", _CZwpTabletToolV2FrameTypes + 0},
};

const wl_interface zwp_tablet_tool_v2_interface = {
    "zwp_tablet_tool_v2", 2,
    2, _CZwpTabletToolV2Requests,
    19, _CZwpTabletToolV2Events,
};

CCZwpTabletToolV2::CCZwpTabletToolV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletToolV2VTable, this);
}

CCZwpTabletToolV2::~CCZwpTabletToolV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletToolV2::setType(F<void(CCZwpTabletToolV2*, zwpTabletToolV2Type)> handler) {
    requests.type = handler;
}

void CCZwpTabletToolV2::setHardwareSerial(F<void(CCZwpTabletToolV2*, uint32_t, uint32_t)> handler) {
    requests.hardwareSerial = handler;
}

void CCZwpTabletToolV2::setHardwareIdWacom(F<void(CCZwpTabletToolV2*, uint32_t, uint32_t)> handler) {
    requests.hardwareIdWacom = handler;
}

void CCZwpTabletToolV2::setCapability(F<void(CCZwpTabletToolV2*, zwpTabletToolV2Capability)> handler) {
    requests.capability = handler;
}

void CCZwpTabletToolV2::setDone(F<void(CCZwpTabletToolV2*)> handler) {
    requests.done = handler;
}

void CCZwpTabletToolV2::setRemoved(F<void(CCZwpTabletToolV2*)> handler) {
    requests.removed = handler;
}

void CCZwpTabletToolV2::setProximityIn(F<void(CCZwpTabletToolV2*, uint32_t, wl_proxy*, wl_proxy*)> handler) {
    requests.proximityIn = handler;
}

void CCZwpTabletToolV2::setProximityOut(F<void(CCZwpTabletToolV2*)> handler) {
    requests.proximityOut = handler;
}

void CCZwpTabletToolV2::setDown(F<void(CCZwpTabletToolV2*, uint32_t)> handler) {
    requests.down = handler;
}

void CCZwpTabletToolV2::setUp(F<void(CCZwpTabletToolV2*)> handler) {
    requests.up = handler;
}

void CCZwpTabletToolV2::setMotion(F<void(CCZwpTabletToolV2*, wl_fixed_t, wl_fixed_t)> handler) {
    requests.motion = handler;
}

void CCZwpTabletToolV2::setPressure(F<void(CCZwpTabletToolV2*, uint32_t)> handler) {
    requests.pressure = handler;
}

void CCZwpTabletToolV2::setDistance(F<void(CCZwpTabletToolV2*, uint32_t)> handler) {
    requests.distance = handler;
}

void CCZwpTabletToolV2::setTilt(F<void(CCZwpTabletToolV2*, wl_fixed_t, wl_fixed_t)> handler) {
    requests.tilt = handler;
}

void CCZwpTabletToolV2::setRotation(F<void(CCZwpTabletToolV2*, wl_fixed_t)> handler) {
    requests.rotation = handler;
}

void CCZwpTabletToolV2::setSlider(F<void(CCZwpTabletToolV2*, int32_t)> handler) {
    requests.slider = handler;
}

void CCZwpTabletToolV2::setWheel(F<void(CCZwpTabletToolV2*, wl_fixed_t, int32_t)> handler) {
    requests.wheel = handler;
}

void CCZwpTabletToolV2::setButton(F<void(CCZwpTabletToolV2*, uint32_t, uint32_t, zwpTabletToolV2ButtonState)> handler) {
    requests.button = handler;
}

void CCZwpTabletToolV2::setFrame(F<void(CCZwpTabletToolV2*, uint32_t)> handler) {
    requests.frame = handler;
}

static void _CZwpTabletV2Name(void* data, void* resource, const char* name) {
    const auto PO = (CCZwpTabletV2*)data;
    if (PO && PO->requests.name)
        PO->requests.name(PO, name);
}

static void _CZwpTabletV2Id(void* data, void* resource, uint32_t vid, uint32_t pid) {
    const auto PO = (CCZwpTabletV2*)data;
    if (PO && PO->requests.id)
        PO->requests.id(PO, vid, pid);
}

static void _CZwpTabletV2Path(void* data, void* resource, const char* path) {
    const auto PO = (CCZwpTabletV2*)data;
    if (PO && PO->requests.path)
        PO->requests.path(PO, path);
}

static void _CZwpTabletV2Done(void* data, void* resource) {
    const auto PO = (CCZwpTabletV2*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CZwpTabletV2Removed(void* data, void* resource) {
    const auto PO = (CCZwpTabletV2*)data;
    if (PO && PO->requests.removed)
        PO->requests.removed(PO);
}

static void _CZwpTabletV2Bustype(void* data, void* resource, zwpTabletV2Bustype bustype) {
    const auto PO = (CCZwpTabletV2*)data;
    if (PO && PO->requests.bustype)
        PO->requests.bustype(PO, bustype);
}

static const void* _CCZwpTabletV2VTable[] = {
    (void*)_CZwpTabletV2Name,
    (void*)_CZwpTabletV2Id,
    (void*)_CZwpTabletV2Path,
    (void*)_CZwpTabletV2Done,
    (void*)_CZwpTabletV2Removed,
    (void*)_CZwpTabletV2Bustype,
};

void CCZwpTabletV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletV2NameTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletV2IdTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletV2PathTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletV2BustypeTypes[] = {
    nullptr,
};

static const wl_message _CZwpTabletV2Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletV2Events[] = {
    { "name", "s", _CZwpTabletV2NameTypes + 0},
    { "id", "uu", _CZwpTabletV2IdTypes + 0},
    { "path", "s", _CZwpTabletV2PathTypes + 0},
    { "done", "", dummyTypes + 0},
    { "removed", "", dummyTypes + 0},
    { "bustype", "2u", _CZwpTabletV2BustypeTypes + 0},
};

const wl_interface zwp_tablet_v2_interface = {
    "zwp_tablet_v2", 2,
    1, _CZwpTabletV2Requests,
    6, _CZwpTabletV2Events,
};

CCZwpTabletV2::CCZwpTabletV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletV2VTable, this);
}

CCZwpTabletV2::~CCZwpTabletV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletV2::setName(F<void(CCZwpTabletV2*, const char*)> handler) {
    requests.name = handler;
}

void CCZwpTabletV2::setId(F<void(CCZwpTabletV2*, uint32_t, uint32_t)> handler) {
    requests.id = handler;
}

void CCZwpTabletV2::setPath(F<void(CCZwpTabletV2*, const char*)> handler) {
    requests.path = handler;
}

void CCZwpTabletV2::setDone(F<void(CCZwpTabletV2*)> handler) {
    requests.done = handler;
}

void CCZwpTabletV2::setRemoved(F<void(CCZwpTabletV2*)> handler) {
    requests.removed = handler;
}

void CCZwpTabletV2::setBustype(F<void(CCZwpTabletV2*, zwpTabletV2Bustype)> handler) {
    requests.bustype = handler;
}

static void _CZwpTabletPadRingV2Source(void* data, void* resource, zwpTabletPadRingV2Source source) {
    const auto PO = (CCZwpTabletPadRingV2*)data;
    if (PO && PO->requests.source)
        PO->requests.source(PO, source);
}

static void _CZwpTabletPadRingV2Angle(void* data, void* resource, wl_fixed_t degrees) {
    const auto PO = (CCZwpTabletPadRingV2*)data;
    if (PO && PO->requests.angle)
        PO->requests.angle(PO, degrees);
}

static void _CZwpTabletPadRingV2Stop(void* data, void* resource) {
    const auto PO = (CCZwpTabletPadRingV2*)data;
    if (PO && PO->requests.stop)
        PO->requests.stop(PO);
}

static void _CZwpTabletPadRingV2Frame(void* data, void* resource, uint32_t time) {
    const auto PO = (CCZwpTabletPadRingV2*)data;
    if (PO && PO->requests.frame)
        PO->requests.frame(PO, time);
}

static const void* _CCZwpTabletPadRingV2VTable[] = {
    (void*)_CZwpTabletPadRingV2Source,
    (void*)_CZwpTabletPadRingV2Angle,
    (void*)_CZwpTabletPadRingV2Stop,
    (void*)_CZwpTabletPadRingV2Frame,
};

void CCZwpTabletPadRingV2::sendSetFeedback(const char* description, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, description, serial);
    proxy;
}

void CCZwpTabletPadRingV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletPadRingV2SetFeedbackTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletPadRingV2SourceTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadRingV2AngleTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadRingV2FrameTypes[] = {
    nullptr,
};

static const wl_message _CZwpTabletPadRingV2Requests[] = {
    { "set_feedback", "su", _CZwpTabletPadRingV2SetFeedbackTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletPadRingV2Events[] = {
    { "source", "u", _CZwpTabletPadRingV2SourceTypes + 0},
    { "angle", "f", _CZwpTabletPadRingV2AngleTypes + 0},
    { "stop", "", dummyTypes + 0},
    { "frame", "u", _CZwpTabletPadRingV2FrameTypes + 0},
};

const wl_interface zwp_tablet_pad_ring_v2_interface = {
    "zwp_tablet_pad_ring_v2", 2,
    2, _CZwpTabletPadRingV2Requests,
    4, _CZwpTabletPadRingV2Events,
};

CCZwpTabletPadRingV2::CCZwpTabletPadRingV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletPadRingV2VTable, this);
}

CCZwpTabletPadRingV2::~CCZwpTabletPadRingV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletPadRingV2::setSource(F<void(CCZwpTabletPadRingV2*, zwpTabletPadRingV2Source)> handler) {
    requests.source = handler;
}

void CCZwpTabletPadRingV2::setAngle(F<void(CCZwpTabletPadRingV2*, wl_fixed_t)> handler) {
    requests.angle = handler;
}

void CCZwpTabletPadRingV2::setStop(F<void(CCZwpTabletPadRingV2*)> handler) {
    requests.stop = handler;
}

void CCZwpTabletPadRingV2::setFrame(F<void(CCZwpTabletPadRingV2*, uint32_t)> handler) {
    requests.frame = handler;
}

static void _CZwpTabletPadStripV2Source(void* data, void* resource, zwpTabletPadRingV2Source source) {
    const auto PO = (CCZwpTabletPadStripV2*)data;
    if (PO && PO->requests.source)
        PO->requests.source(PO, source);
}

static void _CZwpTabletPadStripV2Position(void* data, void* resource, uint32_t position) {
    const auto PO = (CCZwpTabletPadStripV2*)data;
    if (PO && PO->requests.position)
        PO->requests.position(PO, position);
}

static void _CZwpTabletPadStripV2Stop(void* data, void* resource) {
    const auto PO = (CCZwpTabletPadStripV2*)data;
    if (PO && PO->requests.stop)
        PO->requests.stop(PO);
}

static void _CZwpTabletPadStripV2Frame(void* data, void* resource, uint32_t time) {
    const auto PO = (CCZwpTabletPadStripV2*)data;
    if (PO && PO->requests.frame)
        PO->requests.frame(PO, time);
}

static const void* _CCZwpTabletPadStripV2VTable[] = {
    (void*)_CZwpTabletPadStripV2Source,
    (void*)_CZwpTabletPadStripV2Position,
    (void*)_CZwpTabletPadStripV2Stop,
    (void*)_CZwpTabletPadStripV2Frame,
};

void CCZwpTabletPadStripV2::sendSetFeedback(const char* description, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, description, serial);
    proxy;
}

void CCZwpTabletPadStripV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletPadStripV2SetFeedbackTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletPadStripV2SourceTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadStripV2PositionTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadStripV2FrameTypes[] = {
    nullptr,
};

static const wl_message _CZwpTabletPadStripV2Requests[] = {
    { "set_feedback", "su", _CZwpTabletPadStripV2SetFeedbackTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletPadStripV2Events[] = {
    { "source", "u", _CZwpTabletPadStripV2SourceTypes + 0},
    { "position", "u", _CZwpTabletPadStripV2PositionTypes + 0},
    { "stop", "", dummyTypes + 0},
    { "frame", "u", _CZwpTabletPadStripV2FrameTypes + 0},
};

const wl_interface zwp_tablet_pad_strip_v2_interface = {
    "zwp_tablet_pad_strip_v2", 2,
    2, _CZwpTabletPadStripV2Requests,
    4, _CZwpTabletPadStripV2Events,
};

CCZwpTabletPadStripV2::CCZwpTabletPadStripV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletPadStripV2VTable, this);
}

CCZwpTabletPadStripV2::~CCZwpTabletPadStripV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletPadStripV2::setSource(F<void(CCZwpTabletPadStripV2*, zwpTabletPadRingV2Source)> handler) {
    requests.source = handler;
}

void CCZwpTabletPadStripV2::setPosition(F<void(CCZwpTabletPadStripV2*, uint32_t)> handler) {
    requests.position = handler;
}

void CCZwpTabletPadStripV2::setStop(F<void(CCZwpTabletPadStripV2*)> handler) {
    requests.stop = handler;
}

void CCZwpTabletPadStripV2::setFrame(F<void(CCZwpTabletPadStripV2*, uint32_t)> handler) {
    requests.frame = handler;
}

static void _CZwpTabletPadGroupV2Buttons(void* data, void* resource, wl_array* buttons) {
    const auto PO = (CCZwpTabletPadGroupV2*)data;
    if (PO && PO->requests.buttons)
        PO->requests.buttons(PO, buttons);
}

static void _CZwpTabletPadGroupV2Ring(void* data, void* resource, wl_proxy* ring) {
    const auto PO = (CCZwpTabletPadGroupV2*)data;
    if (PO && PO->requests.ring)
        PO->requests.ring(PO, ring);
}

static void _CZwpTabletPadGroupV2Strip(void* data, void* resource, wl_proxy* strip) {
    const auto PO = (CCZwpTabletPadGroupV2*)data;
    if (PO && PO->requests.strip)
        PO->requests.strip(PO, strip);
}

static void _CZwpTabletPadGroupV2Modes(void* data, void* resource, uint32_t modes) {
    const auto PO = (CCZwpTabletPadGroupV2*)data;
    if (PO && PO->requests.modes)
        PO->requests.modes(PO, modes);
}

static void _CZwpTabletPadGroupV2Done(void* data, void* resource) {
    const auto PO = (CCZwpTabletPadGroupV2*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CZwpTabletPadGroupV2ModeSwitch(void* data, void* resource, uint32_t time, uint32_t serial, uint32_t mode) {
    const auto PO = (CCZwpTabletPadGroupV2*)data;
    if (PO && PO->requests.modeSwitch)
        PO->requests.modeSwitch(PO, time, serial, mode);
}

static void _CZwpTabletPadGroupV2Dial(void* data, void* resource, wl_proxy* dial) {
    const auto PO = (CCZwpTabletPadGroupV2*)data;
    if (PO && PO->requests.dial)
        PO->requests.dial(PO, dial);
}

static const void* _CCZwpTabletPadGroupV2VTable[] = {
    (void*)_CZwpTabletPadGroupV2Buttons,
    (void*)_CZwpTabletPadGroupV2Ring,
    (void*)_CZwpTabletPadGroupV2Strip,
    (void*)_CZwpTabletPadGroupV2Modes,
    (void*)_CZwpTabletPadGroupV2Done,
    (void*)_CZwpTabletPadGroupV2ModeSwitch,
    (void*)_CZwpTabletPadGroupV2Dial,
};

void CCZwpTabletPadGroupV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletPadGroupV2ButtonsTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadGroupV2RingTypes[] = {
    &zwp_tablet_pad_ring_v2_interface,
};
static const wl_interface* _CZwpTabletPadGroupV2StripTypes[] = {
    &zwp_tablet_pad_strip_v2_interface,
};
static const wl_interface* _CZwpTabletPadGroupV2ModesTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadGroupV2ModeSwitchTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletPadGroupV2DialTypes[] = {
    &zwp_tablet_pad_dial_v2_interface,
};

static const wl_message _CZwpTabletPadGroupV2Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletPadGroupV2Events[] = {
    { "buttons", "a", _CZwpTabletPadGroupV2ButtonsTypes + 0},
    { "ring", "n", _CZwpTabletPadGroupV2RingTypes + 0},
    { "strip", "n", _CZwpTabletPadGroupV2StripTypes + 0},
    { "modes", "u", _CZwpTabletPadGroupV2ModesTypes + 0},
    { "done", "", dummyTypes + 0},
    { "mode_switch", "uuu", _CZwpTabletPadGroupV2ModeSwitchTypes + 0},
    { "dial", "2n", _CZwpTabletPadGroupV2DialTypes + 0},
};

const wl_interface zwp_tablet_pad_group_v2_interface = {
    "zwp_tablet_pad_group_v2", 2,
    1, _CZwpTabletPadGroupV2Requests,
    7, _CZwpTabletPadGroupV2Events,
};

CCZwpTabletPadGroupV2::CCZwpTabletPadGroupV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletPadGroupV2VTable, this);
}

CCZwpTabletPadGroupV2::~CCZwpTabletPadGroupV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletPadGroupV2::setButtons(F<void(CCZwpTabletPadGroupV2*, wl_array*)> handler) {
    requests.buttons = handler;
}

void CCZwpTabletPadGroupV2::setRing(F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> handler) {
    requests.ring = handler;
}

void CCZwpTabletPadGroupV2::setStrip(F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> handler) {
    requests.strip = handler;
}

void CCZwpTabletPadGroupV2::setModes(F<void(CCZwpTabletPadGroupV2*, uint32_t)> handler) {
    requests.modes = handler;
}

void CCZwpTabletPadGroupV2::setDone(F<void(CCZwpTabletPadGroupV2*)> handler) {
    requests.done = handler;
}

void CCZwpTabletPadGroupV2::setModeSwitch(F<void(CCZwpTabletPadGroupV2*, uint32_t, uint32_t, uint32_t)> handler) {
    requests.modeSwitch = handler;
}

void CCZwpTabletPadGroupV2::setDial(F<void(CCZwpTabletPadGroupV2*, wl_proxy*)> handler) {
    requests.dial = handler;
}

static void _CZwpTabletPadV2Group(void* data, void* resource, wl_proxy* pad_group) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.group)
        PO->requests.group(PO, pad_group);
}

static void _CZwpTabletPadV2Path(void* data, void* resource, const char* path) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.path)
        PO->requests.path(PO, path);
}

static void _CZwpTabletPadV2Buttons(void* data, void* resource, uint32_t buttons) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.buttons)
        PO->requests.buttons(PO, buttons);
}

static void _CZwpTabletPadV2Done(void* data, void* resource) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CZwpTabletPadV2Button(void* data, void* resource, uint32_t time, uint32_t button, zwpTabletToolV2ButtonState state) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.button)
        PO->requests.button(PO, time, button, state);
}

static void _CZwpTabletPadV2Enter(void* data, void* resource, uint32_t serial, wl_proxy* tablet, wl_proxy* surface) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.enter)
        PO->requests.enter(PO, serial, tablet, surface);
}

static void _CZwpTabletPadV2Leave(void* data, void* resource, uint32_t serial, wl_proxy* surface) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.leave)
        PO->requests.leave(PO, serial, surface);
}

static void _CZwpTabletPadV2Removed(void* data, void* resource) {
    const auto PO = (CCZwpTabletPadV2*)data;
    if (PO && PO->requests.removed)
        PO->requests.removed(PO);
}

static const void* _CCZwpTabletPadV2VTable[] = {
    (void*)_CZwpTabletPadV2Group,
    (void*)_CZwpTabletPadV2Path,
    (void*)_CZwpTabletPadV2Buttons,
    (void*)_CZwpTabletPadV2Done,
    (void*)_CZwpTabletPadV2Button,
    (void*)_CZwpTabletPadV2Enter,
    (void*)_CZwpTabletPadV2Leave,
    (void*)_CZwpTabletPadV2Removed,
};

void CCZwpTabletPadV2::sendSetFeedback(uint32_t button, const char* description, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, button, description, serial);
    proxy;
}

void CCZwpTabletPadV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletPadV2SetFeedbackTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletPadV2GroupTypes[] = {
    &zwp_tablet_pad_group_v2_interface,
};
static const wl_interface* _CZwpTabletPadV2PathTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadV2ButtonsTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadV2ButtonTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletPadV2EnterTypes[] = {
    nullptr,
    &zwp_tablet_v2_interface,
    &wl_surface_interface,
};
static const wl_interface* _CZwpTabletPadV2LeaveTypes[] = {
    nullptr,
    &wl_surface_interface,
};

static const wl_message _CZwpTabletPadV2Requests[] = {
    { "set_feedback", "usu", _CZwpTabletPadV2SetFeedbackTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletPadV2Events[] = {
    { "group", "n", _CZwpTabletPadV2GroupTypes + 0},
    { "path", "s", _CZwpTabletPadV2PathTypes + 0},
    { "buttons", "u", _CZwpTabletPadV2ButtonsTypes + 0},
    { "done", "", dummyTypes + 0},
    { "button", "uuu", _CZwpTabletPadV2ButtonTypes + 0},
    { "enter", "uoo", _CZwpTabletPadV2EnterTypes + 0},
    { "leave", "uo", _CZwpTabletPadV2LeaveTypes + 0},
    { "removed", "", dummyTypes + 0},
};

const wl_interface zwp_tablet_pad_v2_interface = {
    "zwp_tablet_pad_v2", 2,
    2, _CZwpTabletPadV2Requests,
    8, _CZwpTabletPadV2Events,
};

CCZwpTabletPadV2::CCZwpTabletPadV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletPadV2VTable, this);
}

CCZwpTabletPadV2::~CCZwpTabletPadV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletPadV2::setGroup(F<void(CCZwpTabletPadV2*, wl_proxy*)> handler) {
    requests.group = handler;
}

void CCZwpTabletPadV2::setPath(F<void(CCZwpTabletPadV2*, const char*)> handler) {
    requests.path = handler;
}

void CCZwpTabletPadV2::setButtons(F<void(CCZwpTabletPadV2*, uint32_t)> handler) {
    requests.buttons = handler;
}

void CCZwpTabletPadV2::setDone(F<void(CCZwpTabletPadV2*)> handler) {
    requests.done = handler;
}

void CCZwpTabletPadV2::setButton(F<void(CCZwpTabletPadV2*, uint32_t, uint32_t, zwpTabletToolV2ButtonState)> handler) {
    requests.button = handler;
}

void CCZwpTabletPadV2::setEnter(F<void(CCZwpTabletPadV2*, uint32_t, wl_proxy*, wl_proxy*)> handler) {
    requests.enter = handler;
}

void CCZwpTabletPadV2::setLeave(F<void(CCZwpTabletPadV2*, uint32_t, wl_proxy*)> handler) {
    requests.leave = handler;
}

void CCZwpTabletPadV2::setRemoved(F<void(CCZwpTabletPadV2*)> handler) {
    requests.removed = handler;
}

static void _CZwpTabletPadDialV2Delta(void* data, void* resource, int32_t value120) {
    const auto PO = (CCZwpTabletPadDialV2*)data;
    if (PO && PO->requests.delta)
        PO->requests.delta(PO, value120);
}

static void _CZwpTabletPadDialV2Frame(void* data, void* resource, uint32_t time) {
    const auto PO = (CCZwpTabletPadDialV2*)data;
    if (PO && PO->requests.frame)
        PO->requests.frame(PO, time);
}

static const void* _CCZwpTabletPadDialV2VTable[] = {
    (void*)_CZwpTabletPadDialV2Delta,
    (void*)_CZwpTabletPadDialV2Frame,
};

void CCZwpTabletPadDialV2::sendSetFeedback(const char* description, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, description, serial);
    proxy;
}

void CCZwpTabletPadDialV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpTabletPadDialV2SetFeedbackTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTabletPadDialV2DeltaTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTabletPadDialV2FrameTypes[] = {
    nullptr,
};

static const wl_message _CZwpTabletPadDialV2Requests[] = {
    { "set_feedback", "su", _CZwpTabletPadDialV2SetFeedbackTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpTabletPadDialV2Events[] = {
    { "delta", "i", _CZwpTabletPadDialV2DeltaTypes + 0},
    { "frame", "u", _CZwpTabletPadDialV2FrameTypes + 0},
};

const wl_interface zwp_tablet_pad_dial_v2_interface = {
    "zwp_tablet_pad_dial_v2", 2,
    2, _CZwpTabletPadDialV2Requests,
    2, _CZwpTabletPadDialV2Events,
};

CCZwpTabletPadDialV2::CCZwpTabletPadDialV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTabletPadDialV2VTable, this);
}

CCZwpTabletPadDialV2::~CCZwpTabletPadDialV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTabletPadDialV2::setDelta(F<void(CCZwpTabletPadDialV2*, int32_t)> handler) {
    requests.delta = handler;
}

void CCZwpTabletPadDialV2::setFrame(F<void(CCZwpTabletPadDialV2*, uint32_t)> handler) {
    requests.frame = handler;
}

#undef F
