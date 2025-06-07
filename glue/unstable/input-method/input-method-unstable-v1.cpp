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

static void _CZwpInputMethodContextV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CZwpInputMethodContextV1CommitString(wl_client* client, wl_resource* resource, uint32_t serial, const char* text) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.commitString)
        PO->requests.commitString(PO, serial, text);
}

static void _CZwpInputMethodContextV1PreeditString(wl_client* client, wl_resource* resource, uint32_t serial, const char* text, const char* commit) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.preeditString)
        PO->requests.preeditString(PO, serial, text, commit);
}

static void _CZwpInputMethodContextV1PreeditStyling(wl_client* client, wl_resource* resource, uint32_t index, uint32_t length, uint32_t style) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.preeditStyling)
        PO->requests.preeditStyling(PO, index, length, style);
}

static void _CZwpInputMethodContextV1PreeditCursor(wl_client* client, wl_resource* resource, int32_t index) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.preeditCursor)
        PO->requests.preeditCursor(PO, index);
}

static void _CZwpInputMethodContextV1DeleteSurroundingText(wl_client* client, wl_resource* resource, int32_t index, uint32_t length) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.deleteSurroundingText)
        PO->requests.deleteSurroundingText(PO, index, length);
}

static void _CZwpInputMethodContextV1CursorPosition(wl_client* client, wl_resource* resource, int32_t index, int32_t anchor) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.cursorPosition)
        PO->requests.cursorPosition(PO, index, anchor);
}

static void _CZwpInputMethodContextV1ModifiersMap(wl_client* client, wl_resource* resource, wl_array* map) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.modifiersMap)
        PO->requests.modifiersMap(PO, map);
}

static void _CZwpInputMethodContextV1Keysym(wl_client* client, wl_resource* resource, uint32_t serial, uint32_t time, uint32_t sym, uint32_t state, uint32_t modifiers) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.keysym)
        PO->requests.keysym(PO, serial, time, sym, state, modifiers);
}

static void _CZwpInputMethodContextV1GrabKeyboard(wl_client* client, wl_resource* resource, uint32_t keyboard) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.grabKeyboard)
        PO->requests.grabKeyboard(PO, keyboard);
}

static void _CZwpInputMethodContextV1Key(wl_client* client, wl_resource* resource, uint32_t serial, uint32_t time, uint32_t key, uint32_t state) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.key)
        PO->requests.key(PO, serial, time, key, state);
}

static void _CZwpInputMethodContextV1Modifiers(wl_client* client, wl_resource* resource, uint32_t serial, uint32_t mods_depressed, uint32_t mods_latched, uint32_t mods_locked, uint32_t group) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.modifiers)
        PO->requests.modifiers(PO, serial, mods_depressed, mods_latched, mods_locked, group);
}

static void _CZwpInputMethodContextV1Language(wl_client* client, wl_resource* resource, uint32_t serial, const char* language) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.language)
        PO->requests.language(PO, serial, language);
}

static void _CZwpInputMethodContextV1TextDirection(wl_client* client, wl_resource* resource, uint32_t serial, uint32_t direction) {
    const auto PO = (CZwpInputMethodContextV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.textDirection)
        PO->requests.textDirection(PO, serial, direction);
}

static void _CZwpInputMethodContextV1__DestroyListener(wl_listener* l, void* d) {
    CZwpInputMethodContextV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpInputMethodContextV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpInputMethodContextV1VTable[] = {
    (void*)_CZwpInputMethodContextV1Destroy,
    (void*)_CZwpInputMethodContextV1CommitString,
    (void*)_CZwpInputMethodContextV1PreeditString,
    (void*)_CZwpInputMethodContextV1PreeditStyling,
    (void*)_CZwpInputMethodContextV1PreeditCursor,
    (void*)_CZwpInputMethodContextV1DeleteSurroundingText,
    (void*)_CZwpInputMethodContextV1CursorPosition,
    (void*)_CZwpInputMethodContextV1ModifiersMap,
    (void*)_CZwpInputMethodContextV1Keysym,
    (void*)_CZwpInputMethodContextV1GrabKeyboard,
    (void*)_CZwpInputMethodContextV1Key,
    (void*)_CZwpInputMethodContextV1Modifiers,
    (void*)_CZwpInputMethodContextV1Language,
    (void*)_CZwpInputMethodContextV1TextDirection,
};

void CZwpInputMethodContextV1::sendSurroundingText(const char* text, uint32_t cursor, uint32_t anchor) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, text, cursor, anchor);
}

void CZwpInputMethodContextV1::sendReset() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZwpInputMethodContextV1::sendContentType(uint32_t hint, uint32_t purpose) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, hint, purpose);
}

void CZwpInputMethodContextV1::sendInvokeAction(uint32_t button, uint32_t index) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, button, index);
}

void CZwpInputMethodContextV1::sendCommitState(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4, serial);
}

void CZwpInputMethodContextV1::sendPreferredLanguage(const char* language) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5, language);
}

void CZwpInputMethodContextV1::sendSurroundingTextRaw(const char* text, uint32_t cursor, uint32_t anchor) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, text, cursor, anchor);
}

void CZwpInputMethodContextV1::sendResetRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1);
}

void CZwpInputMethodContextV1::sendContentTypeRaw(uint32_t hint, uint32_t purpose) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, hint, purpose);
}

void CZwpInputMethodContextV1::sendInvokeActionRaw(uint32_t button, uint32_t index) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, button, index);
}

void CZwpInputMethodContextV1::sendCommitStateRaw(uint32_t serial) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4, serial);
}

void CZwpInputMethodContextV1::sendPreferredLanguageRaw(const char* language) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5, language);
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

CZwpInputMethodContextV1::CZwpInputMethodContextV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_input_method_context_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpInputMethodContextV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpInputMethodContextV1VTable, this, nullptr);
}

CZwpInputMethodContextV1::~CZwpInputMethodContextV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpInputMethodContextV1::onDestroyCalled() {
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

void CZwpInputMethodContextV1::setDestroy(F<void(CZwpInputMethodContextV1*)> handler) {
    requests.destroy = handler;
}

void CZwpInputMethodContextV1::setCommitString(F<void(CZwpInputMethodContextV1*, uint32_t, const char*)> handler) {
    requests.commitString = handler;
}

void CZwpInputMethodContextV1::setPreeditString(F<void(CZwpInputMethodContextV1*, uint32_t, const char*, const char*)> handler) {
    requests.preeditString = handler;
}

void CZwpInputMethodContextV1::setPreeditStyling(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t)> handler) {
    requests.preeditStyling = handler;
}

void CZwpInputMethodContextV1::setPreeditCursor(F<void(CZwpInputMethodContextV1*, int32_t)> handler) {
    requests.preeditCursor = handler;
}

void CZwpInputMethodContextV1::setDeleteSurroundingText(F<void(CZwpInputMethodContextV1*, int32_t, uint32_t)> handler) {
    requests.deleteSurroundingText = handler;
}

void CZwpInputMethodContextV1::setCursorPosition(F<void(CZwpInputMethodContextV1*, int32_t, int32_t)> handler) {
    requests.cursorPosition = handler;
}

void CZwpInputMethodContextV1::setModifiersMap(F<void(CZwpInputMethodContextV1*, wl_array*)> handler) {
    requests.modifiersMap = handler;
}

void CZwpInputMethodContextV1::setKeysym(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> handler) {
    requests.keysym = handler;
}

void CZwpInputMethodContextV1::setGrabKeyboard(F<void(CZwpInputMethodContextV1*, uint32_t)> handler) {
    requests.grabKeyboard = handler;
}

void CZwpInputMethodContextV1::setKey(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t)> handler) {
    requests.key = handler;
}

void CZwpInputMethodContextV1::setModifiers(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> handler) {
    requests.modifiers = handler;
}

void CZwpInputMethodContextV1::setLanguage(F<void(CZwpInputMethodContextV1*, uint32_t, const char*)> handler) {
    requests.language = handler;
}

void CZwpInputMethodContextV1::setTextDirection(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t)> handler) {
    requests.textDirection = handler;
}

static void _CZwpInputMethodV1__DestroyListener(wl_listener* l, void* d) {
    CZwpInputMethodV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpInputMethodV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpInputMethodV1VTable[] = {
};

void CZwpInputMethodV1::sendActivate(CZwpInputMethodContextV1* id) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, id ? id->pResource : nullptr);
}

void CZwpInputMethodV1::sendDeactivate(CZwpInputMethodContextV1* context) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, context ? context->pResource : nullptr);
}

void CZwpInputMethodV1::sendActivateRaw(CZwpInputMethodContextV1* id) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, id);
}

void CZwpInputMethodV1::sendDeactivateRaw(wl_resource* context) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, context);
}
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

CZwpInputMethodV1::CZwpInputMethodV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_input_method_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpInputMethodV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpInputMethodV1VTable, this, nullptr);
}

CZwpInputMethodV1::~CZwpInputMethodV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpInputMethodV1::onDestroyCalled() {
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

static void _CZwpInputPanelV1GetInputPanelSurface(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CZwpInputPanelV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getInputPanelSurface)
        PO->requests.getInputPanelSurface(PO, id, surface);
}

static void _CZwpInputPanelV1__DestroyListener(wl_listener* l, void* d) {
    CZwpInputPanelV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpInputPanelV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpInputPanelV1VTable[] = {
    (void*)_CZwpInputPanelV1GetInputPanelSurface,
};
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

CZwpInputPanelV1::CZwpInputPanelV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_input_panel_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpInputPanelV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpInputPanelV1VTable, this, nullptr);
}

CZwpInputPanelV1::~CZwpInputPanelV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpInputPanelV1::onDestroyCalled() {
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

void CZwpInputPanelV1::setGetInputPanelSurface(F<void(CZwpInputPanelV1*, uint32_t, wl_resource*)> handler) {
    requests.getInputPanelSurface = handler;
}

static void _CZwpInputPanelSurfaceV1SetToplevel(wl_client* client, wl_resource* resource, wl_resource* output, uint32_t position) {
    const auto PO = (CZwpInputPanelSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setToplevel)
        PO->requests.setToplevel(PO, output, position);
}

static void _CZwpInputPanelSurfaceV1SetOverlayPanel(wl_client* client, wl_resource* resource) {
    const auto PO = (CZwpInputPanelSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setOverlayPanel)
        PO->requests.setOverlayPanel(PO);
}

static void _CZwpInputPanelSurfaceV1__DestroyListener(wl_listener* l, void* d) {
    CZwpInputPanelSurfaceV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CZwpInputPanelSurfaceV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CZwpInputPanelSurfaceV1VTable[] = {
    (void*)_CZwpInputPanelSurfaceV1SetToplevel,
    (void*)_CZwpInputPanelSurfaceV1SetOverlayPanel,
};
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

CZwpInputPanelSurfaceV1::CZwpInputPanelSurfaceV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &zwp_input_panel_surface_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CZwpInputPanelSurfaceV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CZwpInputPanelSurfaceV1VTable, this, nullptr);
}

CZwpInputPanelSurfaceV1::~CZwpInputPanelSurfaceV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CZwpInputPanelSurfaceV1::onDestroyCalled() {
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

void CZwpInputPanelSurfaceV1::setSetToplevel(F<void(CZwpInputPanelSurfaceV1*, wl_resource*, uint32_t)> handler) {
    requests.setToplevel = handler;
}

void CZwpInputPanelSurfaceV1::setSetOverlayPanel(F<void(CZwpInputPanelSurfaceV1*)> handler) {
    requests.setOverlayPanel = handler;
}

#undef F
