#pragma once
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKClipPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKClipPlane.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKClipPlane (*)()>(&::LIV::SDK::Unity::SDKClipPlane::get_empty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2215234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(), "get_empty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKClipPlane.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKClipPlane::*)()>(&::LIV::SDK::Unity::SDKClipPlane::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2215da8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKClipPlane LIV::SDK::Unity::SDKClipPlane::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(), "get_empty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKClipPlane, false>(nullptr, ___internal_method);
}
inline ::StringW LIV::SDK::Unity::SDKClipPlane::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKClipPlane>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tesselation", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKClipPlane::SDKClipPlane(::LIV::SDK::Unity::SDKMatrix4x4 transform, int32_t width, int32_t height, float_t tesselation) noexcept {
  this->transform = transform;
  this->width = width;
  this->height = height;
  this->tesselation = tesselation;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKClipPlane::SDKClipPlane() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
