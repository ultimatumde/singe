// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// text_input_unstable_v3

/*
 This protocol's authors' copyright notice is:


    Copyright © 2012, 2013 Intel Corporation
    Copyright © 2015, 2016 Jan Arne Petersen
    Copyright © 2017, 2018 Red Hat, Inc.
    Copyright © 2018       Purism SPC

    Permission to use, copy, modify, distribute, and sell this
    software and its documentation for any purpose is hereby granted
    without fee, provided that the above copyright notice appear in
    all copies and that both that copyright notice and this permission
    notice appear in supporting documentation, and that the name of
    the copyright holders not be used in advertising or publicity
    pertaining to distribution of the software without specific,
    written prior permission.  The copyright holders make no
    representations about the suitability of this software for any
    purpose.  It is provided "as is" without express or implied
    warranty.

    THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
    SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
    FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
    SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
    AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
    ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
    THIS SOFTWARE.
  
*/

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;

enum zwpTextInputV3ChangeCause : uint32_t {
    ZWP_TEXT_INPUT_V3_CHANGE_CAUSE_INPUT_METHOD = 0,
    ZWP_TEXT_INPUT_V3_CHANGE_CAUSE_OTHER = 1,
};

enum zwpTextInputV3ContentHint : uint32_t {
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_NONE = 0,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_COMPLETION = 1,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_SPELLCHECK = 2,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_AUTO_CAPITALIZATION = 4,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_LOWERCASE = 8,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_UPPERCASE = 16,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_TITLECASE = 32,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_HIDDEN_TEXT = 64,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_SENSITIVE_DATA = 128,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_LATIN = 256,
    ZWP_TEXT_INPUT_V3_CONTENT_HINT_MULTILINE = 512,
};

enum zwpTextInputV3ContentPurpose : uint32_t {
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_NORMAL = 0,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_ALPHA = 1,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_DIGITS = 2,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_NUMBER = 3,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_PHONE = 4,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_URL = 5,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_EMAIL = 6,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_NAME = 7,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_PASSWORD = 8,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_PIN = 9,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_DATE = 10,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_TIME = 11,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_DATETIME = 12,
    ZWP_TEXT_INPUT_V3_CONTENT_PURPOSE_TERMINAL = 13,
};


class CCZwpTextInputV3;
class CCWlSurface;
class CCWlSurface;
class CCZwpTextInputManagerV3;
class CCZwpTextInputV3;
class CCWlSeat;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_text_input_v3_interface;
extern const wl_interface zwp_text_input_manager_v3_interface;

#endif


class CCZwpTextInputV3 {
  public:
    CCZwpTextInputV3(wl_proxy*);
    ~CCZwpTextInputV3();


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

    void setEnter(F<void(CCZwpTextInputV3*, wl_proxy*)> handler);
    void setLeave(F<void(CCZwpTextInputV3*, wl_proxy*)> handler);
    void setPreeditString(F<void(CCZwpTextInputV3*, const char*, int32_t, int32_t)> handler);
    void setCommitString(F<void(CCZwpTextInputV3*, const char*)> handler);
    void setDeleteSurroundingText(F<void(CCZwpTextInputV3*, uint32_t, uint32_t)> handler);
    void setDone(F<void(CCZwpTextInputV3*, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendEnable();
    void sendDisable();
    void sendSetSurroundingText(const char*, int32_t, int32_t);
    void sendSetTextChangeCause(zwpTextInputV3ChangeCause);
    void sendSetContentType(zwpTextInputV3ContentHint, zwpTextInputV3ContentPurpose);
    void sendSetCursorRectangle(int32_t, int32_t, int32_t, int32_t);
    void sendCommit();

  private:
    struct {
        F<void(CCZwpTextInputV3*, wl_proxy*)> enter;
        F<void(CCZwpTextInputV3*, wl_proxy*)> leave;
        F<void(CCZwpTextInputV3*, const char*, int32_t, int32_t)> preeditString;
        F<void(CCZwpTextInputV3*, const char*)> commitString;
        F<void(CCZwpTextInputV3*, uint32_t, uint32_t)> deleteSurroundingText;
        F<void(CCZwpTextInputV3*, uint32_t)> done;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpTextInputManagerV3 {
  public:
    CCZwpTextInputManagerV3(wl_proxy*);
    ~CCZwpTextInputManagerV3();


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
    wl_proxy* sendGetTextInput(wl_proxy*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
