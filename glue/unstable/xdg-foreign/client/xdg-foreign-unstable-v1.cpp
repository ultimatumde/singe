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

static const void* _CCZxdgExporterV1VTable[] = {
};

void CCZxdgExporterV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZxdgExporterV1::sendExport(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zxdg_exported_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
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

CCZxdgExporterV1::CCZxdgExporterV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgExporterV1VTable, this);
}

CCZxdgExporterV1::~CCZxdgExporterV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCZxdgImporterV1VTable[] = {
};

void CCZxdgImporterV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZxdgImporterV1::sendImport(const char* handle) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zxdg_imported_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, handle);

    return proxy;
}
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

CCZxdgImporterV1::CCZxdgImporterV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgImporterV1VTable, this);
}

CCZxdgImporterV1::~CCZxdgImporterV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CZxdgExportedV1Handle(void* data, void* resource, const char* handle) {
    const auto PO = (CCZxdgExportedV1*)data;
    if (PO && PO->requests.handle)
        PO->requests.handle(PO, handle);
}

static const void* _CCZxdgExportedV1VTable[] = {
    (void*)_CZxdgExportedV1Handle,
};

void CCZxdgExportedV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
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

CCZxdgExportedV1::CCZxdgExportedV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgExportedV1VTable, this);
}

CCZxdgExportedV1::~CCZxdgExportedV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgExportedV1::setHandle(F<void(CCZxdgExportedV1*, const char*)> handler) {
    requests.handle = handler;
}

static void _CZxdgImportedV1Destroyed(void* data, void* resource) {
    const auto PO = (CCZxdgImportedV1*)data;
    if (PO && PO->requests.destroyed)
        PO->requests.destroyed(PO);
}

static const void* _CCZxdgImportedV1VTable[] = {
    (void*)_CZxdgImportedV1Destroyed,
};

void CCZxdgImportedV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZxdgImportedV1::sendSetParentOf(wl_proxy* surface) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, surface);
    proxy;
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

CCZxdgImportedV1::CCZxdgImportedV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgImportedV1VTable, this);
}

CCZxdgImportedV1::~CCZxdgImportedV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgImportedV1::setDestroyed(F<void(CCZxdgImportedV1*)> handler) {
    requests.destroyed = handler;
}

#undef F
