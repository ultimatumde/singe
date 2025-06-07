// Generated with hyprwayland-scanner 0.4.4. Made with vaxry's keyboard and ❤️.
// xdg_foreign_unstable_v1

/*
 This protocol's authors' copyright notice is:


    Copyright © 2015-2016 Red Hat Inc.

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


class CZxdgExporterV1;
class CZxdgExportedV1;
class CWlSurface;
class CZxdgImporterV1;
class CZxdgImportedV1;
class CZxdgExportedV1;
class CZxdgImportedV1;
class CWlSurface;

#ifndef HYPRWAYLAND_SCANNER_NO_INTERFACES
extern const wl_interface zxdg_exporter_v1_interface;
extern const wl_interface zxdg_importer_v1_interface;
extern const wl_interface zxdg_exported_v1_interface;
extern const wl_interface zxdg_imported_v1_interface;

#endif

struct CZxdgExporterV1DestroyWrapper {
    wl_listener listener;
    CZxdgExporterV1* parent = nullptr;
};
            

class CZxdgExporterV1 {
  public:
    CZxdgExporterV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgExporterV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgExporterV1*)> handler) {
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

    void setDestroy(F<void(CZxdgExporterV1*)> handler);
    void setExport(F<void(CZxdgExporterV1*, uint32_t, wl_resource*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZxdgExporterV1*)> destroy;
        F<void(CZxdgExporterV1*, uint32_t, wl_resource*)> export;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgExporterV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgExporterV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZxdgImporterV1DestroyWrapper {
    wl_listener listener;
    CZxdgImporterV1* parent = nullptr;
};
            

class CZxdgImporterV1 {
  public:
    CZxdgImporterV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgImporterV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgImporterV1*)> handler) {
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

    void setDestroy(F<void(CZxdgImporterV1*)> handler);
    void setImport(F<void(CZxdgImporterV1*, uint32_t, const char*)> handler);

    // --------------- Events --------------- //


  private:
    struct {
        F<void(CZxdgImporterV1*)> destroy;
        F<void(CZxdgImporterV1*, uint32_t, const char*)> import;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgImporterV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgImporterV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZxdgExportedV1DestroyWrapper {
    wl_listener listener;
    CZxdgExportedV1* parent = nullptr;
};
            

class CZxdgExportedV1 {
  public:
    CZxdgExportedV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgExportedV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgExportedV1*)> handler) {
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

    void setDestroy(F<void(CZxdgExportedV1*)> handler);

    // --------------- Events --------------- //

    void sendHandle(const char*);
    void sendHandleRaw(const char*);

  private:
    struct {
        F<void(CZxdgExportedV1*)> destroy;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgExportedV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgExportedV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};


struct CZxdgImportedV1DestroyWrapper {
    wl_listener listener;
    CZxdgImportedV1* parent = nullptr;
};
            

class CZxdgImportedV1 {
  public:
    CZxdgImportedV1(wl_client* client, uint32_t version, uint32_t id);
    ~CZxdgImportedV1();


    // set a listener for when this resource is _being_ destroyed
    void setOnDestroy(F<void(CZxdgImportedV1*)> handler) {
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

    void setDestroy(F<void(CZxdgImportedV1*)> handler);
    void setSetParentOf(F<void(CZxdgImportedV1*, wl_resource*)> handler);

    // --------------- Events --------------- //

    void sendDestroyed();
    void sendDestroyedRaw();

  private:
    struct {
        F<void(CZxdgImportedV1*)> destroy;
        F<void(CZxdgImportedV1*, wl_resource*)> setParentOf;
    } requests;

    void onDestroyCalled();

    F<void(CZxdgImportedV1*)> onDestroy;

    wl_resource* pResource = nullptr;

    CZxdgImportedV1DestroyWrapper resourceDestroyListener;

    void* pData = nullptr;
};



#undef F
