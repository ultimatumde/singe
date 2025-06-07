// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_foreign_toplevel_list_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2018 Ilia Bozhinov
    Copyright © 2020 Isaac Freund
    Copyright © 2022 wb9688
    Copyright © 2023 i509VCB

    Permission to use, copy, modify, distribute, and sell this
    software and its documentation for any purpose is hereby granted
    without fee, provided that the above copyright notice appear in
    all copies and that both that copyright notice and this permission
    notice appear in supporting documentation, and that the name of
    the copyright holders not be used in advertising or publicity
    pertaining to distribution of the software without specific,
    written prior permission.  The copyright holders make no
    representations about the suitability of this software for any
    purpose.  It is provided "as is" without express or implied
    warranty.

    THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
    SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
    FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
    SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
    AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
    ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
    THIS SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "ext-foreign-toplevel-list-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_foreign_toplevel_list_v1_interface;
extern const wl_interface ext_foreign_toplevel_handle_v1_interface;

static void _CExtForeignToplevelListV1Toplevel(void* data, void* resource, wl_proxy* toplevel) {
    const auto PO = (CCExtForeignToplevelListV1*)data;
    if (PO && PO->requests.toplevel)
        PO->requests.toplevel(PO, toplevel);
}

static void _CExtForeignToplevelListV1Finished(void* data, void* resource) {
    const auto PO = (CCExtForeignToplevelListV1*)data;
    if (PO && PO->requests.finished)
        PO->requests.finished(PO);
}

static const void* _CCExtForeignToplevelListV1VTable[] = {
    (void*)_CExtForeignToplevelListV1Toplevel,
    (void*)_CExtForeignToplevelListV1Finished,
};

void CCExtForeignToplevelListV1::sendStop() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCExtForeignToplevelListV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtForeignToplevelListV1ToplevelTypes[] = {
    &ext_foreign_toplevel_handle_v1_interface,
};

static const wl_message _CExtForeignToplevelListV1Requests[] = {
    { "stop", "", dummyTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CExtForeignToplevelListV1Events[] = {
    { "toplevel", "n", _CExtForeignToplevelListV1ToplevelTypes + 0},
    { "finished", "", dummyTypes + 0},
};

const wl_interface ext_foreign_toplevel_list_v1_interface = {
    "ext_foreign_toplevel_list_v1", 1,
    2, _CExtForeignToplevelListV1Requests,
    2, _CExtForeignToplevelListV1Events,
};

CCExtForeignToplevelListV1::CCExtForeignToplevelListV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtForeignToplevelListV1VTable, this);
}

CCExtForeignToplevelListV1::~CCExtForeignToplevelListV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtForeignToplevelListV1::setToplevel(F<void(CCExtForeignToplevelListV1*, wl_proxy*)> handler) {
    requests.toplevel = handler;
}

void CCExtForeignToplevelListV1::setFinished(F<void(CCExtForeignToplevelListV1*)> handler) {
    requests.finished = handler;
}

static void _CExtForeignToplevelHandleV1Closed(void* data, void* resource) {
    const auto PO = (CCExtForeignToplevelHandleV1*)data;
    if (PO && PO->requests.closed)
        PO->requests.closed(PO);
}

static void _CExtForeignToplevelHandleV1Done(void* data, void* resource) {
    const auto PO = (CCExtForeignToplevelHandleV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CExtForeignToplevelHandleV1Title(void* data, void* resource, const char* title) {
    const auto PO = (CCExtForeignToplevelHandleV1*)data;
    if (PO && PO->requests.title)
        PO->requests.title(PO, title);
}

static void _CExtForeignToplevelHandleV1AppId(void* data, void* resource, const char* app_id) {
    const auto PO = (CCExtForeignToplevelHandleV1*)data;
    if (PO && PO->requests.appId)
        PO->requests.appId(PO, app_id);
}

static void _CExtForeignToplevelHandleV1Identifier(void* data, void* resource, const char* identifier) {
    const auto PO = (CCExtForeignToplevelHandleV1*)data;
    if (PO && PO->requests.identifier)
        PO->requests.identifier(PO, identifier);
}

static const void* _CCExtForeignToplevelHandleV1VTable[] = {
    (void*)_CExtForeignToplevelHandleV1Closed,
    (void*)_CExtForeignToplevelHandleV1Done,
    (void*)_CExtForeignToplevelHandleV1Title,
    (void*)_CExtForeignToplevelHandleV1AppId,
    (void*)_CExtForeignToplevelHandleV1Identifier,
};

void CCExtForeignToplevelHandleV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtForeignToplevelHandleV1TitleTypes[] = {
    nullptr,
};
static const wl_interface* _CExtForeignToplevelHandleV1AppIdTypes[] = {
    nullptr,
};
static const wl_interface* _CExtForeignToplevelHandleV1IdentifierTypes[] = {
    nullptr,
};

static const wl_message _CExtForeignToplevelHandleV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CExtForeignToplevelHandleV1Events[] = {
    { "closed", "", dummyTypes + 0},
    { "done", "", dummyTypes + 0},
    { "title", "s", _CExtForeignToplevelHandleV1TitleTypes + 0},
    { "app_id", "s", _CExtForeignToplevelHandleV1AppIdTypes + 0},
    { "identifier", "s", _CExtForeignToplevelHandleV1IdentifierTypes + 0},
};

const wl_interface ext_foreign_toplevel_handle_v1_interface = {
    "ext_foreign_toplevel_handle_v1", 1,
    1, _CExtForeignToplevelHandleV1Requests,
    5, _CExtForeignToplevelHandleV1Events,
};

CCExtForeignToplevelHandleV1::CCExtForeignToplevelHandleV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtForeignToplevelHandleV1VTable, this);
}

CCExtForeignToplevelHandleV1::~CCExtForeignToplevelHandleV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtForeignToplevelHandleV1::setClosed(F<void(CCExtForeignToplevelHandleV1*)> handler) {
    requests.closed = handler;
}

void CCExtForeignToplevelHandleV1::setDone(F<void(CCExtForeignToplevelHandleV1*)> handler) {
    requests.done = handler;
}

void CCExtForeignToplevelHandleV1::setTitle(F<void(CCExtForeignToplevelHandleV1*, const char*)> handler) {
    requests.title = handler;
}

void CCExtForeignToplevelHandleV1::setAppId(F<void(CCExtForeignToplevelHandleV1*, const char*)> handler) {
    requests.appId = handler;
}

void CCExtForeignToplevelHandleV1::setIdentifier(F<void(CCExtForeignToplevelHandleV1*, const char*)> handler) {
    requests.identifier = handler;
}

#undef F
