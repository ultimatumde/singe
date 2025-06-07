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

static void _CXdgShellDestroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgShell*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CXdgShellUseUnstableVersion(wl_client* client, wl_resource* resource, int32_t version) {
    const auto PO = (CXdgShell*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.useUnstableVersion)
        PO->requests.useUnstableVersion(PO, version);
}

static void _CXdgShellGetXdgSurface(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CXdgShell*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getXdgSurface)
        PO->requests.getXdgSurface(PO, id, surface);
}

static void _CXdgShellGetXdgPopup(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface, wl_resource* parent, wl_resource* seat, uint32_t serial, int32_t x, int32_t y) {
    const auto PO = (CXdgShell*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getXdgPopup)
        PO->requests.getXdgPopup(PO, id, surface, parent, seat, serial, x, y);
}

static void _CXdgShellPong(wl_client* client, wl_resource* resource, uint32_t serial) {
    const auto PO = (CXdgShell*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.pong)
        PO->requests.pong(PO, serial);
}

static void _CXdgShell__DestroyListener(wl_listener* l, void* d) {
    CXdgShellDestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CXdgShell* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CXdgShellVTable[] = {
    (void*)_CXdgShellDestroy,
    (void*)_CXdgShellUseUnstableVersion,
    (void*)_CXdgShellGetXdgSurface,
    (void*)_CXdgShellGetXdgPopup,
    (void*)_CXdgShellPong,
};

void CXdgShell::sendPing(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, serial);
}

void CXdgShell::sendPingRaw(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, serial);
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

CXdgShell::CXdgShell(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &xdg_shell_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CXdgShell__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CXdgShellVTable, this, nullptr);
}

CXdgShell::~CXdgShell() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CXdgShell::onDestroyCalled() {
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

void CXdgShell::setDestroy(F<void(CXdgShell*)> handler) {
    requests.destroy = handler;
}

void CXdgShell::setUseUnstableVersion(F<void(CXdgShell*, int32_t)> handler) {
    requests.useUnstableVersion = handler;
}

void CXdgShell::setGetXdgSurface(F<void(CXdgShell*, uint32_t, wl_resource*)> handler) {
    requests.getXdgSurface = handler;
}

void CXdgShell::setGetXdgPopup(F<void(CXdgShell*, uint32_t, wl_resource*, wl_resource*, wl_resource*, uint32_t, int32_t, int32_t)> handler) {
    requests.getXdgPopup = handler;
}

void CXdgShell::setPong(F<void(CXdgShell*, uint32_t)> handler) {
    requests.pong = handler;
}

static void _CXdgSurfaceDestroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CXdgSurfaceSetParent(wl_client* client, wl_resource* resource, wl_resource* parent) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setParent)
        PO->requests.setParent(PO, parent);
}

static void _CXdgSurfaceSetTitle(wl_client* client, wl_resource* resource, const char* title) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setTitle)
        PO->requests.setTitle(PO, title);
}

static void _CXdgSurfaceSetAppId(wl_client* client, wl_resource* resource, const char* app_id) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setAppId)
        PO->requests.setAppId(PO, app_id);
}

static void _CXdgSurfaceShowWindowMenu(wl_client* client, wl_resource* resource, wl_resource* seat, uint32_t serial, int32_t x, int32_t y) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.showWindowMenu)
        PO->requests.showWindowMenu(PO, seat, serial, x, y);
}

static void _CXdgSurfaceMove(wl_client* client, wl_resource* resource, wl_resource* seat, uint32_t serial) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.move)
        PO->requests.move(PO, seat, serial);
}

static void _CXdgSurfaceResize(wl_client* client, wl_resource* resource, wl_resource* seat, uint32_t serial, uint32_t edges) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.resize)
        PO->requests.resize(PO, seat, serial, edges);
}

static void _CXdgSurfaceAckConfigure(wl_client* client, wl_resource* resource, uint32_t serial) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.ackConfigure)
        PO->requests.ackConfigure(PO, serial);
}

static void _CXdgSurfaceSetWindowGeometry(wl_client* client, wl_resource* resource, int32_t x, int32_t y, int32_t width, int32_t height) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setWindowGeometry)
        PO->requests.setWindowGeometry(PO, x, y, width, height);
}

static void _CXdgSurfaceSetMaximized(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMaximized)
        PO->requests.setMaximized(PO);
}

static void _CXdgSurfaceUnsetMaximized(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.unsetMaximized)
        PO->requests.unsetMaximized(PO);
}

static void _CXdgSurfaceSetFullscreen(wl_client* client, wl_resource* resource, wl_resource* output) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setFullscreen)
        PO->requests.setFullscreen(PO, output);
}

static void _CXdgSurfaceUnsetFullscreen(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.unsetFullscreen)
        PO->requests.unsetFullscreen(PO);
}

static void _CXdgSurfaceSetMinimized(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgSurface*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMinimized)
        PO->requests.setMinimized(PO);
}

static void _CXdgSurface__DestroyListener(wl_listener* l, void* d) {
    CXdgSurfaceDestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CXdgSurface* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CXdgSurfaceVTable[] = {
    (void*)_CXdgSurfaceDestroy,
    (void*)_CXdgSurfaceSetParent,
    (void*)_CXdgSurfaceSetTitle,
    (void*)_CXdgSurfaceSetAppId,
    (void*)_CXdgSurfaceShowWindowMenu,
    (void*)_CXdgSurfaceMove,
    (void*)_CXdgSurfaceResize,
    (void*)_CXdgSurfaceAckConfigure,
    (void*)_CXdgSurfaceSetWindowGeometry,
    (void*)_CXdgSurfaceSetMaximized,
    (void*)_CXdgSurfaceUnsetMaximized,
    (void*)_CXdgSurfaceSetFullscreen,
    (void*)_CXdgSurfaceUnsetFullscreen,
    (void*)_CXdgSurfaceSetMinimized,
};

void CXdgSurface::sendConfigure(int32_t width, int32_t height, wl_array* states, uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, width, height, states, serial);
}

void CXdgSurface::sendClose() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CXdgSurface::sendConfigureRaw(int32_t width, int32_t height, wl_array* states, uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, width, height, states, serial);
}

void CXdgSurface::sendCloseRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
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

CXdgSurface::CXdgSurface(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &xdg_surface_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CXdgSurface__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CXdgSurfaceVTable, this, nullptr);
}

CXdgSurface::~CXdgSurface() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CXdgSurface::onDestroyCalled() {
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

void CXdgSurface::setDestroy(F<void(CXdgSurface*)> handler) {
    requests.destroy = handler;
}

void CXdgSurface::setSetParent(F<void(CXdgSurface*, wl_resource*)> handler) {
    requests.setParent = handler;
}

void CXdgSurface::setSetTitle(F<void(CXdgSurface*, const char*)> handler) {
    requests.setTitle = handler;
}

void CXdgSurface::setSetAppId(F<void(CXdgSurface*, const char*)> handler) {
    requests.setAppId = handler;
}

void CXdgSurface::setShowWindowMenu(F<void(CXdgSurface*, wl_resource*, uint32_t, int32_t, int32_t)> handler) {
    requests.showWindowMenu = handler;
}

void CXdgSurface::setMove(F<void(CXdgSurface*, wl_resource*, uint32_t)> handler) {
    requests.move = handler;
}

void CXdgSurface::setResize(F<void(CXdgSurface*, wl_resource*, uint32_t, uint32_t)> handler) {
    requests.resize = handler;
}

void CXdgSurface::setAckConfigure(F<void(CXdgSurface*, uint32_t)> handler) {
    requests.ackConfigure = handler;
}

void CXdgSurface::setSetWindowGeometry(F<void(CXdgSurface*, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.setWindowGeometry = handler;
}

void CXdgSurface::setSetMaximized(F<void(CXdgSurface*)> handler) {
    requests.setMaximized = handler;
}

void CXdgSurface::setUnsetMaximized(F<void(CXdgSurface*)> handler) {
    requests.unsetMaximized = handler;
}

void CXdgSurface::setSetFullscreen(F<void(CXdgSurface*, wl_resource*)> handler) {
    requests.setFullscreen = handler;
}

void CXdgSurface::setUnsetFullscreen(F<void(CXdgSurface*)> handler) {
    requests.unsetFullscreen = handler;
}

void CXdgSurface::setSetMinimized(F<void(CXdgSurface*)> handler) {
    requests.setMinimized = handler;
}

static void _CXdgPopupDestroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgPopup*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CXdgPopup__DestroyListener(wl_listener* l, void* d) {
    CXdgPopupDestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CXdgPopup* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CXdgPopupVTable[] = {
    (void*)_CXdgPopupDestroy,
};

void CXdgPopup::sendPopupDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CXdgPopup::sendPopupDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
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

CXdgPopup::CXdgPopup(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &xdg_popup_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CXdgPopup__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CXdgPopupVTable, this, nullptr);
}

CXdgPopup::~CXdgPopup() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CXdgPopup::onDestroyCalled() {
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

void CXdgPopup::setDestroy(F<void(CXdgPopup*)> handler) {
    requests.destroy = handler;
}

#undef F
