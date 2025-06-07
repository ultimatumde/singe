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

static void _CWpColorManagerV1SupportedIntent(void* data, void* resource, wpColorManagerV1RenderIntent render_intent) {
    const auto PO = (CCWpColorManagerV1*)data;
    if (PO && PO->requests.supportedIntent)
        PO->requests.supportedIntent(PO, render_intent);
}

static void _CWpColorManagerV1SupportedFeature(void* data, void* resource, wpColorManagerV1Feature feature) {
    const auto PO = (CCWpColorManagerV1*)data;
    if (PO && PO->requests.supportedFeature)
        PO->requests.supportedFeature(PO, feature);
}

static void _CWpColorManagerV1SupportedTfNamed(void* data, void* resource, wpColorManagerV1TransferFunction tf) {
    const auto PO = (CCWpColorManagerV1*)data;
    if (PO && PO->requests.supportedTfNamed)
        PO->requests.supportedTfNamed(PO, tf);
}

static void _CWpColorManagerV1SupportedPrimariesNamed(void* data, void* resource, wpColorManagerV1Primaries primaries) {
    const auto PO = (CCWpColorManagerV1*)data;
    if (PO && PO->requests.supportedPrimariesNamed)
        PO->requests.supportedPrimariesNamed(PO, primaries);
}

static void _CWpColorManagerV1Done(void* data, void* resource) {
    const auto PO = (CCWpColorManagerV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static const void* _CCWpColorManagerV1VTable[] = {
    (void*)_CWpColorManagerV1SupportedIntent,
    (void*)_CWpColorManagerV1SupportedFeature,
    (void*)_CWpColorManagerV1SupportedTfNamed,
    (void*)_CWpColorManagerV1SupportedPrimariesNamed,
    (void*)_CWpColorManagerV1Done,
};

void CCWpColorManagerV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpColorManagerV1::sendGetOutput(wl_proxy* output) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_color_management_output_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, output);

    return proxy;
}

wl_proxy* CCWpColorManagerV1::sendGetSurface(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &wp_color_management_surface_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}

wl_proxy* CCWpColorManagerV1::sendGetSurfaceFeedback(wl_proxy* surface) {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, &wp_color_management_surface_feedback_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr, surface);

    return proxy;
}

wl_proxy* CCWpColorManagerV1::sendCreateIccCreator() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, &wp_image_description_creator_icc_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

wl_proxy* CCWpColorManagerV1::sendCreateParametricCreator() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, &wp_image_description_creator_params_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

wl_proxy* CCWpColorManagerV1::sendCreateWindowsScrgb() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, &wp_image_description_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
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

CCWpColorManagerV1::CCWpColorManagerV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpColorManagerV1VTable, this);
}

CCWpColorManagerV1::~CCWpColorManagerV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpColorManagerV1::setSupportedIntent(F<void(CCWpColorManagerV1*, wpColorManagerV1RenderIntent)> handler) {
    requests.supportedIntent = handler;
}

void CCWpColorManagerV1::setSupportedFeature(F<void(CCWpColorManagerV1*, wpColorManagerV1Feature)> handler) {
    requests.supportedFeature = handler;
}

void CCWpColorManagerV1::setSupportedTfNamed(F<void(CCWpColorManagerV1*, wpColorManagerV1TransferFunction)> handler) {
    requests.supportedTfNamed = handler;
}

void CCWpColorManagerV1::setSupportedPrimariesNamed(F<void(CCWpColorManagerV1*, wpColorManagerV1Primaries)> handler) {
    requests.supportedPrimariesNamed = handler;
}

void CCWpColorManagerV1::setDone(F<void(CCWpColorManagerV1*)> handler) {
    requests.done = handler;
}

static void _CWpColorManagementOutputV1ImageDescriptionChanged(void* data, void* resource) {
    const auto PO = (CCWpColorManagementOutputV1*)data;
    if (PO && PO->requests.imageDescriptionChanged)
        PO->requests.imageDescriptionChanged(PO);
}

static const void* _CCWpColorManagementOutputV1VTable[] = {
    (void*)_CWpColorManagementOutputV1ImageDescriptionChanged,
};

void CCWpColorManagementOutputV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpColorManagementOutputV1::sendGetImageDescription() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_image_description_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
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

CCWpColorManagementOutputV1::CCWpColorManagementOutputV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpColorManagementOutputV1VTable, this);
}

CCWpColorManagementOutputV1::~CCWpColorManagementOutputV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpColorManagementOutputV1::setImageDescriptionChanged(F<void(CCWpColorManagementOutputV1*)> handler) {
    requests.imageDescriptionChanged = handler;
}

static const void* _CCWpColorManagementSurfaceV1VTable[] = {
};

void CCWpColorManagementSurfaceV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

void CCWpColorManagementSurfaceV1::sendSetImageDescription(CCWpImageDescriptionV1* image_description, uint32_t render_intent) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, image_description ? image_description->pResource : nullptr, render_intent);
    proxy;
}

void CCWpColorManagementSurfaceV1::sendUnsetImageDescription() {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0);
    proxy;
}
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

CCWpColorManagementSurfaceV1::CCWpColorManagementSurfaceV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpColorManagementSurfaceV1VTable, this);
}

CCWpColorManagementSurfaceV1::~CCWpColorManagementSurfaceV1() {
    if (!destroyed)
        sendDestroy();
}

static void _CWpColorManagementSurfaceFeedbackV1PreferredChanged(void* data, void* resource, uint32_t identity) {
    const auto PO = (CCWpColorManagementSurfaceFeedbackV1*)data;
    if (PO && PO->requests.preferredChanged)
        PO->requests.preferredChanged(PO, identity);
}

static const void* _CCWpColorManagementSurfaceFeedbackV1VTable[] = {
    (void*)_CWpColorManagementSurfaceFeedbackV1PreferredChanged,
};

void CCWpColorManagementSurfaceFeedbackV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpColorManagementSurfaceFeedbackV1::sendGetPreferred() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_image_description_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
}

wl_proxy* CCWpColorManagementSurfaceFeedbackV1::sendGetPreferredParametric() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, &wp_image_description_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
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

CCWpColorManagementSurfaceFeedbackV1::CCWpColorManagementSurfaceFeedbackV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpColorManagementSurfaceFeedbackV1VTable, this);
}

CCWpColorManagementSurfaceFeedbackV1::~CCWpColorManagementSurfaceFeedbackV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpColorManagementSurfaceFeedbackV1::setPreferredChanged(F<void(CCWpColorManagementSurfaceFeedbackV1*, uint32_t)> handler) {
    requests.preferredChanged = handler;
}

static const void* _CCWpImageDescriptionCreatorIccV1VTable[] = {
};

wl_proxy* CCWpImageDescriptionCreatorIccV1::sendCreate() {
    if (!pResource)
        return nullptr;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &wp_image_description_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 1, nullptr);

    return proxy;
}

void CCWpImageDescriptionCreatorIccV1::sendSetIccFile(int32_t icc_profile, uint32_t offset, uint32_t length) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, icc_profile, offset, length);
    proxy;
}
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

CCWpImageDescriptionCreatorIccV1::CCWpImageDescriptionCreatorIccV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpImageDescriptionCreatorIccV1VTable, this);
}

CCWpImageDescriptionCreatorIccV1::~CCWpImageDescriptionCreatorIccV1() {
    if (!destroyed)
        sendCreate();
}

static const void* _CCWpImageDescriptionCreatorParamsV1VTable[] = {
};

wl_proxy* CCWpImageDescriptionCreatorParamsV1::sendCreate() {
    if (!pResource)
        return nullptr;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, &wp_image_description_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 1, nullptr);

    return proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetTfNamed(uint32_t tf) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, tf);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetTfPower(uint32_t eexp) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 2, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, eexp);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetPrimariesNamed(uint32_t primaries) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 3, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, primaries);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetPrimaries(int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 4, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetLuminances(uint32_t min_lum, uint32_t max_lum, uint32_t reference_lum) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 5, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, min_lum, max_lum, reference_lum);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetMasteringDisplayPrimaries(int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 6, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetMasteringLuminance(uint32_t min_lum, uint32_t max_lum) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 7, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, min_lum, max_lum);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetMaxCll(uint32_t max_cll) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 8, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, max_cll);
    proxy;
}

void CCWpImageDescriptionCreatorParamsV1::sendSetMaxFall(uint32_t max_fall) {
    if (!pResource)
        return;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 9, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 0, max_fall);
    proxy;
}
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

CCWpImageDescriptionCreatorParamsV1::CCWpImageDescriptionCreatorParamsV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpImageDescriptionCreatorParamsV1VTable, this);
}

CCWpImageDescriptionCreatorParamsV1::~CCWpImageDescriptionCreatorParamsV1() {
    if (!destroyed)
        sendCreate();
}

static void _CWpImageDescriptionV1Failed(void* data, void* resource, wpImageDescriptionV1Cause cause, const char* msg) {
    const auto PO = (CCWpImageDescriptionV1*)data;
    if (PO && PO->requests.failed)
        PO->requests.failed(PO, cause, msg);
}

static void _CWpImageDescriptionV1Ready(void* data, void* resource, uint32_t identity) {
    const auto PO = (CCWpImageDescriptionV1*)data;
    if (PO && PO->requests.ready)
        PO->requests.ready(PO, identity);
}

static const void* _CCWpImageDescriptionV1VTable[] = {
    (void*)_CWpImageDescriptionV1Failed,
    (void*)_CWpImageDescriptionV1Ready,
};

void CCWpImageDescriptionV1::sendDestroy() {
    if (!pResource)
        return;
    destroyed = true;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 0, nullptr, wl_proxy_get_version((wl_proxy*)pResource), 1);
    proxy;
}

wl_proxy* CCWpImageDescriptionV1::sendGetInformation() {
    if (!pResource)
        return nullptr;

    auto proxy = wl_proxy_marshal_flags((wl_proxy*)pResource, 1, &wp_image_description_info_v1_interface, wl_proxy_get_version((wl_proxy*)pResource), 0, nullptr);

    return proxy;
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

CCWpImageDescriptionV1::CCWpImageDescriptionV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpImageDescriptionV1VTable, this);
}

CCWpImageDescriptionV1::~CCWpImageDescriptionV1() {
    if (!destroyed)
        sendDestroy();
}

void CCWpImageDescriptionV1::setFailed(F<void(CCWpImageDescriptionV1*, wpImageDescriptionV1Cause, const char*)> handler) {
    requests.failed = handler;
}

void CCWpImageDescriptionV1::setReady(F<void(CCWpImageDescriptionV1*, uint32_t)> handler) {
    requests.ready = handler;
}

static void _CWpImageDescriptionInfoV1Done(void* data, void* resource) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.done)
        PO->requests.done(PO);
}

static void _CWpImageDescriptionInfoV1IccFile(void* data, void* resource, int32_t icc, uint32_t icc_size) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.iccFile)
        PO->requests.iccFile(PO, icc, icc_size);
}

static void _CWpImageDescriptionInfoV1Primaries(void* data, void* resource, int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.primaries)
        PO->requests.primaries(PO, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

static void _CWpImageDescriptionInfoV1PrimariesNamed(void* data, void* resource, uint32_t primaries) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.primariesNamed)
        PO->requests.primariesNamed(PO, primaries);
}

static void _CWpImageDescriptionInfoV1TfPower(void* data, void* resource, uint32_t eexp) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.tfPower)
        PO->requests.tfPower(PO, eexp);
}

static void _CWpImageDescriptionInfoV1TfNamed(void* data, void* resource, uint32_t tf) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.tfNamed)
        PO->requests.tfNamed(PO, tf);
}

static void _CWpImageDescriptionInfoV1Luminances(void* data, void* resource, uint32_t min_lum, uint32_t max_lum, uint32_t reference_lum) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.luminances)
        PO->requests.luminances(PO, min_lum, max_lum, reference_lum);
}

static void _CWpImageDescriptionInfoV1TargetPrimaries(void* data, void* resource, int32_t r_x, int32_t r_y, int32_t g_x, int32_t g_y, int32_t b_x, int32_t b_y, int32_t w_x, int32_t w_y) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.targetPrimaries)
        PO->requests.targetPrimaries(PO, r_x, r_y, g_x, g_y, b_x, b_y, w_x, w_y);
}

static void _CWpImageDescriptionInfoV1TargetLuminance(void* data, void* resource, uint32_t min_lum, uint32_t max_lum) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.targetLuminance)
        PO->requests.targetLuminance(PO, min_lum, max_lum);
}

static void _CWpImageDescriptionInfoV1TargetMaxCll(void* data, void* resource, uint32_t max_cll) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.targetMaxCll)
        PO->requests.targetMaxCll(PO, max_cll);
}

static void _CWpImageDescriptionInfoV1TargetMaxFall(void* data, void* resource, uint32_t max_fall) {
    const auto PO = (CCWpImageDescriptionInfoV1*)data;
    if (PO && PO->requests.targetMaxFall)
        PO->requests.targetMaxFall(PO, max_fall);
}

static const void* _CCWpImageDescriptionInfoV1VTable[] = {
    (void*)_CWpImageDescriptionInfoV1Done,
    (void*)_CWpImageDescriptionInfoV1IccFile,
    (void*)_CWpImageDescriptionInfoV1Primaries,
    (void*)_CWpImageDescriptionInfoV1PrimariesNamed,
    (void*)_CWpImageDescriptionInfoV1TfPower,
    (void*)_CWpImageDescriptionInfoV1TfNamed,
    (void*)_CWpImageDescriptionInfoV1Luminances,
    (void*)_CWpImageDescriptionInfoV1TargetPrimaries,
    (void*)_CWpImageDescriptionInfoV1TargetLuminance,
    (void*)_CWpImageDescriptionInfoV1TargetMaxCll,
    (void*)_CWpImageDescriptionInfoV1TargetMaxFall,
};
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

CCWpImageDescriptionInfoV1::CCWpImageDescriptionInfoV1(wl_proxy* resource) {
    pResource = resource;

    if (!pResource)
        return;

    wl_proxy_add_listener(pResource, (void (**)(void))&_CCWpImageDescriptionInfoV1VTable, this);
}

CCWpImageDescriptionInfoV1::~CCWpImageDescriptionInfoV1() {
    if (!destroyed)
        wl_proxy_destroy(pResource);
}

void CCWpImageDescriptionInfoV1::setDone(F<void(CCWpImageDescriptionInfoV1*)> handler) {
    requests.done = handler;
}

void CCWpImageDescriptionInfoV1::setIccFile(F<void(CCWpImageDescriptionInfoV1*, int32_t, uint32_t)> handler) {
    requests.iccFile = handler;
}

void CCWpImageDescriptionInfoV1::setPrimaries(F<void(CCWpImageDescriptionInfoV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.primaries = handler;
}

void CCWpImageDescriptionInfoV1::setPrimariesNamed(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler) {
    requests.primariesNamed = handler;
}

void CCWpImageDescriptionInfoV1::setTfPower(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler) {
    requests.tfPower = handler;
}

void CCWpImageDescriptionInfoV1::setTfNamed(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler) {
    requests.tfNamed = handler;
}

void CCWpImageDescriptionInfoV1::setLuminances(F<void(CCWpImageDescriptionInfoV1*, uint32_t, uint32_t, uint32_t)> handler) {
    requests.luminances = handler;
}

void CCWpImageDescriptionInfoV1::setTargetPrimaries(F<void(CCWpImageDescriptionInfoV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> handler) {
    requests.targetPrimaries = handler;
}

void CCWpImageDescriptionInfoV1::setTargetLuminance(F<void(CCWpImageDescriptionInfoV1*, uint32_t, uint32_t)> handler) {
    requests.targetLuminance = handler;
}

void CCWpImageDescriptionInfoV1::setTargetMaxCll(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler) {
    requests.targetMaxCll = handler;
}

void CCWpImageDescriptionInfoV1::setTargetMaxFall(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler) {
    requests.targetMaxFall = handler;
}

#undef F
