// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// pointer_constraints_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2014      Jonas Ådahl
    Copyright © 2015      Red Hat Inc.

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

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "pointer-constraints-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_pointer_constraints_v1_interface;
extern const wl_interface zwp_locked_pointer_v1_interface;
extern const wl_interface zwp_confined_pointer_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_pointer_interface;
extern const wl_interface wl_region_interface;

static const void* _CCZwpPointerConstraintsV1VTable[] = {
};

void CCZwpPointerConstraintsV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpPointerConstraintsV1::sendLockPointer(wl_proxy* surface, wl_proxy* pointer, wl_proxy* region, zwpPointerConstraintsV1Lifetime lifetime) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_locked_pointer_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface, pointer, region, lifetime);

    return proxy;
}

wl_proxy* CCZwpPointerConstraintsV1::sendConfinePointer(wl_proxy* surface, wl_proxy* pointer, wl_proxy* region, zwpPointerConstraintsV1Lifetime lifetime) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &zwp_confined_pointer_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface, pointer, region, lifetime);

    return proxy;
}
static const wl_interface* _CZwpPointerConstraintsV1LockPointerTypes[] = {
    &zwp_locked_pointer_v1_interface,
    &wl_surface_interface,
    &wl_pointer_interface,
    &wl_region_interface,
    nullptr,
};
static const wl_interface* _CZwpPointerConstraintsV1ConfinePointerTypes[] = {
    &zwp_confined_pointer_v1_interface,
    &wl_surface_interface,
    &wl_pointer_interface,
    &wl_region_interface,
    nullptr,
};

static const wl_message _CZwpPointerConstraintsV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "lock_pointer", "noo?ou", _CZwpPointerConstraintsV1LockPointerTypes + 0},
    { "confine_pointer", "noo?ou", _CZwpPointerConstraintsV1ConfinePointerTypes + 0},
};

const wl_interface zwp_pointer_constraints_v1_interface = {
    "zwp_pointer_constraints_v1", 1,
    3, _CZwpPointerConstraintsV1Requests,
    0, nullptr,
};

CCZwpPointerConstraintsV1::CCZwpPointerConstraintsV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPointerConstraintsV1VTable, this);
}

CCZwpPointerConstraintsV1::~CCZwpPointerConstraintsV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CZwpLockedPointerV1Locked(void* data, void* resource) {
    const auto PO = (CCZwpLockedPointerV1*)data;
    if (PO && PO->requests.locked)
        PO->requests.locked(PO);
}

static void _CZwpLockedPointerV1Unlocked(void* data, void* resource) {
    const auto PO = (CCZwpLockedPointerV1*)data;
    if (PO && PO->requests.unlocked)
        PO->requests.unlocked(PO);
}

static const void* _CCZwpLockedPointerV1VTable[] = {
    (void*)_CZwpLockedPointerV1Locked,
    (void*)_CZwpLockedPointerV1Unlocked,
};

void CCZwpLockedPointerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZwpLockedPointerV1::sendSetCursorPositionHint(wl_fixed_t surface_x, wl_fixed_t surface_y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, surface_x, surface_y);
    proxy;
}

void CCZwpLockedPointerV1::sendSetRegion(wl_proxy* region) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, region);
    proxy;
}
static const wl_interface* _CZwpLockedPointerV1SetCursorPositionHintTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpLockedPointerV1SetRegionTypes[] = {
    &wl_region_interface,
};

static const wl_message _CZwpLockedPointerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_cursor_position_hint", "ff", _CZwpLockedPointerV1SetCursorPositionHintTypes + 0},
    { "set_region", "?o", _CZwpLockedPointerV1SetRegionTypes + 0},
};

static const wl_message _CZwpLockedPointerV1Events[] = {
    { "locked", "", dummyTypes + 0},
    { "unlocked", "", dummyTypes + 0},
};

const wl_interface zwp_locked_pointer_v1_interface = {
    "zwp_locked_pointer_v1", 1,
    3, _CZwpLockedPointerV1Requests,
    2, _CZwpLockedPointerV1Events,
};

CCZwpLockedPointerV1::CCZwpLockedPointerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpLockedPointerV1VTable, this);
}

CCZwpLockedPointerV1::~CCZwpLockedPointerV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpLockedPointerV1::setLocked(F<void(CCZwpLockedPointerV1*)> handler) {
    requests.locked = handler;
}

void CCZwpLockedPointerV1::setUnlocked(F<void(CCZwpLockedPointerV1*)> handler) {
    requests.unlocked = handler;
}

static void _CZwpConfinedPointerV1Confined(void* data, void* resource) {
    const auto PO = (CCZwpConfinedPointerV1*)data;
    if (PO && PO->requests.confined)
        PO->requests.confined(PO);
}

static void _CZwpConfinedPointerV1Unconfined(void* data, void* resource) {
    const auto PO = (CCZwpConfinedPointerV1*)data;
    if (PO && PO->requests.unconfined)
        PO->requests.unconfined(PO);
}

static const void* _CCZwpConfinedPointerV1VTable[] = {
    (void*)_CZwpConfinedPointerV1Confined,
    (void*)_CZwpConfinedPointerV1Unconfined,
};

void CCZwpConfinedPointerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZwpConfinedPointerV1::sendSetRegion(wl_proxy* region) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, region);
    proxy;
}
static const wl_interface* _CZwpConfinedPointerV1SetRegionTypes[] = {
    &wl_region_interface,
};

static const wl_message _CZwpConfinedPointerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_region", "?o", _CZwpConfinedPointerV1SetRegionTypes + 0},
};

static const wl_message _CZwpConfinedPointerV1Events[] = {
    { "confined", "", dummyTypes + 0},
    { "unconfined", "", dummyTypes + 0},
};

const wl_interface zwp_confined_pointer_v1_interface = {
    "zwp_confined_pointer_v1", 1,
    2, _CZwpConfinedPointerV1Requests,
    2, _CZwpConfinedPointerV1Events,
};

CCZwpConfinedPointerV1::CCZwpConfinedPointerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpConfinedPointerV1VTable, this);
}

CCZwpConfinedPointerV1::~CCZwpConfinedPointerV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpConfinedPointerV1::setConfined(F<void(CCZwpConfinedPointerV1*)> handler) {
    requests.confined = handler;
}

void CCZwpConfinedPointerV1::setUnconfined(F<void(CCZwpConfinedPointerV1*)> handler) {
    requests.unconfined = handler;
}

#undef F
