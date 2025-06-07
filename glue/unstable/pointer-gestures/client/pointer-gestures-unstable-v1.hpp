// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// pointer_gestures_unstable_v1

/*
 This protocol's authors' copyright notice is:


*/

#pragma once

#include <functional>
#include <cstdint>
#include <string>
#include <wayland-client.h>

#define F std::function

struct wl_proxy;


class CCZwpPointerGesturesV1;
class CCZwpPointerGestureSwipeV1;
class CCWlPointer;
class CCZwpPointerGesturePinchV1;
class CCWlPointer;
class CCZwpPointerGestureHoldV1;
class CCWlPointer;
class CCZwpPointerGestureSwipeV1;
class CCWlSurface;
class CCZwpPointerGesturePinchV1;
class CCWlSurface;
class CCZwpPointerGestureHoldV1;
class CCWlSurface;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zwp_pointer_gestures_v1_interface;
extern const wl_interface zwp_pointer_gesture_swipe_v1_interface;
extern const wl_interface zwp_pointer_gesture_pinch_v1_interface;
extern const wl_interface zwp_pointer_gesture_hold_v1_interface;

#endif


class CCZwpPointerGesturesV1 {
  public:
    CCZwpPointerGesturesV1(wl_proxy*);
    ~CCZwpPointerGesturesV1();


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

    wl_proxy* sendGetSwipeGesture(wl_proxy*);
    wl_proxy* sendGetPinchGesture(wl_proxy*);
    void sendRelease();
    wl_proxy* sendGetHoldGesture(wl_proxy*);

  private:
    struct {
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpPointerGestureSwipeV1 {
  public:
    CCZwpPointerGestureSwipeV1(wl_proxy*);
    ~CCZwpPointerGestureSwipeV1();


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

    void setBegin(F<void(CCZwpPointerGestureSwipeV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> handler);
    void setUpdate(F<void(CCZwpPointerGestureSwipeV1*, uint32_t, wl_fixed_t, wl_fixed_t)> handler);
    void setEnd(F<void(CCZwpPointerGestureSwipeV1*, uint32_t, uint32_t, int32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpPointerGestureSwipeV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> begin;
        F<void(CCZwpPointerGestureSwipeV1*, uint32_t, wl_fixed_t, wl_fixed_t)> update;
        F<void(CCZwpPointerGestureSwipeV1*, uint32_t, uint32_t, int32_t)> end;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpPointerGesturePinchV1 {
  public:
    CCZwpPointerGesturePinchV1(wl_proxy*);
    ~CCZwpPointerGesturePinchV1();


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

    void setBegin(F<void(CCZwpPointerGesturePinchV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> handler);
    void setUpdate(F<void(CCZwpPointerGesturePinchV1*, uint32_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t)> handler);
    void setEnd(F<void(CCZwpPointerGesturePinchV1*, uint32_t, uint32_t, int32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpPointerGesturePinchV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> begin;
        F<void(CCZwpPointerGesturePinchV1*, uint32_t, wl_fixed_t, wl_fixed_t, wl_fixed_t, wl_fixed_t)> update;
        F<void(CCZwpPointerGesturePinchV1*, uint32_t, uint32_t, int32_t)> end;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



class CCZwpPointerGestureHoldV1 {
  public:
    CCZwpPointerGestureHoldV1(wl_proxy*);
    ~CCZwpPointerGestureHoldV1();


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

    void setBegin(F<void(CCZwpPointerGestureHoldV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> handler);
    void setEnd(F<void(CCZwpPointerGestureHoldV1*, uint32_t, uint32_t, int32_t)> handler);

    // --------------- Events --------------- //

    void sendDestroy();

  private:
    struct {
        F<void(CCZwpPointerGestureHoldV1*, uint32_t, uint32_t, wl_proxy*, uint32_t)> begin;
        F<void(CCZwpPointerGestureHoldV1*, uint32_t, uint32_t, int32_t)> end;
    } requests;

    wl_proxy* pResource = nullptr;

    bool destroyed = false;

    void* pData = nullptr;
};



#undef F
