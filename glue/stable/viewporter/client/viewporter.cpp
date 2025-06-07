// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// viewporter

/*
 This protocol's authors' copyright notice is:


    Copyright © 2013-2016 Collabora, Ltd.

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
#include "viewporter.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_viewporter_interface;
extern const wl_interface wp_viewport_interface;
extern const wl_interface wl_surface_interface;

static const void* _CCWpViewporterVTable[] = {
};

void CCWpViewporter::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpViewporter::sendGetViewport(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_viewport_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CWpViewporterGetViewportTypes[] = {
    &wp_viewport_interface,
    &wl_surface_interface,
};

static const wl_message _CWpViewporterRequests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_viewport", "no", _CWpViewporterGetViewportTypes + 0},
};

const wl_interface wp_viewporter_interface = {
    "wp_viewporter", 1,
    2, _CWpViewporterRequests,
    0, nullptr,
};

CCWpViewporter::CCWpViewporter(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpViewporterVTable, this);
}

CCWpViewporter::~CCWpViewporter() {
    if (!destroyed)
        sendDestroy();
}

static const void* _CCWpViewportVTable[] = {
};

void CCWpViewport::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpViewport::sendSetSource(wl_fixed_t x, wl_fixed_t y, wl_fixed_t width, wl_fixed_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y, width, height);
    proxy;
}

void CCWpViewport::sendSetDestination(int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, width, height);
    proxy;
}
static const wl_interface* _CWpViewportSetSourceTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpViewportSetDestinationTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CWpViewportRequests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_source", "ffff", _CWpViewportSetSourceTypes + 0},
    { "set_destination", "ii", _CWpViewportSetDestinationTypes + 0},
};

const wl_interface wp_viewport_interface = {
    "wp_viewport", 1,
    3, _CWpViewportRequests,
    0, nullptr,
};

CCWpViewport::CCWpViewport(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpViewportVTable, this);
}

CCWpViewport::~CCWpViewport() {
    if (!destroyed)
        sendDestroy();
}

#undef F
