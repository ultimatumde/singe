// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_toplevel_tag_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2024 Xaver Hugl

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
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "xdg-toplevel-tag-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface xdg_toplevel_tag_manager_v1_interface;
extern const wl_interface xdg_toplevel_interface;

static const void* _CCXdgToplevelTagManagerV1VTable[] = {
};

void CCXdgToplevelTagManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCXdgToplevelTagManagerV1::sendSetToplevelTag(wl_proxy* toplevel, const char* tag) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, toplevel, tag);
    proxy;
}

void CCXdgToplevelTagManagerV1::sendSetToplevelDescription(wl_proxy* toplevel, const char* description) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, toplevel, description);
    proxy;
}
static const wl_interface* _CXdgToplevelTagManagerV1SetToplevelTagTypes[] = {
    &xdg_toplevel_interface,
    nullptr,
};
static const wl_interface* _CXdgToplevelTagManagerV1SetToplevelDescriptionTypes[] = {
    &xdg_toplevel_interface,
    nullptr,
};

static const wl_message _CXdgToplevelTagManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_toplevel_tag", "os", _CXdgToplevelTagManagerV1SetToplevelTagTypes + 0},
    { "set_toplevel_description", "os", _CXdgToplevelTagManagerV1SetToplevelDescriptionTypes + 0},
};

const wl_interface xdg_toplevel_tag_manager_v1_interface = {
    "xdg_toplevel_tag_manager_v1", 1,
    3, _CXdgToplevelTagManagerV1Requests,
    0, nullptr,
};

CCXdgToplevelTagManagerV1::CCXdgToplevelTagManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCXdgToplevelTagManagerV1VTable, this);
}

CCXdgToplevelTagManagerV1::~CCXdgToplevelTagManagerV1() {
    if (!destroyed)
        sendDestroy();
}

#undef F
