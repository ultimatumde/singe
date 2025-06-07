// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_transient_seat_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2020 - 2023 Andri Yngvason

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
#include "ext-transient-seat-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_transient_seat_manager_v1_interface;
extern const wl_interface ext_transient_seat_v1_interface;

static const void* _CCExtTransientSeatManagerV1VTable[] = {
};

wl_proxy* CCExtTransientSeatManagerV1::sendCreate() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &ext_transient_seat_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

void CCExtTransientSeatManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtTransientSeatManagerV1CreateTypes[] = {
    &ext_transient_seat_v1_interface,
};

static const wl_message _CExtTransientSeatManagerV1Requests[] = {
    { "create", "n", _CExtTransientSeatManagerV1CreateTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface ext_transient_seat_manager_v1_interface = {
    "ext_transient_seat_manager_v1", 1,
    2, _CExtTransientSeatManagerV1Requests,
    0, nullptr,
};

CCExtTransientSeatManagerV1::CCExtTransientSeatManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtTransientSeatManagerV1VTable, this);
}

CCExtTransientSeatManagerV1::~CCExtTransientSeatManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CExtTransientSeatV1Ready(void* data, void* resource, uint32_t global_name) {
    const auto PO = (CCExtTransientSeatV1*)data;
    if (PO && PO->requests.ready)
        PO->requests.ready(PO, global_name);
}

static void _CExtTransientSeatV1Denied(void* data, void* resource) {
    const auto PO = (CCExtTransientSeatV1*)data;
    if (PO && PO->requests.denied)
        PO->requests.denied(PO);
}

static const void* _CCExtTransientSeatV1VTable[] = {
    (void*)_CExtTransientSeatV1Ready,
    (void*)_CExtTransientSeatV1Denied,
};

void CCExtTransientSeatV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtTransientSeatV1ReadyTypes[] = {
    nullptr,
};

static const wl_message _CExtTransientSeatV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CExtTransientSeatV1Events[] = {
    { "ready", "u", _CExtTransientSeatV1ReadyTypes + 0},
    { "denied", "", dummyTypes + 0},
};

const wl_interface ext_transient_seat_v1_interface = {
    "ext_transient_seat_v1", 1,
    1, _CExtTransientSeatV1Requests,
    2, _CExtTransientSeatV1Events,
};

CCExtTransientSeatV1::CCExtTransientSeatV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtTransientSeatV1VTable, this);
}

CCExtTransientSeatV1::~CCExtTransientSeatV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtTransientSeatV1::setReady(F<void(CCExtTransientSeatV1*, uint32_t)> handler) {
    requests.ready = handler;
}

void CCExtTransientSeatV1::setDenied(F<void(CCExtTransientSeatV1*)> handler) {
    requests.denied = handler;
}

#undef F
