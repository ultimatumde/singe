// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xwayland_keyboard_grab_unstable_v1

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
#include "xwayland-keyboard-grab-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_xwayland_keyboard_grab_manager_v1_interface;
extern const wl_interface zwp_xwayland_keyboard_grab_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;

static void _CZwpXwaylandKeyboardGrabManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpXwaylandKeyboardGrabManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpXwaylandKeyboardGrabManagerV1GrabKeyboard(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface, wl_resource* seat) {
    const auto PO = (CZwpXwaylandKeyboardGrabManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.grabKeyboard)
        PO->requests.grabKeyboard(PO, id, surface, seat);
}

static void _CZwpXwaylandKeyboardGrabManagerV1__DestroyListener(wl_listener* l, void* d) {
    CZwpXwaylandKeyboardGrabManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpXwaylandKeyboardGrabManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpXwaylandKeyboardGrabManagerV1VTable[] = {
    (void*)_CZwpXwaylandKeyboardGrabManagerV1Destroy,
    (void*)_CZwpXwaylandKeyboardGrabManagerV1GrabKeyboard,
};
static const wl_interface* _CZwpXwaylandKeyboardGrabManagerV1GrabKeyboardTypes[] = {
    &zwp_xwayland_keyboard_grab_v1_interface,
    &wl_surface_interface,
    &wl_seat_interface,
};

static const wl_message _CZwpXwaylandKeyboardGrabManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "grab_keyboard", "noo", _CZwpXwaylandKeyboardGrabManagerV1GrabKeyboardTypes + 0},
};

const wl_interface zwp_xwayland_keyboard_grab_manager_v1_interface = {
    "zwp_xwayland_keyboard_grab_manager_v1", 1,
    2, _CZwpXwaylandKeyboardGrabManagerV1Requests,
    0, nullptr,
};

CZwpXwaylandKeyboardGrabManagerV1::CZwpXwaylandKeyboardGrabManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_xwayland_keyboard_grab_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpXwaylandKeyboardGrabManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpXwaylandKeyboardGrabManagerV1VTable, this, nullptr);
}

CZwpXwaylandKeyboardGrabManagerV1::~CZwpXwaylandKeyboardGrabManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpXwaylandKeyboardGrabManagerV1::onDestroyCalled() {
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

void CZwpXwaylandKeyboardGrabManagerV1::setDestroy(F<void(CZwpXwaylandKeyboardGrabManagerV1*)> handler) {
    requests.destroy = handler;
}

void CZwpXwaylandKeyboardGrabManagerV1::setGrabKeyboard(F<void(CZwpXwaylandKeyboardGrabManagerV1*, uint32_t, wl_resource*, wl_resource*)> handler) {
    requests.grabKeyboard = handler;
}

static void _CZwpXwaylandKeyboardGrabV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpXwaylandKeyboardGrabV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpXwaylandKeyboardGrabV1__DestroyListener(wl_listener* l, void* d) {
    CZwpXwaylandKeyboardGrabV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpXwaylandKeyboardGrabV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpXwaylandKeyboardGrabV1VTable[] = {
    (void*)_CZwpXwaylandKeyboardGrabV1Destroy,
};

static const wl_message _CZwpXwaylandKeyboardGrabV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

const wl_interface zwp_xwayland_keyboard_grab_v1_interface = {
    "zwp_xwayland_keyboard_grab_v1", 1,
    1, _CZwpXwaylandKeyboardGrabV1Requests,
    0, nullptr,
};

CZwpXwaylandKeyboardGrabV1::CZwpXwaylandKeyboardGrabV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_xwayland_keyboard_grab_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpXwaylandKeyboardGrabV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpXwaylandKeyboardGrabV1VTable, this, nullptr);
}

CZwpXwaylandKeyboardGrabV1::~CZwpXwaylandKeyboardGrabV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpXwaylandKeyboardGrabV1::onDestroyCalled() {
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

void CZwpXwaylandKeyboardGrabV1::setDestroy(F<void(CZwpXwaylandKeyboardGrabV1*)> handler) {
    requests.destroy = handler;
}

#undef F
