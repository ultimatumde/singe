// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_session_lock_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2021 Isaac Freund

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "ext-session-lock-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_session_lock_manager_v1_interface;
extern const wl_interface ext_session_lock_v1_interface;
extern const wl_interface ext_session_lock_surface_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_output_interface;

static const void* _CCExtSessionLockManagerV1VTable[] = {
};

void CCExtSessionLockManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCExtSessionLockManagerV1::sendLock() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &ext_session_lock_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}
static const wl_interface* _CExtSessionLockManagerV1LockTypes[] = {
    &ext_session_lock_v1_interface,
};

static const wl_message _CExtSessionLockManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "lock", "n", _CExtSessionLockManagerV1LockTypes + 0},
};

const wl_interface ext_session_lock_manager_v1_interface = {
    "ext_session_lock_manager_v1", 1,
    2, _CExtSessionLockManagerV1Requests,
    0, nullptr,
};

CCExtSessionLockManagerV1::CCExtSessionLockManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtSessionLockManagerV1VTable, this);
}

CCExtSessionLockManagerV1::~CCExtSessionLockManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CExtSessionLockV1Locked(void* data, void* resource) {
    const auto PO = (CCExtSessionLockV1*)data;
    if (PO && PO->requests.locked)
        PO->requests.locked(PO);
}

static void _CExtSessionLockV1Finished(void* data, void* resource) {
    const auto PO = (CCExtSessionLockV1*)data;
    if (PO && PO->requests.finished)
        PO->requests.finished(PO);
}

static const void* _CCExtSessionLockV1VTable[] = {
    (void*)_CExtSessionLockV1Locked,
    (void*)_CExtSessionLockV1Finished,
};

void CCExtSessionLockV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCExtSessionLockV1::sendGetLockSurface(wl_proxy* surface, wl_proxy* output) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &ext_session_lock_surface_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface, output);

    return proxy;
}

void CCExtSessionLockV1::sendUnlockAndDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtSessionLockV1GetLockSurfaceTypes[] = {
    &ext_session_lock_surface_v1_interface,
    &wl_surface_interface,
    &wl_output_interface,
};

static const wl_message _CExtSessionLockV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_lock_surface", "noo", _CExtSessionLockV1GetLockSurfaceTypes + 0},
    { "unlock_and_destroy", "", dummyTypes + 0},
};

static const wl_message _CExtSessionLockV1Events[] = {
    { "locked", "", dummyTypes + 0},
    { "finished", "", dummyTypes + 0},
};

const wl_interface ext_session_lock_v1_interface = {
    "ext_session_lock_v1", 1,
    3, _CExtSessionLockV1Requests,
    2, _CExtSessionLockV1Events,
};

CCExtSessionLockV1::CCExtSessionLockV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtSessionLockV1VTable, this);
}

CCExtSessionLockV1::~CCExtSessionLockV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtSessionLockV1::setLocked(F<void(CCExtSessionLockV1*)> handler) {
    requests.locked = handler;
}

void CCExtSessionLockV1::setFinished(F<void(CCExtSessionLockV1*)> handler) {
    requests.finished = handler;
}

static void _CExtSessionLockSurfaceV1Configure(void* data, void* resource, uint32_t serial, uint32_t width, uint32_t height) {
    const auto PO = (CCExtSessionLockSurfaceV1*)data;
    if (PO && PO->requests.configure)
        PO->requests.configure(PO, serial, width, height);
}

static const void* _CCExtSessionLockSurfaceV1VTable[] = {
    (void*)_CExtSessionLockSurfaceV1Configure,
};

void CCExtSessionLockSurfaceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCExtSessionLockSurfaceV1::sendAckConfigure(uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial);
    proxy;
}
static const wl_interface* _CExtSessionLockSurfaceV1AckConfigureTypes[] = {
    nullptr,
};
static const wl_interface* _CExtSessionLockSurfaceV1ConfigureTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CExtSessionLockSurfaceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "ack_configure", "u", _CExtSessionLockSurfaceV1AckConfigureTypes + 0},
};

static const wl_message _CExtSessionLockSurfaceV1Events[] = {
    { "configure", "uuu", _CExtSessionLockSurfaceV1ConfigureTypes + 0},
};

const wl_interface ext_session_lock_surface_v1_interface = {
    "ext_session_lock_surface_v1", 1,
    2, _CExtSessionLockSurfaceV1Requests,
    1, _CExtSessionLockSurfaceV1Events,
};

CCExtSessionLockSurfaceV1::CCExtSessionLockSurfaceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtSessionLockSurfaceV1VTable, this);
}

CCExtSessionLockSurfaceV1::~CCExtSessionLockSurfaceV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtSessionLockSurfaceV1::setConfigure(F<void(CCExtSessionLockSurfaceV1*, uint32_t, uint32_t, uint32_t)> handler) {
    requests.configure = handler;
}

#undef F
