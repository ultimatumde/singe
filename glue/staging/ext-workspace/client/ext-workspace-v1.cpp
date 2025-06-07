// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_workspace_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2019 Christopher Billington
    Copyright © 2020 Ilia Bozhinov
    Copyright © 2022 Victoria Brekenfeld

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
#include "ext-workspace-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_workspace_manager_v1_interface;
extern const wl_interface ext_workspace_group_handle_v1_interface;
extern const wl_interface ext_workspace_handle_v1_interface;
extern const wl_interface wl_output_interface;

static void _CExtWorkspaceManagerV1WorkspaceGroup(void* data, void* resource, wl_proxy* workspace_group) {
    const auto PO = (CCExtWorkspaceManagerV1*)data;
    if (PO && PO->requests.workspaceGroup)
        PO->requests.workspaceGroup(PO, workspace_group);
}

static void _CExtWorkspaceManagerV1Workspace(void* data, void* resource, wl_proxy* workspace) {
    const auto PO = (CCExtWorkspaceManagerV1*)data;
    if (PO && PO->requests.workspace)
        PO->requests.workspace(PO, workspace);
}

static void _CExtWorkspaceManagerV1Done(void* data, void* resource) {
    const auto PO = (CCExtWorkspaceManagerV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CExtWorkspaceManagerV1Finished(void* data, void* resource) {
    const auto PO = (CCExtWorkspaceManagerV1*)data;
    if (PO && PO->requests.finished)
        PO->requests.finished(PO);
}

static const void* _CCExtWorkspaceManagerV1VTable[] = {
    (void*)_CExtWorkspaceManagerV1WorkspaceGroup,
    (void*)_CExtWorkspaceManagerV1Workspace,
    (void*)_CExtWorkspaceManagerV1Done,
    (void*)_CExtWorkspaceManagerV1Finished,
};

void CCExtWorkspaceManagerV1::sendCommit() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCExtWorkspaceManagerV1::sendStop() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CExtWorkspaceManagerV1WorkspaceGroupTypes[] = {
    &ext_workspace_group_handle_v1_interface,
};
static const wl_interface* _CExtWorkspaceManagerV1WorkspaceTypes[] = {
    &ext_workspace_handle_v1_interface,
};

static const wl_message _CExtWorkspaceManagerV1Requests[] = {
    { "commit", "", dummyTypes + 0},
    { "stop", "", dummyTypes + 0},
};

static const wl_message _CExtWorkspaceManagerV1Events[] = {
    { "workspace_group", "n", _CExtWorkspaceManagerV1WorkspaceGroupTypes + 0},
    { "workspace", "n", _CExtWorkspaceManagerV1WorkspaceTypes + 0},
    { "done", "", dummyTypes + 0},
    { "finished", "", dummyTypes + 0},
};

const wl_interface ext_workspace_manager_v1_interface = {
    "ext_workspace_manager_v1", 1,
    2, _CExtWorkspaceManagerV1Requests,
    4, _CExtWorkspaceManagerV1Events,
};

CCExtWorkspaceManagerV1::CCExtWorkspaceManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtWorkspaceManagerV1VTable, this);
}

CCExtWorkspaceManagerV1::~CCExtWorkspaceManagerV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCExtWorkspaceManagerV1::setWorkspaceGroup(F<void(CCExtWorkspaceManagerV1*, wl_proxy*)> handler) {
    requests.workspaceGroup = handler;
}

void CCExtWorkspaceManagerV1::setWorkspace(F<void(CCExtWorkspaceManagerV1*, wl_proxy*)> handler) {
    requests.workspace = handler;
}

void CCExtWorkspaceManagerV1::setDone(F<void(CCExtWorkspaceManagerV1*)> handler) {
    requests.done = handler;
}

void CCExtWorkspaceManagerV1::setFinished(F<void(CCExtWorkspaceManagerV1*)> handler) {
    requests.finished = handler;
}

static void _CExtWorkspaceGroupHandleV1Capabilities(void* data, void* resource, extWorkspaceGroupHandleV1GroupCapabilities capabilities) {
    const auto PO = (CCExtWorkspaceGroupHandleV1*)data;
    if (PO && PO->requests.capabilities)
        PO->requests.capabilities(PO, capabilities);
}

static void _CExtWorkspaceGroupHandleV1OutputEnter(void* data, void* resource, wl_proxy* output) {
    const auto PO = (CCExtWorkspaceGroupHandleV1*)data;
    if (PO && PO->requests.outputEnter)
        PO->requests.outputEnter(PO, output);
}

static void _CExtWorkspaceGroupHandleV1OutputLeave(void* data, void* resource, wl_proxy* output) {
    const auto PO = (CCExtWorkspaceGroupHandleV1*)data;
    if (PO && PO->requests.outputLeave)
        PO->requests.outputLeave(PO, output);
}

static void _CExtWorkspaceGroupHandleV1WorkspaceEnter(void* data, void* resource, wl_proxy* workspace) {
    const auto PO = (CCExtWorkspaceGroupHandleV1*)data;
    if (PO && PO->requests.workspaceEnter)
        PO->requests.workspaceEnter(PO, workspace);
}

static void _CExtWorkspaceGroupHandleV1WorkspaceLeave(void* data, void* resource, wl_proxy* workspace) {
    const auto PO = (CCExtWorkspaceGroupHandleV1*)data;
    if (PO && PO->requests.workspaceLeave)
        PO->requests.workspaceLeave(PO, workspace);
}

static void _CExtWorkspaceGroupHandleV1Removed(void* data, void* resource) {
    const auto PO = (CCExtWorkspaceGroupHandleV1*)data;
    if (PO && PO->requests.removed)
        PO->requests.removed(PO);
}

static const void* _CCExtWorkspaceGroupHandleV1VTable[] = {
    (void*)_CExtWorkspaceGroupHandleV1Capabilities,
    (void*)_CExtWorkspaceGroupHandleV1OutputEnter,
    (void*)_CExtWorkspaceGroupHandleV1OutputLeave,
    (void*)_CExtWorkspaceGroupHandleV1WorkspaceEnter,
    (void*)_CExtWorkspaceGroupHandleV1WorkspaceLeave,
    (void*)_CExtWorkspaceGroupHandleV1Removed,
};

void CCExtWorkspaceGroupHandleV1::sendCreateWorkspace(const char* workspace) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, workspace);
    proxy;
}

void CCExtWorkspaceGroupHandleV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtWorkspaceGroupHandleV1CreateWorkspaceTypes[] = {
    nullptr,
};
static const wl_interface* _CExtWorkspaceGroupHandleV1CapabilitiesTypes[] = {
    nullptr,
};
static const wl_interface* _CExtWorkspaceGroupHandleV1OutputEnterTypes[] = {
    &wl_output_interface,
};
static const wl_interface* _CExtWorkspaceGroupHandleV1OutputLeaveTypes[] = {
    &wl_output_interface,
};
static const wl_interface* _CExtWorkspaceGroupHandleV1WorkspaceEnterTypes[] = {
    &ext_workspace_handle_v1_interface,
};
static const wl_interface* _CExtWorkspaceGroupHandleV1WorkspaceLeaveTypes[] = {
    &ext_workspace_handle_v1_interface,
};

static const wl_message _CExtWorkspaceGroupHandleV1Requests[] = {
    { "create_workspace", "s", _CExtWorkspaceGroupHandleV1CreateWorkspaceTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CExtWorkspaceGroupHandleV1Events[] = {
    { "capabilities", "u", _CExtWorkspaceGroupHandleV1CapabilitiesTypes + 0},
    { "output_enter", "o", _CExtWorkspaceGroupHandleV1OutputEnterTypes + 0},
    { "output_leave", "o", _CExtWorkspaceGroupHandleV1OutputLeaveTypes + 0},
    { "workspace_enter", "o", _CExtWorkspaceGroupHandleV1WorkspaceEnterTypes + 0},
    { "workspace_leave", "o", _CExtWorkspaceGroupHandleV1WorkspaceLeaveTypes + 0},
    { "removed", "", dummyTypes + 0},
};

const wl_interface ext_workspace_group_handle_v1_interface = {
    "ext_workspace_group_handle_v1", 1,
    2, _CExtWorkspaceGroupHandleV1Requests,
    6, _CExtWorkspaceGroupHandleV1Events,
};

CCExtWorkspaceGroupHandleV1::CCExtWorkspaceGroupHandleV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtWorkspaceGroupHandleV1VTable, this);
}

CCExtWorkspaceGroupHandleV1::~CCExtWorkspaceGroupHandleV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtWorkspaceGroupHandleV1::setCapabilities(F<void(CCExtWorkspaceGroupHandleV1*, extWorkspaceGroupHandleV1GroupCapabilities)> handler) {
    requests.capabilities = handler;
}

void CCExtWorkspaceGroupHandleV1::setOutputEnter(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler) {
    requests.outputEnter = handler;
}

void CCExtWorkspaceGroupHandleV1::setOutputLeave(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler) {
    requests.outputLeave = handler;
}

void CCExtWorkspaceGroupHandleV1::setWorkspaceEnter(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler) {
    requests.workspaceEnter = handler;
}

void CCExtWorkspaceGroupHandleV1::setWorkspaceLeave(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler) {
    requests.workspaceLeave = handler;
}

void CCExtWorkspaceGroupHandleV1::setRemoved(F<void(CCExtWorkspaceGroupHandleV1*)> handler) {
    requests.removed = handler;
}

static void _CExtWorkspaceHandleV1Id(void* data, void* resource, const char* id) {
    const auto PO = (CCExtWorkspaceHandleV1*)data;
    if (PO && PO->requests.id)
        PO->requests.id(PO, id);
}

static void _CExtWorkspaceHandleV1Name(void* data, void* resource, const char* name) {
    const auto PO = (CCExtWorkspaceHandleV1*)data;
    if (PO && PO->requests.name)
        PO->requests.name(PO, name);
}

static void _CExtWorkspaceHandleV1Coordinates(void* data, void* resource, wl_array* coordinates) {
    const auto PO = (CCExtWorkspaceHandleV1*)data;
    if (PO && PO->requests.coordinates)
        PO->requests.coordinates(PO, coordinates);
}

static void _CExtWorkspaceHandleV1State(void* data, void* resource, extWorkspaceHandleV1State state) {
    const auto PO = (CCExtWorkspaceHandleV1*)data;
    if (PO && PO->requests.state)
        PO->requests.state(PO, state);
}

static void _CExtWorkspaceHandleV1Capabilities(void* data, void* resource, extWorkspaceHandleV1WorkspaceCapabilities capabilities) {
    const auto PO = (CCExtWorkspaceHandleV1*)data;
    if (PO && PO->requests.capabilities)
        PO->requests.capabilities(PO, capabilities);
}

static void _CExtWorkspaceHandleV1Removed(void* data, void* resource) {
    const auto PO = (CCExtWorkspaceHandleV1*)data;
    if (PO && PO->requests.removed)
        PO->requests.removed(PO);
}

static const void* _CCExtWorkspaceHandleV1VTable[] = {
    (void*)_CExtWorkspaceHandleV1Id,
    (void*)_CExtWorkspaceHandleV1Name,
    (void*)_CExtWorkspaceHandleV1Coordinates,
    (void*)_CExtWorkspaceHandleV1State,
    (void*)_CExtWorkspaceHandleV1Capabilities,
    (void*)_CExtWorkspaceHandleV1Removed,
};

void CCExtWorkspaceHandleV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCExtWorkspaceHandleV1::sendActivate() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCExtWorkspaceHandleV1::sendDeactivate() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCExtWorkspaceHandleV1::sendAssign(CCExtWorkspaceGroupHandleV1* workspace_group) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, workspace_group ? workspace_group->pResource : nullptr);
    proxy;
}

void CCExtWorkspaceHandleV1::sendRemove() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CExtWorkspaceHandleV1AssignTypes[] = {
    &ext_workspace_group_handle_v1_interface,
};
static const wl_interface* _CExtWorkspaceHandleV1IdTypes[] = {
    nullptr,
};
static const wl_interface* _CExtWorkspaceHandleV1NameTypes[] = {
    nullptr,
};
static const wl_interface* _CExtWorkspaceHandleV1CoordinatesTypes[] = {
    nullptr,
};
static const wl_interface* _CExtWorkspaceHandleV1StateTypes[] = {
    nullptr,
};
static const wl_interface* _CExtWorkspaceHandleV1CapabilitiesTypes[] = {
    nullptr,
};

static const wl_message _CExtWorkspaceHandleV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "activate", "", dummyTypes + 0},
    { "deactivate", "", dummyTypes + 0},
    { "assign", "o", _CExtWorkspaceHandleV1AssignTypes + 0},
    { "remove", "", dummyTypes + 0},
};

static const wl_message _CExtWorkspaceHandleV1Events[] = {
    { "id", "s", _CExtWorkspaceHandleV1IdTypes + 0},
    { "name", "s", _CExtWorkspaceHandleV1NameTypes + 0},
    { "coordinates", "a", _CExtWorkspaceHandleV1CoordinatesTypes + 0},
    { "state", "u", _CExtWorkspaceHandleV1StateTypes + 0},
    { "capabilities", "u", _CExtWorkspaceHandleV1CapabilitiesTypes + 0},
    { "removed", "", dummyTypes + 0},
};

const wl_interface ext_workspace_handle_v1_interface = {
    "ext_workspace_handle_v1", 1,
    5, _CExtWorkspaceHandleV1Requests,
    6, _CExtWorkspaceHandleV1Events,
};

CCExtWorkspaceHandleV1::CCExtWorkspaceHandleV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtWorkspaceHandleV1VTable, this);
}

CCExtWorkspaceHandleV1::~CCExtWorkspaceHandleV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtWorkspaceHandleV1::setId(F<void(CCExtWorkspaceHandleV1*, const char*)> handler) {
    requests.id = handler;
}

void CCExtWorkspaceHandleV1::setName(F<void(CCExtWorkspaceHandleV1*, const char*)> handler) {
    requests.name = handler;
}

void CCExtWorkspaceHandleV1::setCoordinates(F<void(CCExtWorkspaceHandleV1*, wl_array*)> handler) {
    requests.coordinates = handler;
}

void CCExtWorkspaceHandleV1::setState(F<void(CCExtWorkspaceHandleV1*, extWorkspaceHandleV1State)> handler) {
    requests.state = handler;
}

void CCExtWorkspaceHandleV1::setCapabilities(F<void(CCExtWorkspaceHandleV1*, extWorkspaceHandleV1WorkspaceCapabilities)> handler) {
    requests.capabilities = handler;
}

void CCExtWorkspaceHandleV1::setRemoved(F<void(CCExtWorkspaceHandleV1*)> handler) {
    requests.removed = handler;
}

#undef F
