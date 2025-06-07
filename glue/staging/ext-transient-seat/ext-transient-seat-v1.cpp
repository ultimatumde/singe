// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_transient_seat_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2020 - 2023 Andri Yngvason

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
#include "ext-transient-seat-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_transient_seat_manager_v1_interface;
extern const wl_interface ext_transient_seat_v1_interface;

static void _CExtTransientSeatManagerV1Create(wl_client* client, wl_resource* resource, uint32_t seat) {
    const auto PO = (CExtTransientSeatManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.create)
        PO->requests.create(PO, seat);
}

static void _CExtTransientSeatManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CExtTransientSeatManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CExtTransientSeatManagerV1__DestroyListener(wl_listener* l, void* d) {
    CExtTransientSeatManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CExtTransientSeatManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CExtTransientSeatManagerV1VTable[] = {
    (void*)_CExtTransientSeatManagerV1Create,
    (void*)_CExtTransientSeatManagerV1Destroy,
};
static const wl_interface* _CExtTransientSeatManagerV1CreateTypes[] = {
    &ext_transient_seat_v1_interface,
};

static const wl_message _CExtTransientSeatManagerV1Requests[] = {
    { "create", "n", _CExtTransientSeatManagerV1CreateTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface ext_transient_seat_manager_v1_interface = {
    "ext_transient_seat_manager_v1", 1,
    2, _CExtTransientSeatManagerV1Requests,
    0, nullptr,
};

CExtTransientSeatManagerV1::CExtTransientSeatManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &ext_transient_seat_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CExtTransientSeatManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CExtTransientSeatManagerV1VTable, this, nullptr);
}

CExtTransientSeatManagerV1::~CExtTransientSeatManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CExtTransientSeatManagerV1::onDestroyCalled() {
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

void CExtTransientSeatManagerV1::setCreate(F<void(CExtTransientSeatManagerV1*, uint32_t)> handler) {
    requests.create = handler;
}

void CExtTransientSeatManagerV1::setDestroy(F<void(CExtTransientSeatManagerV1*)> handler) {
    requests.destroy = handler;
}

static void _CExtTransientSeatV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CExtTransientSeatV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CExtTransientSeatV1__DestroyListener(wl_listener* l, void* d) {
    CExtTransientSeatV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CExtTransientSeatV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CExtTransientSeatV1VTable[] = {
    (void*)_CExtTransientSeatV1Destroy,
};

void CExtTransientSeatV1::sendReady(uint32_t global_name) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, global_name);
}

void CExtTransientSeatV1::sendDenied() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CExtTransientSeatV1::sendReadyRaw(uint32_t global_name) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, global_name);
}

void CExtTransientSeatV1::sendDeniedRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}
static const wl_interface* _CExtTransientSeatV1ReadyTypes[] = {
    nullptr,
};

static const wl_message _CExtTransientSeatV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CExtTransientSeatV1Events[] = {
    { "ready", "u", _CExtTransientSeatV1ReadyTypes + 0},
    { "denied", "", dummyTypes + 0},
};

const wl_interface ext_transient_seat_v1_interface = {
    "ext_transient_seat_v1", 1,
    1, _CExtTransientSeatV1Requests,
    2, _CExtTransientSeatV1Events,
};

CExtTransientSeatV1::CExtTransientSeatV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &ext_transient_seat_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CExtTransientSeatV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CExtTransientSeatV1VTable, this, nullptr);
}

CExtTransientSeatV1::~CExtTransientSeatV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CExtTransientSeatV1::onDestroyCalled() {
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

void CExtTransientSeatV1::setDestroy(F<void(CExtTransientSeatV1*)> handler) {
    requests.destroy = handler;
}

#undef F
