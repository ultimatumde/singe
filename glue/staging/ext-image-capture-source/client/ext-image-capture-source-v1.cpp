// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_image_capture_source_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2022 Andri Yngvason
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
#include "ext-image-capture-source-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface ext_image_capture_source_v1_interface;
extern const wl_interface ext_output_image_capture_source_manager_v1_interface;
extern const wl_interface ext_foreign_toplevel_image_capture_source_manager_v1_interface;
extern const wl_interface wl_output_interface;
extern const wl_interface ext_foreign_toplevel_handle_v1_interface;

static const void* _CCExtImageCaptureSourceV1VTable[] = {
};

void CCExtImageCaptureSourceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

static const wl_message _CExtImageCaptureSourceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
};

const wl_interface ext_image_capture_source_v1_interface = {
    "ext_image_capture_source_v1", 1,
    1, _CExtImageCaptureSourceV1Requests,
    0, nullptr,
};

CCExtImageCaptureSourceV1::CCExtImageCaptureSourceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtImageCaptureSourceV1VTable, this);
}

CCExtImageCaptureSourceV1::~CCExtImageCaptureSourceV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCExtOutputImageCaptureSourceManagerV1VTable[] = {
};

wl_proxy* CCExtOutputImageCaptureSourceManagerV1::sendCreateSource(wl_proxy* output) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &ext_image_capture_source_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, output);

    return proxy;
}

void CCExtOutputImageCaptureSourceManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtOutputImageCaptureSourceManagerV1CreateSourceTypes[] = {
    &ext_image_capture_source_v1_interface,
    &wl_output_interface,
};

static const wl_message _CExtOutputImageCaptureSourceManagerV1Requests[] = {
    { "create_source", "no", _CExtOutputImageCaptureSourceManagerV1CreateSourceTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface ext_output_image_capture_source_manager_v1_interface = {
    "ext_output_image_capture_source_manager_v1", 1,
    2, _CExtOutputImageCaptureSourceManagerV1Requests,
    0, nullptr,
};

CCExtOutputImageCaptureSourceManagerV1::CCExtOutputImageCaptureSourceManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtOutputImageCaptureSourceManagerV1VTable, this);
}

CCExtOutputImageCaptureSourceManagerV1::~CCExtOutputImageCaptureSourceManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCExtForeignToplevelImageCaptureSourceManagerV1VTable[] = {
};

wl_proxy* CCExtForeignToplevelImageCaptureSourceManagerV1::sendCreateSource(wl_proxy* toplevel_handle) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &ext_image_capture_source_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, toplevel_handle);

    return proxy;
}

void CCExtForeignToplevelImageCaptureSourceManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}
static const wl_interface* _CExtForeignToplevelImageCaptureSourceManagerV1CreateSourceTypes[] = {
    &ext_image_capture_source_v1_interface,
    &ext_foreign_toplevel_handle_v1_interface,
};

static const wl_message _CExtForeignToplevelImageCaptureSourceManagerV1Requests[] = {
    { "create_source", "no", _CExtForeignToplevelImageCaptureSourceManagerV1CreateSourceTypes + 0},
    { "destroy", "", dummyTypes + 0},
};

const wl_interface ext_foreign_toplevel_image_capture_source_manager_v1_interface = {
    "ext_foreign_toplevel_image_capture_source_manager_v1", 1,
    2, _CExtForeignToplevelImageCaptureSourceManagerV1Requests,
    0, nullptr,
};

CCExtForeignToplevelImageCaptureSourceManagerV1::CCExtForeignToplevelImageCaptureSourceManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCExtForeignToplevelImageCaptureSourceManagerV1VTable, this);
}

CCExtForeignToplevelImageCaptureSourceManagerV1::~CCExtForeignToplevelImageCaptureSourceManagerV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
