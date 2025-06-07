// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// text_input_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2012, 2013 Intel Corporation

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
#include "text-input-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_text_input_v1_interface;
extern const wl_interface zwp_text_input_manager_v1_interface;
extern const wl_interface wl_seat_interface;
extern const wl_interface wl_surface_interface;

static void _CZwpTextInputV1Enter(void* data, void* resource, wl_proxy* surface) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.enter)
        PO->requests.enter(PO, surface);
}

static void _CZwpTextInputV1Leave(void* data, void* resource) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.leave)
        PO->requests.leave(PO);
}

static void _CZwpTextInputV1ModifiersMap(void* data, void* resource, wl_array* map) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.modifiersMap)
        PO->requests.modifiersMap(PO, map);
}

static void _CZwpTextInputV1InputPanelState(void* data, void* resource, uint32_t state) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.inputPanelState)
        PO->requests.inputPanelState(PO, state);
}

static void _CZwpTextInputV1PreeditString(void* data, void* resource, uint32_t serial, const char* text, const char* commit) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.preeditString)
        PO->requests.preeditString(PO, serial, text, commit);
}

static void _CZwpTextInputV1PreeditStyling(void* data, void* resource, uint32_t index, uint32_t length, zwpTextInputV1PreeditStyle style) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.preeditStyling)
        PO->requests.preeditStyling(PO, index, length, style);
}

static void _CZwpTextInputV1PreeditCursor(void* data, void* resource, int32_t index) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.preeditCursor)
        PO->requests.preeditCursor(PO, index);
}

static void _CZwpTextInputV1CommitString(void* data, void* resource, uint32_t serial, const char* text) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.commitString)
        PO->requests.commitString(PO, serial, text);
}

static void _CZwpTextInputV1CursorPosition(void* data, void* resource, int32_t index, int32_t anchor) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.cursorPosition)
        PO->requests.cursorPosition(PO, index, anchor);
}

static void _CZwpTextInputV1DeleteSurroundingText(void* data, void* resource, int32_t index, uint32_t length) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.deleteSurroundingText)
        PO->requests.deleteSurroundingText(PO, index, length);
}

static void _CZwpTextInputV1Keysym(void* data, void* resource, uint32_t serial, uint32_t time, uint32_t sym, uint32_t state, uint32_t modifiers) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.keysym)
        PO->requests.keysym(PO, serial, time, sym, state, modifiers);
}

static void _CZwpTextInputV1Language(void* data, void* resource, uint32_t serial, const char* language) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.language)
        PO->requests.language(PO, serial, language);
}

static void _CZwpTextInputV1TextDirection(void* data, void* resource, uint32_t serial, zwpTextInputV1TextDirection direction) {
    const auto PO = (CCZwpTextInputV1*)data;
    if (PO && PO->requests.textDirection)
        PO->requests.textDirection(PO, serial, direction);
}

static const void* _CCZwpTextInputV1VTable[] = {
    (void*)_CZwpTextInputV1Enter,
    (void*)_CZwpTextInputV1Leave,
    (void*)_CZwpTextInputV1ModifiersMap,
    (void*)_CZwpTextInputV1InputPanelState,
    (void*)_CZwpTextInputV1PreeditString,
    (void*)_CZwpTextInputV1PreeditStyling,
    (void*)_CZwpTextInputV1PreeditCursor,
    (void*)_CZwpTextInputV1CommitString,
    (void*)_CZwpTextInputV1CursorPosition,
    (void*)_CZwpTextInputV1DeleteSurroundingText,
    (void*)_CZwpTextInputV1Keysym,
    (void*)_CZwpTextInputV1Language,
    (void*)_CZwpTextInputV1TextDirection,
};

void CCZwpTextInputV1::sendActivate(wl_proxy* seat, wl_proxy* surface) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat, surface);
    proxy;
}

void CCZwpTextInputV1::sendDeactivate(wl_proxy* seat) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, seat);
    proxy;
}

void CCZwpTextInputV1::sendShowInputPanel() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZwpTextInputV1::sendHideInputPanel() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZwpTextInputV1::sendReset() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}

void CCZwpTextInputV1::sendSetSurroundingText(const char* text, uint32_t cursor, uint32_t anchor) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, text, cursor, anchor);
    proxy;
}

void CCZwpTextInputV1::sendSetContentType(zwpTextInputV1ContentHint hint, zwpTextInputV1ContentPurpose purpose) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, hint, purpose);
    proxy;
}

void CCZwpTextInputV1::sendSetCursorRectangle(int32_t x, int32_t y, int32_t width, int32_t height) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 7, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, x, y, width, height);
    proxy;
}

void CCZwpTextInputV1::sendSetPreferredLanguage(const char* language) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 8, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, language);
    proxy;
}

void CCZwpTextInputV1::sendCommitState(uint32_t serial) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 9, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial);
    proxy;
}

void CCZwpTextInputV1::sendInvokeAction(uint32_t button, uint32_t index) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 10, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, button, index);
    proxy;
}
static const wl_interface* _CZwpTextInputV1ActivateTypes[] = {
    &wl_seat_interface,
    &wl_surface_interface,
};
static const wl_interface* _CZwpTextInputV1DeactivateTypes[] = {
    &wl_seat_interface,
};
static const wl_interface* _CZwpTextInputV1SetSurroundingTextTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1SetContentTypeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1SetCursorRectangleTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1SetPreferredLanguageTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTextInputV1CommitStateTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTextInputV1InvokeActionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1EnterTypes[] = {
    &wl_surface_interface,
};
static const wl_interface* _CZwpTextInputV1ModifiersMapTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTextInputV1InputPanelStateTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTextInputV1PreeditStringTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1PreeditStylingTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1PreeditCursorTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpTextInputV1CommitStringTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1CursorPositionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1DeleteSurroundingTextTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1KeysymTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1LanguageTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpTextInputV1TextDirectionTypes[] = {
    nullptr,
    nullptr,
};

static const wl_message _CZwpTextInputV1Requests[] = {
    { "activate", "oo", _CZwpTextInputV1ActivateTypes + 0},
    { "deactivate", "o", _CZwpTextInputV1DeactivateTypes + 0},
    { "show_input_panel", "", dummyTypes + 0},
    { "hide_input_panel", "", dummyTypes + 0},
    { "reset", "", dummyTypes + 0},
    { "set_surrounding_text", "suu", _CZwpTextInputV1SetSurroundingTextTypes + 0},
    { "set_content_type", "uu", _CZwpTextInputV1SetContentTypeTypes + 0},
    { "set_cursor_rectangle", "iiii", _CZwpTextInputV1SetCursorRectangleTypes + 0},
    { "set_preferred_language", "s", _CZwpTextInputV1SetPreferredLanguageTypes + 0},
    { "commit_state", "u", _CZwpTextInputV1CommitStateTypes + 0},
    { "invoke_action", "uu", _CZwpTextInputV1InvokeActionTypes + 0},
};

static const wl_message _CZwpTextInputV1Events[] = {
    { "enter", "o", _CZwpTextInputV1EnterTypes + 0},
    { "leave", "", dummyTypes + 0},
    { "modifiers_map", "a", _CZwpTextInputV1ModifiersMapTypes + 0},
    { "input_panel_state", "u", _CZwpTextInputV1InputPanelStateTypes + 0},
    { "preedit_string", "uss", _CZwpTextInputV1PreeditStringTypes + 0},
    { "preedit_styling", "uuu", _CZwpTextInputV1PreeditStylingTypes + 0},
    { "preedit_cursor", "i", _CZwpTextInputV1PreeditCursorTypes + 0},
    { "commit_string", "us", _CZwpTextInputV1CommitStringTypes + 0},
    { "cursor_position", "ii", _CZwpTextInputV1CursorPositionTypes + 0},
    { "delete_surrounding_text", "iu", _CZwpTextInputV1DeleteSurroundingTextTypes + 0},
    { "keysym", "uuuuu", _CZwpTextInputV1KeysymTypes + 0},
    { "language", "us", _CZwpTextInputV1LanguageTypes + 0},
    { "text_direction", "uu", _CZwpTextInputV1TextDirectionTypes + 0},
};

const wl_interface zwp_text_input_v1_interface = {
    "zwp_text_input_v1", 1,
    11, _CZwpTextInputV1Requests,
    13, _CZwpTextInputV1Events,
};

CCZwpTextInputV1::CCZwpTextInputV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTextInputV1VTable, this);
}

CCZwpTextInputV1::~CCZwpTextInputV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCZwpTextInputV1::setEnter(F<void(CCZwpTextInputV1*, wl_proxy*)> handler) {
    requests.enter = handler;
}

void CCZwpTextInputV1::setLeave(F<void(CCZwpTextInputV1*)> handler) {
    requests.leave = handler;
}

void CCZwpTextInputV1::setModifiersMap(F<void(CCZwpTextInputV1*, wl_array*)> handler) {
    requests.modifiersMap = handler;
}

void CCZwpTextInputV1::setInputPanelState(F<void(CCZwpTextInputV1*, uint32_t)> handler) {
    requests.inputPanelState = handler;
}

void CCZwpTextInputV1::setPreeditString(F<void(CCZwpTextInputV1*, uint32_t, const char*, const char*)> handler) {
    requests.preeditString = handler;
}

void CCZwpTextInputV1::setPreeditStyling(F<void(CCZwpTextInputV1*, uint32_t, uint32_t, zwpTextInputV1PreeditStyle)> handler) {
    requests.preeditStyling = handler;
}

void CCZwpTextInputV1::setPreeditCursor(F<void(CCZwpTextInputV1*, int32_t)> handler) {
    requests.preeditCursor = handler;
}

void CCZwpTextInputV1::setCommitString(F<void(CCZwpTextInputV1*, uint32_t, const char*)> handler) {
    requests.commitString = handler;
}

void CCZwpTextInputV1::setCursorPosition(F<void(CCZwpTextInputV1*, int32_t, int32_t)> handler) {
    requests.cursorPosition = handler;
}

void CCZwpTextInputV1::setDeleteSurroundingText(F<void(CCZwpTextInputV1*, int32_t, uint32_t)> handler) {
    requests.deleteSurroundingText = handler;
}

void CCZwpTextInputV1::setKeysym(F<void(CCZwpTextInputV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> handler) {
    requests.keysym = handler;
}

void CCZwpTextInputV1::setLanguage(F<void(CCZwpTextInputV1*, uint32_t, const char*)> handler) {
    requests.language = handler;
}

void CCZwpTextInputV1::setTextDirection(F<void(CCZwpTextInputV1*, uint32_t, zwpTextInputV1TextDirection)> handler) {
    requests.textDirection = handler;
}

static const void* _CCZwpTextInputManagerV1VTable[] = {
};

wl_proxy* CCZwpTextInputManagerV1::sendCreateTextInput() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &zwp_text_input_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}
static const wl_interface* _CZwpTextInputManagerV1CreateTextInputTypes[] = {
    &zwp_text_input_v1_interface,
};

static const wl_message _CZwpTextInputManagerV1Requests[] = {
    { "create_text_input", "n", _CZwpTextInputManagerV1CreateTextInputTypes + 0},
};

const wl_interface zwp_text_input_manager_v1_interface = {
    "zwp_text_input_manager_v1", 1,
    1, _CZwpTextInputManagerV1Requests,
    0, nullptr,
};

CCZwpTextInputManagerV1::CCZwpTextInputManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpTextInputManagerV1VTable, this);
}

CCZwpTextInputManagerV1::~CCZwpTextInputManagerV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

#undef F
