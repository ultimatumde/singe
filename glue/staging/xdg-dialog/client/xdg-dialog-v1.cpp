// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_dialog_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2023 Carlos Garnacho

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
#include "xdg-dialog-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface xdg_wm_dialog_v1_interface;
extern const wl_interface xdg_dialog_v1_interface;
extern const wl_interface xdg_toplevel_interface;

static const void* _CCXdgWmDialogV1VTable[] = {
};

void CCXdgWmDialogV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCXdgWmDialogV1::sendGetXdgDialog(wl_proxy* toplevel) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &xdg_dialog_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, toplevel);

    return proxy;
}
static const wl_interface* _CXdgWmDialogV1GetXdgDialogTypes[] = {
    &xdg_dialog_v1_interface,
    &xdg_toplevel_interface,
};

static const wl_message _CXdgWmDialogV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_xdg_dialog", "no", _CXdgWmDialogV1GetXdgDialogTypes + 0},
};

const wl_interface xdg_wm_dialog_v1_interface = {
    "xdg_wm_dialog_v1", 1,
    2, _CXdgWmDialogV1Requests,
    0, nullptr,
};

CCXdgWmDialogV1::CCXdgWmDialogV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgWmDialogV1VTable, this);
}

CCXdgWmDialogV1::~CCXdgWmDialogV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCXdgDialogV1VTable[] = {
};

void CCXdgDialogV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCXdgDialogV1::sendSetModal() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCXdgDialogV1::sendUnsetModal() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

static const wl_message _CXdgDialogV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_modal", "", dummyTypes + 0},
    { "unset_modal", "", dummyTypes + 0},
};

const wl_interface xdg_dialog_v1_interface = {
    "xdg_dialog_v1", 1,
    3, _CXdgDialogV1Requests,
    0, nullptr,
};

CCXdgDialogV1::CCXdgDialogV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgDialogV1VTable, this);
}

CCXdgDialogV1::~CCXdgDialogV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
