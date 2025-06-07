// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// security_context_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2021 Simon Ser

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
#include "security-context-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_security_context_manager_v1_interface;
extern const wl_interface wp_security_context_v1_interface;

static const void* _CCWpSecurityContextManagerV1VTable[] = {
};

void CCWpSecurityContextManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpSecurityContextManagerV1::sendCreateListener(int32_t listen_fd, int32_t close_fd) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_security_context_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, listen_fd, close_fd);

    return proxy;
}
static const wl_interface* _CWpSecurityContextManagerV1CreateListenerTypes[] = {
    &wp_security_context_v1_interface,
    nullptr,
    nullptr,
};

static const wl_message _CWpSecurityContextManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "create_listener", "nhh", _CWpSecurityContextManagerV1CreateListenerTypes + 0},
};

const wl_interface wp_security_context_manager_v1_interface = {
    "wp_security_context_manager_v1", 1,
    2, _CWpSecurityContextManagerV1Requests,
    0, nullptr,
};

CCWpSecurityContextManagerV1::CCWpSecurityContextManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpSecurityContextManagerV1VTable, this);
}

CCWpSecurityContextManagerV1::~CCWpSecurityContextManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpSecurityContextV1VTable[] = {
};

void CCWpSecurityContextV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpSecurityContextV1::sendSetSandboxEngine(const char* name) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, name);
    proxy;
}

void CCWpSecurityContextV1::sendSetAppId(const char* app_id) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, app_id);
    proxy;
}

void CCWpSecurityContextV1::sendSetInstanceId(const char* instance_id) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, instance_id);
    proxy;
}

void CCWpSecurityContextV1::sendCommit() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CWpSecurityContextV1SetSandboxEngineTypes[] = {
    nullptr,
};
static const wl_interface* _CWpSecurityContextV1SetAppIdTypes[] = {
    nullptr,
};
static const wl_interface* _CWpSecurityContextV1SetInstanceIdTypes[] = {
    nullptr,
};

static const wl_message _CWpSecurityContextV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_sandbox_engine", "s", _CWpSecurityContextV1SetSandboxEngineTypes + 0},
    { "set_app_id", "s", _CWpSecurityContextV1SetAppIdTypes + 0},
    { "set_instance_id", "s", _CWpSecurityContextV1SetInstanceIdTypes + 0},
    { "commit", "", dummyTypes + 0},
};

const wl_interface wp_security_context_v1_interface = {
    "wp_security_context_v1", 1,
    5, _CWpSecurityContextV1Requests,
    0, nullptr,
};

CCWpSecurityContextV1::CCWpSecurityContextV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpSecurityContextV1VTable, this);
}

CCWpSecurityContextV1::~CCWpSecurityContextV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
