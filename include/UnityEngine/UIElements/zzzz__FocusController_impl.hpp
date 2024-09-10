#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_FocusedElement", ty: "::UnityEngine::UIElements::Focusable*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__FocusController__FocusedElement::__FocusController__FocusedElement(::UnityEngine::UIElements::VisualElement*  m_SubTreeRoot, ::UnityEngine::UIElements::Focusable*  m_FocusedElement) noexcept  {
this->m_SubTreeRoot = m_SubTreeRoot;
this->m_FocusedElement = m_FocusedElement;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__FocusController__FocusedElement::__FocusController__FocusedElement()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::IFocusRing*)>(&::UnityEngine::UIElements::FocusController::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x49a04e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IFocusRing*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.get_focusRing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IFocusRing* (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::get_focusRing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a0578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "get_focusRing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.set_selectedTextElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::TextElement*)>(&::UnityEngine::UIElements::FocusController::set_selectedTextElement)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x49a0580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "set_selectedTextElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.get_focusedElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::get_focusedElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x49a0648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "get_focusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.IsFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::FocusController::IsFocused)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x49a08dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "IsFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GetRetargetedFocusedElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::FocusController::GetRetargetedFocusedElement)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x49a068c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GetRetargetedFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GetLeafFocusedElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::GetLeafFocusedElement)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x498e340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GetLeafFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.IsLocalElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::FocusController::IsLocalElement)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x49a08a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "IsLocalElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.IsPendingFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::FocusController::IsPendingFocus)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x49a0a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "IsPendingFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SetFocusToLastFocusedElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::SetFocusToLastFocusedElement)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x49a0b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SetFocusToLastFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.BlurLastFocusedElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::BlurLastFocusedElement)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x49a0bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "BlurLastFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.DoFocusChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::FocusController::DoFocusChange)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x49a0c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "DoFocusChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.ProcessPendingFocusChange
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::FocusController::ProcessPendingFocusChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4992880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "ProcessPendingFocusChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.FocusNextInDirection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::FocusChangeDirection*)>(&::UnityEngine::UIElements::FocusController::FocusNextInDirection)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x49a0dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "FocusNextInDirection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.AboutToReleaseFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::FocusController::AboutToReleaseFocus)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x49a0eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "AboutToReleaseFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.ReleaseFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::FocusController::ReleaseFocus)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x49a1074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "ReleaseFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.AboutToGrabFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::FocusController::AboutToGrabFocus)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x49a1234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "AboutToGrabFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GrabFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, bool, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::FocusController::GrabFocus)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x49a13f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GrabFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.Blur
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, bool, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::FocusController::Blur)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x499fb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "Blur",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SwitchFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, bool, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::FocusController::SwitchFocus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x499faa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SwitchFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SwitchFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, bool, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::FocusController::SwitchFocus)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x49a0190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SwitchFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SwitchFocusOnEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::FocusController::SwitchFocusOnEvent)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x499fd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SwitchFocusOnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.ReevaluateFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::ReevaluateFocus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x49a15c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "ReevaluateFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.GetFocusableParentForPointerEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::FocusController::*)(::UnityEngine::UIElements::Focusable*, ByRef<::UnityEngine::UIElements::Focusable*>)>(&::UnityEngine::UIElements::FocusController::GetFocusableParentForPointerEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x49a1678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GetFocusableParentForPointerEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Focusable*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.get_imguiKeyboardControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::FocusController::*)()>(&::UnityEngine::UIElements::FocusController::get_imguiKeyboardControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a1780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "get_imguiKeyboardControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.set_imguiKeyboardControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(int32_t)>(&::UnityEngine::UIElements::FocusController::set_imguiKeyboardControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a1788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "set_imguiKeyboardControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::FocusController.SyncIMGUIFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::FocusController::*)(int32_t, ::UnityEngine::UIElements::Focusable*, bool)>(&::UnityEngine::UIElements::FocusController::SyncIMGUIFocus)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x49a1790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SyncIMGUIFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::IFocusRing*& UnityEngine::UIElements::FocusController::__cordl_internal_get__focusRing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusRing_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IFocusRing*> const& UnityEngine::UIElements::FocusController::__cordl_internal_get__focusRing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusRing_k__BackingField;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set__focusRing_k__BackingField(::UnityEngine::UIElements::IFocusRing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____focusRing_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_SelectedTextElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedTextElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextElement*> const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_SelectedTextElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedTextElement;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_SelectedTextElement(::UnityEngine::UIElements::TextElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectedTextElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_FocusedElements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusedElements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*> const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_FocusedElements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusedElements;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_FocusedElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FocusedElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastFocusedElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFocusedElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastFocusedElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFocusedElement;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_LastFocusedElement(::UnityEngine::UIElements::Focusable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastFocusedElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastPendingFocusedElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPendingFocusedElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_LastPendingFocusedElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPendingFocusedElement;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_LastPendingFocusedElement(::UnityEngine::UIElements::Focusable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LastPendingFocusedElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_PendingFocusCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingFocusCount;
}
constexpr int32_t const& UnityEngine::UIElements::FocusController::__cordl_internal_get_m_PendingFocusCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PendingFocusCount;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set_m_PendingFocusCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PendingFocusCount = value;
}
constexpr int32_t& UnityEngine::UIElements::FocusController::__cordl_internal_get__imguiKeyboardControl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imguiKeyboardControl_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::FocusController::__cordl_internal_get__imguiKeyboardControl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imguiKeyboardControl_k__BackingField;
}
constexpr void UnityEngine::UIElements::FocusController::__cordl_internal_set__imguiKeyboardControl_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imguiKeyboardControl_k__BackingField = value;
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::FocusController::New_ctor(::UnityEngine::UIElements::IFocusRing*  focusRing)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::FocusController*>(focusRing));
}
inline void UnityEngine::UIElements::FocusController::_ctor(::UnityEngine::UIElements::IFocusRing*  focusRing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IFocusRing*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focusRing);
}
inline ::UnityEngine::UIElements::IFocusRing* UnityEngine::UIElements::FocusController::get_focusRing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "get_focusRing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IFocusRing*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::set_selectedTextElement(::UnityEngine::UIElements::TextElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "set_selectedTextElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::get_focusedElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "get_focusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::FocusController::IsFocused(::UnityEngine::UIElements::Focusable*  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "IsFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement*  retargetAgainst)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GetRetargetedFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method, retargetAgainst);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::GetLeafFocusedElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GetLeafFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::FocusController::IsLocalElement(::UnityEngine::UIElements::Focusable*  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "IsLocalElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline bool UnityEngine::UIElements::FocusController::IsPendingFocus(::UnityEngine::UIElements::Focusable*  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "IsPendingFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, f);
}
inline void UnityEngine::UIElements::FocusController::SetFocusToLastFocusedElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SetFocusToLastFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::BlurLastFocusedElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "BlurLastFocusedElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::DoFocusChange(::UnityEngine::UIElements::Focusable*  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "DoFocusChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, f);
}
inline void UnityEngine::UIElements::FocusController::ProcessPendingFocusChange(::UnityEngine::UIElements::Focusable*  f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "ProcessPendingFocusChange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, f);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusController::FocusNextInDirection(::UnityEngine::UIElements::FocusChangeDirection*  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "FocusNextInDirection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method, direction);
}
inline void UnityEngine::UIElements::FocusController::AboutToReleaseFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "AboutToReleaseFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focusable, willGiveFocusTo, direction, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::ReleaseFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "ReleaseFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focusable, willGiveFocusTo, direction, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::AboutToGrabFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection*  direction, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "AboutToGrabFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focusable, willTakeFocusFrom, direction, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::GrabFocus(::UnityEngine::UIElements::Focusable*  focusable, ::UnityEngine::UIElements::Focusable*  willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection*  direction, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GrabFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focusable, willTakeFocusFrom, direction, bIsFocusDelegated, dispatchMode);
}
/// @param bIsFocusDelegated: bool (default: false)
/// @param dispatchMode: ::UnityEngine::UIElements::DispatchMode (default: static_cast<int32_t>(0x1))
inline void UnityEngine::UIElements::FocusController::Blur(::UnityEngine::UIElements::Focusable*  focusable, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "Blur",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focusable, bIsFocusDelegated, dispatchMode);
}
/// @param bIsFocusDelegated: bool (default: false)
/// @param dispatchMode: ::UnityEngine::UIElements::DispatchMode (default: static_cast<int32_t>(0x1))
inline void UnityEngine::UIElements::FocusController::SwitchFocus(::UnityEngine::UIElements::Focusable*  newFocusedElement, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SwitchFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newFocusedElement, bIsFocusDelegated, dispatchMode);
}
/// @param bIsFocusDelegated: bool (default: false)
/// @param dispatchMode: ::UnityEngine::UIElements::DispatchMode (default: static_cast<int32_t>(0x1))
inline void UnityEngine::UIElements::FocusController::SwitchFocus(::UnityEngine::UIElements::Focusable*  newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection*  direction, bool  bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode  dispatchMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SwitchFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusChangeDirection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newFocusedElement, direction, bIsFocusDelegated, dispatchMode);
}
inline void UnityEngine::UIElements::FocusController::SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SwitchFocusOnEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::FocusController::ReevaluateFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "ReevaluateFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::FocusController::GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable*  target, ByRef<::UnityEngine::UIElements::Focusable*>  effectiveTarget)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "GetFocusableParentForPointerEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::Focusable*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target, effectiveTarget);
}
inline int32_t UnityEngine::UIElements::FocusController::get_imguiKeyboardControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "get_imguiKeyboardControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::FocusController::set_imguiKeyboardControl(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "set_imguiKeyboardControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::FocusController::SyncIMGUIFocus(int32_t  imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable*  imguiContainerHavingKeyboardControl, bool  forceSwitch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::FocusController*>::get(),
                        "SyncIMGUIFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, imguiKeyboardControlID, imguiContainerHavingKeyboardControl, forceSwitch);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::FocusController::FocusController()   {
}
