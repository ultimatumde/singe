// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_foreign_unstable_v2

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
#include "xdg-foreign-unstable-v2.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zxdg_exporter_v2_interface;
extern const wl_interface zxdg_importer_v2_interface;
extern const wl_interface zxdg_exported_v2_interface;
extern const wl_interface zxdg_imported_v2_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCZxdgExporterV2VTable[] = {
};

void CCZxdgExporterV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZxdgExporterV2::sendExportToplevel(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zxdg_exported_v2_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CZxdgExporterV2ExportToplevelTypes[] = {
    &zxdg_exported_v2_interface,
    &wl_surface_interface,
};

static const wl_message _CZxdgExporterV2Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "export_toplevel", "no", _CZxdgExporterV2ExportToplevelTypes + 0},
};

const wl_interface zxdg_exporter_v2_interface = {
    "zxdg_exporter_v2", 1,
    2, _CZxdgExporterV2Requests,
    0, nullptr,
};

CCZxdgExporterV2::CCZxdgExporterV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgExporterV2VTable, this);
}

CCZxdgExporterV2::~CCZxdgExporterV2() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCZxdgImporterV2VTable[] = {
};

void CCZxdgImporterV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZxdgImporterV2::sendImportToplevel(const char* handle) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zxdg_imported_v2_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, handle);

    return proxy;
}
static const wl_interface* _CZxdgImporterV2ImportToplevelTypes[] = {
    &zxdg_imported_v2_interface,
    nullptr,
};

static const wl_message _CZxdgImporterV2Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "import_toplevel", "ns", _CZxdgImporterV2ImportToplevelTypes + 0},
};

const wl_interface zxdg_importer_v2_interface = {
    "zxdg_importer_v2", 1,
    2, _CZxdgImporterV2Requests,
    0, nullptr,
};

CCZxdgImporterV2::CCZxdgImporterV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgImporterV2VTable, this);
}

CCZxdgImporterV2::~CCZxdgImporterV2() {
    if (!destroyed)
        sendDestroy();
}

static void _CZxdgExportedV2Handle(void* data, void* resource, const char* handle) {
    const auto PO = (CCZxdgExportedV2*)data;
    if (PO && PO->requests.handle)
        PO->requests.handle(PO, handle);
}

static const void* _CCZxdgExportedV2VTable[] = {
    (void*)_CZxdgExportedV2Handle,
};

void CCZxdgExportedV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZxdgExportedV2HandleTypes[] = {
    nullptr,
};

static const wl_message _CZxdgExportedV2Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZxdgExportedV2Events[] = {
    { "handle", "s", _CZxdgExportedV2HandleTypes + 0},
};

const wl_interface zxdg_exported_v2_interface = {
    "zxdg_exported_v2", 1,
    1, _CZxdgExportedV2Requests,
    1, _CZxdgExportedV2Events,
};

CCZxdgExportedV2::CCZxdgExportedV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgExportedV2VTable, this);
}

CCZxdgExportedV2::~CCZxdgExportedV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgExportedV2::setHandle(F<void(CCZxdgExportedV2*, const char*)> handler) {
    requests.handle = handler;
}

static void _CZxdgImportedV2Destroyed(void* data, void* resource) {
    const auto PO = (CCZxdgImportedV2*)data;
    if (PO && PO->requests.destroyed)
        PO->requests.destroyed(PO);
}

static const void* _CCZxdgImportedV2VTable[] = {
    (void*)_CZxdgImportedV2Destroyed,
};

void CCZxdgImportedV2::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZxdgImportedV2::sendSetParentOf(wl_proxy* surface) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, surface);
    proxy;
}
static const wl_interface* _CZxdgImportedV2SetParentOfTypes[] = {
    &wl_surface_interface,
};

static const wl_message _CZxdgImportedV2Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_parent_of", "o", _CZxdgImportedV2SetParentOfTypes + 0},
};

static const wl_message _CZxdgImportedV2Events[] = {
    { "destroyed", "", dummyTypes + 0},
};

const wl_interface zxdg_imported_v2_interface = {
    "zxdg_imported_v2", 1,
    2, _CZxdgImportedV2Requests,
    1, _CZxdgImportedV2Events,
};

CCZxdgImportedV2::CCZxdgImportedV2(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZxdgImportedV2VTable, this);
}

CCZxdgImportedV2::~CCZxdgImportedV2() {
    if (!destroyed)
        sendDestroy();
}

void CCZxdgImportedV2::setDestroyed(F<void(CCZxdgImportedV2*)> handler) {
    requests.destroyed = handler;
}

#undef F
