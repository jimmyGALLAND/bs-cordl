#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ColorUtilities_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::ColorUtilities.CompareColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(
    &::UnityEngine::TextCore::Text::ColorUtilities::CompareColors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d4c0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::ColorUtilities*>::get(), "CompareColors", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::ColorUtilities.MultiplyColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(
    &::UnityEngine::TextCore::Text::ColorUtilities::MultiplyColors)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d4c108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::ColorUtilities*>::get(), "MultiplyColors", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::TextCore::Text::ColorUtilities::CompareColors(::UnityEngine::Color32 a, ::UnityEngine::Color32 b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::ColorUtilities*>::get(), "CompareColors", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Color32 UnityEngine::TextCore::Text::ColorUtilities::MultiplyColors(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::ColorUtilities*>::get(), "MultiplyColors", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(nullptr, ___internal_method, c1, c2);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::ColorUtilities::ColorUtilities() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
