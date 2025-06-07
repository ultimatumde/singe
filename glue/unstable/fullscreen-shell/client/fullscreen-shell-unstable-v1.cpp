// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// fullscreen_shell_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2016 Yong Bakos
    Copyright © 2015 Jason Ekstrand
    Copyright © 2015 Jonas Ådahl

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
#include "fullscreen-shell-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_fullscreen_shell_v1_interface;
extern const wl_interface zwp_fullscreen_shell_mode_feedback_v1_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_output_interface;

static void _CZwpFullscreenShellV1Capability(void* data, void* resource, zwpFullscreenShellV1Capability capability) {
    const auto PO = (CCZwpFullscreenShellV1*)data;
    if (PO && PO->requests.capability)
        PO->requests.capability(PO, capability);
}

static const void* _CCZwpFullscreenShellV1VTable[] = {
    (void*)_CZwpFullscreenShellV1Capability,
};

void CCZwpFullscreenShellV1::sendRelease() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZwpFullscreenShellV1::sendPresentSurface(wl_proxy* surface, zwpFullscreenShellV1PresentMethod method, wl_proxy* output) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, surface, method, output);
    proxy;
}

wl_proxy* CCZwpFullscreenShellV1::sendPresentSurfaceForMode(wl_proxy* surface, wl_proxy* output, int32_t framerate) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &zwp_fullscreen_shell_mode_feedback_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, surface, output, framerate, nullptr);

    return proxy;
}
static const wl_interface* _CZwpFullscreenShellV1PresentSurfaceTypes[] = {
    &wl_surface_interface,
    nullptr,
    &wl_output_interface,
};
static const wl_interface* _CZwpFullscreenShellV1PresentSurfaceForModeTypes[] = {
    &wl_surface_interface,
    &wl_output_interface,
    nullptr,
    &zwp_fullscreen_shell_mode_feedback_v1_interface,
};
static const wl_interface* _CZwpFullscreenShellV1CapabilityTypes[] = {
    nullptr,
};

static const wl_message _CZwpFullscreenShellV1Requests[] = {
    { "release", "", dummyTypes + 0},
    { "present_surface", "?ou?o", _CZwpFullscreenShellV1PresentSurfaceTypes + 0},
    { "present_surface_for_mode", "ooin", _CZwpFullscreenShellV1PresentSurfaceForModeTypes + 0},
};

static const wl_message _CZwpFullscreenShellV1Events[] = {
    { "capability", "u", _CZwpFullscreenShellV1CapabilityTypes + 0},
};

const wl_interface zwp_fullscreen_shell_v1_interface = {
    "zwp_fullscreen_shell_v1", 1,
    3, _CZwpFullscreenShellV1Requests,
    1, _CZwpFullscreenShellV1Events,
};

CCZwpFullscreenShellV1::CCZwpFullscreenShellV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpFullscreenShellV1VTable, this);
}

CCZwpFullscreenShellV1::~CCZwpFullscreenShellV1() {
    if (!destroyed)
        sendRelease();
}

void CCZwpFullscreenShellV1::setCapability(F<void(CCZwpFullscreenShellV1*, zwpFullscreenShellV1Capability)> handler) {
    requests.capability = handler;
}

static void _CZwpFullscreenShellModeFeedbackV1ModeSuccessful(void* data, void* resource) {
    const auto PO = (CCZwpFullscreenShellModeFeedbackV1*)data;
    if (PO && PO->requests.modeSuccessful)
        PO->requests.modeSuccessful(PO);
}

static void _CZwpFullscreenShellModeFeedbackV1ModeFailed(void* data, void* resource) {
    const auto PO = (CCZwpFullscreenShellModeFeedbackV1*)data;
    if (PO && PO->requests.modeFailed)
        PO->requests.modeFailed(PO);
}

static void _CZwpFullscreenShellModeFeedbackV1PresentCancelled(void* data, void* resource) {
    const auto PO = (CCZwpFullscreenShellModeFeedbackV1*)data;
    if (PO && PO->requests.presentCancelled)
        PO->requests.presentCancelled(PO);
}

static const void* _CCZwpFullscreenShellModeFeedbackV1VTable[] = {
    (void*)_CZwpFullscreenShellModeFeedbackV1ModeSuccessful,
    (void*)_CZwpFullscreenShellModeFeedbackV1ModeFailed,
    (void*)_CZwpFullscreenShellModeFeedbackV1PresentCancelled,
};

static const wl_message _CZwpFullscreenShellModeFeedbackV1Events[] = {
    { "mode_successful", "", dummyTypes + 0},
    { "mode_failed", "", dummyTypes + 0},
    { "present_cancelled", "", dummyTypes + 0},
};

const wl_interface zwp_fullscreen_shell_mode_feedback_v1_interface = {
    "zwp_fullscreen_shell_mode_feedback_v1", 1,
    0, nullptr,
    3, _CZwpFullscreenShellModeFeedbackV1Events,
};

CCZwpFullscreenShellModeFeedbackV1::CCZwpFullscreenShellModeFeedbackV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpFullscreenShellModeFeedbackV1VTable, this);
}

CCZwpFullscreenShellModeFeedbackV1::~CCZwpFullscreenShellModeFeedbackV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCZwpFullscreenShellModeFeedbackV1::setModeSuccessful(F<void(CCZwpFullscreenShellModeFeedbackV1*)> handler) {
    requests.modeSuccessful = handler;
}

void CCZwpFullscreenShellModeFeedbackV1::setModeFailed(F<void(CCZwpFullscreenShellModeFeedbackV1*)> handler) {
    requests.modeFailed = handler;
}

void CCZwpFullscreenShellModeFeedbackV1::setPresentCancelled(F<void(CCZwpFullscreenShellModeFeedbackV1*)> handler) {
    requests.presentCancelled = handler;
}

#undef F
