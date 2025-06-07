// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_foreign_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2015-2016 Red Hat Inc.

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
#include "xdg-foreign-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zxdg_exporter_v1_interface;
extern const wl_interface zxdg_importer_v1_interface;
extern const wl_interface zxdg_exported_v1_interface;
extern const wl_interface zxdg_imported_v1_interface;
extern const wl_interface wl_surface_interface;

static void _CZxdgExporterV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgExporterV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgExporterV1Export(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CZxdgExporterV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.export)
        PO->requests.export(PO, id, surface);
}

static void _CZxdgExporterV1__DestroyListener(wl_listener* l, void* d) {
    CZxdgExporterV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgExporterV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgExporterV1VTable[] = {
    (void*)_CZxdgExporterV1Destroy,
    (void*)_CZxdgExporterV1Export,
};
static const wl_interface* _CZxdgExporterV1ExportTypes[] = {
    &zxdg_exported_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CZxdgExporterV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "export", "no", _CZxdgExporterV1ExportTypes + 0},
};

const wl_interface zxdg_exporter_v1_interface = {
    "zxdg_exporter_v1", 1,
    2, _CZxdgExporterV1Requests,
    0, nullptr,
};

CZxdgExporterV1::CZxdgExporterV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_exporter_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgExporterV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgExporterV1VTable, this, nullptr);
}

CZxdgExporterV1::~CZxdgExporterV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgExporterV1::onDestroyCalled() {
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

void CZxdgExporterV1::setDestroy(F<void(CZxdgExporterV1*)> handler) {
    requests.destroy = handler;
}

void CZxdgExporterV1::setExport(F<void(CZxdgExporterV1*, uint32_t, wl_resource*)> handler) {
    requests.export = handler;
}

static void _CZxdgImporterV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgImporterV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgImporterV1Import(wl_client* client, wl_resource* resource, uint32_t id, const char* handle) {
    const auto PO = (CZxdgImporterV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.import)
        PO->requests.import(PO, id, handle);
}

static void _CZxdgImporterV1__DestroyListener(wl_listener* l, void* d) {
    CZxdgImporterV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgImporterV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgImporterV1VTable[] = {
    (void*)_CZxdgImporterV1Destroy,
    (void*)_CZxdgImporterV1Import,
};
static const wl_interface* _CZxdgImporterV1ImportTypes[] = {
    &zxdg_imported_v1_interface,
    nullptr,
};

static const wl_message _CZxdgImporterV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "import", "ns", _CZxdgImporterV1ImportTypes + 0},
};

const wl_interface zxdg_importer_v1_interface = {
    "zxdg_importer_v1", 1,
    2, _CZxdgImporterV1Requests,
    0, nullptr,
};

CZxdgImporterV1::CZxdgImporterV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_importer_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgImporterV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgImporterV1VTable, this, nullptr);
}

CZxdgImporterV1::~CZxdgImporterV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgImporterV1::onDestroyCalled() {
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

void CZxdgImporterV1::setDestroy(F<void(CZxdgImporterV1*)> handler) {
    requests.destroy = handler;
}

void CZxdgImporterV1::setImport(F<void(CZxdgImporterV1*, uint32_t, const char*)> handler) {
    requests.import = handler;
}

static void _CZxdgExportedV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgExportedV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgExportedV1__DestroyListener(wl_listener* l, void* d) {
    CZxdgExportedV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgExportedV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgExportedV1VTable[] = {
    (void*)_CZxdgExportedV1Destroy,
};

void CZxdgExportedV1::sendHandle(const char* handle) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, handle);
}

void CZxdgExportedV1::sendHandleRaw(const char* handle) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, handle);
}
static const wl_interface* _CZxdgExportedV1HandleTypes[] = {
    nullptr,
};

static const wl_message _CZxdgExportedV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZxdgExportedV1Events[] = {
    { "handle", "s", _CZxdgExportedV1HandleTypes + 0},
};

const wl_interface zxdg_exported_v1_interface = {
    "zxdg_exported_v1", 1,
    1, _CZxdgExportedV1Requests,
    1, _CZxdgExportedV1Events,
};

CZxdgExportedV1::CZxdgExportedV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_exported_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgExportedV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgExportedV1VTable, this, nullptr);
}

CZxdgExportedV1::~CZxdgExportedV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgExportedV1::onDestroyCalled() {
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

void CZxdgExportedV1::setDestroy(F<void(CZxdgExportedV1*)> handler) {
    requests.destroy = handler;
}

static void _CZxdgImportedV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZxdgImportedV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZxdgImportedV1SetParentOf(wl_client* client, wl_resource* resource, wl_resource* surface) {
    const auto PO = (CZxdgImportedV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setParentOf)
        PO->requests.setParentOf(PO, surface);
}

static void _CZxdgImportedV1__DestroyListener(wl_listener* l, void* d) {
    CZxdgImportedV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZxdgImportedV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZxdgImportedV1VTable[] = {
    (void*)_CZxdgImportedV1Destroy,
    (void*)_CZxdgImportedV1SetParentOf,
};

void CZxdgImportedV1::sendDestroyed() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CZxdgImportedV1::sendDestroyedRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}
static const wl_interface* _CZxdgImportedV1SetParentOfTypes[] = {
    &wl_surface_interface,
};

static const wl_message _CZxdgImportedV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_parent_of", "o", _CZxdgImportedV1SetParentOfTypes + 0},
};

static const wl_message _CZxdgImportedV1Events[] = {
    { "destroyed", "", dummyTypes + 0},
};

const wl_interface zxdg_imported_v1_interface = {
    "zxdg_imported_v1", 1,
    2, _CZxdgImportedV1Requests,
    1, _CZxdgImportedV1Events,
};

CZxdgImportedV1::CZxdgImportedV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zxdg_imported_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZxdgImportedV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZxdgImportedV1VTable, this, nullptr);
}

CZxdgImportedV1::~CZxdgImportedV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZxdgImportedV1::onDestroyCalled() {
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

void CZxdgImportedV1::setDestroy(F<void(CZxdgImportedV1*)> handler) {
    requests.destroy = handler;
}

void CZxdgImportedV1::setSetParentOf(F<void(CZxdgImportedV1*, wl_resource*)> handler) {
    requests.setParentOf = handler;
}

#undef F
