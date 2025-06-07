// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_toplevel_drag_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2023 David Redondo

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
#include "xdg-toplevel-drag-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface xdg_toplevel_drag_manager_v1_interface;
extern const wl_interface xdg_toplevel_drag_v1_interface;
extern const wl_interface wl_data_source_interface;
extern const wl_interface xdg_toplevel_interface;

static void _CXdgToplevelDragManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgToplevelDragManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CXdgToplevelDragManagerV1GetXdgToplevelDrag(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* data_source) {
    const auto PO = (CXdgToplevelDragManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getXdgToplevelDrag)
        PO->requests.getXdgToplevelDrag(PO, id, data_source);
}

static void _CXdgToplevelDragManagerV1__DestroyListener(wl_listener* l, void* d) {
    CXdgToplevelDragManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CXdgToplevelDragManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CXdgToplevelDragManagerV1VTable[] = {
    (void*)_CXdgToplevelDragManagerV1Destroy,
    (void*)_CXdgToplevelDragManagerV1GetXdgToplevelDrag,
};
static const wl_interface* _CXdgToplevelDragManagerV1GetXdgToplevelDragTypes[] = {
    &xdg_toplevel_drag_v1_interface,
    &wl_data_source_interface,
};

static const wl_message _CXdgToplevelDragManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_xdg_toplevel_drag", "no", _CXdgToplevelDragManagerV1GetXdgToplevelDragTypes + 0},
};

const wl_interface xdg_toplevel_drag_manager_v1_interface = {
    "xdg_toplevel_drag_manager_v1", 1,
    2, _CXdgToplevelDragManagerV1Requests,
    0, nullptr,
};

CXdgToplevelDragManagerV1::CXdgToplevelDragManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &xdg_toplevel_drag_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CXdgToplevelDragManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CXdgToplevelDragManagerV1VTable, this, nullptr);
}

CXdgToplevelDragManagerV1::~CXdgToplevelDragManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CXdgToplevelDragManagerV1::onDestroyCalled() {
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

void CXdgToplevelDragManagerV1::setDestroy(F<void(CXdgToplevelDragManagerV1*)> handler) {
    requests.destroy = handler;
}

void CXdgToplevelDragManagerV1::setGetXdgToplevelDrag(F<void(CXdgToplevelDragManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getXdgToplevelDrag = handler;
}

static void _CXdgToplevelDragV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CXdgToplevelDragV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CXdgToplevelDragV1Attach(wl_client* client, wl_resource* resource, wl_resource* toplevel, int32_t x_offset, int32_t y_offset) {
    const auto PO = (CXdgToplevelDragV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.attach)
        PO->requests.attach(PO, toplevel, x_offset, y_offset);
}

static void _CXdgToplevelDragV1__DestroyListener(wl_listener* l, void* d) {
    CXdgToplevelDragV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CXdgToplevelDragV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CXdgToplevelDragV1VTable[] = {
    (void*)_CXdgToplevelDragV1Destroy,
    (void*)_CXdgToplevelDragV1Attach,
};
static const wl_interface* _CXdgToplevelDragV1AttachTypes[] = {
    &xdg_toplevel_interface,
    nullptr,
    nullptr,
};

static const wl_message _CXdgToplevelDragV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "attach", "oii", _CXdgToplevelDragV1AttachTypes + 0},
};

const wl_interface xdg_toplevel_drag_v1_interface = {
    "xdg_toplevel_drag_v1", 1,
    2, _CXdgToplevelDragV1Requests,
    0, nullptr,
};

CXdgToplevelDragV1::CXdgToplevelDragV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &xdg_toplevel_drag_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CXdgToplevelDragV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CXdgToplevelDragV1VTable, this, nullptr);
}

CXdgToplevelDragV1::~CXdgToplevelDragV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CXdgToplevelDragV1::onDestroyCalled() {
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

void CXdgToplevelDragV1::setDestroy(F<void(CXdgToplevelDragV1*)> handler) {
    requests.destroy = handler;
}

void CXdgToplevelDragV1::setAttach(F<void(CXdgToplevelDragV1*, wl_resource*, int32_t, int32_t)> handler) {
    requests.attach = handler;
}

#undef F
