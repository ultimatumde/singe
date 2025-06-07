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

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum zwpTextInputV1ContentHint : uint32_t {
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_NONE = 0,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_DEFAULT = 7,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_PASSWORD = 192,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_AUTO_COMPLETION = 1,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_AUTO_CORRECTION = 2,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_AUTO_CAPITALIZATION = 4,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_LOWERCASE = 8,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_UPPERCASE = 16,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_TITLECASE = 32,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_HIDDEN_TEXT = 64,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_SENSITIVE_DATA = 128,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_LATIN = 256,
    ZWP_TEXT_INPUT_V1_CONTENT_HINT_MULTILINE = 512,
};

enum zwpTextInputV1ContentPurpose : uint32_t {
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_NORMAL = 0,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_ALPHA = 1,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_DIGITS = 2,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_NUMBER = 3,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_PHONE = 4,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_URL = 5,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_EMAIL = 6,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_NAME = 7,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_PASSWORD = 8,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_DATE = 9,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_TIME = 10,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_DATETIME = 11,
    ZWP_TEXT_INPUT_V1_CONTENT_PURPOSE_TERMINAL = 12,
};

enum zwpTextInputV1PreeditStyle : uint32_t {
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_DEFAULT = 0,
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_NONE = 1,
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_ACTIVE = 2,
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_INACTIVE = 3,
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_HIGHLIGHT = 4,
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_UNDERLINE = 5,
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_SELECTION = 6,
    ZWP_TEXT_INPUT_V1_PREEDIT_STYLE_INCORRECT = 7,
};

enum zwpTextInputV1TextDirection : uint32_t {
    ZWP_TEXT_INPUT_V1_TEXT_DIRECTION_AUTO = 0,
    ZWP_TEXT_INPUT_V1_TEXT_DIRECTION_LTR = 1,
    ZWP_TEXT_INPUT_V1_TEXT_DIRECTION_RTL = 2,
};


class CCZwpTextInputV1;
class CCWlSeat;
class CCWlSurface;
class CCWlSeat;
class CCWlSurface;
class CCZwpTextInputManagerV1;
class CCZwpTextInputV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_text_input_v1_interface;
extern const wl_interface zwp_text_input_manager_v1_interface;

#endif


class CCZwpTextInputV1 {
  public:
    CCZwpTextInputV1(wl_proxy*);
    ~CCZwpTextInputV1();


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

    void setEnter(F<void(CCZwpTextInputV1*, wl_proxy*)> handler);
    void setLeave(F<void(CCZwpTextInputV1*)> handler);
    void setModifiersMap(F<void(CCZwpTextInputV1*, wl_array*)> handler);
    void setInputPanelState(F<void(CCZwpTextInputV1*, uint32_t)> handler);
    void setPreeditString(F<void(CCZwpTextInputV1*, uint32_t, const char*, const char*)> handler);
    void setPreeditStyling(F<void(CCZwpTextInputV1*, uint32_t, uint32_t, zwpTextInputV1PreeditStyle)> handler);
    void setPreeditCursor(F<void(CCZwpTextInputV1*, int32_t)> handler);
    void setCommitString(F<void(CCZwpTextInputV1*, uint32_t, const char*)> handler);
    void setCursorPosition(F<void(CCZwpTextInputV1*, int32_t, int32_t)> handler);
    void setDeleteSurroundingText(F<void(CCZwpTextInputV1*, int32_t, uint32_t)> handler);
    void setKeysym(F<void(CCZwpTextInputV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> handler);
    void setLanguage(F<void(CCZwpTextInputV1*, uint32_t, const char*)> handler);
    void setTextDirection(F<void(CCZwpTextInputV1*, uint32_t, zwpTextInputV1TextDirection)> handler);

    // --------------- Events --------------- //

    void sendActivate(wl_proxy*, wl_proxy*);
    void sendDeactivate(wl_proxy*);
    void sendShowInputPanel();
    void sendHideInputPanel();
    void sendReset();
    void sendSetSurroundingText(const char*, uint32_t, uint32_t);
    void sendSetContentType(zwpTextInputV1ContentHint, zwpTextInputV1ContentPurpose);
    void sendSetCursorRectangle(int32_t, int32_t, int32_t, int32_t);
    void sendSetPreferredLanguage(const char*);
    void sendCommitState(uint32_t);
    void sendInvokeAction(uint32_t, uint32_t);

  private:
    struct {
        F<void(CCZwpTextInputV1*, wl_proxy*)> enter;
        F<void(CCZwpTextInputV1*)> leave;
        F<void(CCZwpTextInputV1*, wl_array*)> modifiersMap;
        F<void(CCZwpTextInputV1*, uint32_t)> inputPanelState;
        F<void(CCZwpTextInputV1*, uint32_t, const char*, const char*)> preeditString;
        F<void(CCZwpTextInputV1*, uint32_t, uint32_t, zwpTextInputV1PreeditStyle)> preeditStyling;
        F<void(CCZwpTextInputV1*, int32_t)> preeditCursor;
        F<void(CCZwpTextInputV1*, uint32_t, const char*)> commitString;
        F<void(CCZwpTextInputV1*, int32_t, int32_t)> cursorPosition;
        F<void(CCZwpTextInputV1*, int32_t, uint32_t)> deleteSurroundingText;
        F<void(CCZwpTextInputV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> keysym;
        F<void(CCZwpTextInputV1*, uint32_t, const char*)> language;
        F<void(CCZwpTextInputV1*, uint32_t, zwpTextInputV1TextDirection)> textDirection;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTextInputManagerV1 {
  public:
    CCZwpTextInputManagerV1(wl_proxy*);
    ~CCZwpTextInputManagerV1();


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

    wl_proxy* sendCreateTextInput();

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
