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

static void _CZwpTextInputV1Activate(wl_client* client, wl_resource* resource, wl_resource* seat, wl_resource* surface) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.activate)
        PO->requests.activate(PO, seat, surface);
}

static void _CZwpTextInputV1Deactivate(wl_client* client, wl_resource* resource, wl_resource* seat) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.deactivate)
        PO->requests.deactivate(PO, seat);
}

static void _CZwpTextInputV1ShowInputPanel(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.showInputPanel)
        PO->requests.showInputPanel(PO);
}

static void _CZwpTextInputV1HideInputPanel(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.hideInputPanel)
        PO->requests.hideInputPanel(PO);
}

static void _CZwpTextInputV1Reset(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.reset)
        PO->requests.reset(PO);
}

static void _CZwpTextInputV1SetSurroundingText(wl_client* client, wl_resource* resource, const char* text, uint32_t cursor, uint32_t anchor) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setSurroundingText)
        PO->requests.setSurroundingText(PO, text, cursor, anchor);
}

static void _CZwpTextInputV1SetContentType(wl_client* client, wl_resource* resource, zwpTextInputV1ContentHint hint, zwpTextInputV1ContentPurpose purpose) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setContentType)
        PO->requests.setContentType(PO, hint, purpose);
}

static void _CZwpTextInputV1SetCursorRectangle(wl_client* client, wl_resource* resource, int32_t x, int32_t y, int32_t width, int32_t height) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setCursorRectangle)
        PO->requests.setCursorRectangle(PO, x, y, width, height);
}

static void _CZwpTextInputV1SetPreferredLanguage(wl_client* client, wl_resource* resource, const char* language) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setPreferredLanguage)
        PO->requests.setPreferredLanguage(PO, language);
}

static void _CZwpTextInputV1CommitState(wl_client* client, wl_resource* resource, uint32_t serial) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.commitState)
        PO->requests.commitState(PO, serial);
}

static void _CZwpTextInputV1InvokeAction(wl_client* client, wl_resource* resource, uint32_t button, uint32_t index) {
    const auto PO = (CZwpTextInputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.invokeAction)
        PO->requests.invokeAction(PO, button, index);
}

static void _CZwpTextInputV1__DestroyListener(wl_listener* l, void* d) {
    CZwpTextInputV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpTextInputV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpTextInputV1VTable[] = {
    (void*)_CZwpTextInputV1Activate,
    (void*)_CZwpTextInputV1Deactivate,
    (void*)_CZwpTextInputV1ShowInputPanel,
    (void*)_CZwpTextInputV1HideInputPanel,
    (void*)_CZwpTextInputV1Reset,
    (void*)_CZwpTextInputV1SetSurroundingText,
    (void*)_CZwpTextInputV1SetContentType,
    (void*)_CZwpTextInputV1SetCursorRectangle,
    (void*)_CZwpTextInputV1SetPreferredLanguage,
    (void*)_CZwpTextInputV1CommitState,
    (void*)_CZwpTextInputV1InvokeAction,
};

void CZwpTextInputV1::sendEnter(wl_resource* surface) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, surface);
}

void CZwpTextInputV1::sendLeave() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZwpTextInputV1::sendModifiersMap(wl_array* map) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, map);
}

void CZwpTextInputV1::sendInputPanelState(uint32_t state) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, state);
}

void CZwpTextInputV1::sendPreeditString(uint32_t serial, const char* text, const char* commit) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4, serial, text, commit);
}

void CZwpTextInputV1::sendPreeditStyling(uint32_t index, uint32_t length, zwpTextInputV1PreeditStyle style) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5, index, length, style);
}

void CZwpTextInputV1::sendPreeditCursor(int32_t index) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 6, index);
}

void CZwpTextInputV1::sendCommitString(uint32_t serial, const char* text) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 7, serial, text);
}

void CZwpTextInputV1::sendCursorPosition(int32_t index, int32_t anchor) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 8, index, anchor);
}

void CZwpTextInputV1::sendDeleteSurroundingText(int32_t index, uint32_t length) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 9, index, length);
}

void CZwpTextInputV1::sendKeysym(uint32_t serial, uint32_t time, uint32_t sym, uint32_t state, uint32_t modifiers) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 10, serial, time, sym, state, modifiers);
}

void CZwpTextInputV1::sendLanguage(uint32_t serial, const char* language) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 11, serial, language);
}

void CZwpTextInputV1::sendTextDirection(uint32_t serial, zwpTextInputV1TextDirection direction) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 12, serial, direction);
}

void CZwpTextInputV1::sendEnterRaw(wl_resource* surface) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, surface);
}

void CZwpTextInputV1::sendLeaveRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZwpTextInputV1::sendModifiersMapRaw(wl_array* map) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, map);
}

void CZwpTextInputV1::sendInputPanelStateRaw(uint32_t state) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, state);
}

void CZwpTextInputV1::sendPreeditStringRaw(uint32_t serial, const char* text, const char* commit) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4, serial, text, commit);
}

void CZwpTextInputV1::sendPreeditStylingRaw(uint32_t index, uint32_t length, zwpTextInputV1PreeditStyle style) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5, index, length, style);
}

void CZwpTextInputV1::sendPreeditCursorRaw(int32_t index) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 6, index);
}

void CZwpTextInputV1::sendCommitStringRaw(uint32_t serial, const char* text) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 7, serial, text);
}

void CZwpTextInputV1::sendCursorPositionRaw(int32_t index, int32_t anchor) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 8, index, anchor);
}

void CZwpTextInputV1::sendDeleteSurroundingTextRaw(int32_t index, uint32_t length) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 9, index, length);
}

void CZwpTextInputV1::sendKeysymRaw(uint32_t serial, uint32_t time, uint32_t sym, uint32_t state, uint32_t modifiers) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 10, serial, time, sym, state, modifiers);
}

void CZwpTextInputV1::sendLanguageRaw(uint32_t serial, const char* language) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 11, serial, language);
}

void CZwpTextInputV1::sendTextDirectionRaw(uint32_t serial, zwpTextInputV1TextDirection direction) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 12, serial, direction);
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

CZwpTextInputV1::CZwpTextInputV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_text_input_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpTextInputV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpTextInputV1VTable, this, nullptr);
}

CZwpTextInputV1::~CZwpTextInputV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpTextInputV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CZwpTextInputV1::setActivate(F<void(CZwpTextInputV1*, wl_resource*, wl_resource*)> handler) {
    requests.activate = handler;
}

void CZwpTextInputV1::setDeactivate(F<void(CZwpTextInputV1*, wl_resource*)> handler) {
    requests.deactivate = handler;
}

void CZwpTextInputV1::setShowInputPanel(F<void(CZwpTextInputV1*)> handler) {
    requests.showInputPanel = handler;
}

void CZwpTextInputV1::setHideInputPanel(F<void(CZwpTextInputV1*)> handler) {
    requests.hideInputPanel = handler;
}

void CZwpTextInputV1::setReset(F<void(CZwpTextInputV1*)> handler) {
    requests.reset = handler;
}

void CZwpTextInputV1::setSetSurroundingText(F<void(CZwpTextInputV1*, const char*, uint32_t, uint32_t)> handler) {
    requests.setSurroundingText = handler;
}

void CZwpTextInputV1::setSetContentType(F<void(CZwpTextInputV1*, zwpTextInputV1ContentHint, zwpTextInputV1ContentPurpose)> handler) {
    requests.setContentType = handler;
}

void CZwpTextInputV1::setSetCursorRectangle(F<void(CZwpTextInputV1*, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.setCursorRectangle = handler;
}

void CZwpTextInputV1::setSetPreferredLanguage(F<void(CZwpTextInputV1*, const char*)> handler) {
    requests.setPreferredLanguage = handler;
}

void CZwpTextInputV1::setCommitState(F<void(CZwpTextInputV1*, uint32_t)> handler) {
    requests.commitState = handler;
}

void CZwpTextInputV1::setInvokeAction(F<void(CZwpTextInputV1*, uint32_t, uint32_t)> handler) {
    requests.invokeAction = handler;
}

static void _CZwpTextInputManagerV1CreateTextInput(wl_client* client, wl_resource* resource, uint32_t id) {
    const auto PO = (CZwpTextInputManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.createTextInput)
        PO->requests.createTextInput(PO, id);
}

static void _CZwpTextInputManagerV1__DestroyListener(wl_listener* l, void* d) {
    CZwpTextInputManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpTextInputManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpTextInputManagerV1VTable[] = {
    (void*)_CZwpTextInputManagerV1CreateTextInput,
};
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

CZwpTextInputManagerV1::CZwpTextInputManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_text_input_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpTextInputManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpTextInputManagerV1VTable, this, nullptr);
}

CZwpTextInputManagerV1::~CZwpTextInputManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpTextInputManagerV1::onDestroyCalled() {
    wl_resource_set_user_data(pResource, nullptr);
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // set the resource to nullptr,
    // as it will be freed. If the consumer does not destroy this resource
    // in onDestroy here, we'd be doing a UAF in the ~dtor
    pResource = nullptr;

    if (onDestroy)
        onDestroy(this);
}

void CZwpTextInputManagerV1::setCreateTextInput(F<void(CZwpTextInputManagerV1*, uint32_t)> handler) {
    requests.createTextInput = handler;
}

#undef F
