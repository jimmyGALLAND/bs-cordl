#pragma once
#include "GlobalNamespace/zzzz__InputFieldSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__UrlInputFieldSettingsController_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UrlInputFieldSettingsController.HandleInputFieldDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UrlInputFieldSettingsController::*)(::HMUI::InputFieldView*)>(
    &::GlobalNamespace::UrlInputFieldSettingsController::HandleInputFieldDidChange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22ab188;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UrlInputFieldSettingsController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UrlInputFieldSettingsController::*)()>(
    &::GlobalNamespace::UrlInputFieldSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ab218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UrlInputFieldSettingsController::HandleInputFieldDidChange(::HMUI::InputFieldView* inputFieldView) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController*>::get(), "HandleInputFieldDidChange",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputFieldView);
}
inline ::GlobalNamespace::UrlInputFieldSettingsController* GlobalNamespace::UrlInputFieldSettingsController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UrlInputFieldSettingsController*>());
}
inline void GlobalNamespace::UrlInputFieldSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UrlInputFieldSettingsController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UrlInputFieldSettingsController::UrlInputFieldSettingsController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
