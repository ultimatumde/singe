// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// text_input_unstable_v3

/*
 This protocol's authors' copyright notice is:


    Copyright © 2012, 2013 Intel Corporation
    Copyright © 2015, 2016 Jan Arne Petersen
    Copyright © 2017, 2018 Red Hat, Inc.
    Copyright © 2018       Purism SPC

    Permission to use, copy, modify, distribute, and sell this
    software and its documentation for any purpose is hereby granted
    without fee, provided that the above copyright notice appear in
    all copies and that both that copyright notice and this permission
    notice appear in supporting documentation, and that the name of
    the copyright holders not be used in advertising or publicity
    pertaining to distribution of the software without specific,
    written prior permission.  The copyright holders make no
    representations about the suitability of this software for any
    purpose.  It is provided "as is" without express or implied
    warranty.

    THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
    SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
    FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
    SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
    AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
    ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
    THIS SOFTWARE.
  
*/

#define private public
#define HYPRWAYLAND_SCANNER_NO_INTERFACES
#include "text-input-unstable-v3.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_text_input_v3_interface;
extern const wl_interface zwp_text_input_manager_v3_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;

static void _CZwpTextInputV3Enter(void* data, void* resource, wl_proxy* surface) {
    const auto PO = (CCZwpTextInputV3*)data;
    if (PO && PO->requests.enter)
        PO->requests.enter(PO, surface);
}

static void _CZwpTextInputV3Leave(void* data, void* resource, wl_proxy* surface) {
    const auto PO = (CCZwpTextInputV3*)data;
    if (PO && PO->requests.leave)
        PO->requests.leave(PO, surface);
}

static void _CZwpTextInputV3PreeditString(void* data, void* resource, const char* text, int32_t cursor_begin, int32_t cursor_end) {
    const auto PO = (CCZwpTextInputV3*)data;
    if (PO && PO->requests.preeditString)
        PO->requests.preeditString(PO, text, cursor_begin, cursor_end);
}

static void _CZwpTextInputV3CommitString(void* data, void* resource, const char* text) {
    const auto PO = (CCZwpTextInputV3*)data;
    if (PO && PO->requests.commitString)
        PO->requests.commitString(PO, text);
}

static void _CZwpTextInputV3DeleteSurroundingText(void* data, void* resource, uint32_t before_length, uint32_t after_length) {
    const auto PO = (CCZwpTextInputV3*)data;
    if (PO && PO->requests.deleteSurroundingText)
        PO->requests.deleteSurroundingText(PO, before_length, after_length);
}

static void _CZwpTextInputV3Done(void* data, void* resource, uint32_t serial) {
    const auto PO = (CCZwpTextInputV3*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO, serial);
}

static const void* _CCZwpTextInputV3VTable[] = {
    (void*)_CZwpTextInputV3Enter,
    (void*)_CZwpTextInputV3Leave,
    (void*)_CZwpTextInputV3PreeditString,
    (void*)_CZwpTextInputV3CommitString,
    (void*)_CZwpTextInputV3DeleteSurroundingText,
    (void*)_CZwpTextInputV3Done,
};

void CCZwpTextInputV3::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZwpTextInputV3::sendEnable() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZwpTextInputV3::sendDisable() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZwpTextInputV3::sendSetSurroundingText(const char* text, int32_t cursor, int32_t anchor) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, text, cursor, anchor);
    proxy;
}

void CCZwpTextInputV3::sendSetTextChangeCause(zwpTextInputV3ChangeCause cause) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, cause);
    proxy;
}

void CCZwpTextInputV3::sendSetContentType(zwpTextInputV3ContentHint hint, zwpTextInputV3ContentPurpose purpose) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, hint, purpose);
    proxy;
}

void CCZwpTextInputV3::sendSetCursorRectangle(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y, width, height);
    proxy;
}

void CCZwpTextInputV3::sendCommit() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 7, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CZwpTextInputV3SetSurroundingTextTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV3SetTextChangeCauseTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTextInputV3SetContentTypeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV3SetCursorRectangleTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV3EnterTypes[] = {
    &wl_surface_interface,
};
static const wl_interface* _CZwpTextInputV3LeaveTypes[] = {
    &wl_surface_interface,
};
static const wl_interface* _CZwpTextInputV3PreeditStringTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV3CommitStringTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTextInputV3DeleteSurroundingTextTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV3DoneTypes[] = {
    nullptr,
};

static const wl_message _CZwpTextInputV3Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "enable", "", dummyTypes + 0},
    { "disable", "", dummyTypes + 0},
    { "set_surrounding_text", "sii", _CZwpTextInputV3SetSurroundingTextTypes + 0},
    { "set_text_change_cause", "u", _CZwpTextInputV3SetTextChangeCauseTypes + 0},
    { "set_content_type", "uu", _CZwpTextInputV3SetContentTypeTypes + 0},
    { "set_cursor_rectangle", "iiii", _CZwpTextInputV3SetCursorRectangleTypes + 0},
    { "commit", "", dummyTypes + 0},
};

static const wl_message _CZwpTextInputV3Events[] = {
    { "enter", "o", _CZwpTextInputV3EnterTypes + 0},
    { "leave", "o", _CZwpTextInputV3LeaveTypes + 0},
    { "preedit_string", "?sii", _CZwpTextInputV3PreeditStringTypes + 0},
    { "commit_string", "?s", _CZwpTextInputV3CommitStringTypes + 0},
    { "delete_surrounding_text", "uu", _CZwpTextInputV3DeleteSurroundingTextTypes + 0},
    { "done", "u", _CZwpTextInputV3DoneTypes + 0},
};

const wl_interface zwp_text_input_v3_interface = {
    "zwp_text_input_v3", 1,
    8, _CZwpTextInputV3Requests,
    6, _CZwpTextInputV3Events,
};

CCZwpTextInputV3::CCZwpTextInputV3(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTextInputV3VTable, this);
}

CCZwpTextInputV3::~CCZwpTextInputV3() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpTextInputV3::setEnter(F<void(CCZwpTextInputV3*, wl_proxy*)> handler) {
    requests.enter = handler;
}

void CCZwpTextInputV3::setLeave(F<void(CCZwpTextInputV3*, wl_proxy*)> handler) {
    requests.leave = handler;
}

void CCZwpTextInputV3::setPreeditString(F<void(CCZwpTextInputV3*, const char*, int32_t, int32_t)> handler) {
    requests.preeditString = handler;
}

void CCZwpTextInputV3::setCommitString(F<void(CCZwpTextInputV3*, const char*)> handler) {
    requests.commitString = handler;
}

void CCZwpTextInputV3::setDeleteSurroundingText(F<void(CCZwpTextInputV3*, uint32_t, uint32_t)> handler) {
    requests.deleteSurroundingText = handler;
}

void CCZwpTextInputV3::setDone(F<void(CCZwpTextInputV3*, uint32_t)> handler) {
    requests.done = handler;
}

static const void* _CCZwpTextInputManagerV3VTable[] = {
};

void CCZwpTextInputManagerV3::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCZwpTextInputManagerV3::sendGetTextInput(wl_proxy* seat) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &zwp_text_input_v3_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, seat);

    return proxy;
}
static const wl_interface* _CZwpTextInputManagerV3GetTextInputTypes[] = {
    &zwp_text_input_v3_interface,
    &wl_seat_interface,
};

static const wl_message _CZwpTextInputManagerV3Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_text_input", "no", _CZwpTextInputManagerV3GetTextInputTypes + 0},
};

const wl_interface zwp_text_input_manager_v3_interface = {
    "zwp_text_input_manager_v3", 1,
    2, _CZwpTextInputManagerV3Requests,
    0, nullptr,
};

CCZwpTextInputManagerV3::CCZwpTextInputManagerV3(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTextInputManagerV3VTable, this);
}

CCZwpTextInputManagerV3::~CCZwpTextInputManagerV3() {
    if (!destroyed)
        sendDestroy();
}

#undef F
