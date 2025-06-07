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

static void _CXdgToplevelIconManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgToplevelIconManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CXdgToplevelIconManagerV1CreateIcon(wl_client* client, wl_resource* resource, uint32_t id) {
    const auto PO = (CXdgToplevelIconManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.createIcon)
        PO->requests.createIcon(PO, id);
}

static void _CXdgToplevelIconManagerV1SetIcon(wl_client* client, wl_resource* resource, wl_resource* toplevel, wl_resource* icon) {
    const auto PO = (CXdgToplevelIconManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setIcon)
        PO->requests.setIcon(PO, toplevel, icon);
}

static void _CXdgToplevelIconManagerV1__DestroyListener(wl_listener* l, void* d) {
    CXdgToplevelIconManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CXdgToplevelIconManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CXdgToplevelIconManagerV1VTable[] = {
    (void*)_CXdgToplevelIconManagerV1Destroy,
    (void*)_CXdgToplevelIconManagerV1CreateIcon,
    (void*)_CXdgToplevelIconManagerV1SetIcon,
};

void CXdgToplevelIconManagerV1::sendIconSize(int32_t size) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, size);
}

void CXdgToplevelIconManagerV1::sendDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CXdgToplevelIconManagerV1::sendIconSizeRaw(int32_t size) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, size);
}

void CXdgToplevelIconManagerV1::sendDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
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

CXdgToplevelIconManagerV1::CXdgToplevelIconManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &xdg_toplevel_icon_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CXdgToplevelIconManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CXdgToplevelIconManagerV1VTable, this, nullptr);
}

CXdgToplevelIconManagerV1::~CXdgToplevelIconManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CXdgToplevelIconManagerV1::onDestroyCalled() {
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

void CXdgToplevelIconManagerV1::setDestroy(F<void(CXdgToplevelIconManagerV1*)> handler) {
    requests.destroy = handler;
}

void CXdgToplevelIconManagerV1::setCreateIcon(F<void(CXdgToplevelIconManagerV1*, uint32_t)> handler) {
    requests.createIcon = handler;
}

void CXdgToplevelIconManagerV1::setSetIcon(F<void(CXdgToplevelIconManagerV1*, wl_resource*, wl_resource*)> handler) {
    requests.setIcon = handler;
}

static void _CXdgToplevelIconV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgToplevelIconV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CXdgToplevelIconV1SetName(wl_client* client, wl_resource* resource, const char* icon_name) {
    const auto PO = (CXdgToplevelIconV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setName)
        PO->requests.setName(PO, icon_name);
}

static void _CXdgToplevelIconV1AddBuffer(wl_client* client, wl_resource* resource, wl_resource* buffer, int32_t scale) {
    const auto PO = (CXdgToplevelIconV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.addBuffer)
        PO->requests.addBuffer(PO, buffer, scale);
}

static void _CXdgToplevelIconV1__DestroyListener(wl_listener* l, void* d) {
    CXdgToplevelIconV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CXdgToplevelIconV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CXdgToplevelIconV1VTable[] = {
    (void*)_CXdgToplevelIconV1Destroy,
    (void*)_CXdgToplevelIconV1SetName,
    (void*)_CXdgToplevelIconV1AddBuffer,
};
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

CXdgToplevelIconV1::CXdgToplevelIconV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &xdg_toplevel_icon_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CXdgToplevelIconV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CXdgToplevelIconV1VTable, this, nullptr);
}

CXdgToplevelIconV1::~CXdgToplevelIconV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CXdgToplevelIconV1::onDestroyCalled() {
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

void CXdgToplevelIconV1::setDestroy(F<void(CXdgToplevelIconV1*)> handler) {
    requests.destroy = handler;
}

void CXdgToplevelIconV1::setSetName(F<void(CXdgToplevelIconV1*, const char*)> handler) {
    requests.setName = handler;
}

void CXdgToplevelIconV1::setAddBuffer(F<void(CXdgToplevelIconV1*, wl_resource*, int32_t)> handler) {
    requests.addBuffer = handler;
}

#undef F
