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

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum wpColorManagerV1Error : uint32_t {
    WP_COLOR_MANAGER_V1_ERROR_UNSUPPORTED_FEATURE = 0,
    WP_COLOR_MANAGER_V1_ERROR_SURFACE_EXISTS = 1,
};

enum wpColorManagerV1RenderIntent : uint32_t {
    WP_COLOR_MANAGER_V1_RENDER_INTENT_PERCEPTUAL = 0,
    WP_COLOR_MANAGER_V1_RENDER_INTENT_RELATIVE = 1,
    WP_COLOR_MANAGER_V1_RENDER_INTENT_SATURATION = 2,
    WP_COLOR_MANAGER_V1_RENDER_INTENT_ABSOLUTE = 3,
    WP_COLOR_MANAGER_V1_RENDER_INTENT_RELATIVE_BPC = 4,
};

enum wpColorManagerV1Feature : uint32_t {
    WP_COLOR_MANAGER_V1_FEATURE_ICC_V2_V4 = 0,
    WP_COLOR_MANAGER_V1_FEATURE_PARAMETRIC = 1,
    WP_COLOR_MANAGER_V1_FEATURE_SET_PRIMARIES = 2,
    WP_COLOR_MANAGER_V1_FEATURE_SET_TF_POWER = 3,
    WP_COLOR_MANAGER_V1_FEATURE_SET_LUMINANCES = 4,
    WP_COLOR_MANAGER_V1_FEATURE_SET_MASTERING_DISPLAY_PRIMARIES = 5,
    WP_COLOR_MANAGER_V1_FEATURE_EXTENDED_TARGET_VOLUME = 6,
    WP_COLOR_MANAGER_V1_FEATURE_WINDOWS_SCRGB = 7,
};

enum wpColorManagerV1Primaries : uint32_t {
    WP_COLOR_MANAGER_V1_PRIMARIES_SRGB = 1,
    WP_COLOR_MANAGER_V1_PRIMARIES_PAL_M = 2,
    WP_COLOR_MANAGER_V1_PRIMARIES_PAL = 3,
    WP_COLOR_MANAGER_V1_PRIMARIES_NTSC = 4,
    WP_COLOR_MANAGER_V1_PRIMARIES_GENERIC_FILM = 5,
    WP_COLOR_MANAGER_V1_PRIMARIES_BT2020 = 6,
    WP_COLOR_MANAGER_V1_PRIMARIES_CIE1931_XYZ = 7,
    WP_COLOR_MANAGER_V1_PRIMARIES_DCI_P3 = 8,
    WP_COLOR_MANAGER_V1_PRIMARIES_DISPLAY_P3 = 9,
    WP_COLOR_MANAGER_V1_PRIMARIES_ADOBE_RGB = 10,
};

enum wpColorManagerV1TransferFunction : uint32_t {
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_BT1886 = 1,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_GAMMA22 = 2,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_GAMMA28 = 3,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_ST240 = 4,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_EXT_LINEAR = 5,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_LOG_100 = 6,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_LOG_316 = 7,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_XVYCC = 8,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_SRGB = 9,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_EXT_SRGB = 10,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_ST2084_PQ = 11,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_ST428 = 12,
    WP_COLOR_MANAGER_V1_TRANSFER_FUNCTION_HLG = 13,
};

enum wpColorManagementSurfaceV1Error : uint32_t {
    WP_COLOR_MANAGEMENT_SURFACE_V1_ERROR_RENDER_INTENT = 0,
    WP_COLOR_MANAGEMENT_SURFACE_V1_ERROR_IMAGE_DESCRIPTION = 1,
    WP_COLOR_MANAGEMENT_SURFACE_V1_ERROR_INERT = 2,
};

enum wpColorManagementSurfaceFeedbackV1Error : uint32_t {
    WP_COLOR_MANAGEMENT_SURFACE_FEEDBACK_V1_ERROR_INERT = 0,
    WP_COLOR_MANAGEMENT_SURFACE_FEEDBACK_V1_ERROR_UNSUPPORTED_FEATURE = 1,
};

enum wpImageDescriptionCreatorIccV1Error : uint32_t {
    WP_IMAGE_DESCRIPTION_CREATOR_ICC_V1_ERROR_INCOMPLETE_SET = 0,
    WP_IMAGE_DESCRIPTION_CREATOR_ICC_V1_ERROR_ALREADY_SET = 1,
    WP_IMAGE_DESCRIPTION_CREATOR_ICC_V1_ERROR_BAD_FD = 2,
    WP_IMAGE_DESCRIPTION_CREATOR_ICC_V1_ERROR_BAD_SIZE = 3,
    WP_IMAGE_DESCRIPTION_CREATOR_ICC_V1_ERROR_OUT_OF_FILE = 4,
};

enum wpImageDescriptionCreatorParamsV1Error : uint32_t {
    WP_IMAGE_DESCRIPTION_CREATOR_PARAMS_V1_ERROR_INCOMPLETE_SET = 0,
    WP_IMAGE_DESCRIPTION_CREATOR_PARAMS_V1_ERROR_ALREADY_SET = 1,
    WP_IMAGE_DESCRIPTION_CREATOR_PARAMS_V1_ERROR_UNSUPPORTED_FEATURE = 2,
    WP_IMAGE_DESCRIPTION_CREATOR_PARAMS_V1_ERROR_INVALID_TF = 3,
    WP_IMAGE_DESCRIPTION_CREATOR_PARAMS_V1_ERROR_INVALID_PRIMARIES_NAMED = 4,
    WP_IMAGE_DESCRIPTION_CREATOR_PARAMS_V1_ERROR_INVALID_LUMINANCE = 5,
};

enum wpImageDescriptionV1Error : uint32_t {
    WP_IMAGE_DESCRIPTION_V1_ERROR_NOT_READY = 0,
    WP_IMAGE_DESCRIPTION_V1_ERROR_NO_INFORMATION = 1,
};

enum wpImageDescriptionV1Cause : uint32_t {
    WP_IMAGE_DESCRIPTION_V1_CAUSE_LOW_VERSION = 0,
    WP_IMAGE_DESCRIPTION_V1_CAUSE_UNSUPPORTED = 1,
    WP_IMAGE_DESCRIPTION_V1_CAUSE_OPERATING_SYSTEM = 2,
    WP_IMAGE_DESCRIPTION_V1_CAUSE_NO_OUTPUT = 3,
};


class CCWpColorManagerV1;
class CCWpColorManagementOutputV1;
class CCWlOutput;
class CCWpColorManagementSurfaceV1;
class CCWlSurface;
class CCWpColorManagementSurfaceFeedbackV1;
class CCWlSurface;
class CCWpImageDescriptionCreatorIccV1;
class CCWpImageDescriptionCreatorParamsV1;
class CCWpImageDescriptionV1;
class CCWpColorManagementOutputV1;
class CCWpImageDescriptionV1;
class CCWpColorManagementSurfaceV1;
class CCWpImageDescriptionV1;
class CCWpColorManagementSurfaceFeedbackV1;
class CCWpImageDescriptionV1;
class CCWpImageDescriptionV1;
class CCWpImageDescriptionCreatorIccV1;
class CCWpImageDescriptionV1;
class CCWpImageDescriptionCreatorParamsV1;
class CCWpImageDescriptionV1;
class CCWpImageDescriptionV1;
class CCWpImageDescriptionInfoV1;
class CCWpImageDescriptionInfoV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_color_manager_v1_interface;
extern const wl_interface wp_color_management_output_v1_interface;
extern const wl_interface wp_color_management_surface_v1_interface;
extern const wl_interface wp_color_management_surface_feedback_v1_interface;
extern const wl_interface wp_image_description_creator_icc_v1_interface;
extern const wl_interface wp_image_description_creator_params_v1_interface;
extern const wl_interface wp_image_description_v1_interface;
extern const wl_interface wp_image_description_info_v1_interface;

#endif


class CCWpColorManagerV1 {
  public:
    CCWpColorManagerV1(wl_proxy*);
    ~CCWpColorManagerV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //

    void setSupportedIntent(F<void(CCWpColorManagerV1*, wpColorManagerV1RenderIntent)> handler);
    void setSupportedFeature(F<void(CCWpColorManagerV1*, wpColorManagerV1Feature)> handler);
    void setSupportedTfNamed(F<void(CCWpColorManagerV1*, wpColorManagerV1TransferFunction)> handler);
    void setSupportedPrimariesNamed(F<void(CCWpColorManagerV1*, wpColorManagerV1Primaries)> handler);
    void setDone(F<void(CCWpColorManagerV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetOutput(wl_proxy*);
    wl_proxy* sendGetSurface(wl_proxy*);
    wl_proxy* sendGetSurfaceFeedback(wl_proxy*);
    wl_proxy* sendCreateIccCreator();
    wl_proxy* sendCreateParametricCreator();
    wl_proxy* sendCreateWindowsScrgb();

  private:
    struct {
        F<void(CCWpColorManagerV1*, wpColorManagerV1RenderIntent)> supportedIntent;
        F<void(CCWpColorManagerV1*, wpColorManagerV1Feature)> supportedFeature;
        F<void(CCWpColorManagerV1*, wpColorManagerV1TransferFunction)> supportedTfNamed;
        F<void(CCWpColorManagerV1*, wpColorManagerV1Primaries)> supportedPrimariesNamed;
        F<void(CCWpColorManagerV1*)> done;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpColorManagementOutputV1 {
  public:
    CCWpColorManagementOutputV1(wl_proxy*);
    ~CCWpColorManagementOutputV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //

    void setImageDescriptionChanged(F<void(CCWpColorManagementOutputV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetImageDescription();

  private:
    struct {
        F<void(CCWpColorManagementOutputV1*)> imageDescriptionChanged;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpColorManagementSurfaceV1 {
  public:
    CCWpColorManagementSurfaceV1(wl_proxy*);
    ~CCWpColorManagementSurfaceV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    void sendDestroy();
    void sendSetImageDescription(CCWpImageDescriptionV1*, uint32_t);
    void sendUnsetImageDescription();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpColorManagementSurfaceFeedbackV1 {
  public:
    CCWpColorManagementSurfaceFeedbackV1(wl_proxy*);
    ~CCWpColorManagementSurfaceFeedbackV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //

    void setPreferredChanged(F<void(CCWpColorManagementSurfaceFeedbackV1*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetPreferred();
    wl_proxy* sendGetPreferredParametric();

  private:
    struct {
        F<void(CCWpColorManagementSurfaceFeedbackV1*, uint32_t)> preferredChanged;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpImageDescriptionCreatorIccV1 {
  public:
    CCWpImageDescriptionCreatorIccV1(wl_proxy*);
    ~CCWpImageDescriptionCreatorIccV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    wl_proxy* sendCreate();
    void sendSetIccFile(int32_t, uint32_t, uint32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpImageDescriptionCreatorParamsV1 {
  public:
    CCWpImageDescriptionCreatorParamsV1(wl_proxy*);
    ~CCWpImageDescriptionCreatorParamsV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    wl_proxy* sendCreate();
    void sendSetTfNamed(uint32_t);
    void sendSetTfPower(uint32_t);
    void sendSetPrimariesNamed(uint32_t);
    void sendSetPrimaries(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    void sendSetLuminances(uint32_t, uint32_t, uint32_t);
    void sendSetMasteringDisplayPrimaries(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    void sendSetMasteringLuminance(uint32_t, uint32_t);
    void sendSetMaxCll(uint32_t);
    void sendSetMaxFall(uint32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpImageDescriptionV1 {
  public:
    CCWpImageDescriptionV1(wl_proxy*);
    ~CCWpImageDescriptionV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //

    void setFailed(F<void(CCWpImageDescriptionV1*, wpImageDescriptionV1Cause, const char*)> handler);
    void setReady(F<void(CCWpImageDescriptionV1*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetInformation();

  private:
    struct {
        F<void(CCWpImageDescriptionV1*, wpImageDescriptionV1Cause, const char*)> failed;
        F<void(CCWpImageDescriptionV1*, uint32_t)> ready;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpImageDescriptionInfoV1 {
  public:
    CCWpImageDescriptionInfoV1(wl_proxy*);
    ~CCWpImageDescriptionInfoV1();


    // set the data for this resource
    void setData(void* data) {{
        pData = data;
    }}

    // get the data for this resource
    void* data() {{
        return pData;
    }}

    // get the raw wl_resource (wl_proxy) ptr
    wl_proxy* resource() {{
        return pResource;
    }}

    // get the raw wl_proxy ptr
    wl_proxy* proxy() {{
        return pResource;
    }}

    // get the resource version
    int version() {{
        return wl_proxy_get_version(pResource);
    }}
            
    // --------------- Requests --------------- //

    void setDone(F<void(CCWpImageDescriptionInfoV1*)> handler);
    void setIccFile(F<void(CCWpImageDescriptionInfoV1*, int32_t, uint32_t)> handler);
    void setPrimaries(F<void(CCWpImageDescriptionInfoV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> handler);
    void setPrimariesNamed(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler);
    void setTfPower(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler);
    void setTfNamed(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler);
    void setLuminances(F<void(CCWpImageDescriptionInfoV1*, uint32_t, uint32_t, uint32_t)> handler);
    void setTargetPrimaries(F<void(CCWpImageDescriptionInfoV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> handler);
    void setTargetLuminance(F<void(CCWpImageDescriptionInfoV1*, uint32_t, uint32_t)> handler);
    void setTargetMaxCll(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler);
    void setTargetMaxFall(F<void(CCWpImageDescriptionInfoV1*, uint32_t)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CCWpImageDescriptionInfoV1*)> done;
        F<void(CCWpImageDescriptionInfoV1*, int32_t, uint32_t)> iccFile;
        F<void(CCWpImageDescriptionInfoV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> primaries;
        F<void(CCWpImageDescriptionInfoV1*, uint32_t)> primariesNamed;
        F<void(CCWpImageDescriptionInfoV1*, uint32_t)> tfPower;
        F<void(CCWpImageDescriptionInfoV1*, uint32_t)> tfNamed;
        F<void(CCWpImageDescriptionInfoV1*, uint32_t, uint32_t, uint32_t)> luminances;
        F<void(CCWpImageDescriptionInfoV1*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)> targetPrimaries;
        F<void(CCWpImageDescriptionInfoV1*, uint32_t, uint32_t)> targetLuminance;
        F<void(CCWpImageDescriptionInfoV1*, uint32_t)> targetMaxCll;
        F<void(CCWpImageDescriptionInfoV1*, uint32_t)> targetMaxFall;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
