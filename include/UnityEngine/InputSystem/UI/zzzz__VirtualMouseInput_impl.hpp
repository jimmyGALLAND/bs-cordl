#pragma once
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Mouse_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode::__VirtualMouseInput__CursorMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode::__VirtualMouseInput__CursorMode() {}
constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode::SoftwareCursor{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode::HardwareCursorIfAvailable{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad75b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_cursorTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::RectTransform*)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad75bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorTransform",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad75c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_cursorSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad75cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorSpeed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode (
    ::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad75d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_cursorMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(
    ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode)>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorMode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2ad75dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorMode", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorGraphic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Graphic* (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad78ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_cursorGraphic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorGraphic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::UI::Graphic*)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad78f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorGraphic", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_scrollSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad7950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_scrollSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_scrollSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad7958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_scrollSpeed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_virtualMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Mouse* (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_virtualMouse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad7960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_virtualMouse", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_stickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_stickAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad7968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_stickAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_stickAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_stickAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad797c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_stickAction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_leftButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_leftButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad7ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_leftButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_leftButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_leftButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ad7ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_leftButtonAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_rightButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_rightButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad7be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_rightButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_rightButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_rightButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ad7bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_rightButtonAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_middleButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_middleButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad7c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_middleButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_middleButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_middleButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ad7ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_middleButtonAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_forwardButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_forwardButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad7d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_forwardButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_forwardButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_forwardButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ad7d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_forwardButtonAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_backButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_backButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad7dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_backButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_backButtonAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_backButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ad7de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_backButtonAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.get_scrollWheelAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollWheelAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad7e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "get_scrollWheelAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.set_scrollWheelAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollWheelAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad7e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_scrollWheelAction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::OnEnable)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2ad7ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::OnDisable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2ad82c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.TryFindCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::TryFindCanvas)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ad78fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "TryFindCanvas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.TryEnableHardwareCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::TryEnableHardwareCursor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2ad76d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "TryEnableHardwareCursor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.UpdateMotion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::UpdateMotion)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2ad8504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "UpdateMotion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnButtonActionTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::VirtualMouseInput::OnButtonActionTriggered)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2ad88bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "OnButtonActionTriggered", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.SetActionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputActionProperty, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, bool)>(
        &::UnityEngine::InputSystem::UI::VirtualMouseInput::SetActionCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ad7b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "SetActionCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.SetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::InputSystem::InputActionProperty>, ::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::SetAction)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2ad79ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "SetAction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionProperty>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput.OnAfterInputUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::OnAfterInputUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ad8ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               "OnAfterInputUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::VirtualMouseInput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(
    &::UnityEngine::InputSystem::UI::VirtualMouseInput::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ad8ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorMode;
}
constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorMode;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorMode(::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CursorMode = value;
}
constexpr ::UnityEngine::UI::Graphic*& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorGraphic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorGraphic;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorGraphic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorGraphic;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorGraphic(::UnityEngine::UI::Graphic* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CursorGraphic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorTransform;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CursorTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CursorSpeed;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CursorSpeed = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ScrollSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ScrollSpeed;
}
constexpr float_t const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ScrollSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ScrollSpeed;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ScrollSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ScrollSpeed = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_StickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StickAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_StickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StickAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_StickAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_StickAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LeftButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LeftButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LeftButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LeftButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_LeftButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LeftButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_MiddleButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MiddleButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_MiddleButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_MiddleButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_MiddleButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_MiddleButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_RightButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RightButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_RightButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RightButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_RightButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_RightButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ForwardButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForwardButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ForwardButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForwardButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ForwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ForwardButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_BackButtonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BackButtonAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_BackButtonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BackButtonAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_BackButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_BackButtonAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ScrollWheelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ScrollWheelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ScrollWheelAction = value;
}
constexpr ::UnityEngine::Canvas*& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Canvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_Canvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Mouse*& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_VirtualMouse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VirtualMouse;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Mouse*> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_VirtualMouse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VirtualMouse;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_VirtualMouse(::UnityEngine::InputSystem::Mouse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VirtualMouse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Mouse*& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_SystemMouse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SystemMouse;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Mouse*> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_SystemMouse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SystemMouse;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_SystemMouse(::UnityEngine::InputSystem::Mouse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SystemMouse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_AfterInputUpdateDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AfterInputUpdateDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_AfterInputUpdateDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AfterInputUpdateDelegate;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_AfterInputUpdateDelegate(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AfterInputUpdateDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ButtonActionTriggeredDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ButtonActionTriggeredDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ButtonActionTriggeredDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ButtonActionTriggeredDelegate;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ButtonActionTriggeredDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ButtonActionTriggeredDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LastTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastTime;
}
constexpr double_t const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LastTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastTime;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_LastTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LastTime = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LastStickValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastStickValue;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LastStickValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastStickValue;
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_LastStickValue(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LastStickValue = value;
}
inline ::UnityEngine::RectTransform* UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_cursorTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorTransform(::UnityEngine::RectTransform* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorTransform", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_cursorSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorSpeed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_cursorMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorMode(::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorMode", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Graphic* UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorGraphic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_cursorGraphic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Graphic*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorGraphic(::UnityEngine::UI::Graphic* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_cursorGraphic", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_scrollSpeed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_scrollSpeed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Mouse* UnityEngine::InputSystem::UI::VirtualMouseInput::get_virtualMouse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_virtualMouse", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Mouse*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_stickAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_stickAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_stickAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_stickAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_leftButtonAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_leftButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_leftButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_leftButtonAction", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_rightButtonAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_rightButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_rightButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_rightButtonAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_middleButtonAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_middleButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_middleButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_middleButtonAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_forwardButtonAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_forwardButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_forwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_forwardButtonAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_backButtonAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_backButtonAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_backButtonAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_backButtonAction", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollWheelAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "get_scrollWheelAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "set_scrollWheelAction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::TryFindCanvas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "TryFindCanvas", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::TryEnableHardwareCursor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "TryEnableHardwareCursor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::UpdateMotion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "UpdateMotion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnButtonActionTriggered(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "OnButtonActionTriggered", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
/// @param install: bool (default: true)
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::SetActionCallback(::UnityEngine::InputSystem::InputActionProperty field,
                                                                               ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* callback, bool install) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "SetActionCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, field, callback, install);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::SetAction(ByRef<::UnityEngine::InputSystem::InputActionProperty> field, ::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), "SetAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionProperty>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, field, value);
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::OnAfterInputUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(),
                                                                             "OnAfterInputUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::VirtualMouseInput* UnityEngine::InputSystem::UI::VirtualMouseInput::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::UI::VirtualMouseInput*>());
}
inline void UnityEngine::InputSystem::UI::VirtualMouseInput::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::VirtualMouseInput*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput::VirtualMouseInput() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
