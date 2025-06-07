// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// color_management_v1

/*
 This protocol's authors' copyright notice is:


    Copyright 2019 Sebastian Wick
    Copyright 2019 Erwin Burema
    Copyright 2020 AMD
    Copyright 2020-2024 Collabora, Ltd.
    Copyright 2024 Xaver Hugl
    Copyright 2022-2025 Red Hat, Inc.

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
#include "color-management-v1.hpp"
#undef private
#define F std::function

static const wl_interface* dummyTypes[] = { nullptr };

// Reference all other interfaces.
// The reason why this is in snake is to
// be able to cooperate with existing
// wayland_scanner interfaces (they are interop)
extern const wl_interface wp_color_manager_v1_interface;
extern const wl_interface wp_color_management_output_v1_interface;
extern const wl_interface wp_color_management_surface_v1_interface;
extern const wl_interface wp_color_management_surface_feedback_v1_interface;
extern const wl_interface wp_image_description_creator_icc_v1_interface;
extern const wl_interface wp_image_description_creator_params_v1_interface;
extern const wl_interface wp_image_description_v1_interface;
extern const wl_interface wp_image_description_info_v1_interface;
extern const wl_interface wl_output_interface;
extern const wl_interface wl_surface_interface;

static void _CWpColorManagerV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpColorManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CWpColorManagerV1GetOutput(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* output) {
    const auto PO = (CWpColorManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getOutput)
        PO->requests.getOutput(PO, id, output);
}

static void _CWpColorManagerV1GetSurface(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CWpColorManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getSurface)
        PO->requests.getSurface(PO, id, surface);
}

static void _CWpColorManagerV1GetSurfaceFeedback(wl_client* client, wl_resource* resource, uint32_t id, wl_resource* surface) {
    const auto PO = (CWpColorManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getSurfaceFeedback)
        PO->requests.getSurfaceFeedback(PO, id, surface);
}

static void _CWpColorManagerV1CreateIccCreator(wl_client* client, wl_resource* resource, uint32_t obj) {
    const auto PO = (CWpColorManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.createIccCreator)
        PO->requests.createIccCreator(PO, obj);
}

static void _CWpColorManagerV1CreateParametricCreator(wl_client* client, wl_resource* resource, uint32_t obj) {
    const auto PO = (CWpColorManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.createParametricCreator)
        PO->requests.createParametricCreator(PO, obj);
}

static void _CWpColorManagerV1CreateWindowsScrgb(wl_client* client, wl_resource* resource, uint32_t image_description) {
    const auto PO = (CWpColorManagerV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.createWindowsScrgb)
        PO->requests.createWindowsScrgb(PO, image_description);
}

static void _CWpColorManagerV1__DestroyListener(wl_listener* l, void* d) {
    CWpColorManagerV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpColorManagerV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpColorManagerV1VTable[] = {
    (void*)_CWpColorManagerV1Destroy,
    (void*)_CWpColorManagerV1GetOutput,
    (void*)_CWpColorManagerV1GetSurface,
    (void*)_CWpColorManagerV1GetSurfaceFeedback,
    (void*)_CWpColorManagerV1CreateIccCreator,
    (void*)_CWpColorManagerV1CreateParametricCreator,
    (void*)_CWpColorManagerV1CreateWindowsScrgb,
};

void CWpColorManagerV1::sendSupportedIntent(wpColorManagerV1RenderIntent render_intent) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, render_intent);
}

void CWpColorManagerV1::sendSupportedFeature(wpColorManagerV1Feature feature) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, feature);
}

void CWpColorManagerV1::sendSupportedTfNamed(wpColorManagerV1TransferFunction tf) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, tf);
}

void CWpColorManagerV1::sendSupportedPrimariesNamed(wpColorManagerV1Primaries primaries) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, primaries);
}

void CWpColorManagerV1::sendDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4);
}

void CWpColorManagerV1::sendSupportedIntentRaw(wpColorManagerV1RenderIntent render_intent) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, render_intent);
}

void CWpColorManagerV1::sendSupportedFeatureRaw(wpColorManagerV1Feature feature) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, feature);
}

void CWpColorManagerV1::sendSupportedTfNamedRaw(wpColorManagerV1TransferFunction tf) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, tf);
}

void CWpColorManagerV1::sendSupportedPrimariesNamedRaw(wpColorManagerV1Primaries primaries) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, primaries);
}

void CWpColorManagerV1::sendDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4);
}
static const wl_interface* _CWpColorManagerV1GetOutputTypes[] = {
    &wp_color_management_output_v1_interface,
    &wl_output_interface,
};
static const wl_interface* _CWpColorManagerV1GetSurfaceTypes[] = {
    &wp_color_management_surface_v1_interface,
    &wl_surface_interface,
};
static const wl_interface* _CWpColorManagerV1GetSurfaceFeedbackTypes[] = {
    &wp_color_management_surface_feedback_v1_interface,
    &wl_surface_interface,
};
static const wl_interface* _CWpColorManagerV1CreateIccCreatorTypes[] = {
    &wp_image_description_creator_icc_v1_interface,
};
static const wl_interface* _CWpColorManagerV1CreateParametricCreatorTypes[] = {
    &wp_image_description_creator_params_v1_interface,
};
static const wl_interface* _CWpColorManagerV1CreateWindowsScrgbTypes[] = {
    &wp_image_description_v1_interface,
};
static const wl_interface* _CWpColorManagerV1SupportedIntentTypes[] = {
    nullptr,
};
static const wl_interface* _CWpColorManagerV1SupportedFeatureTypes[] = {
    nullptr,
};
static const wl_interface* _CWpColorManagerV1SupportedTfNamedTypes[] = {
    nullptr,
};
static const wl_interface* _CWpColorManagerV1SupportedPrimariesNamedTypes[] = {
    nullptr,
};

static const wl_message _CWpColorManagerV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_output", "no", _CWpColorManagerV1GetOutputTypes + 0},
    { "get_surface", "no", _CWpColorManagerV1GetSurfaceTypes + 0},
    { "get_surface_feedback", "no", _CWpColorManagerV1GetSurfaceFeedbackTypes + 0},
    { "create_icc_creator", "n", _CWpColorManagerV1CreateIccCreatorTypes + 0},
    { "create_parametric_creator", "n", _CWpColorManagerV1CreateParametricCreatorTypes + 0},
    { "create_windows_scrgb", "n", _CWpColorManagerV1CreateWindowsScrgbTypes + 0},
};

static const wl_message _CWpColorManagerV1Events[] = {
    { "supported_intent", "u", _CWpColorManagerV1SupportedIntentTypes + 0},
    { "supported_feature", "u", _CWpColorManagerV1SupportedFeatureTypes + 0},
    { "supported_tf_named", "u", _CWpColorManagerV1SupportedTfNamedTypes + 0},
    { "supported_primaries_named", "u", _CWpColorManagerV1SupportedPrimariesNamedTypes + 0},
    { "done", "", dummyTypes + 0},
};

const wl_interface wp_color_manager_v1_interface = {
    "wp_color_manager_v1", 1,
    7, _CWpColorManagerV1Requests,
    5, _CWpColorManagerV1Events,
};

CWpColorManagerV1::CWpColorManagerV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_color_manager_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpColorManagerV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpColorManagerV1VTable, this, nullptr);
}

CWpColorManagerV1::~CWpColorManagerV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpColorManagerV1::onDestroyCalled() {
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

void CWpColorManagerV1::setDestroy(F<void(CWpColorManagerV1*)> handler) {
    requests.destroy = handler;
}

void CWpColorManagerV1::setGetOutput(F<void(CWpColorManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getOutput = handler;
}

void CWpColorManagerV1::setGetSurface(F<void(CWpColorManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getSurface = handler;
}

void CWpColorManagerV1::setGetSurfaceFeedback(F<void(CWpColorManagerV1*, uint32_t, wl_resource*)> handler) {
    requests.getSurfaceFeedback = handler;
}

void CWpColorManagerV1::setCreateIccCreator(F<void(CWpColorManagerV1*, uint32_t)> handler) {
    requests.createIccCreator = handler;
}

void CWpColorManagerV1::setCreateParametricCreator(F<void(CWpColorManagerV1*, uint32_t)> handler) {
    requests.createParametricCreator = handler;
}

void CWpColorManagerV1::setCreateWindowsScrgb(F<void(CWpColorManagerV1*, uint32_t)> handler) {
    requests.createWindowsScrgb = handler;
}

static void _CWpColorManagementOutputV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpColorManagementOutputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CWpColorManagementOutputV1GetImageDescription(wl_client* client, wl_resource* resource, uint32_t image_description) {
    const auto PO = (CWpColorManagementOutputV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getImageDescription)
        PO->requests.getImageDescription(PO, image_description);
}

static void _CWpColorManagementOutputV1__DestroyListener(wl_listener* l, void* d) {
    CWpColorManagementOutputV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpColorManagementOutputV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpColorManagementOutputV1VTable[] = {
    (void*)_CWpColorManagementOutputV1Destroy,
    (void*)_CWpColorManagementOutputV1GetImageDescription,
};

void CWpColorManagementOutputV1::sendImageDescriptionChanged() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CWpColorManagementOutputV1::sendImageDescriptionChangedRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}
static const wl_interface* _CWpColorManagementOutputV1GetImageDescriptionTypes[] = {
    &wp_image_description_v1_interface,
};

static const wl_message _CWpColorManagementOutputV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_image_description", "n", _CWpColorManagementOutputV1GetImageDescriptionTypes + 0},
};

static const wl_message _CWpColorManagementOutputV1Events[] = {
    { "image_description_changed", "", dummyTypes + 0},
};

const wl_interface wp_color_management_output_v1_interface = {
    "wp_color_management_output_v1", 1,
    2, _CWpColorManagementOutputV1Requests,
    1, _CWpColorManagementOutputV1Events,
};

CWpColorManagementOutputV1::CWpColorManagementOutputV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_color_management_output_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpColorManagementOutputV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpColorManagementOutputV1VTable, this, nullptr);
}

CWpColorManagementOutputV1::~CWpColorManagementOutputV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpColorManagementOutputV1::onDestroyCalled() {
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

void CWpColorManagementOutputV1::setDestroy(F<void(CWpColorManagementOutputV1*)> handler) {
    requests.destroy = handler;
}

void CWpColorManagementOutputV1::setGetImageDescription(F<void(CWpColorManagementOutputV1*, uint32_t)> handler) {
    requests.getImageDescription = handler;
}

static void _CWpColorManagementSurfaceV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpColorManagementSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CWpColorManagementSurfaceV1SetImageDescription(wl_client* client, wl_resource* resource, wl_resource* image_description, uint32_t render_intent) {
    const auto PO = (CWpColorManagementSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setImageDescription)
        PO->requests.setImageDescription(PO, image_description, render_intent);
}

static void _CWpColorManagementSurfaceV1UnsetImageDescription(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpColorManagementSurfaceV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.unsetImageDescription)
        PO->requests.unsetImageDescription(PO);
}

static void _CWpColorManagementSurfaceV1__DestroyListener(wl_listener* l, void* d) {
    CWpColorManagementSurfaceV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpColorManagementSurfaceV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpColorManagementSurfaceV1VTable[] = {
    (void*)_CWpColorManagementSurfaceV1Destroy,
    (void*)_CWpColorManagementSurfaceV1SetImageDescription,
    (void*)_CWpColorManagementSurfaceV1UnsetImageDescription,
};
static const wl_interface* _CWpColorManagementSurfaceV1SetImageDescriptionTypes[] = {
    &wp_image_description_v1_interface,
    nullptr,
};

static const wl_message _CWpColorManagementSurfaceV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "set_image_description", "ou", _CWpColorManagementSurfaceV1SetImageDescriptionTypes + 0},
    { "unset_image_description", "", dummyTypes + 0},
};

const wl_interface wp_color_management_surface_v1_interface = {
    "wp_color_management_surface_v1", 1,
    3, _CWpColorManagementSurfaceV1Requests,
    0, nullptr,
};

CWpColorManagementSurfaceV1::CWpColorManagementSurfaceV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_color_management_surface_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpColorManagementSurfaceV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpColorManagementSurfaceV1VTable, this, nullptr);
}

CWpColorManagementSurfaceV1::~CWpColorManagementSurfaceV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpColorManagementSurfaceV1::onDestroyCalled() {
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

void CWpColorManagementSurfaceV1::setDestroy(F<void(CWpColorManagementSurfaceV1*)> handler) {
    requests.destroy = handler;
}

void CWpColorManagementSurfaceV1::setSetImageDescription(F<void(CWpColorManagementSurfaceV1*, wl_resource*, uint32_t)> handler) {
    requests.setImageDescription = handler;
}

void CWpColorManagementSurfaceV1::setUnsetImageDescription(F<void(CWpColorManagementSurfaceV1*)> handler) {
    requests.unsetImageDescription = handler;
}

static void _CWpColorManagementSurfaceFeedbackV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpColorManagementSurfaceFeedbackV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CWpColorManagementSurfaceFeedbackV1GetPreferred(wl_client* client, wl_resource* resource, uint32_t image_description) {
    const auto PO = (CWpColorManagementSurfaceFeedbackV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getPreferred)
        PO->requests.getPreferred(PO, image_description);
}

static void _CWpColorManagementSurfaceFeedbackV1GetPreferredParametric(wl_client* client, wl_resource* resource, uint32_t image_description) {
    const auto PO = (CWpColorManagementSurfaceFeedbackV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getPreferredParametric)
        PO->requests.getPreferredParametric(PO, image_description);
}

static void _CWpColorManagementSurfaceFeedbackV1__DestroyListener(wl_listener* l, void* d) {
    CWpColorManagementSurfaceFeedbackV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpColorManagementSurfaceFeedbackV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpColorManagementSurfaceFeedbackV1VTable[] = {
    (void*)_CWpColorManagementSurfaceFeedbackV1Destroy,
    (void*)_CWpColorManagementSurfaceFeedbackV1GetPreferred,
    (void*)_CWpColorManagementSurfaceFeedbackV1GetPreferredParametric,
};

void CWpColorManagementSurfaceFeedbackV1::sendPreferredChanged(uint32_t identity) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, identity);
}

void CWpColorManagementSurfaceFeedbackV1::sendPreferredChangedRaw(uint32_t identity) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, identity);
}
static const wl_interface* _CWpColorManagementSurfaceFeedbackV1GetPreferredTypes[] = {
    &wp_image_description_v1_interface,
};
static const wl_interface* _CWpColorManagementSurfaceFeedbackV1GetPreferredParametricTypes[] = {
    &wp_image_description_v1_interface,
};
static const wl_interface* _CWpColorManagementSurfaceFeedbackV1PreferredChangedTypes[] = {
    nullptr,
};

static const wl_message _CWpColorManagementSurfaceFeedbackV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_preferred", "n", _CWpColorManagementSurfaceFeedbackV1GetPreferredTypes + 0},
    { "get_preferred_parametric", "n", _CWpColorManagementSurfaceFeedbackV1GetPreferredParametricTypes + 0},
};

static const wl_message _CWpColorManagementSurfaceFeedbackV1Events[] = {
    { "preferred_changed", "u", _CWpColorManagementSurfaceFeedbackV1PreferredChangedTypes + 0},
};

const wl_interface wp_color_management_surface_feedback_v1_interface = {
    "wp_color_management_surface_feedback_v1", 1,
    3, _CWpColorManagementSurfaceFeedbackV1Requests,
    1, _CWpColorManagementSurfaceFeedbackV1Events,
};

CWpColorManagementSurfaceFeedbackV1::CWpColorManagementSurfaceFeedbackV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_color_management_surface_feedback_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpColorManagementSurfaceFeedbackV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpColorManagementSurfaceFeedbackV1VTable, this, nullptr);
}

CWpColorManagementSurfaceFeedbackV1::~CWpColorManagementSurfaceFeedbackV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpColorManagementSurfaceFeedbackV1::onDestroyCalled() {
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

void CWpColorManagementSurfaceFeedbackV1::setDestroy(F<void(CWpColorManagementSurfaceFeedbackV1*)> handler) {
    requests.destroy = handler;
}

void CWpColorManagementSurfaceFeedbackV1::setGetPreferred(F<void(CWpColorManagementSurfaceFeedbackV1*, uint32_t)> handler) {
    requests.getPreferred = handler;
}

void CWpColorManagementSurfaceFeedbackV1::setGetPreferredParametric(F<void(CWpColorManagementSurfaceFeedbackV1*, uint32_t)> handler) {
    requests.getPreferredParametric = handler;
}

static void _CWpImageDescriptionCreatorIccV1Create(wl_client* client, wl_resource* resource, uint32_t image_description) {
    const auto PO = (CWpImageDescriptionCreatorIccV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.create)
        PO->requests.create(PO, image_description);
}

static void _CWpImageDescriptionCreatorIccV1SetIccFile(wl_client* client, wl_resource* resource, int32_t icc_profile, uint32_t offset, uint32_t length) {
    const auto PO = (CWpImageDescriptionCreatorIccV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setIccFile)
        PO->requests.setIccFile(PO, icc_profile, offset, length);
}

static void _CWpImageDescriptionCreatorIccV1__DestroyListener(wl_listener* l, void* d) {
    CWpImageDescriptionCreatorIccV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpImageDescriptionCreatorIccV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpImageDescriptionCreatorIccV1VTable[] = {
    (void*)_CWpImageDescriptionCreatorIccV1Create,
    (void*)_CWpImageDescriptionCreatorIccV1SetIccFile,
};
static const wl_interface* _CWpImageDescriptionCreatorIccV1CreateTypes[] = {
    &wp_image_description_v1_interface,
};
static const wl_interface* _CWpImageDescriptionCreatorIccV1SetIccFileTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};

static const wl_message _CWpImageDescriptionCreatorIccV1Requests[] = {
    { "create", "n", _CWpImageDescriptionCreatorIccV1CreateTypes + 0},
    { "set_icc_file", "huu", _CWpImageDescriptionCreatorIccV1SetIccFileTypes + 0},
};

const wl_interface wp_image_description_creator_icc_v1_interface = {
    "wp_image_description_creator_icc_v1", 1,
    2, _CWpImageDescriptionCreatorIccV1Requests,
    0, nullptr,
};

CWpImageDescriptionCreatorIccV1::CWpImageDescriptionCreatorIccV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_image_description_creator_icc_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpImageDescriptionCreatorIccV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpImageDescriptionCreatorIccV1VTable, this, nullptr);
}

CWpImageDescriptionCreatorIccV1::~CWpImageDescriptionCreatorIccV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpImageDescriptionCreatorIccV1::onDestroyCalled() {
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

void CWpImageDescriptionCreatorIccV1::setCreate(F<void(CWpImageDescriptionCreatorIccV1*, uint32_t)> handler) {
    requests.create = handler;
}

void CWpImageDescriptionCreatorIccV1::setSetIccFile(F<void(CWpImageDescriptionCreatorIccV1*, int32_t, uint32_t, uint32_t)> handler) {
    requests.setIccFile = handler;
}

static void _CWpImageDescriptionCreatorParamsV1Create(wl_client* client, wl_resource* resource, uint32_t image_description) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.create)
        PO->requests.create(PO, image_description);
}

static void _CWpImageDescriptionCreatorParamsV1SetTfNamed(wl_client* client, wl_resource* resource, uint32_t tf) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setTfNamed)
        PO->requests.setTfNamed(PO, tf);
}

static void _CWpImageDescriptionCreatorParamsV1SetTfPower(wl_client* client, wl_resource* resource, uint32_t eexp) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setTfPower)
        PO->requests.setTfPower(PO, eexp);
}

static void _CWpImageDescriptionCreatorParamsV1SetPrimariesNamed(wl_client* client, wl_resource* resource, uint32_t primaries) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setPrimariesNamed)
        PO->requests.setPrimariesNamed(PO, primaries);
}

static void _CWpImageDescriptionCreatorParamsV1SetPrimaries(wl_client* client, wl_resource* resource, int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setPrimaries)
        PO->requests.setPrimaries(PO, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

static void _CWpImageDescriptionCreatorParamsV1SetLuminances(wl_client* client, wl_resource* resource, uint32_t min_lum, uint32_t max_lum, uint32_t reference_lum) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setLuminances)
        PO->requests.setLuminances(PO, min_lum, max_lum, reference_lum);
}

static void _CWpImageDescriptionCreatorParamsV1SetMasteringDisplayPrimaries(wl_client* client, wl_resource* resource, int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMasteringDisplayPrimaries)
        PO->requests.setMasteringDisplayPrimaries(PO, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

static void _CWpImageDescriptionCreatorParamsV1SetMasteringLuminance(wl_client* client, wl_resource* resource, uint32_t min_lum, uint32_t max_lum) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMasteringLuminance)
        PO->requests.setMasteringLuminance(PO, min_lum, max_lum);
}

static void _CWpImageDescriptionCreatorParamsV1SetMaxCll(wl_client* client, wl_resource* resource, uint32_t max_cll) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMaxCll)
        PO->requests.setMaxCll(PO, max_cll);
}

static void _CWpImageDescriptionCreatorParamsV1SetMaxFall(wl_client* client, wl_resource* resource, uint32_t max_fall) {
    const auto PO = (CWpImageDescriptionCreatorParamsV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.setMaxFall)
        PO->requests.setMaxFall(PO, max_fall);
}

static void _CWpImageDescriptionCreatorParamsV1__DestroyListener(wl_listener* l, void* d) {
    CWpImageDescriptionCreatorParamsV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpImageDescriptionCreatorParamsV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpImageDescriptionCreatorParamsV1VTable[] = {
    (void*)_CWpImageDescriptionCreatorParamsV1Create,
    (void*)_CWpImageDescriptionCreatorParamsV1SetTfNamed,
    (void*)_CWpImageDescriptionCreatorParamsV1SetTfPower,
    (void*)_CWpImageDescriptionCreatorParamsV1SetPrimariesNamed,
    (void*)_CWpImageDescriptionCreatorParamsV1SetPrimaries,
    (void*)_CWpImageDescriptionCreatorParamsV1SetLuminances,
    (void*)_CWpImageDescriptionCreatorParamsV1SetMasteringDisplayPrimaries,
    (void*)_CWpImageDescriptionCreatorParamsV1SetMasteringLuminance,
    (void*)_CWpImageDescriptionCreatorParamsV1SetMaxCll,
    (void*)_CWpImageDescriptionCreatorParamsV1SetMaxFall,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1CreateTypes[] = {
    &wp_image_description_v1_interface,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetTfNamedTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetTfPowerTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetPrimariesNamedTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetPrimariesTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetLuminancesTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetMasteringDisplayPrimariesTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetMasteringLuminanceTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetMaxCllTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionCreatorParamsV1SetMaxFallTypes[] = {
    nullptr,
};

static const wl_message _CWpImageDescriptionCreatorParamsV1Requests[] = {
    { "create", "n", _CWpImageDescriptionCreatorParamsV1CreateTypes + 0},
    { "set_tf_named", "u", _CWpImageDescriptionCreatorParamsV1SetTfNamedTypes + 0},
    { "set_tf_power", "u", _CWpImageDescriptionCreatorParamsV1SetTfPowerTypes + 0},
    { "set_primaries_named", "u", _CWpImageDescriptionCreatorParamsV1SetPrimariesNamedTypes + 0},
    { "set_primaries", "iiiiiiii", _CWpImageDescriptionCreatorParamsV1SetPrimariesTypes + 0},
    { "set_luminances", "uuu", _CWpImageDescriptionCreatorParamsV1SetLuminancesTypes + 0},
    { "set_mastering_display_primaries", "iiiiiiii", _CWpImageDescriptionCreatorParamsV1SetMasteringDisplayPrimariesTypes + 0},
    { "set_mastering_luminance", "uu", _CWpImageDescriptionCreatorParamsV1SetMasteringLuminanceTypes + 0},
    { "set_max_cll", "u", _CWpImageDescriptionCreatorParamsV1SetMaxCllTypes + 0},
    { "set_max_fall", "u", _CWpImageDescriptionCreatorParamsV1SetMaxFallTypes + 0},
};

const wl_interface wp_image_description_creator_params_v1_interface = {
    "wp_image_description_creator_params_v1", 1,
    10, _CWpImageDescriptionCreatorParamsV1Requests,
    0, nullptr,
};

CWpImageDescriptionCreatorParamsV1::CWpImageDescriptionCreatorParamsV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_image_description_creator_params_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpImageDescriptionCreatorParamsV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpImageDescriptionCreatorParamsV1VTable, this, nullptr);
}

CWpImageDescriptionCreatorParamsV1::~CWpImageDescriptionCreatorParamsV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpImageDescriptionCreatorParamsV1::onDestroyCalled() {
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

void CWpImageDescriptionCreatorParamsV1::setCreate(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t)> handler) {
    requests.create = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetTfNamed(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t)> handler) {
    requests.setTfNamed = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetTfPower(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t)> handler) {
    requests.setTfPower = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetPrimariesNamed(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t)> handler) {
    requests.setPrimariesNamed = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetPrimaries(F<void(CWpImageDescriptionCreatorParamsV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.setPrimaries = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetLuminances(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t, uint32_t, uint32_t)> handler) {
    requests.setLuminances = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetMasteringDisplayPrimaries(F<void(CWpImageDescriptionCreatorParamsV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.setMasteringDisplayPrimaries = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetMasteringLuminance(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t, uint32_t)> handler) {
    requests.setMasteringLuminance = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetMaxCll(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t)> handler) {
    requests.setMaxCll = handler;
}

void CWpImageDescriptionCreatorParamsV1::setSetMaxFall(F<void(CWpImageDescriptionCreatorParamsV1*, uint32_t)> handler) {
    requests.setMaxFall = handler;
}

static void _CWpImageDescriptionV1Destroy(wl_client* client, wl_resource* resource) {
    const auto PO = (CWpImageDescriptionV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.destroy)
        PO->requests.destroy(PO);
}

static void _CWpImageDescriptionV1GetInformation(wl_client* client, wl_resource* resource, uint32_t information) {
    const auto PO = (CWpImageDescriptionV1*)wl_resource_get_user_data(resource);
    if (PO && PO->requests.getInformation)
        PO->requests.getInformation(PO, information);
}

static void _CWpImageDescriptionV1__DestroyListener(wl_listener* l, void* d) {
    CWpImageDescriptionV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpImageDescriptionV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpImageDescriptionV1VTable[] = {
    (void*)_CWpImageDescriptionV1Destroy,
    (void*)_CWpImageDescriptionV1GetInformation,
};

void CWpImageDescriptionV1::sendFailed(wpImageDescriptionV1Cause cause, const char* msg) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, cause, msg);
}

void CWpImageDescriptionV1::sendReady(uint32_t identity) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, identity);
}

void CWpImageDescriptionV1::sendFailedRaw(wpImageDescriptionV1Cause cause, const char* msg) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0, cause, msg);
}

void CWpImageDescriptionV1::sendReadyRaw(uint32_t identity) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, identity);
}
static const wl_interface* _CWpImageDescriptionV1GetInformationTypes[] = {
    &wp_image_description_info_v1_interface,
};
static const wl_interface* _CWpImageDescriptionV1FailedTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionV1ReadyTypes[] = {
    nullptr,
};

static const wl_message _CWpImageDescriptionV1Requests[] = {
    { "destroy", "", dummyTypes + 0},
    { "get_information", "n", _CWpImageDescriptionV1GetInformationTypes + 0},
};

static const wl_message _CWpImageDescriptionV1Events[] = {
    { "failed", "us", _CWpImageDescriptionV1FailedTypes + 0},
    { "ready", "u", _CWpImageDescriptionV1ReadyTypes + 0},
};

const wl_interface wp_image_description_v1_interface = {
    "wp_image_description_v1", 1,
    2, _CWpImageDescriptionV1Requests,
    2, _CWpImageDescriptionV1Events,
};

CWpImageDescriptionV1::CWpImageDescriptionV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_image_description_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpImageDescriptionV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpImageDescriptionV1VTable, this, nullptr);
}

CWpImageDescriptionV1::~CWpImageDescriptionV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpImageDescriptionV1::onDestroyCalled() {
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

void CWpImageDescriptionV1::setDestroy(F<void(CWpImageDescriptionV1*)> handler) {
    requests.destroy = handler;
}

void CWpImageDescriptionV1::setGetInformation(F<void(CWpImageDescriptionV1*, uint32_t)> handler) {
    requests.getInformation = handler;
}

static void _CWpImageDescriptionInfoV1__DestroyListener(wl_listener* l, void* d) {
    CWpImageDescriptionInfoV1DestroyWrapper *wrap = wl_container_of(l, wrap, listener);
    CWpImageDescriptionInfoV1* pResource = wrap->parent;
    pResource->onDestroyCalled();
}

static const void* _CWpImageDescriptionInfoV1VTable[] = {
};

void CWpImageDescriptionInfoV1::sendDone() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CWpImageDescriptionInfoV1::sendIccFile(int32_t icc, uint32_t icc_size) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, icc, icc_size);
}

void CWpImageDescriptionInfoV1::sendPrimaries(int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

void CWpImageDescriptionInfoV1::sendPrimariesNamed(uint32_t primaries) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, primaries);
}

void CWpImageDescriptionInfoV1::sendTfPower(uint32_t eexp) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4, eexp);
}

void CWpImageDescriptionInfoV1::sendTfNamed(uint32_t tf) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5, tf);
}

void CWpImageDescriptionInfoV1::sendLuminances(uint32_t min_lum, uint32_t max_lum, uint32_t reference_lum) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 6, min_lum, max_lum, reference_lum);
}

void CWpImageDescriptionInfoV1::sendTargetPrimaries(int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 7, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

void CWpImageDescriptionInfoV1::sendTargetLuminance(uint32_t min_lum, uint32_t max_lum) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 8, min_lum, max_lum);
}

void CWpImageDescriptionInfoV1::sendTargetMaxCll(uint32_t max_cll) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 9, max_cll);
}

void CWpImageDescriptionInfoV1::sendTargetMaxFall(uint32_t max_fall) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 10, max_fall);
}

void CWpImageDescriptionInfoV1::sendDoneRaw() {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 0);
}

void CWpImageDescriptionInfoV1::sendIccFileRaw(int32_t icc, uint32_t icc_size) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 1, icc, icc_size);
}

void CWpImageDescriptionInfoV1::sendPrimariesRaw(int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 2, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

void CWpImageDescriptionInfoV1::sendPrimariesNamedRaw(uint32_t primaries) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 3, primaries);
}

void CWpImageDescriptionInfoV1::sendTfPowerRaw(uint32_t eexp) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 4, eexp);
}

void CWpImageDescriptionInfoV1::sendTfNamedRaw(uint32_t tf) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 5, tf);
}

void CWpImageDescriptionInfoV1::sendLuminancesRaw(uint32_t min_lum, uint32_t max_lum, uint32_t reference_lum) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 6, min_lum, max_lum, reference_lum);
}

void CWpImageDescriptionInfoV1::sendTargetPrimariesRaw(int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 7, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

void CWpImageDescriptionInfoV1::sendTargetLuminanceRaw(uint32_t min_lum, uint32_t max_lum) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 8, min_lum, max_lum);
}

void CWpImageDescriptionInfoV1::sendTargetMaxCllRaw(uint32_t max_cll) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 9, max_cll);
}

void CWpImageDescriptionInfoV1::sendTargetMaxFallRaw(uint32_t max_fall) {
    if (!pResource)
        return;
    wl_resource_post_event(pResource, 10, max_fall);
}
static const wl_interface* _CWpImageDescriptionInfoV1IccFileTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1PrimariesTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1PrimariesNamedTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1TfPowerTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1TfNamedTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1LuminancesTypes[] = {
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1TargetPrimariesTypes[] = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1TargetLuminanceTypes[] = {
    nullptr,
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1TargetMaxCllTypes[] = {
    nullptr,
};
static const wl_interface* _CWpImageDescriptionInfoV1TargetMaxFallTypes[] = {
    nullptr,
};

static const wl_message _CWpImageDescriptionInfoV1Events[] = {
    { "done", "", dummyTypes + 0},
    { "icc_file", "hu", _CWpImageDescriptionInfoV1IccFileTypes + 0},
    { "primaries", "iiiiiiii", _CWpImageDescriptionInfoV1PrimariesTypes + 0},
    { "primaries_named", "u", _CWpImageDescriptionInfoV1PrimariesNamedTypes + 0},
    { "tf_power", "u", _CWpImageDescriptionInfoV1TfPowerTypes + 0},
    { "tf_named", "u", _CWpImageDescriptionInfoV1TfNamedTypes + 0},
    { "luminances", "uuu", _CWpImageDescriptionInfoV1LuminancesTypes + 0},
    { "target_primaries", "iiiiiiii", _CWpImageDescriptionInfoV1TargetPrimariesTypes + 0},
    { "target_luminance", "uu", _CWpImageDescriptionInfoV1TargetLuminanceTypes + 0},
    { "target_max_cll", "u", _CWpImageDescriptionInfoV1TargetMaxCllTypes + 0},
    { "target_max_fall", "u", _CWpImageDescriptionInfoV1TargetMaxFallTypes + 0},
};

const wl_interface wp_image_description_info_v1_interface = {
    "wp_image_description_info_v1", 1,
    0, nullptr,
    11, _CWpImageDescriptionInfoV1Events,
};

CWpImageDescriptionInfoV1::CWpImageDescriptionInfoV1(wl_client* client, uint32_t version, uint32_t id) {
    pResource = wl_resource_create(client, &wp_image_description_info_v1_interface, version, id);

    if (!pResource)
        return;

    wl_resource_set_user_data(pResource, this);
    wl_list_init(&resourceDestroyListener.listener.link);
    resourceDestroyListener.listener.notify = _CWpImageDescriptionInfoV1__DestroyListener;
    resourceDestroyListener.parent = this;
    wl_resource_add_destroy_listener(pResource, &resourceDestroyListener.listener);

    wl_resource_set_implementation(pResource, _CWpImageDescriptionInfoV1VTable, this, nullptr);
}

CWpImageDescriptionInfoV1::~CWpImageDescriptionInfoV1() {
    wl_list_remove(&resourceDestroyListener.listener.link);
    wl_list_init(&resourceDestroyListener.listener.link);

    // if we still own the wayland resource,
    // it means we need to destroy it.
    if (pResource && wl_resource_get_user_data(pResource) == this) {
        wl_resource_set_user_data(pResource, nullptr);
        wl_resource_destroy(pResource);
    }
}

void CWpImageDescriptionInfoV1::onDestroyCalled() {
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

#undef F
