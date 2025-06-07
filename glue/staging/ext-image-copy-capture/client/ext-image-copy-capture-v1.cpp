// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_image_copy_capture_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2021-2023 Andri Yngvason
    Copyright © 2024 Simon Ser

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
#include "ext-image-copy-capture-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_image_copy_capture_manager_v1_interface;
extern const wl_interface ext_image_copy_capture_session_v1_interface;
extern const wl_interface ext_image_copy_capture_frame_v1_interface;
extern const wl_interface ext_image_copy_capture_cursor_session_v1_interface;
extern const wl_interface ext_image_capture_source_v1_interface;
extern const wl_interface wl_pointer_interface;
extern const wl_interface wl_buffer_interface;

static const void* _CCExtImageCopyCaptureManagerV1VTable[] = {
};

wl_proxy* CCExtImageCopyCaptureManagerV1::sendCreateSession(wl_proxy* source, extImageCopyCaptureManagerV1Options options) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &ext_image_copy_capture_session_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, source, options);

    return proxy;
}

wl_proxy* CCExtImageCopyCaptureManagerV1::sendCreatePointerCursorSession(wl_proxy* source, wl_proxy* pointer) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &ext_image_copy_capture_cursor_session_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, source, pointer);

    return proxy;
}

void CCExtImageCopyCaptureManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtImageCopyCaptureManagerV1CreateSessionTypes[] = {
    &ext_image_copy_capture_session_v1_interface,
    &ext_image_capture_source_v1_interface,
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureManagerV1CreatePointerCursorSessionTypes[] = {
    &ext_image_copy_capture_cursor_session_v1_interface,
    &ext_image_capture_source_v1_interface,
    &wl_pointer_interface,
};

static const wl_message _CExtImageCopyCaptureManagerV1Requests[] = {
    { "create_session", "nou", _CExtImageCopyCaptureManagerV1CreateSessionTypes + 0},
    { "create_pointer_cursor_session", "noo", _CExtImageCopyCaptureManagerV1CreatePointerCursorSessionTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface ext_image_copy_capture_manager_v1_interface = {
    "ext_image_copy_capture_manager_v1", 1,
    3, _CExtImageCopyCaptureManagerV1Requests,
    0, nullptr,
};

CCExtImageCopyCaptureManagerV1::CCExtImageCopyCaptureManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtImageCopyCaptureManagerV1VTable, this);
}

CCExtImageCopyCaptureManagerV1::~CCExtImageCopyCaptureManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CExtImageCopyCaptureSessionV1BufferSize(void* data, void* resource, uint32_t width, uint32_t height) {
    const auto PO = (CCExtImageCopyCaptureSessionV1*)data;
    if (PO && PO->requests.bufferSize)
        PO->requests.bufferSize(PO, width, height);
}

static void _CExtImageCopyCaptureSessionV1ShmFormat(void* data, void* resource, uint32_t format) {
    const auto PO = (CCExtImageCopyCaptureSessionV1*)data;
    if (PO && PO->requests.shmFormat)
        PO->requests.shmFormat(PO, format);
}

static void _CExtImageCopyCaptureSessionV1DmabufDevice(void* data, void* resource, wl_array* device) {
    const auto PO = (CCExtImageCopyCaptureSessionV1*)data;
    if (PO && PO->requests.dmabufDevice)
        PO->requests.dmabufDevice(PO, device);
}

static void _CExtImageCopyCaptureSessionV1DmabufFormat(void* data, void* resource, uint32_t format, wl_array* modifiers) {
    const auto PO = (CCExtImageCopyCaptureSessionV1*)data;
    if (PO && PO->requests.dmabufFormat)
        PO->requests.dmabufFormat(PO, format, modifiers);
}

static void _CExtImageCopyCaptureSessionV1Done(void* data, void* resource) {
    const auto PO = (CCExtImageCopyCaptureSessionV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CExtImageCopyCaptureSessionV1Stopped(void* data, void* resource) {
    const auto PO = (CCExtImageCopyCaptureSessionV1*)data;
    if (PO && PO->requests.stopped)
        PO->requests.stopped(PO);
}

static const void* _CCExtImageCopyCaptureSessionV1VTable[] = {
    (void*)_CExtImageCopyCaptureSessionV1BufferSize,
    (void*)_CExtImageCopyCaptureSessionV1ShmFormat,
    (void*)_CExtImageCopyCaptureSessionV1DmabufDevice,
    (void*)_CExtImageCopyCaptureSessionV1DmabufFormat,
    (void*)_CExtImageCopyCaptureSessionV1Done,
    (void*)_CExtImageCopyCaptureSessionV1Stopped,
};

wl_proxy* CCExtImageCopyCaptureSessionV1::sendCreateFrame() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &ext_image_copy_capture_frame_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

void CCExtImageCopyCaptureSessionV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtImageCopyCaptureSessionV1CreateFrameTypes[] = {
    &ext_image_copy_capture_frame_v1_interface,
};
static const wl_interface* _CExtImageCopyCaptureSessionV1BufferSizeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureSessionV1ShmFormatTypes[] = {
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureSessionV1DmabufDeviceTypes[] = {
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureSessionV1DmabufFormatTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CExtImageCopyCaptureSessionV1Requests[] = {
    { "create_frame", "n", _CExtImageCopyCaptureSessionV1CreateFrameTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

static const wl_message _CExtImageCopyCaptureSessionV1Events[] = {
    { "buffer_size", "uu", _CExtImageCopyCaptureSessionV1BufferSizeTypes + 0},
    { "shm_format", "u", _CExtImageCopyCaptureSessionV1ShmFormatTypes + 0},
    { "dmabuf_device", "a", _CExtImageCopyCaptureSessionV1DmabufDeviceTypes + 0},
    { "dmabuf_format", "ua", _CExtImageCopyCaptureSessionV1DmabufFormatTypes + 0},
    { "done", "", dummyTypes + 0},
    { "stopped", "", dummyTypes + 0},
};

const wl_interface ext_image_copy_capture_session_v1_interface = {
    "ext_image_copy_capture_session_v1", 1,
    2, _CExtImageCopyCaptureSessionV1Requests,
    6, _CExtImageCopyCaptureSessionV1Events,
};

CCExtImageCopyCaptureSessionV1::CCExtImageCopyCaptureSessionV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtImageCopyCaptureSessionV1VTable, this);
}

CCExtImageCopyCaptureSessionV1::~CCExtImageCopyCaptureSessionV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtImageCopyCaptureSessionV1::setBufferSize(F<void(CCExtImageCopyCaptureSessionV1*, uint32_t, uint32_t)> handler) {
    requests.bufferSize = handler;
}

void CCExtImageCopyCaptureSessionV1::setShmFormat(F<void(CCExtImageCopyCaptureSessionV1*, uint32_t)> handler) {
    requests.shmFormat = handler;
}

void CCExtImageCopyCaptureSessionV1::setDmabufDevice(F<void(CCExtImageCopyCaptureSessionV1*, wl_array*)> handler) {
    requests.dmabufDevice = handler;
}

void CCExtImageCopyCaptureSessionV1::setDmabufFormat(F<void(CCExtImageCopyCaptureSessionV1*, uint32_t, wl_array*)> handler) {
    requests.dmabufFormat = handler;
}

void CCExtImageCopyCaptureSessionV1::setDone(F<void(CCExtImageCopyCaptureSessionV1*)> handler) {
    requests.done = handler;
}

void CCExtImageCopyCaptureSessionV1::setStopped(F<void(CCExtImageCopyCaptureSessionV1*)> handler) {
    requests.stopped = handler;
}

static void _CExtImageCopyCaptureFrameV1Transform(void* data, void* resource, uint32_t transform) {
    const auto PO = (CCExtImageCopyCaptureFrameV1*)data;
    if (PO && PO->requests.transform)
        PO->requests.transform(PO, transform);
}

static void _CExtImageCopyCaptureFrameV1Damage(void* data, void* resource, int32_t x, int32_t y, int32_t width, int32_t height) {
    const auto PO = (CCExtImageCopyCaptureFrameV1*)data;
    if (PO && PO->requests.damage)
        PO->requests.damage(PO, x, y, width, height);
}

static void _CExtImageCopyCaptureFrameV1PresentationTime(void* data, void* resource, uint32_t tv_sec_hi, uint32_t tv_sec_lo, uint32_t tv_nsec) {
    const auto PO = (CCExtImageCopyCaptureFrameV1*)data;
    if (PO && PO->requests.presentationTime)
        PO->requests.presentationTime(PO, tv_sec_hi, tv_sec_lo, tv_nsec);
}

static void _CExtImageCopyCaptureFrameV1Ready(void* data, void* resource) {
    const auto PO = (CCExtImageCopyCaptureFrameV1*)data;
    if (PO && PO->requests.ready)
        PO->requests.ready(PO);
}

static void _CExtImageCopyCaptureFrameV1Failed(void* data, void* resource, extImageCopyCaptureFrameV1FailureReason reason) {
    const auto PO = (CCExtImageCopyCaptureFrameV1*)data;
    if (PO && PO->requests.failed)
        PO->requests.failed(PO, reason);
}

static const void* _CCExtImageCopyCaptureFrameV1VTable[] = {
    (void*)_CExtImageCopyCaptureFrameV1Transform,
    (void*)_CExtImageCopyCaptureFrameV1Damage,
    (void*)_CExtImageCopyCaptureFrameV1PresentationTime,
    (void*)_CExtImageCopyCaptureFrameV1Ready,
    (void*)_CExtImageCopyCaptureFrameV1Failed,
};

void CCExtImageCopyCaptureFrameV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCExtImageCopyCaptureFrameV1::sendAttachBuffer(wl_proxy* buffer) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, buffer);
    proxy;
}

void CCExtImageCopyCaptureFrameV1::sendDamageBuffer(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y, width, height);
    proxy;
}

void CCExtImageCopyCaptureFrameV1::sendCapture() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CExtImageCopyCaptureFrameV1AttachBufferTypes[] = {
    &wl_buffer_interface,
};
static const wl_interface* _CExtImageCopyCaptureFrameV1DamageBufferTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureFrameV1TransformTypes[] = {
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureFrameV1DamageTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureFrameV1PresentationTimeTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureFrameV1FailedTypes[] = {
    nullptr,
};

static const wl_message _CExtImageCopyCaptureFrameV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "attach_buffer", "o", _CExtImageCopyCaptureFrameV1AttachBufferTypes + 0},
    { "damage_buffer", "iiii", _CExtImageCopyCaptureFrameV1DamageBufferTypes + 0},
    { "capture", "", dummyTypes + 0},
};

static const wl_message _CExtImageCopyCaptureFrameV1Events[] = {
    { "transform", "u", _CExtImageCopyCaptureFrameV1TransformTypes + 0},
    { "damage", "iiii", _CExtImageCopyCaptureFrameV1DamageTypes + 0},
    { "presentation_time", "uuu", _CExtImageCopyCaptureFrameV1PresentationTimeTypes + 0},
    { "ready", "", dummyTypes + 0},
    { "failed", "u", _CExtImageCopyCaptureFrameV1FailedTypes + 0},
};

const wl_interface ext_image_copy_capture_frame_v1_interface = {
    "ext_image_copy_capture_frame_v1", 1,
    4, _CExtImageCopyCaptureFrameV1Requests,
    5, _CExtImageCopyCaptureFrameV1Events,
};

CCExtImageCopyCaptureFrameV1::CCExtImageCopyCaptureFrameV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtImageCopyCaptureFrameV1VTable, this);
}

CCExtImageCopyCaptureFrameV1::~CCExtImageCopyCaptureFrameV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtImageCopyCaptureFrameV1::setTransform(F<void(CCExtImageCopyCaptureFrameV1*, uint32_t)> handler) {
    requests.transform = handler;
}

void CCExtImageCopyCaptureFrameV1::setDamage(F<void(CCExtImageCopyCaptureFrameV1*, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.damage = handler;
}

void CCExtImageCopyCaptureFrameV1::setPresentationTime(F<void(CCExtImageCopyCaptureFrameV1*, uint32_t, uint32_t, uint32_t)> handler) {
    requests.presentationTime = handler;
}

void CCExtImageCopyCaptureFrameV1::setReady(F<void(CCExtImageCopyCaptureFrameV1*)> handler) {
    requests.ready = handler;
}

void CCExtImageCopyCaptureFrameV1::setFailed(F<void(CCExtImageCopyCaptureFrameV1*, extImageCopyCaptureFrameV1FailureReason)> handler) {
    requests.failed = handler;
}

static void _CExtImageCopyCaptureCursorSessionV1Enter(void* data, void* resource) {
    const auto PO = (CCExtImageCopyCaptureCursorSessionV1*)data;
    if (PO && PO->requests.enter)
        PO->requests.enter(PO);
}

static void _CExtImageCopyCaptureCursorSessionV1Leave(void* data, void* resource) {
    const auto PO = (CCExtImageCopyCaptureCursorSessionV1*)data;
    if (PO && PO->requests.leave)
        PO->requests.leave(PO);
}

static void _CExtImageCopyCaptureCursorSessionV1Position(void* data, void* resource, int32_t x, int32_t y) {
    const auto PO = (CCExtImageCopyCaptureCursorSessionV1*)data;
    if (PO && PO->requests.position)
        PO->requests.position(PO, x, y);
}

static void _CExtImageCopyCaptureCursorSessionV1Hotspot(void* data, void* resource, int32_t x, int32_t y) {
    const auto PO = (CCExtImageCopyCaptureCursorSessionV1*)data;
    if (PO && PO->requests.hotspot)
        PO->requests.hotspot(PO, x, y);
}

static const void* _CCExtImageCopyCaptureCursorSessionV1VTable[] = {
    (void*)_CExtImageCopyCaptureCursorSessionV1Enter,
    (void*)_CExtImageCopyCaptureCursorSessionV1Leave,
    (void*)_CExtImageCopyCaptureCursorSessionV1Position,
    (void*)_CExtImageCopyCaptureCursorSessionV1Hotspot,
};

void CCExtImageCopyCaptureCursorSessionV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCExtImageCopyCaptureCursorSessionV1::sendGetCaptureSession() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &ext_image_copy_capture_session_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}
static const wl_interface* _CExtImageCopyCaptureCursorSessionV1GetCaptureSessionTypes[] = {
    &ext_image_copy_capture_session_v1_interface,
};
static const wl_interface* _CExtImageCopyCaptureCursorSessionV1PositionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CExtImageCopyCaptureCursorSessionV1HotspotTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CExtImageCopyCaptureCursorSessionV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_capture_session", "n", _CExtImageCopyCaptureCursorSessionV1GetCaptureSessionTypes + 0},
};

static const wl_message _CExtImageCopyCaptureCursorSessionV1Events[] = {
    { "enter", "", dummyTypes + 0},
    { "leave", "", dummyTypes + 0},
    { "position", "ii", _CExtImageCopyCaptureCursorSessionV1PositionTypes + 0},
    { "hotspot", "ii", _CExtImageCopyCaptureCursorSessionV1HotspotTypes + 0},
};

const wl_interface ext_image_copy_capture_cursor_session_v1_interface = {
    "ext_image_copy_capture_cursor_session_v1", 1,
    2, _CExtImageCopyCaptureCursorSessionV1Requests,
    4, _CExtImageCopyCaptureCursorSessionV1Events,
};

CCExtImageCopyCaptureCursorSessionV1::CCExtImageCopyCaptureCursorSessionV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtImageCopyCaptureCursorSessionV1VTable, this);
}

CCExtImageCopyCaptureCursorSessionV1::~CCExtImageCopyCaptureCursorSessionV1() {
    if (!destroyed)
        sendDestroy();
}

void CCExtImageCopyCaptureCursorSessionV1::setEnter(F<void(CCExtImageCopyCaptureCursorSessionV1*)> handler) {
    requests.enter = handler;
}

void CCExtImageCopyCaptureCursorSessionV1::setLeave(F<void(CCExtImageCopyCaptureCursorSessionV1*)> handler) {
    requests.leave = handler;
}

void CCExtImageCopyCaptureCursorSessionV1::setPosition(F<void(CCExtImageCopyCaptureCursorSessionV1*, int32_t, int32_t)> handler) {
    requests.position = handler;
}

void CCExtImageCopyCaptureCursorSessionV1::setHotspot(F<void(CCExtImageCopyCaptureCursorSessionV1*, int32_t, int32_t)> handler) {
    requests.hotspot = handler;
}

#undef F
