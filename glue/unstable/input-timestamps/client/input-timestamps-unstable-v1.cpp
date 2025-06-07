// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// input_timestamps_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2017 Collabora, Ltd.

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
#include "input-timestamps-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_input_timestamps_manager_v1_interface;
extern const wl_interface zwp_input_timestamps_v1_interface;
extern const wl_interface wl_keyboard_interface;
extern const wl_interface wl_pointer_interface;
extern const wl_interface wl_touch_interface;

static const void* _CCZwpInputTimestampsManagerV1VTable[] = {
};

void CCZwpInputTimestampsManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpInputTimestampsManagerV1::sendGetKeyboardTimestamps(wl_proxy* keyboard) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_input_timestamps_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, keyboard);

    return proxy;
}

wl_proxy* CCZwpInputTimestampsManagerV1::sendGetPointerTimestamps(wl_proxy* pointer) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &zwp_input_timestamps_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, pointer);

    return proxy;
}

wl_proxy* CCZwpInputTimestampsManagerV1::sendGetTouchTimestamps(wl_proxy* touch) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, &zwp_input_timestamps_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, touch);

    return proxy;
}
static const wl_interface* _CZwpInputTimestampsManagerV1GetKeyboardTimestampsTypes[] = {
    &zwp_input_timestamps_v1_interface,
    &wl_keyboard_interface,
};
static const wl_interface* _CZwpInputTimestampsManagerV1GetPointerTimestampsTypes[] = {
    &zwp_input_timestamps_v1_interface,
    &wl_pointer_interface,
};
static const wl_interface* _CZwpInputTimestampsManagerV1GetTouchTimestampsTypes[] = {
    &zwp_input_timestamps_v1_interface,
    &wl_touch_interface,
};

static const wl_message _CZwpInputTimestampsManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_keyboard_timestamps", "no", _CZwpInputTimestampsManagerV1GetKeyboardTimestampsTypes + 0},
    { "get_pointer_timestamps", "no", _CZwpInputTimestampsManagerV1GetPointerTimestampsTypes + 0},
    { "get_touch_timestamps", "no", _CZwpInputTimestampsManagerV1GetTouchTimestampsTypes + 0},
};

const wl_interface zwp_input_timestamps_manager_v1_interface = {
    "zwp_input_timestamps_manager_v1", 1,
    4, _CZwpInputTimestampsManagerV1Requests,
    0, nullptr,
};

CCZwpInputTimestampsManagerV1::CCZwpInputTimestampsManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpInputTimestampsManagerV1VTable, this);
}

CCZwpInputTimestampsManagerV1::~CCZwpInputTimestampsManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CZwpInputTimestampsV1Timestamp(void* data, void* resource, uint32_t tv_sec_hi, uint32_t tv_sec_lo, uint32_t tv_nsec) {
    const auto PO = (CCZwpInputTimestampsV1*)data;
    if (PO && PO->requests.timestamp)
        PO->requests.timestamp(PO, tv_sec_hi, tv_sec_lo, tv_nsec);
}

static const void* _CCZwpInputTimestampsV1VTable[] = {
    (void*)_CZwpInputTimestampsV1Timestamp,
};

void CCZwpInputTimestampsV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpInputTimestampsV1TimestampTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CZwpInputTimestampsV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpInputTimestampsV1Events[] = {
    { "timestamp", "uuu", _CZwpInputTimestampsV1TimestampTypes + 0},
};

const wl_interface zwp_input_timestamps_v1_interface = {
    "zwp_input_timestamps_v1", 1,
    1, _CZwpInputTimestampsV1Requests,
    1, _CZwpInputTimestampsV1Events,
};

CCZwpInputTimestampsV1::CCZwpInputTimestampsV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpInputTimestampsV1VTable, this);
}

CCZwpInputTimestampsV1::~CCZwpInputTimestampsV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpInputTimestampsV1::setTimestamp(F<void(CCZwpInputTimestampsV1*, uint32_t, uint32_t, uint32_t)> handler) {
    requests.timestamp = handler;
}

#undef F
