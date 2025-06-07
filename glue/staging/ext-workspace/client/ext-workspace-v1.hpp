// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// ext_workspace_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2019 Christopher Billington
    Copyright © 2020 Ilia Bozhinov
    Copyright © 2022 Victoria Brekenfeld

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

enum extWorkspaceGroupHandleV1GroupCapabilities : uint32_t {
    EXT_WORKSPACE_GROUP_HANDLE_V1_GROUP_CAPABILITIES_CREATE_WORKSPACE = 1,
};

enum extWorkspaceHandleV1State : uint32_t {
    EXT_WORKSPACE_HANDLE_V1_STATE_ACTIVE = 1,
    EXT_WORKSPACE_HANDLE_V1_STATE_URGENT = 2,
    EXT_WORKSPACE_HANDLE_V1_STATE_HIDDEN = 4,
};

enum extWorkspaceHandleV1WorkspaceCapabilities : uint32_t {
    EXT_WORKSPACE_HANDLE_V1_WORKSPACE_CAPABILITIES_ACTIVATE = 1,
    EXT_WORKSPACE_HANDLE_V1_WORKSPACE_CAPABILITIES_DEACTIVATE = 2,
    EXT_WORKSPACE_HANDLE_V1_WORKSPACE_CAPABILITIES_REMOVE = 4,
    EXT_WORKSPACE_HANDLE_V1_WORKSPACE_CAPABILITIES_ASSIGN = 8,
};


class CCExtWorkspaceManagerV1;
class CCExtWorkspaceGroupHandleV1;
class CCExtWorkspaceHandleV1;
class CCExtWorkspaceGroupHandleV1;
class CCWlOutput;
class CCWlOutput;
class CCExtWorkspaceHandleV1;
class CCExtWorkspaceHandleV1;
class CCExtWorkspaceHandleV1;
class CCExtWorkspaceGroupHandleV1;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface ext_workspace_manager_v1_interface;
extern const wl_interface ext_workspace_group_handle_v1_interface;
extern const wl_interface ext_workspace_handle_v1_interface;

#endif


class CCExtWorkspaceManagerV1 {
  public:
    CCExtWorkspaceManagerV1(wl_proxy*);
    ~CCExtWorkspaceManagerV1();


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

    void setWorkspaceGroup(F<void(CCExtWorkspaceManagerV1*, wl_proxy*)> handler);
    void setWorkspace(F<void(CCExtWorkspaceManagerV1*, wl_proxy*)> handler);
    void setDone(F<void(CCExtWorkspaceManagerV1*)> handler);
    void setFinished(F<void(CCExtWorkspaceManagerV1*)> handler);

    // --------------- Events --------------- //

    void sendCommit();
    void sendStop();

  private:
    struct {
        F<void(CCExtWorkspaceManagerV1*, wl_proxy*)> workspaceGroup;
        F<void(CCExtWorkspaceManagerV1*, wl_proxy*)> workspace;
        F<void(CCExtWorkspaceManagerV1*)> done;
        F<void(CCExtWorkspaceManagerV1*)> finished;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtWorkspaceGroupHandleV1 {
  public:
    CCExtWorkspaceGroupHandleV1(wl_proxy*);
    ~CCExtWorkspaceGroupHandleV1();


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

    void setCapabilities(F<void(CCExtWorkspaceGroupHandleV1*, extWorkspaceGroupHandleV1GroupCapabilities)> handler);
    void setOutputEnter(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler);
    void setOutputLeave(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler);
    void setWorkspaceEnter(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler);
    void setWorkspaceLeave(F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> handler);
    void setRemoved(F<void(CCExtWorkspaceGroupHandleV1*)> handler);

    // --------------- Events --------------- //

    void sendCreateWorkspace(const char*);
    void sendDestroy();

  private:
    struct {
        F<void(CCExtWorkspaceGroupHandleV1*, extWorkspaceGroupHandleV1GroupCapabilities)> capabilities;
        F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> outputEnter;
        F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> outputLeave;
        F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> workspaceEnter;
        F<void(CCExtWorkspaceGroupHandleV1*, wl_proxy*)> workspaceLeave;
        F<void(CCExtWorkspaceGroupHandleV1*)> removed;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCExtWorkspaceHandleV1 {
  public:
    CCExtWorkspaceHandleV1(wl_proxy*);
    ~CCExtWorkspaceHandleV1();


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

    void setId(F<void(CCExtWorkspaceHandleV1*, const char*)> handler);
    void setName(F<void(CCExtWorkspaceHandleV1*, const char*)> handler);
    void setCoordinates(F<void(CCExtWorkspaceHandleV1*, wl_array*)> handler);
    void setState(F<void(CCExtWorkspaceHandleV1*, extWorkspaceHandleV1State)> handler);
    void setCapabilities(F<void(CCExtWorkspaceHandleV1*, extWorkspaceHandleV1WorkspaceCapabilities)> handler);
    void setRemoved(F<void(CCExtWorkspaceHandleV1*)> handler);

    // --------------- Events --------------- //

    void sendDestroy();
    void sendActivate();
    void sendDeactivate();
    void sendAssign(CCExtWorkspaceGroupHandleV1*);
    void sendRemove();

  private:
    struct {
        F<void(CCExtWorkspaceHandleV1*, const char*)> id;
        F<void(CCExtWorkspaceHandleV1*, const char*)> name;
        F<void(CCExtWorkspaceHandleV1*, wl_array*)> coordinates;
        F<void(CCExtWorkspaceHandleV1*, extWorkspaceHandleV1State)> state;
        F<void(CCExtWorkspaceHandleV1*, extWorkspaceHandleV1WorkspaceCapabilities)> capabilities;
        F<void(CCExtWorkspaceHandleV1*)> removed;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
