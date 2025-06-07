// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_shell_unstable_v5

/*
 This protocol's authors' copyright notice is:


    Copyright © 2008-2013 Kristian Høgsberg
    Copyright © 2013      Rafael Antognolli
    Copyright © 2013      Jasper St. Pierre
    Copyright © 2010-2013 Intel Corporation

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
#include "xdg-shell-unstable-v5.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface xdg_shell_interface;
extern const wl_interface xdg_surface_interface;
extern const wl_interface xdg_popup_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;
extern const wl_interface wl_output_interface;

static void _CXdgShellPing(void* data, void* resource, uint32_t serial) {
    const auto PO = (CCXdgShell*)data;
    if (PO && PO->requests.ping)
        PO->requests.ping(PO, serial);
}

static const void* _CCXdgShellVTable[] = {
    (void*)_CXdgShellPing,
};

void CCXdgShell::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCXdgShell::sendUseUnstableVersion(int32_t version) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, version);
    proxy;
}

wl_proxy* CCXdgShell::sendGetXdgSurface(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &xdg_surface_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}

wl_proxy* CCXdgShell::sendGetXdgPopup(wl_proxy* surface, wl_proxy* parent, wl_proxy* seat, uint32_t serial, int32_t x, int32_t y) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, &xdg_popup_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface, parent, seat, serial, x, y);

    return proxy;
}

void CCXdgShell::sendPong(uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial);
    proxy;
}
static const wl_interface* _CXdgShellUseUnstableVersionTypes[] = {
    nullptr,
};
static const wl_interface* _CXdgShellGetXdgSurfaceTypes[] = {
    &xdg_surface_interface,
    &wl_surface_interface,
};
static const wl_interface* _CXdgShellGetXdgPopupTypes[] = {
    &xdg_popup_interface,
    &wl_surface_interface,
    &wl_surface_interface,
    &wl_seat_interface,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CXdgShellPongTypes[] = {
    nullptr,
};
static const wl_interface* _CXdgShellPingTypes[] = {
    nullptr,
};

static const wl_message _CXdgShellRequests[] = {
    { "destroy", "", dummyTypes + 0},
    { "use_unstable_version", "i", _CXdgShellUseUnstableVersionTypes + 0},
    { "get_xdg_surface", "no", _CXdgShellGetXdgSurfaceTypes + 0},
    { "get_xdg_popup", "nooouii", _CXdgShellGetXdgPopupTypes + 0},
    { "pong", "u", _CXdgShellPongTypes + 0},
};

static const wl_message _CXdgShellEvents[] = {
    { "ping", "u", _CXdgShellPingTypes + 0},
};

const wl_interface xdg_shell_interface = {
    "xdg_shell", 1,
    5, _CXdgShellRequests,
    1, _CXdgShellEvents,
};

CCXdgShell::CCXdgShell(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgShellVTable, this);
}

CCXdgShell::~CCXdgShell() {
    if (!destroyed)
        sendDestroy();
}

void CCXdgShell::setPing(F<void(CCXdgShell*, uint32_t)> handler) {
    requests.ping = handler;
}

static void _CXdgSurfaceConfigure(void* data, void* resource, int32_t width, int32_t height, wl_array* states, uint32_t serial) {
    const auto PO = (CCXdgSurface*)data;
    if (PO && PO->requests.configure)
        PO->requests.configure(PO, width, height, states, serial);
}

static void _CXdgSurfaceClose(void* data, void* resource) {
    const auto PO = (CCXdgSurface*)data;
    if (PO && PO->requests.close)
        PO->requests.close(PO);
}

static const void* _CCXdgSurfaceVTable[] = {
    (void*)_CXdgSurfaceConfigure,
    (void*)_CXdgSurfaceClose,
};

void CCXdgSurface::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCXdgSurface::sendSetParent(CCXdgSurface* parent) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, parent ? parent->pResource : nullptr);
    proxy;
}

void CCXdgSurface::sendSetTitle(const char* title) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, title);
    proxy;
}

void CCXdgSurface::sendSetAppId(const char* app_id) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, app_id);
    proxy;
}

void CCXdgSurface::sendShowWindowMenu(wl_proxy* seat, uint32_t serial, int32_t x, int32_t y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, serial, x, y);
    proxy;
}

void CCXdgSurface::sendMove(wl_proxy* seat, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, serial);
    proxy;
}

void CCXdgSurface::sendResize(wl_proxy* seat, uint32_t serial, uint32_t edges) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, serial, edges);
    proxy;
}

void CCXdgSurface::sendAckConfigure(uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 7, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial);
    proxy;
}

void CCXdgSurface::sendSetWindowGeometry(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 8, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y, width, height);
    proxy;
}

void CCXdgSurface::sendSetMaximized() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 9, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCXdgSurface::sendUnsetMaximized() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 10, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCXdgSurface::sendSetFullscreen(wl_proxy* output) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 11, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, output);
    proxy;
}

void CCXdgSurface::sendUnsetFullscreen() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 12, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCXdgSurface::sendSetMinimized() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 13, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CXdgSurfaceSetParentTypes[] = {
    &xdg_surface_interface,
};
static const wl_interface* _CXdgSurfaceSetTitleTypes[] = {
    nullptr,
};
static const wl_interface* _CXdgSurfaceSetAppIdTypes[] = {
    nullptr,
};
static const wl_interface* _CXdgSurfaceShowWindowMenuTypes[] = {
    &wl_seat_interface,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CXdgSurfaceMoveTypes[] = {
    &wl_seat_interface,
    nullptr,
};
static const wl_interface* _CXdgSurfaceResizeTypes[] = {
    &wl_seat_interface,
    nullptr,
    nullptr,
};
static const wl_interface* _CXdgSurfaceAckConfigureTypes[] = {
    nullptr,
};
static const wl_interface* _CXdgSurfaceSetWindowGeometryTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CXdgSurfaceSetFullscreenTypes[] = {
    &wl_output_interface,
};
static const wl_interface* _CXdgSurfaceConfigureTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CXdgSurfaceRequests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_parent", "?o", _CXdgSurfaceSetParentTypes + 0},
    { "set_title", "s", _CXdgSurfaceSetTitleTypes + 0},
    { "set_app_id", "s", _CXdgSurfaceSetAppIdTypes + 0},
    { "show_window_menu", "ouii", _CXdgSurfaceShowWindowMenuTypes + 0},
    { "move", "ou", _CXdgSurfaceMoveTypes + 0},
    { "resize", "ouu", _CXdgSurfaceResizeTypes + 0},
    { "ack_configure", "u", _CXdgSurfaceAckConfigureTypes + 0},
    { "set_window_geometry", "iiii", _CXdgSurfaceSetWindowGeometryTypes + 0},
    { "set_maximized", "", dummyTypes + 0},
    { "unset_maximized", "", dummyTypes + 0},
    { "set_fullscreen", "?o", _CXdgSurfaceSetFullscreenTypes + 0},
    { "unset_fullscreen", "", dummyTypes + 0},
    { "set_minimized", "", dummyTypes + 0},
};

static const wl_message _CXdgSurfaceEvents[] = {
    { "configure", "iiau", _CXdgSurfaceConfigureTypes + 0},
    { "close", "", dummyTypes + 0},
};

const wl_interface xdg_surface_interface = {
    "xdg_surface", 1,
    14, _CXdgSurfaceRequests,
    2, _CXdgSurfaceEvents,
};

CCXdgSurface::CCXdgSurface(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgSurfaceVTable, this);
}

CCXdgSurface::~CCXdgSurface() {
    if (!destroyed)
        sendDestroy();
}

void CCXdgSurface::setConfigure(F<void(CCXdgSurface*, int32_t, int32_t, wl_array*, uint32_t)> handler) {
    requests.configure = handler;
}

void CCXdgSurface::setClose(F<void(CCXdgSurface*)> handler) {
    requests.close = handler;
}

static void _CXdgPopupPopupDone(void* data, void* resource) {
    const auto PO = (CCXdgPopup*)data;
    if (PO && PO->requests.popupDone)
        PO->requests.popupDone(PO);
}

static const void* _CCXdgPopupVTable[] = {
    (void*)_CXdgPopupPopupDone,
};

void CCXdgPopup::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

static const wl_message _CXdgPopupRequests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CXdgPopupEvents[] = {
    { "popup_done", "", dummyTypes + 0},
};

const wl_interface xdg_popup_interface = {
    "xdg_popup", 1,
    1, _CXdgPopupRequests,
    1, _CXdgPopupEvents,
};

CCXdgPopup::CCXdgPopup(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgPopupVTable, this);
}

CCXdgPopup::~CCXdgPopup() {
    if (!destroyed)
        sendDestroy();
}

void CCXdgPopup::setPopupDone(F<void(CCXdgPopup*)> handler) {
    requests.popupDone = handler;
}

#undef F
