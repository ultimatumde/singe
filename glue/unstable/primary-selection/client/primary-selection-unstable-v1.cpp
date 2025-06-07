// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// wp_primary_selection_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2015, 2016 Red Hat

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
#include "primary-selection-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_primary_selection_device_manager_v1_interface;
extern const wl_interface zwp_primary_selection_device_v1_interface;
extern const wl_interface zwp_primary_selection_offer_v1_interface;
extern const wl_interface zwp_primary_selection_source_v1_interface;
extern const wl_interface wl_seat_interface;

static const void* _CCZwpPrimarySelectionDeviceManagerV1VTable[] = {
};

wl_proxy* CCZwpPrimarySelectionDeviceManagerV1::sendCreateSource() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &zwp_primary_selection_source_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

wl_proxy* CCZwpPrimarySelectionDeviceManagerV1::sendGetDevice(wl_proxy* seat) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_primary_selection_device_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, seat);

    return proxy;
}

void CCZwpPrimarySelectionDeviceManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpPrimarySelectionDeviceManagerV1CreateSourceTypes[] = {
    &zwp_primary_selection_source_v1_interface,
};
static const wl_interface* _CZwpPrimarySelectionDeviceManagerV1GetDeviceTypes[] = {
    &zwp_primary_selection_device_v1_interface,
    &wl_seat_interface,
};

static const wl_message _CZwpPrimarySelectionDeviceManagerV1Requests[] = {
    { "create_source", "n", _CZwpPrimarySelectionDeviceManagerV1CreateSourceTypes + 0},
    { "get_device", "no", _CZwpPrimarySelectionDeviceManagerV1GetDeviceTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface zwp_primary_selection_device_manager_v1_interface = {
    "zwp_primary_selection_device_manager_v1", 1,
    3, _CZwpPrimarySelectionDeviceManagerV1Requests,
    0, nullptr,
};

CCZwpPrimarySelectionDeviceManagerV1::CCZwpPrimarySelectionDeviceManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPrimarySelectionDeviceManagerV1VTable, this);
}

CCZwpPrimarySelectionDeviceManagerV1::~CCZwpPrimarySelectionDeviceManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CZwpPrimarySelectionDeviceV1DataOffer(void* data, void* resource, wl_proxy* offer) {
    const auto PO = (CCZwpPrimarySelectionDeviceV1*)data;
    if (PO && PO->requests.dataOffer)
        PO->requests.dataOffer(PO, offer);
}

static void _CZwpPrimarySelectionDeviceV1Selection(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCZwpPrimarySelectionDeviceV1*)data;
    if (PO && PO->requests.selection)
        PO->requests.selection(PO, id);
}

static const void* _CCZwpPrimarySelectionDeviceV1VTable[] = {
    (void*)_CZwpPrimarySelectionDeviceV1DataOffer,
    (void*)_CZwpPrimarySelectionDeviceV1Selection,
};

void CCZwpPrimarySelectionDeviceV1::sendSetSelection(CCZwpPrimarySelectionSourceV1* source, uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, source ? source->pResource : nullptr, serial);
    proxy;
}

void CCZwpPrimarySelectionDeviceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpPrimarySelectionDeviceV1SetSelectionTypes[] = {
    &zwp_primary_selection_source_v1_interface,
    nullptr,
};
static const wl_interface* _CZwpPrimarySelectionDeviceV1DataOfferTypes[] = {
    &zwp_primary_selection_offer_v1_interface,
};
static const wl_interface* _CZwpPrimarySelectionDeviceV1SelectionTypes[] = {
    &zwp_primary_selection_offer_v1_interface,
};

static const wl_message _CZwpPrimarySelectionDeviceV1Requests[] = {
    { "set_selection", "?ou", _CZwpPrimarySelectionDeviceV1SetSelectionTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpPrimarySelectionDeviceV1Events[] = {
    { "data_offer", "n", _CZwpPrimarySelectionDeviceV1DataOfferTypes + 0},
    { "selection", "?o", _CZwpPrimarySelectionDeviceV1SelectionTypes + 0},
};

const wl_interface zwp_primary_selection_device_v1_interface = {
    "zwp_primary_selection_device_v1", 1,
    2, _CZwpPrimarySelectionDeviceV1Requests,
    2, _CZwpPrimarySelectionDeviceV1Events,
};

CCZwpPrimarySelectionDeviceV1::CCZwpPrimarySelectionDeviceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPrimarySelectionDeviceV1VTable, this);
}

CCZwpPrimarySelectionDeviceV1::~CCZwpPrimarySelectionDeviceV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpPrimarySelectionDeviceV1::setDataOffer(F<void(CCZwpPrimarySelectionDeviceV1*, wl_proxy*)> handler) {
    requests.dataOffer = handler;
}

void CCZwpPrimarySelectionDeviceV1::setSelection(F<void(CCZwpPrimarySelectionDeviceV1*, wl_proxy*)> handler) {
    requests.selection = handler;
}

static void _CZwpPrimarySelectionOfferV1Offer(void* data, void* resource, const char* mime_type) {
    const auto PO = (CCZwpPrimarySelectionOfferV1*)data;
    if (PO && PO->requests.offer)
        PO->requests.offer(PO, mime_type);
}

static const void* _CCZwpPrimarySelectionOfferV1VTable[] = {
    (void*)_CZwpPrimarySelectionOfferV1Offer,
};

void CCZwpPrimarySelectionOfferV1::sendReceive(const char* mime_type, int32_t fd) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, mime_type, fd);
    proxy;
}

void CCZwpPrimarySelectionOfferV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpPrimarySelectionOfferV1ReceiveTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpPrimarySelectionOfferV1OfferTypes[] = {
    nullptr,
};

static const wl_message _CZwpPrimarySelectionOfferV1Requests[] = {
    { "receive", "sh", _CZwpPrimarySelectionOfferV1ReceiveTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpPrimarySelectionOfferV1Events[] = {
    { "offer", "s", _CZwpPrimarySelectionOfferV1OfferTypes + 0},
};

const wl_interface zwp_primary_selection_offer_v1_interface = {
    "zwp_primary_selection_offer_v1", 1,
    2, _CZwpPrimarySelectionOfferV1Requests,
    1, _CZwpPrimarySelectionOfferV1Events,
};

CCZwpPrimarySelectionOfferV1::CCZwpPrimarySelectionOfferV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPrimarySelectionOfferV1VTable, this);
}

CCZwpPrimarySelectionOfferV1::~CCZwpPrimarySelectionOfferV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpPrimarySelectionOfferV1::setOffer(F<void(CCZwpPrimarySelectionOfferV1*, const char*)> handler) {
    requests.offer = handler;
}

static void _CZwpPrimarySelectionSourceV1Send(void* data, void* resource, const char* mime_type, int32_t fd) {
    const auto PO = (CCZwpPrimarySelectionSourceV1*)data;
    if (PO && PO->requests.send)
        PO->requests.send(PO, mime_type, fd);
}

static void _CZwpPrimarySelectionSourceV1Cancelled(void* data, void* resource) {
    const auto PO = (CCZwpPrimarySelectionSourceV1*)data;
    if (PO && PO->requests.cancelled)
        PO->requests.cancelled(PO);
}

static const void* _CCZwpPrimarySelectionSourceV1VTable[] = {
    (void*)_CZwpPrimarySelectionSourceV1Send,
    (void*)_CZwpPrimarySelectionSourceV1Cancelled,
};

void CCZwpPrimarySelectionSourceV1::sendOffer(const char* mime_type) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, mime_type);
    proxy;
}

void CCZwpPrimarySelectionSourceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpPrimarySelectionSourceV1OfferTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpPrimarySelectionSourceV1SendTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CZwpPrimarySelectionSourceV1Requests[] = {
    { "offer", "s", _CZwpPrimarySelectionSourceV1OfferTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpPrimarySelectionSourceV1Events[] = {
    { "send", "sh", _CZwpPrimarySelectionSourceV1SendTypes + 0},
    { "cancelled", "", dummyTypes + 0},
};

const wl_interface zwp_primary_selection_source_v1_interface = {
    "zwp_primary_selection_source_v1", 1,
    2, _CZwpPrimarySelectionSourceV1Requests,
    2, _CZwpPrimarySelectionSourceV1Events,
};

CCZwpPrimarySelectionSourceV1::CCZwpPrimarySelectionSourceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPrimarySelectionSourceV1VTable, this);
}

CCZwpPrimarySelectionSourceV1::~CCZwpPrimarySelectionSourceV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpPrimarySelectionSourceV1::setSend(F<void(CCZwpPrimarySelectionSourceV1*, const char*, int32_t)> handler) {
    requests.send = handler;
}

void CCZwpPrimarySelectionSourceV1::setCancelled(F<void(CCZwpPrimarySelectionSourceV1*)> handler) {
    requests.cancelled = handler;
}

#undef F
