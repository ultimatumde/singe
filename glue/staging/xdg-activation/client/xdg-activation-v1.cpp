// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_activation_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2020 Aleix Pol Gonzalez <aleixpol@kde.org>
    Copyright © 2020 Carlos Garnacho <carlosg@gnome.org>

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
#include "xdg-activation-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface xdg_activation_v1_interface;
extern const wl_interface xdg_activation_token_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;

static const void* _CCXdgActivationV1VTable[] = {
};

void CCXdgActivationV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCXdgActivationV1::sendGetActivationToken() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &xdg_activation_token_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

void CCXdgActivationV1::sendActivate(const char* token, wl_proxy* surface) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, token, surface);
    proxy;
}
static const wl_interface* _CXdgActivationV1GetActivationTokenTypes[] = {
    &xdg_activation_token_v1_interface,
};
static const wl_interface* _CXdgActivationV1ActivateTypes[] = {
    nullptr,
    &wl_surface_interface,
};

static const wl_message _CXdgActivationV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_activation_token", "n", _CXdgActivationV1GetActivationTokenTypes + 0},
    { "activate", "so", _CXdgActivationV1ActivateTypes + 0},
};

const wl_interface xdg_activation_v1_interface = {
    "xdg_activation_v1", 1,
    3, _CXdgActivationV1Requests,
    0, nullptr,
};

CCXdgActivationV1::CCXdgActivationV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgActivationV1VTable, this);
}

CCXdgActivationV1::~CCXdgActivationV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CXdgActivationTokenV1Done(void* data, void* resource, const char* token) {
    const auto PO = (CCXdgActivationTokenV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO, token);
}

static const void* _CCXdgActivationTokenV1VTable[] = {
    (void*)_CXdgActivationTokenV1Done,
};

void CCXdgActivationTokenV1::sendSetSerial(uint32_t serial, wl_proxy* seat) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, seat);
    proxy;
}

void CCXdgActivationTokenV1::sendSetAppId(const char* app_id) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, app_id);
    proxy;
}

void CCXdgActivationTokenV1::sendSetSurface(wl_proxy* surface) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, surface);
    proxy;
}

void CCXdgActivationTokenV1::sendCommit() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCXdgActivationTokenV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CXdgActivationTokenV1SetSerialTypes[] = {
    nullptr,
    &wl_seat_interface,
};
static const wl_interface* _CXdgActivationTokenV1SetAppIdTypes[] = {
    nullptr,
};
static const wl_interface* _CXdgActivationTokenV1SetSurfaceTypes[] = {
    &wl_surface_interface,
};
static const wl_interface* _CXdgActivationTokenV1DoneTypes[] = {
    nullptr,
};

static const wl_message _CXdgActivationTokenV1Requests[] = {
    { "set_serial", "uo", _CXdgActivationTokenV1SetSerialTypes + 0},
    { "set_app_id", "s", _CXdgActivationTokenV1SetAppIdTypes + 0},
    { "set_surface", "o", _CXdgActivationTokenV1SetSurfaceTypes + 0},
    { "commit", "", dummyTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CXdgActivationTokenV1Events[] = {
    { "done", "s", _CXdgActivationTokenV1DoneTypes + 0},
};

const wl_interface xdg_activation_token_v1_interface = {
    "xdg_activation_token_v1", 1,
    5, _CXdgActivationTokenV1Requests,
    1, _CXdgActivationTokenV1Events,
};

CCXdgActivationTokenV1::CCXdgActivationTokenV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgActivationTokenV1VTable, this);
}

CCXdgActivationTokenV1::~CCXdgActivationTokenV1() {
    if (!destroyed)
        sendDestroy();
}

void CCXdgActivationTokenV1::setDone(F<void(CCXdgActivationTokenV1*, const char*)> handler) {
    requests.done = handler;
}

#undef F
