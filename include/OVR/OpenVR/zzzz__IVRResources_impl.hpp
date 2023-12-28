#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRResources_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "OVR/OpenVR/zzzz__IVRResources_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___LoadSharedResource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRResources___LoadSharedResource::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRResources___LoadSharedResource::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27ecef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___LoadSharedResource.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRResources___LoadSharedResource::*)(::StringW, ::StringW, uint32_t)>(
    &::OVR::OpenVR::__IVRResources___LoadSharedResource::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ecfc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___LoadSharedResource.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRResources___LoadSharedResource::*)(::StringW, ::StringW, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVRResources___LoadSharedResource::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27ecfdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___LoadSharedResource.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRResources___LoadSharedResource::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRResources___LoadSharedResource::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ed074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRResources___LoadSharedResource* OVR::OpenVR::__IVRResources___LoadSharedResource::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRResources___LoadSharedResource*>(object, method));
}
inline void OVR::OpenVR::__IVRResources___LoadSharedResource::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRResources___LoadSharedResource::Invoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchResourceName, pchBuffer, unBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRResources___LoadSharedResource::BeginInvoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen, ::System::AsyncCallback* callback,
                                                                                             ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchResourceName, pchBuffer, unBufferLen, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRResources___LoadSharedResource::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___LoadSharedResource*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRResources___LoadSharedResource::__IVRResources___LoadSharedResource() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___GetResourceFullPath._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRResources___GetResourceFullPath::*)(::System::Object*, void*)>(
    &::OVR::OpenVR::__IVRResources___GetResourceFullPath::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27ed09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___GetResourceFullPath.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRResources___GetResourceFullPath::*)(
    ::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRResources___GetResourceFullPath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ed174;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___GetResourceFullPath.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVRResources___GetResourceFullPath::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVRResources___GetResourceFullPath::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27ed188;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRResources___GetResourceFullPath.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRResources___GetResourceFullPath::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVRResources___GetResourceFullPath::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ed230;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRResources___GetResourceFullPath* OVR::OpenVR::__IVRResources___GetResourceFullPath::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>(object, method));
}
inline void OVR::OpenVR::__IVRResources___GetResourceFullPath::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRResources___GetResourceFullPath::Invoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer,
                                                                          uint32_t unBufferLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRResources___GetResourceFullPath::BeginInvoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory,
                                                                                              ::System::Text::StringBuilder* pchPathBuffer, uint32_t unBufferLen, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRResources___GetResourceFullPath::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRResources___GetResourceFullPath*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVRResources___GetResourceFullPath::__IVRResources___GetResourceFullPath() {}
// Ctor Parameters [CppParam { name: "LoadSharedResource", ty: "::OVR::OpenVR::__IVRResources___LoadSharedResource*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetResourceFullPath", ty: "::OVR::OpenVR::__IVRResources___GetResourceFullPath*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVRResources::IVRResources(::OVR::OpenVR::__IVRResources___LoadSharedResource* LoadSharedResource,
                                                    ::OVR::OpenVR::__IVRResources___GetResourceFullPath* GetResourceFullPath) noexcept {
  this->LoadSharedResource = LoadSharedResource;
  this->GetResourceFullPath = GetResourceFullPath;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRResources::IVRResources() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
