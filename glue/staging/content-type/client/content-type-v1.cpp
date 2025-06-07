// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// content_type_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2021 Emmanuel Gil Peyrot
    Copyright © 2022 Xaver Hugl

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
#include "content-type-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_content_type_manager_v1_interface;
extern const wl_interface wp_content_type_v1_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCWpContentTypeManagerV1VTable[] = {
};

void CCWpContentTypeManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpContentTypeManagerV1::sendGetSurfaceContentType(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_content_type_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CWpContentTypeManagerV1GetSurfaceContentTypeTypes[] = {
    &wp_content_type_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CWpContentTypeManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_surface_content_type", "no", _CWpContentTypeManagerV1GetSurfaceContentTypeTypes + 0},
};

const wl_interface wp_content_type_manager_v1_interface = {
    "wp_content_type_manager_v1", 1,
    2, _CWpContentTypeManagerV1Requests,
    0, nullptr,
};

CCWpContentTypeManagerV1::CCWpContentTypeManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpContentTypeManagerV1VTable, this);
}

CCWpContentTypeManagerV1::~CCWpContentTypeManagerV1() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpContentTypeV1VTable[] = {
};

void CCWpContentTypeV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpContentTypeV1::sendSetContentType(wpContentTypeV1Type content_type) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, content_type);
    proxy;
}
static const wl_interface* _CWpContentTypeV1SetContentTypeTypes[] = {
    nullptr,
};

static const wl_message _CWpContentTypeV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_content_type", "u", _CWpContentTypeV1SetContentTypeTypes + 0},
};

const wl_interface wp_content_type_v1_interface = {
    "wp_content_type_v1", 1,
    2, _CWpContentTypeV1Requests,
    0, nullptr,
};

CCWpContentTypeV1::CCWpContentTypeV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpContentTypeV1VTable, this);
}

CCWpContentTypeV1::~CCWpContentTypeV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
