// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// commit_timing_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2023 Valve Corporation

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
#include "commit-timing-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_commit_timing_manager_v1_interface;
extern const wl_interface wp_commit_timer_v1_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCWpCommitTimingManagerV1VTable[] = {
};

void CCWpCommitTimingManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpCommitTimingManagerV1::sendGetTimer(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_commit_timer_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CWpCommitTimingManagerV1GetTimerTypes[] = {
    &wp_commit_timer_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CWpCommitTimingManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_timer", "no", _CWpCommitTimingManagerV1GetTimerTypes + 0},
};

const wl_interface wp_commit_timing_manager_v1_interface = {
    "wp_commit_timing_manager_v1", 1,
    2, _CWpCommitTimingManagerV1Requests,
    0, nullptr,
};

CCWpCommitTimingManagerV1::CCWpCommitTimingManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpCommitTimingManagerV1VTable, this);
}

CCWpCommitTimingManagerV1::~CCWpCommitTimingManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpCommitTimerV1VTable[] = {
};

void CCWpCommitTimerV1::sendSetTimestamp(uint32_t tv_sec_hi, uint32_t tv_sec_lo, uint32_t tv_nsec) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, tv_sec_hi, tv_sec_lo, tv_nsec);
    proxy;
}

void CCWpCommitTimerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CWpCommitTimerV1SetTimestampTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CWpCommitTimerV1Requests[] = {
    { "set_timestamp", "uuu", _CWpCommitTimerV1SetTimestampTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface wp_commit_timer_v1_interface = {
    "wp_commit_timer_v1", 1,
    2, _CWpCommitTimerV1Requests,
    0, nullptr,
};

CCWpCommitTimerV1::CCWpCommitTimerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpCommitTimerV1VTable, this);
}

CCWpCommitTimerV1::~CCWpCommitTimerV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
