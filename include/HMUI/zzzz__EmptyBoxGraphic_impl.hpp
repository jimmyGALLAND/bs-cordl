#pragma once
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "HMUI/zzzz__EmptyBoxGraphic_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::EmptyBoxGraphic::*)(::UnityEngine::UI::VertexHelper*)>(&::HMUI::EmptyBoxGraphic::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x2124c18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::EmptyBoxGraphic::*)()>(&::HMUI::EmptyBoxGraphic::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x21251d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), "OnDrawGizmosSelected",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::EmptyBoxGraphic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::EmptyBoxGraphic::*)()>(&::HMUI::EmptyBoxGraphic::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x212535c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::EmptyBoxGraphic::__get__depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____depth;
}
constexpr float_t const& HMUI::EmptyBoxGraphic::__get__depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____depth;
}
constexpr void HMUI::EmptyBoxGraphic::__set__depth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____depth = value;
}
inline void HMUI::EmptyBoxGraphic::OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), "OnPopulateMesh", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vh);
}
inline void HMUI::EmptyBoxGraphic::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), "OnDrawGizmosSelected",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::EmptyBoxGraphic* HMUI::EmptyBoxGraphic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::EmptyBoxGraphic*>());
}
inline void HMUI::EmptyBoxGraphic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EmptyBoxGraphic*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::EmptyBoxGraphic::EmptyBoxGraphic() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
