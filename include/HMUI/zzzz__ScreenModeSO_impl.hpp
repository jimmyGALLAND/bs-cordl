#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HMUI/zzzz__ScreenModeSO_def.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeSO.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ScreenModeData* (::HMUI::ScreenModeSO::*)()>(&::HMUI::ScreenModeSO::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212c674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(), "get_data", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScreenModeSO::*)()>(&::HMUI::ScreenModeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212c67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::ScreenModeData*& HMUI::ScreenModeSO::__get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeData*> const& HMUI::ScreenModeSO::__get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void HMUI::ScreenModeSO::__set__data(::HMUI::ScreenModeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::ScreenModeData* HMUI::ScreenModeSO::get_data() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(), "get_data", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ScreenModeData*, false>(this, ___internal_method);
}
inline ::HMUI::ScreenModeSO* HMUI::ScreenModeSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ScreenModeSO*>());
}
inline void HMUI::ScreenModeSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScreenModeSO*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ScreenModeSO::ScreenModeSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
