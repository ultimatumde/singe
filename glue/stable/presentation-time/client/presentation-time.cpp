// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// presentation_time

/*
 This protocol's authors' copyright notice is:


    Copyright © 2013-2014 Collabora, Ltd.

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
#include "presentation-time.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_presentation_interface;
extern const wl_interface wp_presentation_feedback_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_output_interface;

static void _CWpPresentationClockId(void* data, void* resource, uint32_t clk_id) {
    const auto PO = (CCWpPresentation*)data;
    if (PO && PO->requests.clockId)
        PO->requests.clockId(PO, clk_id);
}

static const void* _CCWpPresentationVTable[] = {
    (void*)_CWpPresentationClockId,
};

void CCWpPresentation::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpPresentation::sendFeedback(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_presentation_feedback_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, surface, nullptr);

    return proxy;
}
static const wl_interface* _CWpPresentationFeedbackTypes[] = {
    &wl_surface_interface,
    &wp_presentation_feedback_interface,
};
static const wl_interface* _CWpPresentationClockIdTypes[] = {
    nullptr,
};

static const wl_message _CWpPresentationRequests[] = {
    { "destroy", "", dummyTypes + 0},
    { "feedback", "on", _CWpPresentationFeedbackTypes + 0},
};

static const wl_message _CWpPresentationEvents[] = {
    { "clock_id", "u", _CWpPresentationClockIdTypes + 0},
};

const wl_interface wp_presentation_interface = {
    "wp_presentation", 2,
    2, _CWpPresentationRequests,
    1, _CWpPresentationEvents,
};

CCWpPresentation::CCWpPresentation(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpPresentationVTable, this);
}

CCWpPresentation::~CCWpPresentation() {
    if (!destroyed)
        sendDestroy();
}

void CCWpPresentation::setClockId(F<void(CCWpPresentation*, uint32_t)> handler) {
    requests.clockId = handler;
}

static void _CWpPresentationFeedbackSyncOutput(void* data, void* resource, wl_proxy* output) {
    const auto PO = (CCWpPresentationFeedback*)data;
    if (PO && PO->requests.syncOutput)
        PO->requests.syncOutput(PO, output);
}

static void _CWpPresentationFeedbackPresented(void* data, void* resource, uint32_t tv_sec_hi, uint32_t tv_sec_lo, uint32_t tv_nsec, uint32_t refresh, uint32_t seq_hi, uint32_t seq_lo, wpPresentationFeedbackKind flags) {
    const auto PO = (CCWpPresentationFeedback*)data;
    if (PO && PO->requests.presented)
        PO->requests.presented(PO, tv_sec_hi, tv_sec_lo, tv_nsec, refresh, seq_hi, seq_lo, flags);
}

static void _CWpPresentationFeedbackDiscarded(void* data, void* resource) {
    const auto PO = (CCWpPresentationFeedback*)data;
    if (PO && PO->requests.discarded)
        PO->requests.discarded(PO);
}

static const void* _CCWpPresentationFeedbackVTable[] = {
    (void*)_CWpPresentationFeedbackSyncOutput,
    (void*)_CWpPresentationFeedbackPresented,
    (void*)_CWpPresentationFeedbackDiscarded,
};
static const wl_interface* _CWpPresentationFeedbackSyncOutputTypes[] = {
    &wl_output_interface,
};
static const wl_interface* _CWpPresentationFeedbackPresentedTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CWpPresentationFeedbackEvents[] = {
    { "sync_output", "o", _CWpPresentationFeedbackSyncOutputTypes + 0},
    { "presented", "uuuuuuu", _CWpPresentationFeedbackPresentedTypes + 0},
    { "discarded", "", dummyTypes + 0},
};

const wl_interface wp_presentation_feedback_interface = {
    "wp_presentation_feedback", 2,
    0, nullptr,
    3, _CWpPresentationFeedbackEvents,
};

CCWpPresentationFeedback::CCWpPresentationFeedback(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpPresentationFeedbackVTable, this);
}

CCWpPresentationFeedback::~CCWpPresentationFeedback() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCWpPresentationFeedback::setSyncOutput(F<void(CCWpPresentationFeedback*, wl_proxy*)> handler) {
    requests.syncOutput = handler;
}

void CCWpPresentationFeedback::setPresented(F<void(CCWpPresentationFeedback*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, wpPresentationFeedbackKind)> handler) {
    requests.presented = handler;
}

void CCWpPresentationFeedback::setDiscarded(F<void(CCWpPresentationFeedback*)> handler) {
    requests.discarded = handler;
}

#undef F
