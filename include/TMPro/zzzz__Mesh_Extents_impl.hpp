#pragma once
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__Mesh_Extents_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::TMPro::Mesh_Extents._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::Mesh_Extents::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::TMPro::Mesh_Extents::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c013fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Mesh_Extents>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::Mesh_Extents.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::Mesh_Extents::*)()>(&::TMPro::Mesh_Extents::ToString)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2c01408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Mesh_Extents>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Mesh_Extents>::get(), 3));
    return ___internal_method;
  }
};
inline void TMPro::Mesh_Extents::_ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Mesh_Extents>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline ::StringW TMPro::Mesh_Extents::ToString() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Mesh_Extents>::get(), "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::Mesh_Extents::Mesh_Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::TMPro::Mesh_Extents::Mesh_Extents() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
