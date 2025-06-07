// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// wayland

/*
 This protocol's authors' copyright notice is:


    Copyright © 2008-2011 Kristian Høgsberg
    Copyright © 2010-2011 Intel Corporation
    Copyright © 2012-2013 Collabora, Ltd.

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

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum wlDisplayError : uint32_t {
    WL_DISPLAY_ERROR_INVALID_OBJECT = 0,
    WL_DISPLAY_ERROR_INVALID_METHOD = 1,
    WL_DISPLAY_ERROR_NO_MEMORY = 2,
    WL_DISPLAY_ERROR_IMPLEMENTATION = 3,
};

enum wlShmError : uint32_t {
    WL_SHM_ERROR_INVALID_FORMAT = 0,
    WL_SHM_ERROR_INVALID_STRIDE = 1,
    WL_SHM_ERROR_INVALID_FD = 2,
};

enum wlShmFormat : uint32_t {
    WL_SHM_FORMAT_ARGB8888 = 0,
    WL_SHM_FORMAT_XRGB8888 = 1,
    WL_SHM_FORMAT_C8 = 538982467,
    WL_SHM_FORMAT_RGB332 = 943867730,
    WL_SHM_FORMAT_BGR233 = 944916290,
    WL_SHM_FORMAT_XRGB4444 = 842093144,
    WL_SHM_FORMAT_XBGR4444 = 842089048,
    WL_SHM_FORMAT_RGBX4444 = 842094674,
    WL_SHM_FORMAT_BGRX4444 = 842094658,
    WL_SHM_FORMAT_ARGB4444 = 842093121,
    WL_SHM_FORMAT_ABGR4444 = 842089025,
    WL_SHM_FORMAT_RGBA4444 = 842088786,
    WL_SHM_FORMAT_BGRA4444 = 842088770,
    WL_SHM_FORMAT_XRGB1555 = 892424792,
    WL_SHM_FORMAT_XBGR1555 = 892420696,
    WL_SHM_FORMAT_RGBX5551 = 892426322,
    WL_SHM_FORMAT_BGRX5551 = 892426306,
    WL_SHM_FORMAT_ARGB1555 = 892424769,
    WL_SHM_FORMAT_ABGR1555 = 892420673,
    WL_SHM_FORMAT_RGBA5551 = 892420434,
    WL_SHM_FORMAT_BGRA5551 = 892420418,
    WL_SHM_FORMAT_RGB565 = 909199186,
    WL_SHM_FORMAT_BGR565 = 909199170,
    WL_SHM_FORMAT_RGB888 = 875710290,
    WL_SHM_FORMAT_BGR888 = 875710274,
    WL_SHM_FORMAT_XBGR8888 = 875709016,
    WL_SHM_FORMAT_RGBX8888 = 875714642,
    WL_SHM_FORMAT_BGRX8888 = 875714626,
    WL_SHM_FORMAT_ABGR8888 = 875708993,
    WL_SHM_FORMAT_RGBA8888 = 875708754,
    WL_SHM_FORMAT_BGRA8888 = 875708738,
    WL_SHM_FORMAT_XRGB2101010 = 808669784,
    WL_SHM_FORMAT_XBGR2101010 = 808665688,
    WL_SHM_FORMAT_RGBX1010102 = 808671314,
    WL_SHM_FORMAT_BGRX1010102 = 808671298,
    WL_SHM_FORMAT_ARGB2101010 = 808669761,
    WL_SHM_FORMAT_ABGR2101010 = 808665665,
    WL_SHM_FORMAT_RGBA1010102 = 808665426,
    WL_SHM_FORMAT_BGRA1010102 = 808665410,
    WL_SHM_FORMAT_YUYV = 1448695129,
    WL_SHM_FORMAT_YVYU = 1431918169,
    WL_SHM_FORMAT_UYVY = 1498831189,
    WL_SHM_FORMAT_VYUY = 1498765654,
    WL_SHM_FORMAT_AYUV = 1448433985,
    WL_SHM_FORMAT_NV12 = 842094158,
    WL_SHM_FORMAT_NV21 = 825382478,
    WL_SHM_FORMAT_NV16 = 909203022,
    WL_SHM_FORMAT_NV61 = 825644622,
    WL_SHM_FORMAT_YUV410 = 961959257,
    WL_SHM_FORMAT_YVU410 = 961893977,
    WL_SHM_FORMAT_YUV411 = 825316697,
    WL_SHM_FORMAT_YVU411 = 825316953,
    WL_SHM_FORMAT_YUV420 = 842093913,
    WL_SHM_FORMAT_YVU420 = 842094169,
    WL_SHM_FORMAT_YUV422 = 909202777,
    WL_SHM_FORMAT_YVU422 = 909203033,
    WL_SHM_FORMAT_YUV444 = 875713881,
    WL_SHM_FORMAT_YVU444 = 875714137,
    WL_SHM_FORMAT_R8 = 538982482,
    WL_SHM_FORMAT_R16 = 540422482,
    WL_SHM_FORMAT_RG88 = 943212370,
    WL_SHM_FORMAT_GR88 = 943215175,
    WL_SHM_FORMAT_RG1616 = 842221394,
    WL_SHM_FORMAT_GR1616 = 842224199,
    WL_SHM_FORMAT_XRGB16161616F = 1211388504,
    WL_SHM_FORMAT_XBGR16161616F = 1211384408,
    WL_SHM_FORMAT_ARGB16161616F = 1211388481,
    WL_SHM_FORMAT_ABGR16161616F = 1211384385,
    WL_SHM_FORMAT_XYUV8888 = 1448434008,
    WL_SHM_FORMAT_VUY888 = 875713878,
    WL_SHM_FORMAT_VUY101010 = 808670550,
    WL_SHM_FORMAT_Y210 = 808530521,
    WL_SHM_FORMAT_Y212 = 842084953,
    WL_SHM_FORMAT_Y216 = 909193817,
    WL_SHM_FORMAT_Y410 = 808531033,
    WL_SHM_FORMAT_Y412 = 842085465,
    WL_SHM_FORMAT_Y416 = 909194329,
    WL_SHM_FORMAT_XVYU2101010 = 808670808,
    WL_SHM_FORMAT_XVYU12_16161616 = 909334104,
    WL_SHM_FORMAT_XVYU16161616 = 942954072,
    WL_SHM_FORMAT_Y0L0 = 810299481,
    WL_SHM_FORMAT_X0L0 = 810299480,
    WL_SHM_FORMAT_Y0L2 = 843853913,
    WL_SHM_FORMAT_X0L2 = 843853912,
    WL_SHM_FORMAT_YUV420_8BIT = 942691673,
    WL_SHM_FORMAT_YUV420_10BIT = 808539481,
    WL_SHM_FORMAT_XRGB8888_A8 = 943805016,
    WL_SHM_FORMAT_XBGR8888_A8 = 943800920,
    WL_SHM_FORMAT_RGBX8888_A8 = 943806546,
    WL_SHM_FORMAT_BGRX8888_A8 = 943806530,
    WL_SHM_FORMAT_RGB888_A8 = 943798354,
    WL_SHM_FORMAT_BGR888_A8 = 943798338,
    WL_SHM_FORMAT_RGB565_A8 = 943797586,
    WL_SHM_FORMAT_BGR565_A8 = 943797570,
    WL_SHM_FORMAT_NV24 = 875714126,
    WL_SHM_FORMAT_NV42 = 842290766,
    WL_SHM_FORMAT_P210 = 808530512,
    WL_SHM_FORMAT_P010 = 808530000,
    WL_SHM_FORMAT_P012 = 842084432,
    WL_SHM_FORMAT_P016 = 909193296,
    WL_SHM_FORMAT_AXBXGXRX106106106106 = 808534593,
    WL_SHM_FORMAT_NV15 = 892425806,
    WL_SHM_FORMAT_Q410 = 808531025,
    WL_SHM_FORMAT_Q401 = 825242705,
    WL_SHM_FORMAT_XRGB16161616 = 942953048,
    WL_SHM_FORMAT_XBGR16161616 = 942948952,
    WL_SHM_FORMAT_ARGB16161616 = 942953025,
    WL_SHM_FORMAT_ABGR16161616 = 942948929,
    WL_SHM_FORMAT_C1 = 538980675,
    WL_SHM_FORMAT_C2 = 538980931,
    WL_SHM_FORMAT_C4 = 538981443,
    WL_SHM_FORMAT_D1 = 538980676,
    WL_SHM_FORMAT_D2 = 538980932,
    WL_SHM_FORMAT_D4 = 538981444,
    WL_SHM_FORMAT_D8 = 538982468,
    WL_SHM_FORMAT_R1 = 538980690,
    WL_SHM_FORMAT_R2 = 538980946,
    WL_SHM_FORMAT_R4 = 538981458,
    WL_SHM_FORMAT_R10 = 540029266,
    WL_SHM_FORMAT_R12 = 540160338,
    WL_SHM_FORMAT_AVUY8888 = 1498764865,
    WL_SHM_FORMAT_XVUY8888 = 1498764888,
    WL_SHM_FORMAT_P030 = 808661072,
};

enum wlDataOfferError : uint32_t {
    WL_DATA_OFFER_ERROR_INVALID_FINISH = 0,
    WL_DATA_OFFER_ERROR_INVALID_ACTION_MASK = 1,
    WL_DATA_OFFER_ERROR_INVALID_ACTION = 2,
    WL_DATA_OFFER_ERROR_INVALID_OFFER = 3,
};

enum wlDataSourceError : uint32_t {
    WL_DATA_SOURCE_ERROR_INVALID_ACTION_MASK = 0,
    WL_DATA_SOURCE_ERROR_INVALID_SOURCE = 1,
};

enum wlDataDeviceError : uint32_t {
    WL_DATA_DEVICE_ERROR_ROLE = 0,
    WL_DATA_DEVICE_ERROR_USED_SOURCE = 1,
};

enum wlDataDeviceManagerDndAction : uint32_t {
    WL_DATA_DEVICE_MANAGER_DND_ACTION_NONE = 0,
    WL_DATA_DEVICE_MANAGER_DND_ACTION_COPY = 1,
    WL_DATA_DEVICE_MANAGER_DND_ACTION_MOVE = 2,
    WL_DATA_DEVICE_MANAGER_DND_ACTION_ASK = 4,
};

enum wlShellError : uint32_t {
    WL_SHELL_ERROR_ROLE = 0,
};

enum wlShellSurfaceResize : uint32_t {
    WL_SHELL_SURFACE_RESIZE_NONE = 0,
    WL_SHELL_SURFACE_RESIZE_TOP = 1,
    WL_SHELL_SURFACE_RESIZE_BOTTOM = 2,
    WL_SHELL_SURFACE_RESIZE_LEFT = 4,
    WL_SHELL_SURFACE_RESIZE_TOP_LEFT = 5,
    WL_SHELL_SURFACE_RESIZE_BOTTOM_LEFT = 6,
    WL_SHELL_SURFACE_RESIZE_RIGHT = 8,
    WL_SHELL_SURFACE_RESIZE_TOP_RIGHT = 9,
    WL_SHELL_SURFACE_RESIZE_BOTTOM_RIGHT = 10,
};

enum wlShellSurfaceTransient : uint32_t {
    WL_SHELL_SURFACE_TRANSIENT_INACTIVE = 1,
};

enum wlShellSurfaceFullscreenMethod : uint32_t {
    WL_SHELL_SURFACE_FULLSCREEN_METHOD_DEFAULT = 0,
    WL_SHELL_SURFACE_FULLSCREEN_METHOD_SCALE = 1,
    WL_SHELL_SURFACE_FULLSCREEN_METHOD_DRIVER = 2,
    WL_SHELL_SURFACE_FULLSCREEN_METHOD_FILL = 3,
};

enum wlSurfaceError : uint32_t {
    WL_SURFACE_ERROR_INVALID_SCALE = 0,
    WL_SURFACE_ERROR_INVALID_TRANSFORM = 1,
    WL_SURFACE_ERROR_INVALID_SIZE = 2,
    WL_SURFACE_ERROR_INVALID_OFFSET = 3,
    WL_SURFACE_ERROR_DEFUNCT_ROLE_OBJECT = 4,
};

enum wlSeatCapability : uint32_t {
    WL_SEAT_CAPABILITY_POINTER = 1,
    WL_SEAT_CAPABILITY_KEYBOARD = 2,
    WL_SEAT_CAPABILITY_TOUCH = 4,
};

enum wlSeatError : uint32_t {
    WL_SEAT_ERROR_MISSING_CAPABILITY = 0,
};

enum wlPointerError : uint32_t {
    WL_POINTER_ERROR_ROLE = 0,
};

enum wlPointerButtonState : uint32_t {
    WL_POINTER_BUTTON_STATE_RELEASED = 0,
    WL_POINTER_BUTTON_STATE_PRESSED = 1,
};

enum wlPointerAxis : uint32_t {
    WL_POINTER_AXIS_VERTICAL_SCROLL = 0,
    WL_POINTER_AXIS_HORIZONTAL_SCROLL = 1,
};

enum wlPointerAxisSource : uint32_t {
    WL_POINTER_AXIS_SOURCE_WHEEL = 0,
    WL_POINTER_AXIS_SOURCE_FINGER = 1,
    WL_POINTER_AXIS_SOURCE_CONTINUOUS = 2,
    WL_POINTER_AXIS_SOURCE_WHEEL_TILT = 3,
};

enum wlPointerAxisRelativeDirection : uint32_t {
    WL_POINTER_AXIS_RELATIVE_DIRECTION_IDENTICAL = 0,
    WL_POINTER_AXIS_RELATIVE_DIRECTION_INVERTED = 1,
};

enum wlKeyboardKeymapFormat : uint32_t {
    WL_KEYBOARD_KEYMAP_FORMAT_NO_KEYMAP = 0,
    WL_KEYBOARD_KEYMAP_FORMAT_XKB_V1 = 1,
};

enum wlKeyboardKeyState : uint32_t {
    WL_KEYBOARD_KEY_STATE_RELEASED = 0,
    WL_KEYBOARD_KEY_STATE_PRESSED = 1,
    WL_KEYBOARD_KEY_STATE_REPEATED = 2,
};

enum wlOutputSubpixel : uint32_t {
    WL_OUTPUT_SUBPIXEL_UNKNOWN = 0,
    WL_OUTPUT_SUBPIXEL_NONE = 1,
    WL_OUTPUT_SUBPIXEL_HORIZONTAL_RGB = 2,
    WL_OUTPUT_SUBPIXEL_HORIZONTAL_BGR = 3,
    WL_OUTPUT_SUBPIXEL_VERTICAL_RGB = 4,
    WL_OUTPUT_SUBPIXEL_VERTICAL_BGR = 5,
};

enum wlOutputTransform : uint32_t {
    WL_OUTPUT_TRANSFORM_NORMAL = 0,
    WL_OUTPUT_TRANSFORM_90 = 1,
    WL_OUTPUT_TRANSFORM_180 = 2,
    WL_OUTPUT_TRANSFORM_270 = 3,
    WL_OUTPUT_TRANSFORM_FLIPPED = 4,
    WL_OUTPUT_TRANSFORM_FLIPPED_90 = 5,
    WL_OUTPUT_TRANSFORM_FLIPPED_180 = 6,
    WL_OUTPUT_TRANSFORM_FLIPPED_270 = 7,
};

enum wlOutputMode : uint32_t {
    WL_OUTPUT_MODE_CURRENT = 1,
    WL_OUTPUT_MODE_PREFERRED = 2,
};

enum wlSubcompositorError : uint32_t {
    WL_SUBCOMPOSITOR_ERROR_BAD_SURFACE = 0,
    WL_SUBCOMPOSITOR_ERROR_BAD_PARENT = 1,
};

enum wlSubsurfaceError : uint32_t {
    WL_SUBSURFACE_ERROR_BAD_SURFACE = 0,
};


class CCWlDisplay;
class CCWlCallback;
class CCWlRegistry;
class CCWlRegistry;
class CCWlCallback;
class CCWlCompositor;
class CCWlSurface;
class CCWlRegion;
class CCWlShmPool;
class CCWlBuffer;
class CCWlShm;
class CCWlShmPool;
class CCWlBuffer;
class CCWlDataOffer;
class CCWlDataSource;
class CCWlDataDevice;
class CCWlDataSource;
class CCWlSurface;
class CCWlSurface;
class CCWlDataSource;
class CCWlDataOffer;
class CCWlSurface;
class CCWlDataOffer;
class CCWlDataOffer;
class CCWlDataDeviceManager;
class CCWlDataSource;
class CCWlDataDevice;
class CCWlSeat;
class CCWlShell;
class CCWlShellSurface;
class CCWlSurface;
class CCWlShellSurface;
class CCWlSeat;
class CCWlSeat;
class CCWlSurface;
class CCWlOutput;
class CCWlSeat;
class CCWlSurface;
class CCWlOutput;
class CCWlSurface;
class CCWlBuffer;
class CCWlCallback;
class CCWlRegion;
class CCWlRegion;
class CCWlOutput;
class CCWlOutput;
class CCWlSeat;
class CCWlPointer;
class CCWlKeyboard;
class CCWlTouch;
class CCWlPointer;
class CCWlSurface;
class CCWlSurface;
class CCWlSurface;
class CCWlKeyboard;
class CCWlSurface;
class CCWlSurface;
class CCWlTouch;
class CCWlSurface;
class CCWlOutput;
class CCWlRegion;
class CCWlSubcompositor;
class CCWlSubsurface;
class CCWlSurface;
class CCWlSurface;
class CCWlSubsurface;
class CCWlSurface;
class CCWlSurface;
class CCWlFixes;
class CCWlRegistry;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wl_display_interface;
extern const wl_interface wl_registry_interface;
extern const wl_interface wl_callback_interface;
extern const wl_interface wl_compositor_interface;
extern const wl_interface wl_shm_pool_interface;
extern const wl_interface wl_shm_interface;
extern const wl_interface wl_buffer_interface;
extern const wl_interface wl_data_offer_interface;
extern const wl_interface wl_data_source_interface;
extern const wl_interface wl_data_device_interface;
extern const wl_interface wl_data_device_manager_interface;
extern const wl_interface wl_shell_interface;
extern const wl_interface wl_shell_surface_interface;
extern const wl_interface wl_surface_interface;
extern const wl_interface wl_seat_interface;
extern const wl_interface wl_pointer_interface;
extern const wl_interface wl_keyboard_interface;
extern const wl_interface wl_touch_interface;
extern const wl_interface wl_output_interface;
extern const wl_interface wl_region_interface;
extern const wl_interface wl_subcompositor_interface;
extern const wl_interface wl_subsurface_interface;
extern const wl_interface wl_fixes_interface;

#endif


class CCWlDisplay {
  public:
    CCWlDisplay(wl_proxy*);
    ~CCWlDisplay();


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

    void setError(F<void(CCWlDisplay*, wl_proxy*, uint32_t, const char*)> handler);
    void setDeleteId(F<void(CCWlDisplay*, uint32_t)> handler);

    // --------------- Events --------------- //

    wl_proxy* sendSync();
    wl_proxy* sendGetRegistry();

  private:
    struct {
        F<void(CCWlDisplay*, wl_proxy*, uint32_t, const char*)> error;
        F<void(CCWlDisplay*, uint32_t)> deleteId;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlRegistry {
  public:
    CCWlRegistry(wl_proxy*);
    ~CCWlRegistry();


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

    void setGlobal(F<void(CCWlRegistry*, uint32_t, const char*, uint32_t)> handler);
    void setGlobalRemove(F<void(CCWlRegistry*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendBind(uint32_t);

  private:
    struct {
        F<void(CCWlRegistry*, uint32_t, const char*, uint32_t)> global;
        F<void(CCWlRegistry*, uint32_t)> globalRemove;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlCallback {
  public:
    CCWlCallback(wl_proxy*);
    ~CCWlCallback();


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

    void setDone(F<void(CCWlCallback*, uint32_t)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CCWlCallback*, uint32_t)> done;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlCompositor {
  public:
    CCWlCompositor(wl_proxy*);
    ~CCWlCompositor();


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

    wl_proxy* sendCreateSurface();
    wl_proxy* sendCreateRegion();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlShmPool {
  public:
    CCWlShmPool(wl_proxy*);
    ~CCWlShmPool();


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

    wl_proxy* sendCreateBuffer(int32_t, int32_t, int32_t, int32_t, uint32_t);
    void sendDestroy();
    void sendResize(int32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlShm {
  public:
    CCWlShm(wl_proxy*);
    ~CCWlShm();


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

    void setFormat(F<void(CCWlShm*, wlShmFormat)> handler);

    // --------------- Events --------------- //

    wl_proxy* sendCreatePool(int32_t, int32_t);
    void sendRelease();

  private:
    struct {
        F<void(CCWlShm*, wlShmFormat)> format;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlBuffer {
  public:
    CCWlBuffer(wl_proxy*);
    ~CCWlBuffer();


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

    void setRelease(F<void(CCWlBuffer*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCWlBuffer*)> release;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlDataOffer {
  public:
    CCWlDataOffer(wl_proxy*);
    ~CCWlDataOffer();


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

    void setOffer(F<void(CCWlDataOffer*, const char*)> handler);
    void setSourceActions(F<void(CCWlDataOffer*, uint32_t)> handler);
    void setAction(F<void(CCWlDataOffer*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendAccept(uint32_t, const char*);
    void sendReceive(const char*, int32_t);
    void sendDestroy();
    void sendFinish();
    void sendSetActions(uint32_t, uint32_t);

  private:
    struct {
        F<void(CCWlDataOffer*, const char*)> offer;
        F<void(CCWlDataOffer*, uint32_t)> sourceActions;
        F<void(CCWlDataOffer*, uint32_t)> action;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlDataSource {
  public:
    CCWlDataSource(wl_proxy*);
    ~CCWlDataSource();


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

    void setTarget(F<void(CCWlDataSource*, const char*)> handler);
    void setSend(F<void(CCWlDataSource*, const char*, int32_t)> handler);
    void setCancelled(F<void(CCWlDataSource*)> handler);
    void setDndDropPerformed(F<void(CCWlDataSource*)> handler);
    void setDndFinished(F<void(CCWlDataSource*)> handler);
    void setAction(F<void(CCWlDataSource*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendOffer(const char*);
    void sendDestroy();
    void sendSetActions(uint32_t);

  private:
    struct {
        F<void(CCWlDataSource*, const char*)> target;
        F<void(CCWlDataSource*, const char*, int32_t)> send;
        F<void(CCWlDataSource*)> cancelled;
        F<void(CCWlDataSource*)> dndDropPerformed;
        F<void(CCWlDataSource*)> dndFinished;
        F<void(CCWlDataSource*, uint32_t)> action;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlDataDevice {
  public:
    CCWlDataDevice(wl_proxy*);
    ~CCWlDataDevice();


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

    void setDataOffer(F<void(CCWlDataDevice*, wl_proxy*)> handler);
    void setEnter(F<void(CCWlDataDevice*, uint32_t, wl_proxy*, wl_fixed_t, wl_fixed_t, wl_proxy*)> handler);
    void setLeave(F<void(CCWlDataDevice*)> handler);
    void setMotion(F<void(CCWlDataDevice*, uint32_t, wl_fixed_t, wl_fixed_t)> handler);
    void setDrop(F<void(CCWlDataDevice*)> handler);
    void setSelection(F<void(CCWlDataDevice*, wl_proxy*)> handler);

    // --------------- Events --------------- //

    void sendStartDrag(CCWlDataSource*, CCWlSurface*, CCWlSurface*, uint32_t);
    void sendSetSelection(CCWlDataSource*, uint32_t);
    void sendRelease();

  private:
    struct {
        F<void(CCWlDataDevice*, wl_proxy*)> dataOffer;
        F<void(CCWlDataDevice*, uint32_t, wl_proxy*, wl_fixed_t, wl_fixed_t, wl_proxy*)> enter;
        F<void(CCWlDataDevice*)> leave;
        F<void(CCWlDataDevice*, uint32_t, wl_fixed_t, wl_fixed_t)> motion;
        F<void(CCWlDataDevice*)> drop;
        F<void(CCWlDataDevice*, wl_proxy*)> selection;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlDataDeviceManager {
  public:
    CCWlDataDeviceManager(wl_proxy*);
    ~CCWlDataDeviceManager();


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

    wl_proxy* sendCreateDataSource();
    wl_proxy* sendGetDataDevice(CCWlSeat*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlShell {
  public:
    CCWlShell(wl_proxy*);
    ~CCWlShell();


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

    wl_proxy* sendGetShellSurface(CCWlSurface*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlShellSurface {
  public:
    CCWlShellSurface(wl_proxy*);
    ~CCWlShellSurface();


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

    void setPing(F<void(CCWlShellSurface*, uint32_t)> handler);
    void setConfigure(F<void(CCWlShellSurface*, wlShellSurfaceResize, int32_t, int32_t)> handler);
    void setPopupDone(F<void(CCWlShellSurface*)> handler);

    // --------------- Events --------------- //

    void sendPong(uint32_t);
    void sendMove(CCWlSeat*, uint32_t);
    void sendResize(CCWlSeat*, uint32_t, wlShellSurfaceResize);
    void sendSetToplevel();
    void sendSetTransient(CCWlSurface*, int32_t, int32_t, wlShellSurfaceTransient);
    void sendSetFullscreen(wlShellSurfaceFullscreenMethod, uint32_t, CCWlOutput*);
    void sendSetPopup(CCWlSeat*, uint32_t, CCWlSurface*, int32_t, int32_t, wlShellSurfaceTransient);
    void sendSetMaximized(CCWlOutput*);
    void sendSetTitle(const char*);
    void sendSetClass(const char*);

  private:
    struct {
        F<void(CCWlShellSurface*, uint32_t)> ping;
        F<void(CCWlShellSurface*, wlShellSurfaceResize, int32_t, int32_t)> configure;
        F<void(CCWlShellSurface*)> popupDone;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlSurface {
  public:
    CCWlSurface(wl_proxy*);
    ~CCWlSurface();


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

    void setEnter(F<void(CCWlSurface*, wl_proxy*)> handler);
    void setLeave(F<void(CCWlSurface*, wl_proxy*)> handler);
    void setPreferredBufferScale(F<void(CCWlSurface*, int32_t)> handler);
    void setPreferredBufferTransform(F<void(CCWlSurface*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendAttach(CCWlBuffer*, int32_t, int32_t);
    void sendDamage(int32_t, int32_t, int32_t, int32_t);
    wl_proxy* sendFrame();
    void sendSetOpaqueRegion(CCWlRegion*);
    void sendSetInputRegion(CCWlRegion*);
    void sendCommit();
    void sendSetBufferTransform(int32_t);
    void sendSetBufferScale(int32_t);
    void sendDamageBuffer(int32_t, int32_t, int32_t, int32_t);
    void sendOffset(int32_t, int32_t);

  private:
    struct {
        F<void(CCWlSurface*, wl_proxy*)> enter;
        F<void(CCWlSurface*, wl_proxy*)> leave;
        F<void(CCWlSurface*, int32_t)> preferredBufferScale;
        F<void(CCWlSurface*, uint32_t)> preferredBufferTransform;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlSeat {
  public:
    CCWlSeat(wl_proxy*);
    ~CCWlSeat();


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

    void setCapabilities(F<void(CCWlSeat*, wlSeatCapability)> handler);
    void setName(F<void(CCWlSeat*, const char*)> handler);

    // --------------- Events --------------- //

    wl_proxy* sendGetPointer();
    wl_proxy* sendGetKeyboard();
    wl_proxy* sendGetTouch();
    void sendRelease();

  private:
    struct {
        F<void(CCWlSeat*, wlSeatCapability)> capabilities;
        F<void(CCWlSeat*, const char*)> name;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlPointer {
  public:
    CCWlPointer(wl_proxy*);
    ~CCWlPointer();


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

    void setEnter(F<void(CCWlPointer*, uint32_t, wl_proxy*, wl_fixed_t, wl_fixed_t)> handler);
    void setLeave(F<void(CCWlPointer*, uint32_t, wl_proxy*)> handler);
    void setMotion(F<void(CCWlPointer*, uint32_t, wl_fixed_t, wl_fixed_t)> handler);
    void setButton(F<void(CCWlPointer*, uint32_t, uint32_t, uint32_t, wlPointerButtonState)> handler);
    void setAxis(F<void(CCWlPointer*, uint32_t, wlPointerAxis, wl_fixed_t)> handler);
    void setFrame(F<void(CCWlPointer*)> handler);
    void setAxisSource(F<void(CCWlPointer*, wlPointerAxisSource)> handler);
    void setAxisStop(F<void(CCWlPointer*, uint32_t, wlPointerAxis)> handler);
    void setAxisDiscrete(F<void(CCWlPointer*, wlPointerAxis, int32_t)> handler);
    void setAxisValue120(F<void(CCWlPointer*, wlPointerAxis, int32_t)> handler);
    void setAxisRelativeDirection(F<void(CCWlPointer*, wlPointerAxis, wlPointerAxisRelativeDirection)> handler);

    // --------------- Events --------------- //

    void sendSetCursor(uint32_t, CCWlSurface*, int32_t, int32_t);
    void sendRelease();

  private:
    struct {
        F<void(CCWlPointer*, uint32_t, wl_proxy*, wl_fixed_t, wl_fixed_t)> enter;
        F<void(CCWlPointer*, uint32_t, wl_proxy*)> leave;
        F<void(CCWlPointer*, uint32_t, wl_fixed_t, wl_fixed_t)> motion;
        F<void(CCWlPointer*, uint32_t, uint32_t, uint32_t, wlPointerButtonState)> button;
        F<void(CCWlPointer*, uint32_t, wlPointerAxis, wl_fixed_t)> axis;
        F<void(CCWlPointer*)> frame;
        F<void(CCWlPointer*, wlPointerAxisSource)> axisSource;
        F<void(CCWlPointer*, uint32_t, wlPointerAxis)> axisStop;
        F<void(CCWlPointer*, wlPointerAxis, int32_t)> axisDiscrete;
        F<void(CCWlPointer*, wlPointerAxis, int32_t)> axisValue120;
        F<void(CCWlPointer*, wlPointerAxis, wlPointerAxisRelativeDirection)> axisRelativeDirection;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlKeyboard {
  public:
    CCWlKeyboard(wl_proxy*);
    ~CCWlKeyboard();


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

    void setKeymap(F<void(CCWlKeyboard*, wlKeyboardKeymapFormat, int32_t, uint32_t)> handler);
    void setEnter(F<void(CCWlKeyboard*, uint32_t, wl_proxy*, wl_array*)> handler);
    void setLeave(F<void(CCWlKeyboard*, uint32_t, wl_proxy*)> handler);
    void setKey(F<void(CCWlKeyboard*, uint32_t, uint32_t, uint32_t, wlKeyboardKeyState)> handler);
    void setModifiers(F<void(CCWlKeyboard*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> handler);
    void setRepeatInfo(F<void(CCWlKeyboard*, int32_t, int32_t)> handler);

    // --------------- Events --------------- //

    void sendRelease();

  private:
    struct {
        F<void(CCWlKeyboard*, wlKeyboardKeymapFormat, int32_t, uint32_t)> keymap;
        F<void(CCWlKeyboard*, uint32_t, wl_proxy*, wl_array*)> enter;
        F<void(CCWlKeyboard*, uint32_t, wl_proxy*)> leave;
        F<void(CCWlKeyboard*, uint32_t, uint32_t, uint32_t, wlKeyboardKeyState)> key;
        F<void(CCWlKeyboard*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> modifiers;
        F<void(CCWlKeyboard*, int32_t, int32_t)> repeatInfo;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlTouch {
  public:
    CCWlTouch(wl_proxy*);
    ~CCWlTouch();


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

    void setDown(F<void(CCWlTouch*, uint32_t, uint32_t, wl_proxy*, int32_t, wl_fixed_t, wl_fixed_t)> handler);
    void setUp(F<void(CCWlTouch*, uint32_t, uint32_t, int32_t)> handler);
    void setMotion(F<void(CCWlTouch*, uint32_t, int32_t, wl_fixed_t, wl_fixed_t)> handler);
    void setFrame(F<void(CCWlTouch*)> handler);
    void setCancel(F<void(CCWlTouch*)> handler);
    void setShape(F<void(CCWlTouch*, int32_t, wl_fixed_t, wl_fixed_t)> handler);
    void setOrientation(F<void(CCWlTouch*, int32_t, wl_fixed_t)> handler);

    // --------------- Events --------------- //

    void sendRelease();

  private:
    struct {
        F<void(CCWlTouch*, uint32_t, uint32_t, wl_proxy*, int32_t, wl_fixed_t, wl_fixed_t)> down;
        F<void(CCWlTouch*, uint32_t, uint32_t, int32_t)> up;
        F<void(CCWlTouch*, uint32_t, int32_t, wl_fixed_t, wl_fixed_t)> motion;
        F<void(CCWlTouch*)> frame;
        F<void(CCWlTouch*)> cancel;
        F<void(CCWlTouch*, int32_t, wl_fixed_t, wl_fixed_t)> shape;
        F<void(CCWlTouch*, int32_t, wl_fixed_t)> orientation;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlOutput {
  public:
    CCWlOutput(wl_proxy*);
    ~CCWlOutput();


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

    void setGeometry(F<void(CCWlOutput*, int32_t, int32_t, int32_t, int32_t, int32_t, const char*, const char*, int32_t)> handler);
    void setMode(F<void(CCWlOutput*, wlOutputMode, int32_t, int32_t, int32_t)> handler);
    void setDone(F<void(CCWlOutput*)> handler);
    void setScale(F<void(CCWlOutput*, int32_t)> handler);
    void setName(F<void(CCWlOutput*, const char*)> handler);
    void setDescription(F<void(CCWlOutput*, const char*)> handler);

    // --------------- Events --------------- //

    void sendRelease();

  private:
    struct {
        F<void(CCWlOutput*, int32_t, int32_t, int32_t, int32_t, int32_t, const char*, const char*, int32_t)> geometry;
        F<void(CCWlOutput*, wlOutputMode, int32_t, int32_t, int32_t)> mode;
        F<void(CCWlOutput*)> done;
        F<void(CCWlOutput*, int32_t)> scale;
        F<void(CCWlOutput*, const char*)> name;
        F<void(CCWlOutput*, const char*)> description;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlRegion {
  public:
    CCWlRegion(wl_proxy*);
    ~CCWlRegion();


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
    void sendAdd(int32_t, int32_t, int32_t, int32_t);
    void sendSubtract(int32_t, int32_t, int32_t, int32_t);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlSubcompositor {
  public:
    CCWlSubcompositor(wl_proxy*);
    ~CCWlSubcompositor();


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
    wl_proxy* sendGetSubsurface(CCWlSurface*, CCWlSurface*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlSubsurface {
  public:
    CCWlSubsurface(wl_proxy*);
    ~CCWlSubsurface();


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
    void sendSetPosition(int32_t, int32_t);
    void sendPlaceAbove(CCWlSurface*);
    void sendPlaceBelow(CCWlSurface*);
    void sendSetSync();
    void sendSetDesync();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWlFixes {
  public:
    CCWlFixes(wl_proxy*);
    ~CCWlFixes();


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
    void sendDestroyRegistry(CCWlRegistry*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
