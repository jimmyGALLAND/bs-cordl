#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestUtilities_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities.RequestHasErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequest*, ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>)>(
        &::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::RequestHasErrors)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2bd3170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>::get(), "RequestHasErrors", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities.IsAssetBundleDownloaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(
    &::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::IsAssetBundleDownloaded)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2bcfa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>::get(), "IsAssetBundleDownloaded", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::*)()>(
    &::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd33b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::RequestHasErrors(::UnityEngine::Networking::UnityWebRequest* webReq,
                                                                                              ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>::get(), "RequestHasErrors", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, webReq, result);
}
inline bool UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::IsAssetBundleDownloaded(::UnityEngine::Networking::UnityWebRequestAsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>::get(), "IsAssetBundleDownloaded", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, op);
}
inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities* UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>());
}
inline void UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestUtilities::UnityWebRequestUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
