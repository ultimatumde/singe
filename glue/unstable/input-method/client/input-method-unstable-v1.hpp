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

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum zwpInputPanelSurfaceV1Position : uint32_t {
    ZWP_INPUT_PANEL_SURFACE_V1_POSITION_CENTER_BOTTOM = 0,
};


class CCZwpInputMethodContextV1;
class CCWlKeyboard;
class CCZwpInputMethodV1;
class CCZwpInputMethodContextV1;
class CCZwpInputMethodContextV1;
class CCZwpInputPanelV1;
class CCZwpInputPanelSurfaceV1;
class CCWlSurface;
class CCZwpInputPanelSurfaceV1;
class CCWlOutput;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_input_method_context_v1_interface;
extern const wl_interface zwp_input_method_v1_interface;
extern const wl_interface zwp_input_panel_v1_interface;
extern const wl_interface zwp_input_panel_surface_v1_interface;

#endif


class CCZwpInputMethodContextV1 {
  public:
    CCZwpInputMethodContextV1(wl_proxy*);
    ~CCZwpInputMethodContextV1();


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

    void setSurroundingText(F<void(CCZwpInputMethodContextV1*, const char*, uint32_t, uint32_t)> handler);
    void setReset(F<void(CCZwpInputMethodContextV1*)> handler);
    void setContentType(F<void(CCZwpInputMethodContextV1*, uint32_t, uint32_t)> handler);
    void setInvokeAction(F<void(CCZwpInputMethodContextV1*, uint32_t, uint32_t)> handler);
    void setCommitState(F<void(CCZwpInputMethodContextV1*, uint32_t)> handler);
    void setPreferredLanguage(F<void(CCZwpInputMethodContextV1*, const char*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendCommitString(uint32_t, const char*);
    void sendPreeditString(uint32_t, const char*, const char*);
    void sendPreeditStyling(uint32_t, uint32_t, uint32_t);
    void sendPreeditCursor(int32_t);
    void sendDeleteSurroundingText(int32_t, uint32_t);
    void sendCursorPosition(int32_t, int32_t);
    void sendModifiersMap(wl_array*);
    void sendKeysym(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    wl_proxy* sendGrabKeyboard();
    void sendKey(uint32_t, uint32_t, uint32_t, uint32_t);
    void sendModifiers(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    void sendLanguage(uint32_t, const char*);
    void sendTextDirection(uint32_t, uint32_t);

  private:
    struct {
        F<void(CCZwpInputMethodContextV1*, const char*, uint32_t, uint32_t)> surroundingText;
        F<void(CCZwpInputMethodContextV1*)> reset;
        F<void(CCZwpInputMethodContextV1*, uint32_t, uint32_t)> contentType;
        F<void(CCZwpInputMethodContextV1*, uint32_t, uint32_t)> invokeAction;
        F<void(CCZwpInputMethodContextV1*, uint32_t)> commitState;
        F<void(CCZwpInputMethodContextV1*, const char*)> preferredLanguage;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpInputMethodV1 {
  public:
    CCZwpInputMethodV1(wl_proxy*);
    ~CCZwpInputMethodV1();


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

    void setActivate(F<void(CCZwpInputMethodV1*, wl_proxy*)> handler);
    void setDeactivate(F<void(CCZwpInputMethodV1*, wl_proxy*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CCZwpInputMethodV1*, wl_proxy*)> activate;
        F<void(CCZwpInputMethodV1*, wl_proxy*)> deactivate;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpInputPanelV1 {
  public:
    CCZwpInputPanelV1(wl_proxy*);
    ~CCZwpInputPanelV1();


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

    wl_proxy* sendGetInputPanelSurface(wl_proxy*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpInputPanelSurfaceV1 {
  public:
    CCZwpInputPanelSurfaceV1(wl_proxy*);
    ~CCZwpInputPanelSurfaceV1();


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

    void sendSetToplevel(wl_proxy*, uint32_t);
    void sendSetOverlayPanel();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
