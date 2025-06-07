// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// pointer_gestures_unstable_v1

/*
 This protocol's authors' copyright notice is:


*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "pointer-gestures-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_pointer_gestures_v1_interface;
extern const wl_interface zwp_pointer_gesture_swipe_v1_interface;
extern const wl_interface zwp_pointer_gesture_pinch_v1_interface;
extern const wl_interface zwp_pointer_gesture_hold_v1_interface;
extern const wl_interface wl_pointer_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCZwpPointerGesturesV1VTable[] = {
};

wl_proxy* CCZwpPointerGesturesV1::sendGetSwipeGesture(wl_proxy* pointer) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &zwp_pointer_gesture_swipe_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, pointer);

    return proxy;
}

wl_proxy* CCZwpPointerGesturesV1::sendGetPinchGesture(wl_proxy* pointer) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_pointer_gesture_pinch_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, pointer);

    return proxy;
}

void CCZwpPointerGesturesV1::sendRelease() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpPointerGesturesV1::sendGetHoldGesture(wl_proxy* pointer) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, &zwp_pointer_gesture_hold_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, pointer);

    return proxy;
}
static const wl_interface* _CZwpPointerGesturesV1GetSwipeGestureTypes[] = {
    &zwp_pointer_gesture_swipe_v1_interface,
    &wl_pointer_interface,
};
static const wl_interface* _CZwpPointerGesturesV1GetPinchGestureTypes[] = {
    &zwp_pointer_gesture_pinch_v1_interface,
    &wl_pointer_interface,
};
static const wl_interface* _CZwpPointerGesturesV1GetHoldGestureTypes[] = {
    &zwp_pointer_gesture_hold_v1_interface,
    &wl_pointer_interface,
};

static const wl_message _CZwpPointerGesturesV1Requests[] = {
    { "get_swipe_gesture", "no", _CZwpPointerGesturesV1GetSwipeGestureTypes + 0},
    { "get_pinch_gesture", "no", _CZwpPointerGesturesV1GetPinchGestureTypes + 0},
    { "release", "2", dummyTypes + 0},
    { "get_hold_gesture", "3no", _CZwpPointerGesturesV1GetHoldGestureTypes + 0},
};

const wl_interface zwp_pointer_gestures_v1_interface = {
    "zwp_pointer_gestures_v1", 3,
    4, _CZwpPointerGesturesV1Requests,
    0, nullptr,
};

CCZwpPointerGesturesV1::CCZwpPointerGesturesV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPointerGesturesV1VTable, this);
}

CCZwpPointerGesturesV1::~CCZwpPointerGesturesV1() {
    if (!destroyed)
        sendRelease();
}

static void _CZwpPointerGestureSwipeV1Begin(void* data, void* resource, uint32_t serial, uint32_t time, wl_proxy* surface, uint32_t fingers) {
    const auto PO = (CCZwpPointerGestureSwipeV1*)data;
    if (PO && PO->requests.begin)
        PO->requests.begin(PO, serial, time, surface, fingers);
}

static void _CZwpPointerGestureSwipeV1Update(void* data, void* resource, uint32_t time, wl_fixed_t dx, wl_fixed_t dy) {
    const auto PO = (CCZwpPointerGestureSwipeV1*)data;
    if (PO && PO->requests.update)
        PO->requests.update(PO, time, dx, dy);
}

static void _CZwpPointerGestureSwipeV1End(void* data, void* resource, uint32_t serial, uint32_t time, int32_t cancelled) {
    const auto PO = (CCZwpPointerGestureSwipeV1*)data;
    if (PO && PO->requests.end)
        PO->requests.end(PO, serial, time, cancelled);
}

static const void* _CCZwpPointerGestureSwipeV1VTable[] = {
    (void*)_CZwpPointerGestureSwipeV1Begin,
    (void*)_CZwpPointerGestureSwipeV1Update,
    (void*)_CZwpPointerGestureSwipeV1End,
};

void CCZwpPointerGestureSwipeV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpPointerGestureSwipeV1BeginTypes[] = {
    nullptr,
    nullptr,
    &wl_surface_interface,
    nullptr,
};
static const wl_interface* _CZwpPointerGestureSwipeV1UpdateTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpPointerGestureSwipeV1EndTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CZwpPointerGestureSwipeV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpPointerGestureSwipeV1Events[] = {
    { "begin", "uuou", _CZwpPointerGestureSwipeV1BeginTypes + 0},
    { "update", "uff", _CZwpPointerGestureSwipeV1UpdateTypes + 0},
    { "end", "uui", _CZwpPointerGestureSwipeV1EndTypes + 0},
};

const wl_interface zwp_pointer_gesture_swipe_v1_interface = {
    "zwp_pointer_gesture_swipe_v1", 2,
    1, _CZwpPointerGestureSwipeV1Requests,
    3, _CZwpPointerGestureSwipeV1Events,
};

CCZwpPointerGestureSwipeV1::CCZwpPointerGestureSwipeV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPointerGestureSwipeV1VTable, this);
}

CCZwpPointerGestureSwipeV1::~CCZwpPointerGestureSwipeV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpPointerGestureSwipeV1::setBegin(F<void(CCZwpPointerGestureSwipeV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> handler) {
    requests.begin = handler;
}

void CCZwpPointerGestureSwipeV1::setUpdate(F<void(CCZwpPointerGestureSwipeV1*, uint32_t, wl_fixed_t, wl_fixed_t)> handler) {
    requests.update = handler;
}

void CCZwpPointerGestureSwipeV1::setEnd(F<void(CCZwpPointerGestureSwipeV1*, uint32_t, uint32_t, int32_t)> handler) {
    requests.end = handler;
}

static void _CZwpPointerGesturePinchV1Begin(void* data, void* resource, uint32_t serial, uint32_t time, wl_proxy* surface, uint32_t fingers) {
    const auto PO = (CCZwpPointerGesturePinchV1*)data;
    if (PO && PO->requests.begin)
        PO->requests.begin(PO, serial, time, surface, fingers);
}

static void _CZwpPointerGesturePinchV1Update(void* data, void* resource, uint32_t time, wl_fixed_t dx, wl_fixed_t dy, wl_fixed_t scale, wl_fixed_t rotation) {
    const auto PO = (CCZwpPointerGesturePinchV1*)data;
    if (PO && PO->requests.update)
        PO->requests.update(PO, time, dx, dy, scale, rotation);
}

static void _CZwpPointerGesturePinchV1End(void* data, void* resource, uint32_t serial, uint32_t time, int32_t cancelled) {
    const auto PO = (CCZwpPointerGesturePinchV1*)data;
    if (PO && PO->requests.end)
        PO->requests.end(PO, serial, time, cancelled);
}

static const void* _CCZwpPointerGesturePinchV1VTable[] = {
    (void*)_CZwpPointerGesturePinchV1Begin,
    (void*)_CZwpPointerGesturePinchV1Update,
    (void*)_CZwpPointerGesturePinchV1End,
};

void CCZwpPointerGesturePinchV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpPointerGesturePinchV1BeginTypes[] = {
    nullptr,
    nullptr,
    &wl_surface_interface,
    nullptr,
};
static const wl_interface* _CZwpPointerGesturePinchV1UpdateTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpPointerGesturePinchV1EndTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CZwpPointerGesturePinchV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CZwpPointerGesturePinchV1Events[] = {
    { "begin", "uuou", _CZwpPointerGesturePinchV1BeginTypes + 0},
    { "update", "uffff", _CZwpPointerGesturePinchV1UpdateTypes + 0},
    { "end", "uui", _CZwpPointerGesturePinchV1EndTypes + 0},
};

const wl_interface zwp_pointer_gesture_pinch_v1_interface = {
    "zwp_pointer_gesture_pinch_v1", 2,
    1, _CZwpPointerGesturePinchV1Requests,
    3, _CZwpPointerGesturePinchV1Events,
};

CCZwpPointerGesturePinchV1::CCZwpPointerGesturePinchV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPointerGesturePinchV1VTable, this);
}

CCZwpPointerGesturePinchV1::~CCZwpPointerGesturePinchV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpPointerGesturePinchV1::setBegin(F<void(CCZwpPointerGesturePinchV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> handler) {
    requests.begin = handler;
}

void CCZwpPointerGesturePinchV1::setUpdate(F<void(CCZwpPointerGesturePinchV1*, uint32_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t)> handler) {
    requests.update = handler;
}

void CCZwpPointerGesturePinchV1::setEnd(F<void(CCZwpPointerGesturePinchV1*, uint32_t, uint32_t, int32_t)> handler) {
    requests.end = handler;
}

static void _CZwpPointerGestureHoldV1Begin(void* data, void* resource, uint32_t serial, uint32_t time, wl_proxy* surface, uint32_t fingers) {
    const auto PO = (CCZwpPointerGestureHoldV1*)data;
    if (PO && PO->requests.begin)
        PO->requests.begin(PO, serial, time, surface, fingers);
}

static void _CZwpPointerGestureHoldV1End(void* data, void* resource, uint32_t serial, uint32_t time, int32_t cancelled) {
    const auto PO = (CCZwpPointerGestureHoldV1*)data;
    if (PO && PO->requests.end)
        PO->requests.end(PO, serial, time, cancelled);
}

static const void* _CCZwpPointerGestureHoldV1VTable[] = {
    (void*)_CZwpPointerGestureHoldV1Begin,
    (void*)_CZwpPointerGestureHoldV1End,
};

void CCZwpPointerGestureHoldV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CZwpPointerGestureHoldV1BeginTypes[] = {
    nullptr,
    nullptr,
    &wl_surface_interface,
    nullptr,
};
static const wl_interface* _CZwpPointerGestureHoldV1EndTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CZwpPointerGestureHoldV1Requests[] = {
    { "destroy", "3", dummyTypes + 0},
};

static const wl_message _CZwpPointerGestureHoldV1Events[] = {
    { "begin", "3uuou", _CZwpPointerGestureHoldV1BeginTypes + 0},
    { "end", "3uui", _CZwpPointerGestureHoldV1EndTypes + 0},
};

const wl_interface zwp_pointer_gesture_hold_v1_interface = {
    "zwp_pointer_gesture_hold_v1", 3,
    1, _CZwpPointerGestureHoldV1Requests,
    2, _CZwpPointerGestureHoldV1Events,
};

CCZwpPointerGestureHoldV1::CCZwpPointerGestureHoldV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpPointerGestureHoldV1VTable, this);
}

CCZwpPointerGestureHoldV1::~CCZwpPointerGestureHoldV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpPointerGestureHoldV1::setBegin(F<void(CCZwpPointerGestureHoldV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> handler) {
    requests.begin = handler;
}

void CCZwpPointerGestureHoldV1::setEnd(F<void(CCZwpPointerGestureHoldV1*, uint32_t, uint32_t, int32_t)> handler) {
    requests.end = handler;
}

#undef F
