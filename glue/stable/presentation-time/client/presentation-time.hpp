// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// presentation_time

/*
 This protocol's authors' copyright notice is:


    Copyright © 2013-2014 Collabora, Ltd.

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

enum wpPresentationError : uint32_t {
    WP_PRESENTATION_ERROR_INVALID_TIMESTAMP = 0,
    WP_PRESENTATION_ERROR_INVALID_FLAG = 1,
};

enum wpPresentationFeedbackKind : uint32_t {
    WP_PRESENTATION_FEEDBACK_KIND_VSYNC = 1,
    WP_PRESENTATION_FEEDBACK_KIND_HW_CLOCK = 2,
    WP_PRESENTATION_FEEDBACK_KIND_HW_COMPLETION = 4,
    WP_PRESENTATION_FEEDBACK_KIND_ZERO_COPY = 8,
};


class CCWpPresentation;
class CCWlSurface;
class CCWpPresentationFeedback;
class CCWpPresentationFeedback;
class CCWlOutput;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface wp_presentation_interface;
extern const wl_interface wp_presentation_feedback_interface;

#endif


class CCWpPresentation {
  public:
    CCWpPresentation(wl_proxy*);
    ~CCWpPresentation();


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

    void setClockId(F<void(CCWpPresentation*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    wl_proxy* sendFeedback(wl_proxy*);

  private:
    struct {
        F<void(CCWpPresentation*, uint32_t)> clockId;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCWpPresentationFeedback {
  public:
    CCWpPresentationFeedback(wl_proxy*);
    ~CCWpPresentationFeedback();


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

    void setSyncOutput(F<void(CCWpPresentationFeedback*, wl_proxy*)> handler);
    void setPresented(F<void(CCWpPresentationFeedback*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, wpPresentationFeedbackKind)> handler);
    void setDiscarded(F<void(CCWpPresentationFeedback*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CCWpPresentationFeedback*, wl_proxy*)> syncOutput;
        F<void(CCWpPresentationFeedback*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, wpPresentationFeedbackKind)> presented;
        F<void(CCWpPresentationFeedback*)> discarded;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
