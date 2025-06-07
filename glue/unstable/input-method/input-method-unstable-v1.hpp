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
#include <wayland-server.h>

#define F std::function

struct wl_client;
struct wl_resource;

enum zwpInputPanelSurfaceV1Position : uint32_t {
    ZWP_INPUT_PANEL_SURFACE_V1_POSITION_CENTER_BOTTOM = 0,
};


class CZwpInputMethodContextV1;
class CWlKeyboard;
class CZwpInputMethodV1;
class CZwpInputMethodContextV1;
class CZwpInputMethodContextV1;
class CZwpInputPanelV1;
class CZwpInputPanelSurfaceV1;
class CWlSurface;
class CZwpInputPanelSurfaceV1;
class CWlOutput;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_input_method_context_v1_interface;
extern const wl_interface zwp_input_method_v1_interface;
extern const wl_interface zwp_input_panel_v1_interface;
extern const wl_interface zwp_input_panel_surface_v1_interface;

#endif

struct CZwpInputMethodContextV1DestroyWrapper {
    wl_listener listener;
    CZwpInputMethodContextV1* parent = nullptr;
};
            

class CZwpInputMethodContextV1 {
  public:
    CZwpInputMethodContextV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpInputMethodContextV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpInputMethodContextV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //

    void setDestroy(F<void(CZwpInputMethodContextV1*)> handler);
    void setCommitString(F<void(CZwpInputMethodContextV1*, uint32_t, const char*)> handler);
    void setPreeditString(F<void(CZwpInputMethodContextV1*, uint32_t, const char*, const char*)> handler);
    void setPreeditStyling(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t)> handler);
    void setPreeditCursor(F<void(CZwpInputMethodContextV1*, int32_t)> handler);
    void setDeleteSurroundingText(F<void(CZwpInputMethodContextV1*, int32_t, uint32_t)> handler);
    void setCursorPosition(F<void(CZwpInputMethodContextV1*, int32_t, int32_t)> handler);
    void setModifiersMap(F<void(CZwpInputMethodContextV1*, wl_array*)> handler);
    void setKeysym(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> handler);
    void setGrabKeyboard(F<void(CZwpInputMethodContextV1*, uint32_t)> handler);
    void setKey(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t)> handler);
    void setModifiers(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> handler);
    void setLanguage(F<void(CZwpInputMethodContextV1*, uint32_t, const char*)> handler);
    void setTextDirection(F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t)> handler);

    // --------------- Events --------------- //

    void sendSurroundingText(const char*, uint32_t, uint32_t);
    void sendReset();
    void sendContentType(uint32_t, uint32_t);
    void sendInvokeAction(uint32_t, uint32_t);
    void sendCommitState(uint32_t);
    void sendPreferredLanguage(const char*);
    void sendSurroundingTextRaw(const char*, uint32_t, uint32_t);
    void sendResetRaw();
    void sendContentTypeRaw(uint32_t, uint32_t);
    void sendInvokeActionRaw(uint32_t, uint32_t);
    void sendCommitStateRaw(uint32_t);
    void sendPreferredLanguageRaw(const char*);

  private:
    struct {
        F<void(CZwpInputMethodContextV1*)> destroy;
        F<void(CZwpInputMethodContextV1*, uint32_t, const char*)> commitString;
        F<void(CZwpInputMethodContextV1*, uint32_t, const char*, const char*)> preeditString;
        F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t)> preeditStyling;
        F<void(CZwpInputMethodContextV1*, int32_t)> preeditCursor;
        F<void(CZwpInputMethodContextV1*, int32_t, uint32_t)> deleteSurroundingText;
        F<void(CZwpInputMethodContextV1*, int32_t, int32_t)> cursorPosition;
        F<void(CZwpInputMethodContextV1*, wl_array*)> modifiersMap;
        F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> keysym;
        F<void(CZwpInputMethodContextV1*, uint32_t)> grabKeyboard;
        F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t)> key;
        F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t)> modifiers;
        F<void(CZwpInputMethodContextV1*, uint32_t, const char*)> language;
        F<void(CZwpInputMethodContextV1*, uint32_t, uint32_t)> textDirection;
    } requests;

    void onDestroyCalled();

    F<void(CZwpInputMethodContextV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpInputMethodContextV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpInputMethodV1DestroyWrapper {
    wl_listener listener;
    CZwpInputMethodV1* parent = nullptr;
};
            

class CZwpInputMethodV1 {
  public:
    CZwpInputMethodV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpInputMethodV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpInputMethodV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //


    // --------------- Events --------------- //

    void sendActivate(CZwpInputMethodContextV1*);
    void sendDeactivate(CZwpInputMethodContextV1*);
    void sendActivateRaw(CZwpInputMethodContextV1*);
    void sendDeactivateRaw(wl_resource*);

  private:
    struct {
    } requests;

    void onDestroyCalled();

    F<void(CZwpInputMethodV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpInputMethodV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpInputPanelV1DestroyWrapper {
    wl_listener listener;
    CZwpInputPanelV1* parent = nullptr;
};
            

class CZwpInputPanelV1 {
  public:
    CZwpInputPanelV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpInputPanelV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpInputPanelV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //

    void setGetInputPanelSurface(F<void(CZwpInputPanelV1*, uint32_t, wl_resource*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZwpInputPanelV1*, uint32_t, wl_resource*)> getInputPanelSurface;
    } requests;

    void onDestroyCalled();

    F<void(CZwpInputPanelV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpInputPanelV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZwpInputPanelSurfaceV1DestroyWrapper {
    wl_listener listener;
    CZwpInputPanelSurfaceV1* parent = nullptr;
};
            

class CZwpInputPanelSurfaceV1 {
  public:
    CZwpInputPanelSurfaceV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZwpInputPanelSurfaceV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZwpInputPanelSurfaceV1*)> handler) {
        onDestroy = handler;
    }

    // set the data for this resource
    void setData(void* data) {
        pData = data;
    }

    // get the data for this resource
    void* data() {
        return pData;
    }

    // get the raw wl_resource ptr
    wl_resource* resource() {
        return pResource;
    }

    // get the client
    wl_client* client() {
        return wl_resource_get_client(pResource);
    }

    // send an error
    void error(uint32_t error, const std::string& message) {
        wl_resource_post_error(pResource, error, "%s", message.c_str());
    }

    // send out of memory
    void noMemory() {
        wl_resource_post_no_memory(pResource);
    }

    // get the resource version
    int version() {
        return wl_resource_get_version(pResource);
    }
            
    // --------------- Requests --------------- //

    void setSetToplevel(F<void(CZwpInputPanelSurfaceV1*, wl_resource*, uint32_t)> handler);
    void setSetOverlayPanel(F<void(CZwpInputPanelSurfaceV1*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZwpInputPanelSurfaceV1*, wl_resource*, uint32_t)> setToplevel;
        F<void(CZwpInputPanelSurfaceV1*)> setOverlayPanel;
    } requests;

    void onDestroyCalled();

    F<void(CZwpInputPanelSurfaceV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZwpInputPanelSurfaceV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
