// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// keyboard_shortcuts_inhibit_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2017 Red Hat Inc.

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
#include "keyboard-shortcuts-inhibit-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_keyboard_shortcuts_inhibit_manager_v1_interface;
extern const wl_interface zwp_keyboard_shortcuts_inhibitor_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;

static const void* _CCZwpKeyboardShortcutsInhibitManagerV1VTable[] = {
};

void CCZwpKeyboardShortcutsInhibitManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpKeyboardShortcutsInhibitManagerV1::sendInhibitShortcuts(wl_proxy* surface, wl_proxy* seat) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_keyboard_shortcuts_inhibitor_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface, seat);

    return proxy;
}
static const wl_interface* _CZwpKeyboardShortcutsInhibitManagerV1InhibitShortcutsTypes[] = {
    &zwp_keyboard_shortcuts_inhibitor_v1_interface,
    &wl_surface_interface,
    &wl_seat_interface,
};

static const wl_message _CZwpKeyboardShortcutsInhibitManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "inhibit_shortcuts", "noo", _CZwpKeyboardShortcutsInhibitManagerV1InhibitShortcutsTypes + 0},
};

const wl_interface zwp_keyboard_shortcuts_inhibit_manager_v1_interface = {
    "zwp_keyboard_shortcuts_inhibit_manager_v1", 1,
    2, _CZwpKeyboardShortcutsInhibitManagerV1Requests,
    0, nullptr,
};

CCZwpKeyboardShortcutsInhibitManagerV1::CCZwpKeyboardShortcutsInhibitManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpKeyboardShortcutsInhibitManagerV1VTable, this);
}

CCZwpKeyboardShortcutsInhibitManagerV1::~CCZwpKeyboardShortcutsInhibitManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CZwpKeyboardShortcutsInhibitorV1Active(void* data, void* resource) {
    const auto PO = (CCZwpKeyboardShortcutsInhibitorV1*)data;
    if (PO && PO->requests.active)
        PO->requests.active(PO);
}

static void _CZwpKeyboardShortcutsInhibitorV1Inactive(void* data, void* resource) {
    const auto PO = (CCZwpKeyboardShortcutsInhibitorV1*)data;
    if (PO && PO->requests.inactive)
        PO->requests.inactive(PO);
}

static const void* _CCZwpKeyboardShortcutsInhibitorV1VTable[] = {
    (void*)_CZwpKeyboardShortcutsInhibitorV1Active,
    (void*)_CZwpKeyboardShortcutsInhibitorV1Inactive,
};

void CCZwpKeyboardShortcutsInhibitorV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

static const wl_message _CZwpKeyboardShortcutsInhibitorV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpKeyboardShortcutsInhibitorV1Events[] = {
    { "active", "", dummyTypes + 0},
    { "inactive", "", dummyTypes + 0},
};

const wl_interface zwp_keyboard_shortcuts_inhibitor_v1_interface = {
    "zwp_keyboard_shortcuts_inhibitor_v1", 1,
    1, _CZwpKeyboardShortcutsInhibitorV1Requests,
    2, _CZwpKeyboardShortcutsInhibitorV1Events,
};

CCZwpKeyboardShortcutsInhibitorV1::CCZwpKeyboardShortcutsInhibitorV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpKeyboardShortcutsInhibitorV1VTable, this);
}

CCZwpKeyboardShortcutsInhibitorV1::~CCZwpKeyboardShortcutsInhibitorV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpKeyboardShortcutsInhibitorV1::setActive(F<void(CCZwpKeyboardShortcutsInhibitorV1*)> handler) {
    requests.active = handler;
}

void CCZwpKeyboardShortcutsInhibitorV1::setInactive(F<void(CCZwpKeyboardShortcutsInhibitorV1*)> handler) {
    requests.inactive = handler;
}

#undef F
