// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// build_time_wayland_tests

/*
 This protocol's authors' copyright notice is:


    Copyright © 2017 Samsung Electronics Co., Ltd

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation files
    (the "Software"), to deal in the Software without restriction,
    including without limitation the rights to use, copy, modify, merge,
    publish, distribute, sublicense, and/or sell copies of the Software,
    and to permit persons to whom the Software is furnished to do so,
    subject to the following conditions:

    The above copyright notice and this permission notice (including the
    next paragraph) shall be included in all copies or substantial
    portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
    BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
    ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "tests.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface fd_passer_interface;

static void _CFdPasserPreFd(void* data, void* resource) {
    const auto PO = (CCFdPasser*)data;
    if (PO && PO->requests.preFd)
        PO->requests.preFd(PO);
}

static void _CFdPasserFd(void* data, void* resource, int32_t fd) {
    const auto PO = (CCFdPasser*)data;
    if (PO && PO->requests.fd)
        PO->requests.fd(PO, fd);
}

static const void* _CCFdPasserVTable[] = {
    (void*)_CFdPasserPreFd,
    (void*)_CFdPasserFd,
};

void CCFdPasser::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCFdPasser::sendConjoin(CCFdPasser* passer) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, passer ? passer->pResource : nullptr);
    proxy;
}
static const wl_interface* _CFdPasserConjoinTypes[] = {
    &fd_passer_interface,
};
static const wl_interface* _CFdPasserFdTypes[] = {
    nullptr,
};

static const wl_message _CFdPasserRequests[] = {
    { "destroy", "", dummyTypes + 0},
    { "conjoin", "2o", _CFdPasserConjoinTypes + 0},
};

static const wl_message _CFdPasserEvents[] = {
    { "pre_fd", "", dummyTypes + 0},
    { "fd", "h", _CFdPasserFdTypes + 0},
};

const wl_interface fd_passer_interface = {
    "fd_passer", 2,
    2, _CFdPasserRequests,
    2, _CFdPasserEvents,
};

CCFdPasser::CCFdPasser(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCFdPasserVTable, this);
}

CCFdPasser::~CCFdPasser() {
    if (!destroyed)
        sendDestroy();
}

void CCFdPasser::setPreFd(F<void(CCFdPasser*)> handler) {
    requests.preFd = handler;
}

void CCFdPasser::setFd(F<void(CCFdPasser*, int32_t)> handler) {
    requests.fd = handler;
}

#undef F
