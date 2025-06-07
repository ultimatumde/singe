// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// build_time_wayland_tests

/*
 This protocol's authors' copyright notice is:


    Copyright © 2017 Samsung Electronics Co., Ltd

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation files
    (the "Software"), to deal in the Software without restriction,
    including without limitation the rights to use, copy, modify, merge,
    publish, distribute, sublicense, and/or sell copies of the Software,
    and to permit persons to whom the Software is furnished to do so,
    subject to the following conditions:

    The above copyright notice and this permission notice (including the
    next paragraph) shall be included in all copies or substantial
    portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
    BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
    ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "tests.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface fd_passer_interface;

static void _CFdPasserDestroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CFdPasser*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CFdPasserConjoin(wl_client* client, wl_resource* resource, wl_resource* passer) {
    const auto PO = (CFdPasser*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.conjoin)
        PO->requests.conjoin(PO, passer);
}

static void _CFdPasser__DestroyListener(wl_listener* l, void* d) {
    CFdPasserDestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CFdPasser* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CFdPasserVTable[] = {
    (void*)_CFdPasserDestroy,
    (void*)_CFdPasserConjoin,
};

void CFdPasser::sendPreFd() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CFdPasser::sendFd(int32_t fd) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, fd);
}

void CFdPasser::sendPreFdRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CFdPasser::sendFdRaw(int32_t fd) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, fd);
}
static const wl_interface* _CFdPasserConjoinTypes[] = {
    &fd_passer_interface,
};
static const wl_interface* _CFdPasserFdTypes[] = {
    nullptr,
};

static const wl_message _CFdPasserRequests[] = {
    { "destroy", "", dummyTypes + 0},
    { "conjoin", "2o", _CFdPasserConjoinTypes + 0},
};

static const wl_message _CFdPasserEvents[] = {
    { "pre_fd", "", dummyTypes + 0},
    { "fd", "h", _CFdPasserFdTypes + 0},
};

const wl_interface fd_passer_interface = {
    "fd_passer", 2,
    2, _CFdPasserRequests,
    2, _CFdPasserEvents,
};

CFdPasser::CFdPasser(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &fd_passer_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CFdPasser__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CFdPasserVTable, this, nullptr);
}

CFdPasser::~CFdPasser() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CFdPasser::onDestroyCalled() {
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

void CFdPasser::setDestroy(F<void(CFdPasser*)> handler) {
    requests.destroy = handler;
}

void CFdPasser::setConjoin(F<void(CFdPasser*, wl_resource*)> handler) {
    requests.conjoin = handler;
}

#undef F
