// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_image_copy_capture_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2021-2023 Andri Yngvason
    Copyright © 2024 Simon Ser

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

enum extImageCopyCaptureManagerV1Error : uint32_t {
    EXT_IMAGE_COPY_CAPTURE_MANAGER_V1_ERROR_INVALID_OPTION = 1,
};

enum extImageCopyCaptureManagerV1Options : uint32_t {
    EXT_IMAGE_COPY_CAPTURE_MANAGER_V1_OPTIONS_PAINT_CURSORS = 1,
};

enum extImageCopyCaptureSessionV1Error : uint32_t {
    EXT_IMAGE_COPY_CAPTURE_SESSION_V1_ERROR_DUPLICATE_FRAME = 1,
};

enum extImageCopyCaptureFrameV1Error : uint32_t {
    EXT_IMAGE_COPY_CAPTURE_FRAME_V1_ERROR_NO_BUFFER = 1,
    EXT_IMAGE_COPY_CAPTURE_FRAME_V1_ERROR_INVALID_BUFFER_DAMAGE = 2,
    EXT_IMAGE_COPY_CAPTURE_FRAME_V1_ERROR_ALREADY_CAPTURED = 3,
};

enum extImageCopyCaptureFrameV1FailureReason : uint32_t {
    EXT_IMAGE_COPY_CAPTURE_FRAME_V1_FAILURE_REASON_UNKNOWN = 0,
    EXT_IMAGE_COPY_CAPTURE_FRAME_V1_FAILURE_REASON_BUFFER_CONSTRAINTS = 1,
    EXT_IMAGE_COPY_CAPTURE_FRAME_V1_FAILURE_REASON_STOPPED = 2,
};

enum extImageCopyCaptureCursorSessionV1Error : uint32_t {
    EXT_IMAGE_COPY_CAPTURE_CURSOR_SESSION_V1_ERROR_DUPLICATE_SESSION = 1,
};


class CCExtImageCopyCaptureManagerV1;
class CCExtImageCopyCaptureSessionV1;
class CCExtImageCaptureSourceV1;
class CCExtImageCopyCaptureCursorSessionV1;
class CCExtImageCaptureSourceV1;
class CCWlPointer;
class CCExtImageCopyCaptureSessionV1;
class CCExtImageCopyCaptureFrameV1;
class CCExtImageCopyCaptureFrameV1;
class CCWlBuffer;
class CCExtImageCopyCaptureCursorSessionV1;
class CCExtImageCopyCaptureSessionV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface ext_image_copy_capture_manager_v1_interface;
extern const wl_interface ext_image_copy_capture_session_v1_interface;
extern const wl_interface ext_image_copy_capture_frame_v1_interface;
extern const wl_interface ext_image_copy_capture_cursor_session_v1_interface;

#endif


class CCExtImageCopyCaptureManagerV1 {
  public:
    CCExtImageCopyCaptureManagerV1(wl_proxy*);
    ~CCExtImageCopyCaptureManagerV1();


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

    wl_proxy* sendCreateSession(wl_proxy*, extImageCopyCaptureManagerV1Options);
    wl_proxy* sendCreatePointerCursorSession(wl_proxy*, wl_proxy*);
    void sendDestroy();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtImageCopyCaptureSessionV1 {
  public:
    CCExtImageCopyCaptureSessionV1(wl_proxy*);
    ~CCExtImageCopyCaptureSessionV1();


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

    void setBufferSize(F<void(CCExtImageCopyCaptureSessionV1*, uint32_t, uint32_t)> handler);
    void setShmFormat(F<void(CCExtImageCopyCaptureSessionV1*, uint32_t)> handler);
    void setDmabufDevice(F<void(CCExtImageCopyCaptureSessionV1*, wl_array*)> handler);
    void setDmabufFormat(F<void(CCExtImageCopyCaptureSessionV1*, uint32_t, wl_array*)> handler);
    void setDone(F<void(CCExtImageCopyCaptureSessionV1*)> handler);
    void setStopped(F<void(CCExtImageCopyCaptureSessionV1*)> handler);

    // --------------- Events --------------- //

    wl_proxy* sendCreateFrame();
    void sendDestroy();

  private:
    struct {
        F<void(CCExtImageCopyCaptureSessionV1*, uint32_t, uint32_t)> bufferSize;
        F<void(CCExtImageCopyCaptureSessionV1*, uint32_t)> shmFormat;
        F<void(CCExtImageCopyCaptureSessionV1*, wl_array*)> dmabufDevice;
        F<void(CCExtImageCopyCaptureSessionV1*, uint32_t, wl_array*)> dmabufFormat;
        F<void(CCExtImageCopyCaptureSessionV1*)> done;
        F<void(CCExtImageCopyCaptureSessionV1*)> stopped;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtImageCopyCaptureFrameV1 {
  public:
    CCExtImageCopyCaptureFrameV1(wl_proxy*);
    ~CCExtImageCopyCaptureFrameV1();


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

    void setTransform(F<void(CCExtImageCopyCaptureFrameV1*, uint32_t)> handler);
    void setDamage(F<void(CCExtImageCopyCaptureFrameV1*, int32_t, int32_t, int32_t, int32_t)> handler);
    void setPresentationTime(F<void(CCExtImageCopyCaptureFrameV1*, uint32_t, uint32_t, uint32_t)> handler);
    void setReady(F<void(CCExtImageCopyCaptureFrameV1*)> handler);
    void setFailed(F<void(CCExtImageCopyCaptureFrameV1*, extImageCopyCaptureFrameV1FailureReason)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendAttachBuffer(wl_proxy*);
    void sendDamageBuffer(int32_t, int32_t, int32_t, int32_t);
    void sendCapture();

  private:
    struct {
        F<void(CCExtImageCopyCaptureFrameV1*, uint32_t)> transform;
        F<void(CCExtImageCopyCaptureFrameV1*, int32_t, int32_t, int32_t, int32_t)> damage;
        F<void(CCExtImageCopyCaptureFrameV1*, uint32_t, uint32_t, uint32_t)> presentationTime;
        F<void(CCExtImageCopyCaptureFrameV1*)> ready;
        F<void(CCExtImageCopyCaptureFrameV1*, extImageCopyCaptureFrameV1FailureReason)> failed;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtImageCopyCaptureCursorSessionV1 {
  public:
    CCExtImageCopyCaptureCursorSessionV1(wl_proxy*);
    ~CCExtImageCopyCaptureCursorSessionV1();


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

    void setEnter(F<void(CCExtImageCopyCaptureCursorSessionV1*)> handler);
    void setLeave(F<void(CCExtImageCopyCaptureCursorSessionV1*)> handler);
    void setPosition(F<void(CCExtImageCopyCaptureCursorSessionV1*, int32_t, int32_t)> handler);
    void setHotspot(F<void(CCExtImageCopyCaptureCursorSessionV1*, int32_t, int32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendGetCaptureSession();

  private:
    struct {
        F<void(CCExtImageCopyCaptureCursorSessionV1*)> enter;
        F<void(CCExtImageCopyCaptureCursorSessionV1*)> leave;
        F<void(CCExtImageCopyCaptureCursorSessionV1*, int32_t, int32_t)> position;
        F<void(CCExtImageCopyCaptureCursorSessionV1*, int32_t, int32_t)> hotspot;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
