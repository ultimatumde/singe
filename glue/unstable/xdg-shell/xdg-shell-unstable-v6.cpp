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

static void _CZxdgShellV6Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgShellV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgShellV6CreatePositioner(wl_client* client, wl_resource* resource, uint32_t id) {
    const auto PO = (CZxdgShellV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.createPositioner)
        PO->requests.createPositioner(PO, id);
}

static void _CZxdgShellV6GetXdgSurface(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CZxdgShellV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getXdgSurface)
        PO->requests.getXdgSurface(PO, id, surface);
}

static void _CZxdgShellV6Pong(wl_client* client, wl_resource* resource, uint32_t serial) {
    const auto PO = (CZxdgShellV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.pong)
        PO->requests.pong(PO, serial);
}

static void _CZxdgShellV6__DestroyListener(wl_listener* l, void* d) {
    CZxdgShellV6DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgShellV6* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgShellV6VTable[] = {
    (void*)_CZxdgShellV6Destroy,
    (void*)_CZxdgShellV6CreatePositioner,
    (void*)_CZxdgShellV6GetXdgSurface,
    (void*)_CZxdgShellV6Pong,
};

void CZxdgShellV6::sendPing(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, serial);
}

void CZxdgShellV6::sendPingRaw(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, serial);
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

CZxdgShellV6::CZxdgShellV6(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_shell_v6_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgShellV6__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgShellV6VTable, this, nullptr);
}

CZxdgShellV6::~CZxdgShellV6() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgShellV6::onDestroyCalled() {
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

void CZxdgShellV6::setDestroy(F<void(CZxdgShellV6*)> handler) {
    requests.destroy = handler;
}

void CZxdgShellV6::setCreatePositioner(F<void(CZxdgShellV6*, uint32_t)> handler) {
    requests.createPositioner = handler;
}

void CZxdgShellV6::setGetXdgSurface(F<void(CZxdgShellV6*, uint32_t, wl_resource*)> handler) {
    requests.getXdgSurface = handler;
}

void CZxdgShellV6::setPong(F<void(CZxdgShellV6*, uint32_t)> handler) {
    requests.pong = handler;
}

static void _CZxdgPositionerV6Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgPositionerV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgPositionerV6SetSize(wl_client* client, wl_resource* resource, int32_t width, int32_t height) {
    const auto PO = (CZxdgPositionerV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setSize)
        PO->requests.setSize(PO, width, height);
}

static void _CZxdgPositionerV6SetAnchorRect(wl_client* client, wl_resource* resource, int32_t x, int32_t y, int32_t width, int32_t height) {
    const auto PO = (CZxdgPositionerV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setAnchorRect)
        PO->requests.setAnchorRect(PO, x, y, width, height);
}

static void _CZxdgPositionerV6SetAnchor(wl_client* client, wl_resource* resource, zxdgPositionerV6Anchor anchor) {
    const auto PO = (CZxdgPositionerV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setAnchor)
        PO->requests.setAnchor(PO, anchor);
}

static void _CZxdgPositionerV6SetGravity(wl_client* client, wl_resource* resource, zxdgPositionerV6Gravity gravity) {
    const auto PO = (CZxdgPositionerV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setGravity)
        PO->requests.setGravity(PO, gravity);
}

static void _CZxdgPositionerV6SetConstraintAdjustment(wl_client* client, wl_resource* resource, uint32_t constraint_adjustment) {
    const auto PO = (CZxdgPositionerV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setConstraintAdjustment)
        PO->requests.setConstraintAdjustment(PO, constraint_adjustment);
}

static void _CZxdgPositionerV6SetOffset(wl_client* client, wl_resource* resource, int32_t x, int32_t y) {
    const auto PO = (CZxdgPositionerV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setOffset)
        PO->requests.setOffset(PO, x, y);
}

static void _CZxdgPositionerV6__DestroyListener(wl_listener* l, void* d) {
    CZxdgPositionerV6DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgPositionerV6* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgPositionerV6VTable[] = {
    (void*)_CZxdgPositionerV6Destroy,
    (void*)_CZxdgPositionerV6SetSize,
    (void*)_CZxdgPositionerV6SetAnchorRect,
    (void*)_CZxdgPositionerV6SetAnchor,
    (void*)_CZxdgPositionerV6SetGravity,
    (void*)_CZxdgPositionerV6SetConstraintAdjustment,
    (void*)_CZxdgPositionerV6SetOffset,
};
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

CZxdgPositionerV6::CZxdgPositionerV6(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_positioner_v6_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgPositionerV6__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgPositionerV6VTable, this, nullptr);
}

CZxdgPositionerV6::~CZxdgPositionerV6() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgPositionerV6::onDestroyCalled() {
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

void CZxdgPositionerV6::setDestroy(F<void(CZxdgPositionerV6*)> handler) {
    requests.destroy = handler;
}

void CZxdgPositionerV6::setSetSize(F<void(CZxdgPositionerV6*, int32_t, int32_t)> handler) {
    requests.setSize = handler;
}

void CZxdgPositionerV6::setSetAnchorRect(F<void(CZxdgPositionerV6*, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.setAnchorRect = handler;
}

void CZxdgPositionerV6::setSetAnchor(F<void(CZxdgPositionerV6*, zxdgPositionerV6Anchor)> handler) {
    requests.setAnchor = handler;
}

void CZxdgPositionerV6::setSetGravity(F<void(CZxdgPositionerV6*, zxdgPositionerV6Gravity)> handler) {
    requests.setGravity = handler;
}

void CZxdgPositionerV6::setSetConstraintAdjustment(F<void(CZxdgPositionerV6*, uint32_t)> handler) {
    requests.setConstraintAdjustment = handler;
}

void CZxdgPositionerV6::setSetOffset(F<void(CZxdgPositionerV6*, int32_t, int32_t)> handler) {
    requests.setOffset = handler;
}

static void _CZxdgSurfaceV6Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgSurfaceV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgSurfaceV6GetToplevel(wl_client* client, wl_resource* resource, uint32_t id) {
    const auto PO = (CZxdgSurfaceV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getToplevel)
        PO->requests.getToplevel(PO, id);
}

static void _CZxdgSurfaceV6GetPopup(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* parent, wl_resource* positioner) {
    const auto PO = (CZxdgSurfaceV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getPopup)
        PO->requests.getPopup(PO, id, parent, positioner);
}

static void _CZxdgSurfaceV6SetWindowGeometry(wl_client* client, wl_resource* resource, int32_t x, int32_t y, int32_t width, int32_t height) {
    const auto PO = (CZxdgSurfaceV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setWindowGeometry)
        PO->requests.setWindowGeometry(PO, x, y, width, height);
}

static void _CZxdgSurfaceV6AckConfigure(wl_client* client, wl_resource* resource, uint32_t serial) {
    const auto PO = (CZxdgSurfaceV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.ackConfigure)
        PO->requests.ackConfigure(PO, serial);
}

static void _CZxdgSurfaceV6__DestroyListener(wl_listener* l, void* d) {
    CZxdgSurfaceV6DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgSurfaceV6* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgSurfaceV6VTable[] = {
    (void*)_CZxdgSurfaceV6Destroy,
    (void*)_CZxdgSurfaceV6GetToplevel,
    (void*)_CZxdgSurfaceV6GetPopup,
    (void*)_CZxdgSurfaceV6SetWindowGeometry,
    (void*)_CZxdgSurfaceV6AckConfigure,
};

void CZxdgSurfaceV6::sendConfigure(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, serial);
}

void CZxdgSurfaceV6::sendConfigureRaw(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, serial);
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

CZxdgSurfaceV6::CZxdgSurfaceV6(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_surface_v6_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgSurfaceV6__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgSurfaceV6VTable, this, nullptr);
}

CZxdgSurfaceV6::~CZxdgSurfaceV6() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgSurfaceV6::onDestroyCalled() {
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

void CZxdgSurfaceV6::setDestroy(F<void(CZxdgSurfaceV6*)> handler) {
    requests.destroy = handler;
}

void CZxdgSurfaceV6::setGetToplevel(F<void(CZxdgSurfaceV6*, uint32_t)> handler) {
    requests.getToplevel = handler;
}

void CZxdgSurfaceV6::setGetPopup(F<void(CZxdgSurfaceV6*, uint32_t, wl_resource*, wl_resource*)> handler) {
    requests.getPopup = handler;
}

void CZxdgSurfaceV6::setSetWindowGeometry(F<void(CZxdgSurfaceV6*, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.setWindowGeometry = handler;
}

void CZxdgSurfaceV6::setAckConfigure(F<void(CZxdgSurfaceV6*, uint32_t)> handler) {
    requests.ackConfigure = handler;
}

static void _CZxdgToplevelV6Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgToplevelV6SetParent(wl_client* client, wl_resource* resource, wl_resource* parent) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setParent)
        PO->requests.setParent(PO, parent);
}

static void _CZxdgToplevelV6SetTitle(wl_client* client, wl_resource* resource, const char* title) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setTitle)
        PO->requests.setTitle(PO, title);
}

static void _CZxdgToplevelV6SetAppId(wl_client* client, wl_resource* resource, const char* app_id) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setAppId)
        PO->requests.setAppId(PO, app_id);
}

static void _CZxdgToplevelV6ShowWindowMenu(wl_client* client, wl_resource* resource, wl_resource* seat, uint32_t serial, int32_t x, int32_t y) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.showWindowMenu)
        PO->requests.showWindowMenu(PO, seat, serial, x, y);
}

static void _CZxdgToplevelV6Move(wl_client* client, wl_resource* resource, wl_resource* seat, uint32_t serial) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.move)
        PO->requests.move(PO, seat, serial);
}

static void _CZxdgToplevelV6Resize(wl_client* client, wl_resource* resource, wl_resource* seat, uint32_t serial, uint32_t edges) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.resize)
        PO->requests.resize(PO, seat, serial, edges);
}

static void _CZxdgToplevelV6SetMaxSize(wl_client* client, wl_resource* resource, int32_t width, int32_t height) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMaxSize)
        PO->requests.setMaxSize(PO, width, height);
}

static void _CZxdgToplevelV6SetMinSize(wl_client* client, wl_resource* resource, int32_t width, int32_t height) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMinSize)
        PO->requests.setMinSize(PO, width, height);
}

static void _CZxdgToplevelV6SetMaximized(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMaximized)
        PO->requests.setMaximized(PO);
}

static void _CZxdgToplevelV6UnsetMaximized(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.unsetMaximized)
        PO->requests.unsetMaximized(PO);
}

static void _CZxdgToplevelV6SetFullscreen(wl_client* client, wl_resource* resource, wl_resource* output) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setFullscreen)
        PO->requests.setFullscreen(PO, output);
}

static void _CZxdgToplevelV6UnsetFullscreen(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.unsetFullscreen)
        PO->requests.unsetFullscreen(PO);
}

static void _CZxdgToplevelV6SetMinimized(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgToplevelV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMinimized)
        PO->requests.setMinimized(PO);
}

static void _CZxdgToplevelV6__DestroyListener(wl_listener* l, void* d) {
    CZxdgToplevelV6DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgToplevelV6* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgToplevelV6VTable[] = {
    (void*)_CZxdgToplevelV6Destroy,
    (void*)_CZxdgToplevelV6SetParent,
    (void*)_CZxdgToplevelV6SetTitle,
    (void*)_CZxdgToplevelV6SetAppId,
    (void*)_CZxdgToplevelV6ShowWindowMenu,
    (void*)_CZxdgToplevelV6Move,
    (void*)_CZxdgToplevelV6Resize,
    (void*)_CZxdgToplevelV6SetMaxSize,
    (void*)_CZxdgToplevelV6SetMinSize,
    (void*)_CZxdgToplevelV6SetMaximized,
    (void*)_CZxdgToplevelV6UnsetMaximized,
    (void*)_CZxdgToplevelV6SetFullscreen,
    (void*)_CZxdgToplevelV6UnsetFullscreen,
    (void*)_CZxdgToplevelV6SetMinimized,
};

void CZxdgToplevelV6::sendConfigure(int32_t width, int32_t height, wl_array* states) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, width, height, states);
}

void CZxdgToplevelV6::sendClose() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZxdgToplevelV6::sendConfigureRaw(int32_t width, int32_t height, wl_array* states) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, width, height, states);
}

void CZxdgToplevelV6::sendCloseRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
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

CZxdgToplevelV6::CZxdgToplevelV6(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_toplevel_v6_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgToplevelV6__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgToplevelV6VTable, this, nullptr);
}

CZxdgToplevelV6::~CZxdgToplevelV6() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgToplevelV6::onDestroyCalled() {
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

void CZxdgToplevelV6::setDestroy(F<void(CZxdgToplevelV6*)> handler) {
    requests.destroy = handler;
}

void CZxdgToplevelV6::setSetParent(F<void(CZxdgToplevelV6*, wl_resource*)> handler) {
    requests.setParent = handler;
}

void CZxdgToplevelV6::setSetTitle(F<void(CZxdgToplevelV6*, const char*)> handler) {
    requests.setTitle = handler;
}

void CZxdgToplevelV6::setSetAppId(F<void(CZxdgToplevelV6*, const char*)> handler) {
    requests.setAppId = handler;
}

void CZxdgToplevelV6::setShowWindowMenu(F<void(CZxdgToplevelV6*, wl_resource*, uint32_t, int32_t, int32_t)> handler) {
    requests.showWindowMenu = handler;
}

void CZxdgToplevelV6::setMove(F<void(CZxdgToplevelV6*, wl_resource*, uint32_t)> handler) {
    requests.move = handler;
}

void CZxdgToplevelV6::setResize(F<void(CZxdgToplevelV6*, wl_resource*, uint32_t, uint32_t)> handler) {
    requests.resize = handler;
}

void CZxdgToplevelV6::setSetMaxSize(F<void(CZxdgToplevelV6*, int32_t, int32_t)> handler) {
    requests.setMaxSize = handler;
}

void CZxdgToplevelV6::setSetMinSize(F<void(CZxdgToplevelV6*, int32_t, int32_t)> handler) {
    requests.setMinSize = handler;
}

void CZxdgToplevelV6::setSetMaximized(F<void(CZxdgToplevelV6*)> handler) {
    requests.setMaximized = handler;
}

void CZxdgToplevelV6::setUnsetMaximized(F<void(CZxdgToplevelV6*)> handler) {
    requests.unsetMaximized = handler;
}

void CZxdgToplevelV6::setSetFullscreen(F<void(CZxdgToplevelV6*, wl_resource*)> handler) {
    requests.setFullscreen = handler;
}

void CZxdgToplevelV6::setUnsetFullscreen(F<void(CZxdgToplevelV6*)> handler) {
    requests.unsetFullscreen = handler;
}

void CZxdgToplevelV6::setSetMinimized(F<void(CZxdgToplevelV6*)> handler) {
    requests.setMinimized = handler;
}

static void _CZxdgPopupV6Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgPopupV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgPopupV6Grab(wl_client* client, wl_resource* resource, wl_resource* seat, uint32_t serial) {
    const auto PO = (CZxdgPopupV6*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.grab)
        PO->requests.grab(PO, seat, serial);
}

static void _CZxdgPopupV6__DestroyListener(wl_listener* l, void* d) {
    CZxdgPopupV6DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgPopupV6* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgPopupV6VTable[] = {
    (void*)_CZxdgPopupV6Destroy,
    (void*)_CZxdgPopupV6Grab,
};

void CZxdgPopupV6::sendConfigure(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, x, y, width, height);
}

void CZxdgPopupV6::sendPopupDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZxdgPopupV6::sendConfigureRaw(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, x, y, width, height);
}

void CZxdgPopupV6::sendPopupDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
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

CZxdgPopupV6::CZxdgPopupV6(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_popup_v6_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgPopupV6__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgPopupV6VTable, this, nullptr);
}

CZxdgPopupV6::~CZxdgPopupV6() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgPopupV6::onDestroyCalled() {
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

void CZxdgPopupV6::setDestroy(F<void(CZxdgPopupV6*)> handler) {
    requests.destroy = handler;
}

void CZxdgPopupV6::setGrab(F<void(CZxdgPopupV6*, wl_resource*, uint32_t)> handler) {
    requests.grab = handler;
}

#undef F
