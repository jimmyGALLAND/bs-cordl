#pragma once
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__StandaloneInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__StandaloneInputModule_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode::__StandaloneInputModule__InputMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode::__StandaloneInputModule__InputMode() {}
constexpr ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode UnityEngine::EventSystems::__StandaloneInputModule__InputMode::Mouse{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode UnityEngine::EventSystems::__StandaloneInputModule__InputMode::Buttons{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d9d1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_inputMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__StandaloneInputModule__InputMode (
    ::UnityEngine::EventSystems::StandaloneInputModule::*)()>(&::UnityEngine::EventSystems::StandaloneInputModule::get_inputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_inputMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_allowActivationOnMobileDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_allowActivationOnMobileDevice", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_allowActivationOnMobileDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d9d2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_allowActivationOnMobileDevice",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_forceModuleActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_forceModuleActive", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_forceModuleActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(bool)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d9d2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_forceModuleActive",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_inputActionsPerSecond
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_inputActionsPerSecond", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_inputActionsPerSecond
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(float_t)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_inputActionsPerSecond",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_repeatDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_repeatDelay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_repeatDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(float_t)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_repeatDelay",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_horizontalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_horizontalAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_horizontalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_horizontalAxis",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_verticalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_verticalAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_verticalAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_verticalAxis",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_submitButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_submitButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_submitButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_submitButton",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.get_cancelButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "get_cancelButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.set_cancelButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(::StringW)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_cancelButton",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ShouldIgnoreEventsOnNoFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "ShouldIgnoreEventsOnNoFocus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.UpdateModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::UpdateModule)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2d9d330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ReleaseMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(&::UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x2d9d400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ReleaseMouse", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ShouldActivateModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2d9d76c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ActivateModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2d9d9a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.DeactivateModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d9daa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::Process)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d9daa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessTouchEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2d9dc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "ProcessTouchEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessTouchPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*, bool, bool)>(&::UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x2d9e26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ProcessTouchPress", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.SendSubmitEventToSelectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2d9e060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "SendSubmitEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.GetRawMoveVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d9e8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "GetRawMoveVector", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.SendMoveEventToSelectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2d9ddfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "SendMoveEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessMouseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9ddf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "ProcessMouseEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ForceAutoSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9ec88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessMouseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(int32_t)>(
    &::UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2d9e9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ProcessMouseEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.SendUpdateEventToSelectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2d9db48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.ProcessMousePress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::StandaloneInputModule::*)(
    ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*)>(&::UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2d9ec90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ProcessMousePress", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::StandaloneInputModule.GetCurrentFocusedGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::UnityEngine::EventSystems::StandaloneInputModule::*)()>(
    &::UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9efe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                               "GetCurrentFocusedGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::EventSystems::StandaloneInputModule::__get_m_PrevActionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PrevActionTime;
}
constexpr float_t const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_PrevActionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PrevActionTime;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_PrevActionTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_PrevActionTime = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::StandaloneInputModule::__get_m_LastMoveVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastMoveVector;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_LastMoveVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastMoveVector;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_LastMoveVector(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LastMoveVector = value;
}
constexpr int32_t& UnityEngine::EventSystems::StandaloneInputModule::__get_m_ConsecutiveMoveCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr int32_t const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_ConsecutiveMoveCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ConsecutiveMoveCount;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_ConsecutiveMoveCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ConsecutiveMoveCount = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::StandaloneInputModule::__get_m_LastMousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastMousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_LastMousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastMousePosition;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_LastMousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LastMousePosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::StandaloneInputModule::__get_m_MousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_MousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MousePosition;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_MousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MousePosition = value;
}
constexpr ::UnityEngine::GameObject*& UnityEngine::EventSystems::StandaloneInputModule::__get_m_CurrentFocusedGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CurrentFocusedGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_CurrentFocusedGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CurrentFocusedGameObject;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_CurrentFocusedGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentFocusedGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& UnityEngine::EventSystems::StandaloneInputModule::__get_m_InputPointerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InputPointerEvent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_InputPointerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InputPointerEvent;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_InputPointerEvent(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InputPointerEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__get_m_HorizontalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HorizontalAxis;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_HorizontalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HorizontalAxis;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_HorizontalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HorizontalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__get_m_VerticalAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VerticalAxis;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_VerticalAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VerticalAxis;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_VerticalAxis(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VerticalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__get_m_SubmitButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SubmitButton;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_SubmitButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SubmitButton;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_SubmitButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubmitButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::EventSystems::StandaloneInputModule::__get_m_CancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CancelButton;
}
constexpr ::StringW const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_CancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CancelButton;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_CancelButton(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::EventSystems::StandaloneInputModule::__get_m_InputActionsPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr float_t const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_InputActionsPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InputActionsPerSecond;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_InputActionsPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_InputActionsPerSecond = value;
}
constexpr float_t& UnityEngine::EventSystems::StandaloneInputModule::__get_m_RepeatDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RepeatDelay;
}
constexpr float_t const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_RepeatDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RepeatDelay;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_RepeatDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_RepeatDelay = value;
}
constexpr bool& UnityEngine::EventSystems::StandaloneInputModule::__get_m_ForceModuleActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForceModuleActive;
}
constexpr bool const& UnityEngine::EventSystems::StandaloneInputModule::__get_m_ForceModuleActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForceModuleActive;
}
constexpr void UnityEngine::EventSystems::StandaloneInputModule::__set_m_ForceModuleActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ForceModuleActive = value;
}
inline ::UnityEngine::EventSystems::StandaloneInputModule* UnityEngine::EventSystems::StandaloneInputModule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::StandaloneInputModule*>());
}
inline void UnityEngine::EventSystems::StandaloneInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::__StandaloneInputModule__InputMode UnityEngine::EventSystems::StandaloneInputModule::get_inputMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_inputMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__StandaloneInputModule__InputMode, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::get_allowActivationOnMobileDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_allowActivationOnMobileDevice", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_allowActivationOnMobileDevice(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_allowActivationOnMobileDevice",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::get_forceModuleActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_forceModuleActive", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_forceModuleActive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_forceModuleActive",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::StandaloneInputModule::get_inputActionsPerSecond() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_inputActionsPerSecond", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_inputActionsPerSecond(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_inputActionsPerSecond",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::EventSystems::StandaloneInputModule::get_repeatDelay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_repeatDelay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_repeatDelay(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_repeatDelay",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_horizontalAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_horizontalAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_horizontalAxis(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_horizontalAxis",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_verticalAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_verticalAxis", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_verticalAxis(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_verticalAxis",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_submitButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_submitButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_submitButton(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_submitButton",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::EventSystems::StandaloneInputModule::get_cancelButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "get_cancelButton", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::set_cancelButton(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "set_cancelButton",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ShouldIgnoreEventsOnNoFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "ShouldIgnoreEventsOnNoFocus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::UpdateModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "UpdateModule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ReleaseMouse(::UnityEngine::EventSystems::PointerEventData* pointerEvent, ::UnityEngine::GameObject* currentOverGo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ReleaseMouse", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent, currentOverGo);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ShouldActivateModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "ShouldActivateModule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ActivateModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "ActivateModule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::DeactivateModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "DeactivateModule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::Process() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "Process", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "ProcessTouchEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ProcessTouchPress", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent, pressed, released);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::SendSubmitEventToSelectedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "SendSubmitEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::StandaloneInputModule::GetRawMoveVector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "GetRawMoveVector", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::SendMoveEventToSelectedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "SendMoveEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "ProcessMouseEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::ForceAutoSelect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "ForceAutoSelect", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessMouseEvent(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ProcessMouseEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline bool UnityEngine::EventSystems::StandaloneInputModule::SendUpdateEventToSelectedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::StandaloneInputModule::ProcessMousePress(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(), "ProcessMousePress", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::UnityEngine::GameObject* UnityEngine::EventSystems::StandaloneInputModule::GetCurrentFocusedGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::StandaloneInputModule*>::get(),
                                                                             "GetCurrentFocusedGameObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::StandaloneInputModule::StandaloneInputModule() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
