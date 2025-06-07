// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// input_method_unstable_v1

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
#include "input-method-unstable-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface zwp_input_method_context_v1_interface;
extern const wl_interface zwp_input_method_v1_interface;
extern const wl_interface zwp_input_panel_v1_interface;
extern const wl_interface zwp_input_panel_surface_v1_interface;
extern const wl_interface wl_keyboard_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_output_interface;

static void _CZwpInputMethodContextV1SurroundingText(void* data, void* resource, const char* text, uint32_t cursor, uint32_t anchor) {
    const auto PO = (CCZwpInputMethodContextV1*)data;
    if (PO && PO->requests.surroundingText)
        PO->requests.surroundingText(PO, text, cursor, anchor);
}

static void _CZwpInputMethodContextV1Reset(void* data, void* resource) {
    const auto PO = (CCZwpInputMethodContextV1*)data;
    if (PO && PO->requests.reset)
        PO->requests.reset(PO);
}

static void _CZwpInputMethodContextV1ContentType(void* data, void* resource, uint32_t hint, uint32_t purpose) {
    const auto PO = (CCZwpInputMethodContextV1*)data;
    if (PO && PO->requests.contentType)
        PO->requests.contentType(PO, hint, purpose);
}

static void _CZwpInputMethodContextV1InvokeAction(void* data, void* resource, uint32_t button, uint32_t index) {
    const auto PO = (CCZwpInputMethodContextV1*)data;
    if (PO && PO->requests.invokeAction)
        PO->requests.invokeAction(PO, button, index);
}

static void _CZwpInputMethodContextV1CommitState(void* data, void* resource, uint32_t serial) {
    const auto PO = (CCZwpInputMethodContextV1*)data;
    if (PO && PO->requests.commitState)
        PO->requests.commitState(PO, serial);
}

static void _CZwpInputMethodContextV1PreferredLanguage(void* data, void* resource, const char* language) {
    const auto PO = (CCZwpInputMethodContextV1*)data;
    if (PO && PO->requests.preferredLanguage)
        PO->requests.preferredLanguage(PO, language);
}

static const void* _CCZwpInputMethodContextV1VTable[] = {
    (void*)_CZwpInputMethodContextV1SurroundingText,
    (void*)_CZwpInputMethodContextV1Reset,
    (void*)_CZwpInputMethodContextV1ContentType,
    (void*)_CZwpInputMethodContextV1InvokeAction,
    (void*)_CZwpInputMethodContextV1CommitState,
    (void*)_CZwpInputMethodContextV1PreferredLanguage,
};

void CCZwpInputMethodContextV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCZwpInputMethodContextV1::sendCommitString(uint32_t serial, const char* text) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, text);
    proxy;
}

void CCZwpInputMethodContextV1::sendPreeditString(uint32_t serial, const char* text, const char* commit) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, text, commit);
    proxy;
}

void CCZwpInputMethodContextV1::sendPreeditStyling(uint32_t index, uint32_t length, uint32_t style) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, index, length, style);
    proxy;
}

void CCZwpInputMethodContextV1::sendPreeditCursor(int32_t index) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, index);
    proxy;
}

void CCZwpInputMethodContextV1::sendDeleteSurroundingText(int32_t index, uint32_t length) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, index, length);
    proxy;
}

void CCZwpInputMethodContextV1::sendCursorPosition(int32_t index, int32_t anchor) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, index, anchor);
    proxy;
}

void CCZwpInputMethodContextV1::sendModifiersMap(wl_array* map) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 7, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, map);
    proxy;
}

void CCZwpInputMethodContextV1::sendKeysym(uint32_t serial, uint32_t time, uint32_t sym, uint32_t state, uint32_t modifiers) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 8, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, time, sym, state, modifiers);
    proxy;
}

wl_proxy* CCZwpInputMethodContextV1::sendGrabKeyboard() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 9, &wl_keyboard_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

void CCZwpInputMethodContextV1::sendKey(uint32_t serial, uint32_t time, uint32_t key, uint32_t state) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 10, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, time, key, state);
    proxy;
}

void CCZwpInputMethodContextV1::sendModifiers(uint32_t serial, uint32_t mods_depressed, uint32_t mods_latched, uint32_t mods_locked, uint32_t group) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 11, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, mods_depressed, mods_latched, mods_locked, group);
    proxy;
}

void CCZwpInputMethodContextV1::sendLanguage(uint32_t serial, const char* language) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 12, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, language);
    proxy;
}

void CCZwpInputMethodContextV1::sendTextDirection(uint32_t serial, uint32_t direction) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 13, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, serial, direction);
    proxy;
}
static const wl_interface* _CZwpInputMethodContextV1CommitStringTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1PreeditStringTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1PreeditStylingTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1PreeditCursorTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1DeleteSurroundingTextTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1CursorPositionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1ModifiersMapTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1KeysymTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1GrabKeyboardTypes[] = {
    &wl_keyboard_interface,
};
static const wl_interface* _CZwpInputMethodContextV1KeyTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1ModifiersTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1LanguageTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1TextDirectionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1SurroundingTextTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1ContentTypeTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1InvokeActionTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1CommitStateTypes[] = {
    nullptr,
};
static const wl_interface* _CZwpInputMethodContextV1PreferredLanguageTypes[] = {
    nullptr,
};

static const wl_message _CZwpInputMethodContextV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "commit_string", "us", _CZwpInputMethodContextV1CommitStringTypes + 0},
    { "preedit_string", "uss", _CZwpInputMethodContextV1PreeditStringTypes + 0},
    { "preedit_styling", "uuu", _CZwpInputMethodContextV1PreeditStylingTypes + 0},
    { "preedit_cursor", "i", _CZwpInputMethodContextV1PreeditCursorTypes + 0},
    { "delete_surrounding_text", "iu", _CZwpInputMethodContextV1DeleteSurroundingTextTypes + 0},
    { "cursor_position", "ii", _CZwpInputMethodContextV1CursorPositionTypes + 0},
    { "modifiers_map", "a", _CZwpInputMethodContextV1ModifiersMapTypes + 0},
    { "keysym", "uuuuu", _CZwpInputMethodContextV1KeysymTypes + 0},
    { "grab_keyboard", "n", _CZwpInputMethodContextV1GrabKeyboardTypes + 0},
    { "key", "uuuu", _CZwpInputMethodContextV1KeyTypes + 0},
    { "modifiers", "uuuuu", _CZwpInputMethodContextV1ModifiersTypes + 0},
    { "language", "us", _CZwpInputMethodContextV1LanguageTypes + 0},
    { "text_direction", "uu", _CZwpInputMethodContextV1TextDirectionTypes + 0},
};

static const wl_message _CZwpInputMethodContextV1Events[] = {
    { "surrounding_text", "suu", _CZwpInputMethodContextV1SurroundingTextTypes + 0},
    { "reset", "", dummyTypes + 0},
    { "content_type", "uu", _CZwpInputMethodContextV1ContentTypeTypes + 0},
    { "invoke_action", "uu", _CZwpInputMethodContextV1InvokeActionTypes + 0},
    { "commit_state", "u", _CZwpInputMethodContextV1CommitStateTypes + 0},
    { "preferred_language", "s", _CZwpInputMethodContextV1PreferredLanguageTypes + 0},
};

const wl_interface zwp_input_method_context_v1_interface = {
    "zwp_input_method_context_v1", 1,
    14, _CZwpInputMethodContextV1Requests,
    6, _CZwpInputMethodContextV1Events,
};

CCZwpInputMethodContextV1::CCZwpInputMethodContextV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpInputMethodContextV1VTable, this);
}

CCZwpInputMethodContextV1::~CCZwpInputMethodContextV1() {
    if (!destroyed)
        sendDestroy();
}

void CCZwpInputMethodContextV1::setSurroundingText(F<void(CCZwpInputMethodContextV1*, const char*, uint32_t, uint32_t)> handler) {
    requests.surroundingText = handler;
}

void CCZwpInputMethodContextV1::setReset(F<void(CCZwpInputMethodContextV1*)> handler) {
    requests.reset = handler;
}

void CCZwpInputMethodContextV1::setContentType(F<void(CCZwpInputMethodContextV1*, uint32_t, uint32_t)> handler) {
    requests.contentType = handler;
}

void CCZwpInputMethodContextV1::setInvokeAction(F<void(CCZwpInputMethodContextV1*, uint32_t, uint32_t)> handler) {
    requests.invokeAction = handler;
}

void CCZwpInputMethodContextV1::setCommitState(F<void(CCZwpInputMethodContextV1*, uint32_t)> handler) {
    requests.commitState = handler;
}

void CCZwpInputMethodContextV1::setPreferredLanguage(F<void(CCZwpInputMethodContextV1*, const char*)> handler) {
    requests.preferredLanguage = handler;
}

static void _CZwpInputMethodV1Activate(void* data, void* resource, wl_proxy* id) {
    const auto PO = (CCZwpInputMethodV1*)data;
    if (PO && PO->requests.activate)
        PO->requests.activate(PO, id);
}

static void _CZwpInputMethodV1Deactivate(void* data, void* resource, wl_proxy* context) {
    const auto PO = (CCZwpInputMethodV1*)data;
    if (PO && PO->requests.deactivate)
        PO->requests.deactivate(PO, context);
}

static const void* _CCZwpInputMethodV1VTable[] = {
    (void*)_CZwpInputMethodV1Activate,
    (void*)_CZwpInputMethodV1Deactivate,
};
static const wl_interface* _CZwpInputMethodV1ActivateTypes[] = {
    &zwp_input_method_context_v1_interface,
};
static const wl_interface* _CZwpInputMethodV1DeactivateTypes[] = {
    &zwp_input_method_context_v1_interface,
};

static const wl_message _CZwpInputMethodV1Events[] = {
    { "activate", "n", _CZwpInputMethodV1ActivateTypes + 0},
    { "deactivate", "o", _CZwpInputMethodV1DeactivateTypes + 0},
};

const wl_interface zwp_input_method_v1_interface = {
    "zwp_input_method_v1", 1,
    0, nullptr,
    2, _CZwpInputMethodV1Events,
};

CCZwpInputMethodV1::CCZwpInputMethodV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpInputMethodV1VTable, this);
}

CCZwpInputMethodV1::~CCZwpInputMethodV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCZwpInputMethodV1::setActivate(F<void(CCZwpInputMethodV1*, wl_proxy*)> handler) {
    requests.activate = handler;
}

void CCZwpInputMethodV1::setDeactivate(F<void(CCZwpInputMethodV1*, wl_proxy*)> handler) {
    requests.deactivate = handler;
}

static const void* _CCZwpInputPanelV1VTable[] = {
};

wl_proxy* CCZwpInputPanelV1::sendGetInputPanelSurface(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &zwp_input_panel_surface_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}
static const wl_interface* _CZwpInputPanelV1GetInputPanelSurfaceTypes[] = {
    &zwp_input_panel_surface_v1_interface,
    &wl_surface_interface,
};

static const wl_message _CZwpInputPanelV1Requests[] = {
    { "get_input_panel_surface", "no", _CZwpInputPanelV1GetInputPanelSurfaceTypes + 0},
};

const wl_interface zwp_input_panel_v1_interface = {
    "zwp_input_panel_v1", 1,
    1, _CZwpInputPanelV1Requests,
    0, nullptr,
};

CCZwpInputPanelV1::CCZwpInputPanelV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpInputPanelV1VTable, this);
}

CCZwpInputPanelV1::~CCZwpInputPanelV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

static const void* _CCZwpInputPanelSurfaceV1VTable[] = {
};

void CCZwpInputPanelSurfaceV1::sendSetToplevel(wl_proxy* output, uint32_t position) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, output, position);
    proxy;
}

void CCZwpInputPanelSurfaceV1::sendSetOverlayPanel() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
static const wl_interface* _CZwpInputPanelSurfaceV1SetToplevelTypes[] = {
    &wl_output_interface,
    nullptr,
};

static const wl_message _CZwpInputPanelSurfaceV1Requests[] = {
    { "set_toplevel", "ou", _CZwpInputPanelSurfaceV1SetToplevelTypes + 0},
    { "set_overlay_panel", "", dummyTypes + 0},
};

const wl_interface zwp_input_panel_surface_v1_interface = {
    "zwp_input_panel_surface_v1", 1,
    2, _CZwpInputPanelSurfaceV1Requests,
    0, nullptr,
};

CCZwpInputPanelSurfaceV1::CCZwpInputPanelSurfaceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCZwpInputPanelSurfaceV1VTable, this);
}

CCZwpInputPanelSurfaceV1::~CCZwpInputPanelSurfaceV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

#undef F
