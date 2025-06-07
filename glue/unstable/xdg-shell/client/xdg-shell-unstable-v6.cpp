// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_shell_unstable_v6

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
#include "xdg-shell-unstable-v6.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zxdg_shell_v6_interface;
extern const wl_interface zxdg_positioner_v6_interface;
extern const wl_interface zxdg_surface_v6_interface;
extern const wl_interface zxdg_toplevel_v6_interface;
extern const wl_interface zxdg_popup_v6_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;
extern const wl_interface wl_output_interface;

static void _CZxdgShellV6Ping(void* data, void* resource, uint32_t serial) {
    const auto PO = (CCZxdgShellV6*)data;
    if (PO && PO->requests.ping)
        PO->requests.ping(PO, serial);
}

static const void* _CCZxdgShellV6VTable[] = {
    (void*)_CZxdgShellV6Ping,
};

void CCZxdgShellV6::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZxdgShellV6::sendCreatePositioner() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zxdg_positioner_v6_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

wl_proxy* CCZxdgShellV6::sendGetXdgSurface(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &zxdg_surface_v6_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}

void CCZxdgShellV6::sendPong(uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial);
    proxy;
}
static const wl_interface* _CZxdgShellV6CreatePositionerTypes[] = {
    &zxdg_positioner_v6_interface,
};
static const wl_interface* _CZxdgShellV6GetXdgSurfaceTypes[] = {
    &zxdg_surface_v6_interface,
    &wl_surface_interface,
};
static const wl_interface* _CZxdgShellV6PongTypes[] = {
    nullptr,
};
static const wl_interface* _CZxdgShellV6PingTypes[] = {
    nullptr,
};

static const wl_message _CZxdgShellV6Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "create_positioner", "n", _CZxdgShellV6CreatePositionerTypes + 0},
    { "get_xdg_surface", "no", _CZxdgShellV6GetXdgSurfaceTypes + 0},
    { "pong", "u", _CZxdgShellV6PongTypes + 0},
};

static const wl_message _CZxdgShellV6Events[] = {
    { "ping", "u", _CZxdgShellV6PingTypes + 0},
};

const wl_interface zxdg_shell_v6_interface = {
    "zxdg_shell_v6", 1,
    4, _CZxdgShellV6Requests,
    1, _CZxdgShellV6Events,
};

CCZxdgShellV6::CCZxdgShellV6(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgShellV6VTable, this);
}

CCZxdgShellV6::~CCZxdgShellV6() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgShellV6::setPing(F<void(CCZxdgShellV6*, uint32_t)> handler) {
    requests.ping = handler;
}

static const void* _CCZxdgPositionerV6VTable[] = {
};

void CCZxdgPositionerV6::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZxdgPositionerV6::sendSetSize(int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, width, height);
    proxy;
}

void CCZxdgPositionerV6::sendSetAnchorRect(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y, width, height);
    proxy;
}

void CCZxdgPositionerV6::sendSetAnchor(zxdgPositionerV6Anchor anchor) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, anchor);
    proxy;
}

void CCZxdgPositionerV6::sendSetGravity(zxdgPositionerV6Gravity gravity) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, gravity);
    proxy;
}

void CCZxdgPositionerV6::sendSetConstraintAdjustment(uint32_t constraint_adjustment) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, constraint_adjustment);
    proxy;
}

void CCZxdgPositionerV6::sendSetOffset(int32_t x, int32_t y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y);
    proxy;
}
static const wl_interface* _CZxdgPositionerV6SetSizeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZxdgPositionerV6SetAnchorRectTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZxdgPositionerV6SetAnchorTypes[] = {
    nullptr,
};
static const wl_interface* _CZxdgPositionerV6SetGravityTypes[] = {
    nullptr,
};
static const wl_interface* _CZxdgPositionerV6SetConstraintAdjustmentTypes[] = {
    nullptr,
};
static const wl_interface* _CZxdgPositionerV6SetOffsetTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CZxdgPositionerV6Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_size", "ii", _CZxdgPositionerV6SetSizeTypes + 0},
    { "set_anchor_rect", "iiii", _CZxdgPositionerV6SetAnchorRectTypes + 0},
    { "set_anchor", "u", _CZxdgPositionerV6SetAnchorTypes + 0},
    { "set_gravity", "u", _CZxdgPositionerV6SetGravityTypes + 0},
    { "set_constraint_adjustment", "u", _CZxdgPositionerV6SetConstraintAdjustmentTypes + 0},
    { "set_offset", "ii", _CZxdgPositionerV6SetOffsetTypes + 0},
};

const wl_interface zxdg_positioner_v6_interface = {
    "zxdg_positioner_v6", 1,
    7, _CZxdgPositionerV6Requests,
    0, nullptr,
};

CCZxdgPositionerV6::CCZxdgPositionerV6(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgPositionerV6VTable, this);
}

CCZxdgPositionerV6::~CCZxdgPositionerV6() {
    if (!destroyed)
        sendDestroy();
}

static void _CZxdgSurfaceV6Configure(void* data, void* resource, uint32_t serial) {
    const auto PO = (CCZxdgSurfaceV6*)data;
    if (PO && PO->requests.configure)
        PO->requests.configure(PO, serial);
}

static const void* _CCZxdgSurfaceV6VTable[] = {
    (void*)_CZxdgSurfaceV6Configure,
};

void CCZxdgSurfaceV6::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZxdgSurfaceV6::sendGetToplevel() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zxdg_toplevel_v6_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

wl_proxy* CCZxdgSurfaceV6::sendGetPopup(CCZxdgSurfaceV6* parent, CCZxdgPositionerV6* positioner) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &zxdg_popup_v6_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, parent ? parent->pResource : nullptr, positioner ? positioner->pResource : nullptr);

    return proxy;
}

void CCZxdgSurfaceV6::sendSetWindowGeometry(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y, width, height);
    proxy;
}

void CCZxdgSurfaceV6::sendAckConfigure(uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial);
    proxy;
}
static const wl_interface* _CZxdgSurfaceV6GetToplevelTypes[] = {
    &zxdg_toplevel_v6_interface,
};
static const wl_interface* _CZxdgSurfaceV6GetPopupTypes[] = {
    &zxdg_popup_v6_interface,
    &zxdg_surface_v6_interface,
    &zxdg_positioner_v6_interface,
};
static const wl_interface* _CZxdgSurfaceV6SetWindowGeometryTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZxdgSurfaceV6AckConfigureTypes[] = {
    nullptr,
};
static const wl_interface* _CZxdgSurfaceV6ConfigureTypes[] = {
    nullptr,
};

static const wl_message _CZxdgSurfaceV6Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_toplevel", "n", _CZxdgSurfaceV6GetToplevelTypes + 0},
    { "get_popup", "noo", _CZxdgSurfaceV6GetPopupTypes + 0},
    { "set_window_geometry", "iiii", _CZxdgSurfaceV6SetWindowGeometryTypes + 0},
    { "ack_configure", "u", _CZxdgSurfaceV6AckConfigureTypes + 0},
};

static const wl_message _CZxdgSurfaceV6Events[] = {
    { "configure", "u", _CZxdgSurfaceV6ConfigureTypes + 0},
};

const wl_interface zxdg_surface_v6_interface = {
    "zxdg_surface_v6", 1,
    5, _CZxdgSurfaceV6Requests,
    1, _CZxdgSurfaceV6Events,
};

CCZxdgSurfaceV6::CCZxdgSurfaceV6(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgSurfaceV6VTable, this);
}

CCZxdgSurfaceV6::~CCZxdgSurfaceV6() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgSurfaceV6::setConfigure(F<void(CCZxdgSurfaceV6*, uint32_t)> handler) {
    requests.configure = handler;
}

static void _CZxdgToplevelV6Configure(void* data, void* resource, int32_t width, int32_t height, wl_array* states) {
    const auto PO = (CCZxdgToplevelV6*)data;
    if (PO && PO->requests.configure)
        PO->requests.configure(PO, width, height, states);
}

static void _CZxdgToplevelV6Close(void* data, void* resource) {
    const auto PO = (CCZxdgToplevelV6*)data;
    if (PO && PO->requests.close)
        PO->requests.close(PO);
}

static const void* _CCZxdgToplevelV6VTable[] = {
    (void*)_CZxdgToplevelV6Configure,
    (void*)_CZxdgToplevelV6Close,
};

void CCZxdgToplevelV6::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZxdgToplevelV6::sendSetParent(CCZxdgToplevelV6* parent) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, parent ? parent->pResource : nullptr);
    proxy;
}

void CCZxdgToplevelV6::sendSetTitle(const char* title) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, title);
    proxy;
}

void CCZxdgToplevelV6::sendSetAppId(const char* app_id) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, app_id);
    proxy;
}

void CCZxdgToplevelV6::sendShowWindowMenu(wl_proxy* seat, uint32_t serial, int32_t x, int32_t y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, serial, x, y);
    proxy;
}

void CCZxdgToplevelV6::sendMove(wl_proxy* seat, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, serial);
    proxy;
}

void CCZxdgToplevelV6::sendResize(wl_proxy* seat, uint32_t serial, uint32_t edges) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, serial, edges);
    proxy;
}

void CCZxdgToplevelV6::sendSetMaxSize(int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 7, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, width, height);
    proxy;
}

void CCZxdgToplevelV6::sendSetMinSize(int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 8, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, width, height);
    proxy;
}

void CCZxdgToplevelV6::sendSetMaximized() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 9, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZxdgToplevelV6::sendUnsetMaximized() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 10, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZxdgToplevelV6::sendSetFullscreen(wl_proxy* output) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 11, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, output);
    proxy;
}

void CCZxdgToplevelV6::sendUnsetFullscreen() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 12, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZxdgToplevelV6::sendSetMinimized() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 13, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CZxdgToplevelV6SetParentTypes[] = {
    &zxdg_toplevel_v6_interface,
};
static const wl_interface* _CZxdgToplevelV6SetTitleTypes[] = {
    nullptr,
};
static const wl_interface* _CZxdgToplevelV6SetAppIdTypes[] = {
    nullptr,
};
static const wl_interface* _CZxdgToplevelV6ShowWindowMenuTypes[] = {
    &wl_seat_interface,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZxdgToplevelV6MoveTypes[] = {
    &wl_seat_interface,
    nullptr,
};
static const wl_interface* _CZxdgToplevelV6ResizeTypes[] = {
    &wl_seat_interface,
    nullptr,
    nullptr,
};
static const wl_interface* _CZxdgToplevelV6SetMaxSizeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZxdgToplevelV6SetMinSizeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZxdgToplevelV6SetFullscreenTypes[] = {
    &wl_output_interface,
};
static const wl_interface* _CZxdgToplevelV6ConfigureTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CZxdgToplevelV6Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_parent", "?o", _CZxdgToplevelV6SetParentTypes + 0},
    { "set_title", "s", _CZxdgToplevelV6SetTitleTypes + 0},
    { "set_app_id", "s", _CZxdgToplevelV6SetAppIdTypes + 0},
    { "show_window_menu", "ouii", _CZxdgToplevelV6ShowWindowMenuTypes + 0},
    { "move", "ou", _CZxdgToplevelV6MoveTypes + 0},
    { "resize", "ouu", _CZxdgToplevelV6ResizeTypes + 0},
    { "set_max_size", "ii", _CZxdgToplevelV6SetMaxSizeTypes + 0},
    { "set_min_size", "ii", _CZxdgToplevelV6SetMinSizeTypes + 0},
    { "set_maximized", "", dummyTypes + 0},
    { "unset_maximized", "", dummyTypes + 0},
    { "set_fullscreen", "?o", _CZxdgToplevelV6SetFullscreenTypes + 0},
    { "unset_fullscreen", "", dummyTypes + 0},
    { "set_minimized", "", dummyTypes + 0},
};

static const wl_message _CZxdgToplevelV6Events[] = {
    { "configure", "iia", _CZxdgToplevelV6ConfigureTypes + 0},
    { "close", "", dummyTypes + 0},
};

const wl_interface zxdg_toplevel_v6_interface = {
    "zxdg_toplevel_v6", 1,
    14, _CZxdgToplevelV6Requests,
    2, _CZxdgToplevelV6Events,
};

CCZxdgToplevelV6::CCZxdgToplevelV6(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgToplevelV6VTable, this);
}

CCZxdgToplevelV6::~CCZxdgToplevelV6() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgToplevelV6::setConfigure(F<void(CCZxdgToplevelV6*, int32_t, int32_t, wl_array*)> handler) {
    requests.configure = handler;
}

void CCZxdgToplevelV6::setClose(F<void(CCZxdgToplevelV6*)> handler) {
    requests.close = handler;
}

static void _CZxdgPopupV6Configure(void* data, void* resource, int32_t x, int32_t y, int32_t width, int32_t height) {
    const auto PO = (CCZxdgPopupV6*)data;
    if (PO && PO->requests.configure)
        PO->requests.configure(PO, x, y, width, height);
}

static void _CZxdgPopupV6PopupDone(void* data, void* resource) {
    const auto PO = (CCZxdgPopupV6*)data;
    if (PO && PO->requests.popupDone)
        PO->requests.popupDone(PO);
}

static const void* _CCZxdgPopupV6VTable[] = {
    (void*)_CZxdgPopupV6Configure,
    (void*)_CZxdgPopupV6PopupDone,
};

void CCZxdgPopupV6::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZxdgPopupV6::sendGrab(wl_proxy* seat, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, serial);
    proxy;
}
static const wl_interface* _CZxdgPopupV6GrabTypes[] = {
    &wl_seat_interface,
    nullptr,
};
static const wl_interface* _CZxdgPopupV6ConfigureTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CZxdgPopupV6Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "grab", "ou", _CZxdgPopupV6GrabTypes + 0},
};

static const wl_message _CZxdgPopupV6Events[] = {
    { "configure", "iiii", _CZxdgPopupV6ConfigureTypes + 0},
    { "popup_done", "", dummyTypes + 0},
};

const wl_interface zxdg_popup_v6_interface = {
    "zxdg_popup_v6", 1,
    2, _CZxdgPopupV6Requests,
    2, _CZxdgPopupV6Events,
};

CCZxdgPopupV6::CCZxdgPopupV6(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgPopupV6VTable, this);
}

CCZxdgPopupV6::~CCZxdgPopupV6() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgPopupV6::setConfigure(F<void(CCZxdgPopupV6*, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.configure = handler;
}

void CCZxdgPopupV6::setPopupDone(F<void(CCZxdgPopupV6*)> handler) {
    requests.popupDone = handler;
}

#undef F
