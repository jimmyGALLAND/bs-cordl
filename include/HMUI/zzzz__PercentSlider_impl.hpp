#pragma once
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__PercentSlider_def.hpp"
//  Writing Method size for method: ::HMUI::PercentSlider.TextForValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::PercentSlider::*)(float_t)>(&::HMUI::PercentSlider::TextForValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2122460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PercentSlider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::PercentSlider::*)()>(&::HMUI::PercentSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21224ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::StringW HMUI::PercentSlider::TextForValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider*>::get(), "TextForValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::HMUI::PercentSlider* HMUI::PercentSlider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::PercentSlider*>());
}
inline void HMUI::PercentSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::PercentSlider::PercentSlider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
