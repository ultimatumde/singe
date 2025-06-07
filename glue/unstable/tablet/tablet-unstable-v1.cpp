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

static void _CZwpTabletManagerV1GetTabletSeat(wl_client* client, wl_resource* resource, uint32_t tablet_seat, wl_resource* seat) {
    const auto PO = (CZwpTabletManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getTabletSeat)
        PO->requests.getTabletSeat(PO, tablet_seat, seat);
}

static void _CZwpTabletManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpTabletManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpTabletManagerV1__DestroyListener(wl_listener* l, void* d) {
    CZwpTabletManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpTabletManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpTabletManagerV1VTable[] = {
    (void*)_CZwpTabletManagerV1GetTabletSeat,
    (void*)_CZwpTabletManagerV1Destroy,
};
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

CZwpTabletManagerV1::CZwpTabletManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_tablet_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpTabletManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpTabletManagerV1VTable, this, nullptr);
}

CZwpTabletManagerV1::~CZwpTabletManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpTabletManagerV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CZwpTabletManagerV1::setGetTabletSeat(F<void(CZwpTabletManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getTabletSeat = handler;
}

void CZwpTabletManagerV1::setDestroy(F<void(CZwpTabletManagerV1*)> handler) {
    requests.destroy = handler;
}

static void _CZwpTabletSeatV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpTabletSeatV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpTabletSeatV1__DestroyListener(wl_listener* l, void* d) {
    CZwpTabletSeatV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpTabletSeatV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpTabletSeatV1VTable[] = {
    (void*)_CZwpTabletSeatV1Destroy,
};

void CZwpTabletSeatV1::sendTabletAdded(CZwpTabletV1* id) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, id ? id->pResource : nullptr);
}

void CZwpTabletSeatV1::sendToolAdded(CZwpTabletToolV1* id) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, id ? id->pResource : nullptr);
}

void CZwpTabletSeatV1::sendTabletAddedRaw(CZwpTabletV1* id) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, id);
}

void CZwpTabletSeatV1::sendToolAddedRaw(CZwpTabletToolV1* id) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, id);
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

CZwpTabletSeatV1::CZwpTabletSeatV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_tablet_seat_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpTabletSeatV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpTabletSeatV1VTable, this, nullptr);
}

CZwpTabletSeatV1::~CZwpTabletSeatV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpTabletSeatV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CZwpTabletSeatV1::setDestroy(F<void(CZwpTabletSeatV1*)> handler) {
    requests.destroy = handler;
}

static void _CZwpTabletToolV1SetCursor(wl_client* client, wl_resource* resource, uint32_t serial, wl_resource* surface, int32_t hotspot_x, int32_t hotspot_y) {
    const auto PO = (CZwpTabletToolV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setCursor)
        PO->requests.setCursor(PO, serial, surface, hotspot_x, hotspot_y);
}

static void _CZwpTabletToolV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpTabletToolV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpTabletToolV1__DestroyListener(wl_listener* l, void* d) {
    CZwpTabletToolV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpTabletToolV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpTabletToolV1VTable[] = {
    (void*)_CZwpTabletToolV1SetCursor,
    (void*)_CZwpTabletToolV1Destroy,
};

void CZwpTabletToolV1::sendType(zwpTabletToolV1Type tool_type) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, tool_type);
}

void CZwpTabletToolV1::sendHardwareSerial(uint32_t hardware_serial_hi, uint32_t hardware_serial_lo) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, hardware_serial_hi, hardware_serial_lo);
}

void CZwpTabletToolV1::sendHardwareIdWacom(uint32_t hardware_id_hi, uint32_t hardware_id_lo) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, hardware_id_hi, hardware_id_lo);
}

void CZwpTabletToolV1::sendCapability(zwpTabletToolV1Capability capability) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, capability);
}

void CZwpTabletToolV1::sendDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4);
}

void CZwpTabletToolV1::sendRemoved() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5);
}

void CZwpTabletToolV1::sendProximityIn(uint32_t serial, CZwpTabletV1* tablet, wl_resource* surface) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 6, serial, tablet ? tablet->pResource : nullptr, surface);
}

void CZwpTabletToolV1::sendProximityOut() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 7);
}

void CZwpTabletToolV1::sendDown(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 8, serial);
}

void CZwpTabletToolV1::sendUp() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 9);
}

void CZwpTabletToolV1::sendMotion(wl_fixed_t x, wl_fixed_t y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 10, x, y);
}

void CZwpTabletToolV1::sendPressure(uint32_t pressure) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 11, pressure);
}

void CZwpTabletToolV1::sendDistance(uint32_t distance) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 12, distance);
}

void CZwpTabletToolV1::sendTilt(int32_t tilt_x, int32_t tilt_y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 13, tilt_x, tilt_y);
}

void CZwpTabletToolV1::sendRotation(int32_t degrees) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 14, degrees);
}

void CZwpTabletToolV1::sendSlider(int32_t position) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 15, position);
}

void CZwpTabletToolV1::sendWheel(int32_t degrees, int32_t clicks) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 16, degrees, clicks);
}

void CZwpTabletToolV1::sendButton(uint32_t serial, uint32_t button, zwpTabletToolV1ButtonState state) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 17, serial, button, state);
}

void CZwpTabletToolV1::sendFrame(uint32_t time) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 18, time);
}

void CZwpTabletToolV1::sendTypeRaw(zwpTabletToolV1Type tool_type) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, tool_type);
}

void CZwpTabletToolV1::sendHardwareSerialRaw(uint32_t hardware_serial_hi, uint32_t hardware_serial_lo) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, hardware_serial_hi, hardware_serial_lo);
}

void CZwpTabletToolV1::sendHardwareIdWacomRaw(uint32_t hardware_id_hi, uint32_t hardware_id_lo) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, hardware_id_hi, hardware_id_lo);
}

void CZwpTabletToolV1::sendCapabilityRaw(zwpTabletToolV1Capability capability) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, capability);
}

void CZwpTabletToolV1::sendDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4);
}

void CZwpTabletToolV1::sendRemovedRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5);
}

void CZwpTabletToolV1::sendProximityInRaw(uint32_t serial, wl_resource* tablet, wl_resource* surface) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 6, serial, tablet, surface);
}

void CZwpTabletToolV1::sendProximityOutRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 7);
}

void CZwpTabletToolV1::sendDownRaw(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 8, serial);
}

void CZwpTabletToolV1::sendUpRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 9);
}

void CZwpTabletToolV1::sendMotionRaw(wl_fixed_t x, wl_fixed_t y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 10, x, y);
}

void CZwpTabletToolV1::sendPressureRaw(uint32_t pressure) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 11, pressure);
}

void CZwpTabletToolV1::sendDistanceRaw(uint32_t distance) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 12, distance);
}

void CZwpTabletToolV1::sendTiltRaw(int32_t tilt_x, int32_t tilt_y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 13, tilt_x, tilt_y);
}

void CZwpTabletToolV1::sendRotationRaw(int32_t degrees) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 14, degrees);
}

void CZwpTabletToolV1::sendSliderRaw(int32_t position) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 15, position);
}

void CZwpTabletToolV1::sendWheelRaw(int32_t degrees, int32_t clicks) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 16, degrees, clicks);
}

void CZwpTabletToolV1::sendButtonRaw(uint32_t serial, uint32_t button, zwpTabletToolV1ButtonState state) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 17, serial, button, state);
}

void CZwpTabletToolV1::sendFrameRaw(uint32_t time) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 18, time);
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

CZwpTabletToolV1::CZwpTabletToolV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_tablet_tool_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpTabletToolV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpTabletToolV1VTable, this, nullptr);
}

CZwpTabletToolV1::~CZwpTabletToolV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpTabletToolV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CZwpTabletToolV1::setSetCursor(F<void(CZwpTabletToolV1*, uint32_t, wl_resource*, int32_t, int32_t)> handler) {
    requests.setCursor = handler;
}

void CZwpTabletToolV1::setDestroy(F<void(CZwpTabletToolV1*)> handler) {
    requests.destroy = handler;
}

static void _CZwpTabletV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpTabletV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpTabletV1__DestroyListener(wl_listener* l, void* d) {
    CZwpTabletV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpTabletV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpTabletV1VTable[] = {
    (void*)_CZwpTabletV1Destroy,
};

void CZwpTabletV1::sendName(const char* name) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, name);
}

void CZwpTabletV1::sendId(uint32_t vid, uint32_t pid) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, vid, pid);
}

void CZwpTabletV1::sendPath(const char* path) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, path);
}

void CZwpTabletV1::sendDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3);
}

void CZwpTabletV1::sendRemoved() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4);
}

void CZwpTabletV1::sendNameRaw(const char* name) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, name);
}

void CZwpTabletV1::sendIdRaw(uint32_t vid, uint32_t pid) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, vid, pid);
}

void CZwpTabletV1::sendPathRaw(const char* path) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, path);
}

void CZwpTabletV1::sendDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3);
}

void CZwpTabletV1::sendRemovedRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4);
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

CZwpTabletV1::CZwpTabletV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_tablet_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpTabletV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpTabletV1VTable, this, nullptr);
}

CZwpTabletV1::~CZwpTabletV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpTabletV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CZwpTabletV1::setDestroy(F<void(CZwpTabletV1*)> handler) {
    requests.destroy = handler;
}

#undef F
