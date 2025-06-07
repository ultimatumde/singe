// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_toplevel_icon_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2023-2024 Matthias Klumpp
    Copyright ©      2024 David Edmundson

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
#include "xdg-toplevel-icon-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface xdg_toplevel_icon_manager_v1_interface;
extern const wl_interface xdg_toplevel_icon_v1_interface;
extern const wl_interface xdg_toplevel_interface;
extern const wl_interface wl_buffer_interface;

static void _CXdgToplevelIconManagerV1IconSize(void* data, void* resource, int32_t size) {
    const auto PO = (CCXdgToplevelIconManagerV1*)data;
    if (PO && PO->requests.iconSize)
        PO->requests.iconSize(PO, size);
}

static void _CXdgToplevelIconManagerV1Done(void* data, void* resource) {
    const auto PO = (CCXdgToplevelIconManagerV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static const void* _CCXdgToplevelIconManagerV1VTable[] = {
    (void*)_CXdgToplevelIconManagerV1IconSize,
    (void*)_CXdgToplevelIconManagerV1Done,
};

void CCXdgToplevelIconManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCXdgToplevelIconManagerV1::sendCreateIcon() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &xdg_toplevel_icon_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

void CCXdgToplevelIconManagerV1::sendSetIcon(wl_proxy* toplevel, CCXdgToplevelIconV1* icon) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, toplevel, icon ? icon->pResource : nullptr);
    proxy;
}
static const wl_interface* _CXdgToplevelIconManagerV1CreateIconTypes[] = {
    &xdg_toplevel_icon_v1_interface,
};
static const wl_interface* _CXdgToplevelIconManagerV1SetIconTypes[] = {
    &xdg_toplevel_interface,
    &xdg_toplevel_icon_v1_interface,
};
static const wl_interface* _CXdgToplevelIconManagerV1IconSizeTypes[] = {
    nullptr,
};

static const wl_message _CXdgToplevelIconManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "create_icon", "n", _CXdgToplevelIconManagerV1CreateIconTypes + 0},
    { "set_icon", "o?o", _CXdgToplevelIconManagerV1SetIconTypes + 0},
};

static const wl_message _CXdgToplevelIconManagerV1Events[] = {
    { "icon_size", "i", _CXdgToplevelIconManagerV1IconSizeTypes + 0},
    { "done", "", dummyTypes + 0},
};

const wl_interface xdg_toplevel_icon_manager_v1_interface = {
    "xdg_toplevel_icon_manager_v1", 1,
    3, _CXdgToplevelIconManagerV1Requests,
    2, _CXdgToplevelIconManagerV1Events,
};

CCXdgToplevelIconManagerV1::CCXdgToplevelIconManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgToplevelIconManagerV1VTable, this);
}

CCXdgToplevelIconManagerV1::~CCXdgToplevelIconManagerV1() {
    if (!destroyed)
        sendDestroy();
}

void CCXdgToplevelIconManagerV1::setIconSize(F<void(CCXdgToplevelIconManagerV1*, int32_t)> handler) {
    requests.iconSize = handler;
}

void CCXdgToplevelIconManagerV1::setDone(F<void(CCXdgToplevelIconManagerV1*)> handler) {
    requests.done = handler;
}

static const void* _CCXdgToplevelIconV1VTable[] = {
};

void CCXdgToplevelIconV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCXdgToplevelIconV1::sendSetName(const char* icon_name) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, icon_name);
    proxy;
}

void CCXdgToplevelIconV1::sendAddBuffer(wl_proxy* buffer, int32_t scale) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, buffer, scale);
    proxy;
}
static const wl_interface* _CXdgToplevelIconV1SetNameTypes[] = {
    nullptr,
};
static const wl_interface* _CXdgToplevelIconV1AddBufferTypes[] = {
    &wl_buffer_interface,
    nullptr,
};

static const wl_message _CXdgToplevelIconV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_name", "s", _CXdgToplevelIconV1SetNameTypes + 0},
    { "add_buffer", "oi", _CXdgToplevelIconV1AddBufferTypes + 0},
};

const wl_interface xdg_toplevel_icon_v1_interface = {
    "xdg_toplevel_icon_v1", 1,
    3, _CXdgToplevelIconV1Requests,
    0, nullptr,
};

CCXdgToplevelIconV1::CCXdgToplevelIconV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgToplevelIconV1VTable, this);
}

CCXdgToplevelIconV1::~CCXdgToplevelIconV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
