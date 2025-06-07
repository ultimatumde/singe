// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// input_timestamps_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2017 Collabora, Ltd.

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
#include "input-timestamps-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_input_timestamps_manager_v1_interface;
extern const wl_interface zwp_input_timestamps_v1_interface;
extern const wl_interface wl_keyboard_interface;
extern const wl_interface wl_pointer_interface;
extern const wl_interface wl_touch_interface;

static void _CZwpInputTimestampsManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpInputTimestampsManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpInputTimestampsManagerV1GetKeyboardTimestamps(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* keyboard) {
    const auto PO = (CZwpInputTimestampsManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getKeyboardTimestamps)
        PO->requests.getKeyboardTimestamps(PO, id, keyboard);
}

static void _CZwpInputTimestampsManagerV1GetPointerTimestamps(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* pointer) {
    const auto PO = (CZwpInputTimestampsManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getPointerTimestamps)
        PO->requests.getPointerTimestamps(PO, id, pointer);
}

static void _CZwpInputTimestampsManagerV1GetTouchTimestamps(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* touch) {
    const auto PO = (CZwpInputTimestampsManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getTouchTimestamps)
        PO->requests.getTouchTimestamps(PO, id, touch);
}

static void _CZwpInputTimestampsManagerV1__DestroyListener(wl_listener* l, void* d) {
    CZwpInputTimestampsManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpInputTimestampsManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpInputTimestampsManagerV1VTable[] = {
    (void*)_CZwpInputTimestampsManagerV1Destroy,
    (void*)_CZwpInputTimestampsManagerV1GetKeyboardTimestamps,
    (void*)_CZwpInputTimestampsManagerV1GetPointerTimestamps,
    (void*)_CZwpInputTimestampsManagerV1GetTouchTimestamps,
};
static const wl_interface* _CZwpInputTimestampsManagerV1GetKeyboardTimestampsTypes[] = {
    &zwp_input_timestamps_v1_interface,
    &wl_keyboard_interface,
};
static const wl_interface* _CZwpInputTimestampsManagerV1GetPointerTimestampsTypes[] = {
    &zwp_input_timestamps_v1_interface,
    &wl_pointer_interface,
};
static const wl_interface* _CZwpInputTimestampsManagerV1GetTouchTimestampsTypes[] = {
    &zwp_input_timestamps_v1_interface,
    &wl_touch_interface,
};

static const wl_message _CZwpInputTimestampsManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_keyboard_timestamps", "no", _CZwpInputTimestampsManagerV1GetKeyboardTimestampsTypes + 0},
    { "get_pointer_timestamps", "no", _CZwpInputTimestampsManagerV1GetPointerTimestampsTypes + 0},
    { "get_touch_timestamps", "no", _CZwpInputTimestampsManagerV1GetTouchTimestampsTypes + 0},
};

const wl_interface zwp_input_timestamps_manager_v1_interface = {
    "zwp_input_timestamps_manager_v1", 1,
    4, _CZwpInputTimestampsManagerV1Requests,
    0, nullptr,
};

CZwpInputTimestampsManagerV1::CZwpInputTimestampsManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_input_timestamps_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpInputTimestampsManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpInputTimestampsManagerV1VTable, this, nullptr);
}

CZwpInputTimestampsManagerV1::~CZwpInputTimestampsManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpInputTimestampsManagerV1::onDestroyCalled() {
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

void CZwpInputTimestampsManagerV1::setDestroy(F<void(CZwpInputTimestampsManagerV1*)> handler) {
    requests.destroy = handler;
}

void CZwpInputTimestampsManagerV1::setGetKeyboardTimestamps(F<void(CZwpInputTimestampsManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getKeyboardTimestamps = handler;
}

void CZwpInputTimestampsManagerV1::setGetPointerTimestamps(F<void(CZwpInputTimestampsManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getPointerTimestamps = handler;
}

void CZwpInputTimestampsManagerV1::setGetTouchTimestamps(F<void(CZwpInputTimestampsManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getTouchTimestamps = handler;
}

static void _CZwpInputTimestampsV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpInputTimestampsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpInputTimestampsV1__DestroyListener(wl_listener* l, void* d) {
    CZwpInputTimestampsV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpInputTimestampsV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpInputTimestampsV1VTable[] = {
    (void*)_CZwpInputTimestampsV1Destroy,
};

void CZwpInputTimestampsV1::sendTimestamp(uint32_t tv_sec_hi, uint32_t tv_sec_lo, uint32_t tv_nsec) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, tv_sec_hi, tv_sec_lo, tv_nsec);
}

void CZwpInputTimestampsV1::sendTimestampRaw(uint32_t tv_sec_hi, uint32_t tv_sec_lo, uint32_t tv_nsec) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, tv_sec_hi, tv_sec_lo, tv_nsec);
}
static const wl_interface* _CZwpInputTimestampsV1TimestampTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CZwpInputTimestampsV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpInputTimestampsV1Events[] = {
    { "timestamp", "uuu", _CZwpInputTimestampsV1TimestampTypes + 0},
};

const wl_interface zwp_input_timestamps_v1_interface = {
    "zwp_input_timestamps_v1", 1,
    1, _CZwpInputTimestampsV1Requests,
    1, _CZwpInputTimestampsV1Events,
};

CZwpInputTimestampsV1::CZwpInputTimestampsV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_input_timestamps_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpInputTimestampsV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpInputTimestampsV1VTable, this, nullptr);
}

CZwpInputTimestampsV1::~CZwpInputTimestampsV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpInputTimestampsV1::onDestroyCalled() {
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

void CZwpInputTimestampsV1::setDestroy(F<void(CZwpInputTimestampsV1*)> handler) {
    requests.destroy = handler;
}

#undef F
