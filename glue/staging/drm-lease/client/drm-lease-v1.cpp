// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// drm_lease_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2018 NXP
    Copyright © 2019 Status Research & Development GmbH.
    Copyright © 2021 Xaver Hugl

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
#include "drm-lease-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_drm_lease_device_v1_interface;
extern const wl_interface wp_drm_lease_connector_v1_interface;
extern const wl_interface wp_drm_lease_request_v1_interface;
extern const wl_interface wp_drm_lease_v1_interface;

static void _CWpDrmLeaseDeviceV1DrmFd(void* data, void* resource, int32_t fd) {
    const auto PO = (CCWpDrmLeaseDeviceV1*)data;
    if (PO && PO->requests.drmFd)
        PO->requests.drmFd(PO, fd);
}

static void _CWpDrmLeaseDeviceV1Connector(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCWpDrmLeaseDeviceV1*)data;
    if (PO && PO->requests.connector)
        PO->requests.connector(PO, id);
}

static void _CWpDrmLeaseDeviceV1Done(void* data, void* resource) {
    const auto PO = (CCWpDrmLeaseDeviceV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CWpDrmLeaseDeviceV1Released(void* data, void* resource) {
    const auto PO = (CCWpDrmLeaseDeviceV1*)data;
    if (PO && PO->requests.released)
        PO->requests.released(PO);
}

static const void* _CCWpDrmLeaseDeviceV1VTable[] = {
    (void*)_CWpDrmLeaseDeviceV1DrmFd,
    (void*)_CWpDrmLeaseDeviceV1Connector,
    (void*)_CWpDrmLeaseDeviceV1Done,
    (void*)_CWpDrmLeaseDeviceV1Released,
};

wl_proxy* CCWpDrmLeaseDeviceV1::sendCreateLeaseRequest() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &wp_drm_lease_request_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

void CCWpDrmLeaseDeviceV1::sendRelease() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CWpDrmLeaseDeviceV1CreateLeaseRequestTypes[] = {
    &wp_drm_lease_request_v1_interface,
};
static const wl_interface* _CWpDrmLeaseDeviceV1DrmFdTypes[] = {
    nullptr,
};
static const wl_interface* _CWpDrmLeaseDeviceV1ConnectorTypes[] = {
    &wp_drm_lease_connector_v1_interface,
};

static const wl_message _CWpDrmLeaseDeviceV1Requests[] = {
    { "create_lease_request", "n", _CWpDrmLeaseDeviceV1CreateLeaseRequestTypes + 0},
    { "release", "", dummyTypes + 0},
};

static const wl_message _CWpDrmLeaseDeviceV1Events[] = {
    { "drm_fd", "h", _CWpDrmLeaseDeviceV1DrmFdTypes + 0},
    { "connector", "n", _CWpDrmLeaseDeviceV1ConnectorTypes + 0},
    { "done", "", dummyTypes + 0},
    { "released", "", dummyTypes + 0},
};

const wl_interface wp_drm_lease_device_v1_interface = {
    "wp_drm_lease_device_v1", 1,
    2, _CWpDrmLeaseDeviceV1Requests,
    4, _CWpDrmLeaseDeviceV1Events,
};

CCWpDrmLeaseDeviceV1::CCWpDrmLeaseDeviceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpDrmLeaseDeviceV1VTable, this);
}

CCWpDrmLeaseDeviceV1::~CCWpDrmLeaseDeviceV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCWpDrmLeaseDeviceV1::setDrmFd(F<void(CCWpDrmLeaseDeviceV1*, int32_t)> handler) {
    requests.drmFd = handler;
}

void CCWpDrmLeaseDeviceV1::setConnector(F<void(CCWpDrmLeaseDeviceV1*, wl_proxy*)> handler) {
    requests.connector = handler;
}

void CCWpDrmLeaseDeviceV1::setDone(F<void(CCWpDrmLeaseDeviceV1*)> handler) {
    requests.done = handler;
}

void CCWpDrmLeaseDeviceV1::setReleased(F<void(CCWpDrmLeaseDeviceV1*)> handler) {
    requests.released = handler;
}

static void _CWpDrmLeaseConnectorV1Name(void* data, void* resource, const char* name) {
    const auto PO = (CCWpDrmLeaseConnectorV1*)data;
    if (PO && PO->requests.name)
        PO->requests.name(PO, name);
}

static void _CWpDrmLeaseConnectorV1Description(void* data, void* resource, const char* description) {
    const auto PO = (CCWpDrmLeaseConnectorV1*)data;
    if (PO && PO->requests.description)
        PO->requests.description(PO, description);
}

static void _CWpDrmLeaseConnectorV1ConnectorId(void* data, void* resource, uint32_t connector_id) {
    const auto PO = (CCWpDrmLeaseConnectorV1*)data;
    if (PO && PO->requests.connectorId)
        PO->requests.connectorId(PO, connector_id);
}

static void _CWpDrmLeaseConnectorV1Done(void* data, void* resource) {
    const auto PO = (CCWpDrmLeaseConnectorV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CWpDrmLeaseConnectorV1Withdrawn(void* data, void* resource) {
    const auto PO = (CCWpDrmLeaseConnectorV1*)data;
    if (PO && PO->requests.withdrawn)
        PO->requests.withdrawn(PO);
}

static const void* _CCWpDrmLeaseConnectorV1VTable[] = {
    (void*)_CWpDrmLeaseConnectorV1Name,
    (void*)_CWpDrmLeaseConnectorV1Description,
    (void*)_CWpDrmLeaseConnectorV1ConnectorId,
    (void*)_CWpDrmLeaseConnectorV1Done,
    (void*)_CWpDrmLeaseConnectorV1Withdrawn,
};

void CCWpDrmLeaseConnectorV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CWpDrmLeaseConnectorV1NameTypes[] = {
    nullptr,
};
static const wl_interface* _CWpDrmLeaseConnectorV1DescriptionTypes[] = {
    nullptr,
};
static const wl_interface* _CWpDrmLeaseConnectorV1ConnectorIdTypes[] = {
    nullptr,
};

static const wl_message _CWpDrmLeaseConnectorV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CWpDrmLeaseConnectorV1Events[] = {
    { "name", "s", _CWpDrmLeaseConnectorV1NameTypes + 0},
    { "description", "s", _CWpDrmLeaseConnectorV1DescriptionTypes + 0},
    { "connector_id", "u", _CWpDrmLeaseConnectorV1ConnectorIdTypes + 0},
    { "done", "", dummyTypes + 0},
    { "withdrawn", "", dummyTypes + 0},
};

const wl_interface wp_drm_lease_connector_v1_interface = {
    "wp_drm_lease_connector_v1", 1,
    1, _CWpDrmLeaseConnectorV1Requests,
    5, _CWpDrmLeaseConnectorV1Events,
};

CCWpDrmLeaseConnectorV1::CCWpDrmLeaseConnectorV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpDrmLeaseConnectorV1VTable, this);
}

CCWpDrmLeaseConnectorV1::~CCWpDrmLeaseConnectorV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpDrmLeaseConnectorV1::setName(F<void(CCWpDrmLeaseConnectorV1*, const char*)> handler) {
    requests.name = handler;
}

void CCWpDrmLeaseConnectorV1::setDescription(F<void(CCWpDrmLeaseConnectorV1*, const char*)> handler) {
    requests.description = handler;
}

void CCWpDrmLeaseConnectorV1::setConnectorId(F<void(CCWpDrmLeaseConnectorV1*, uint32_t)> handler) {
    requests.connectorId = handler;
}

void CCWpDrmLeaseConnectorV1::setDone(F<void(CCWpDrmLeaseConnectorV1*)> handler) {
    requests.done = handler;
}

void CCWpDrmLeaseConnectorV1::setWithdrawn(F<void(CCWpDrmLeaseConnectorV1*)> handler) {
    requests.withdrawn = handler;
}

static const void* _CCWpDrmLeaseRequestV1VTable[] = {
};

void CCWpDrmLeaseRequestV1::sendRequestConnector(CCWpDrmLeaseConnectorV1* connector) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, connector ? connector->pResource : nullptr);
    proxy;
}

wl_proxy* CCWpDrmLeaseRequestV1::sendSubmit() {
    if (!pResource)
        return nullptr;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_drm_lease_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 1, nullptr);

    return proxy;
}
static const wl_interface* _CWpDrmLeaseRequestV1RequestConnectorTypes[] = {
    &wp_drm_lease_connector_v1_interface,
};
static const wl_interface* _CWpDrmLeaseRequestV1SubmitTypes[] = {
    &wp_drm_lease_v1_interface,
};

static const wl_message _CWpDrmLeaseRequestV1Requests[] = {
    { "request_connector", "o", _CWpDrmLeaseRequestV1RequestConnectorTypes + 0},
    { "submit", "n", _CWpDrmLeaseRequestV1SubmitTypes + 0},
};

const wl_interface wp_drm_lease_request_v1_interface = {
    "wp_drm_lease_request_v1", 1,
    2, _CWpDrmLeaseRequestV1Requests,
    0, nullptr,
};

CCWpDrmLeaseRequestV1::CCWpDrmLeaseRequestV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpDrmLeaseRequestV1VTable, this);
}

CCWpDrmLeaseRequestV1::~CCWpDrmLeaseRequestV1() {
    if (!destroyed)
        sendSubmit();
}

static void _CWpDrmLeaseV1LeaseFd(void* data, void* resource, int32_t leased_fd) {
    const auto PO = (CCWpDrmLeaseV1*)data;
    if (PO && PO->requests.leaseFd)
        PO->requests.leaseFd(PO, leased_fd);
}

static void _CWpDrmLeaseV1Finished(void* data, void* resource) {
    const auto PO = (CCWpDrmLeaseV1*)data;
    if (PO && PO->requests.finished)
        PO->requests.finished(PO);
}

static const void* _CCWpDrmLeaseV1VTable[] = {
    (void*)_CWpDrmLeaseV1LeaseFd,
    (void*)_CWpDrmLeaseV1Finished,
};

void CCWpDrmLeaseV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CWpDrmLeaseV1LeaseFdTypes[] = {
    nullptr,
};

static const wl_message _CWpDrmLeaseV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CWpDrmLeaseV1Events[] = {
    { "lease_fd", "h", _CWpDrmLeaseV1LeaseFdTypes + 0},
    { "finished", "", dummyTypes + 0},
};

const wl_interface wp_drm_lease_v1_interface = {
    "wp_drm_lease_v1", 1,
    1, _CWpDrmLeaseV1Requests,
    2, _CWpDrmLeaseV1Events,
};

CCWpDrmLeaseV1::CCWpDrmLeaseV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpDrmLeaseV1VTable, this);
}

CCWpDrmLeaseV1::~CCWpDrmLeaseV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpDrmLeaseV1::setLeaseFd(F<void(CCWpDrmLeaseV1*, int32_t)> handler) {
    requests.leaseFd = handler;
}

void CCWpDrmLeaseV1::setFinished(F<void(CCWpDrmLeaseV1*)> handler) {
    requests.finished = handler;
}

#undef F
