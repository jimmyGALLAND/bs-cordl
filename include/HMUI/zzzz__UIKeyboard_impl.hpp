#pragma once
// IWYU pragma private; include "HMUI/UIKeyboard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__UIKeyboardKey_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::HMUI::__UIKeyboard____c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__UIKeyboard____c__DisplayClass13_0::*)()>(&::HMUI::__UIKeyboard____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x396b5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__UIKeyboard____c__DisplayClass13_0._Awake_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__UIKeyboard____c__DisplayClass13_0::*)()>(&::HMUI::__UIKeyboard____c__DisplayClass13_0::_Awake_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x396b89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(),
                        "<Awake>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::UIKeyboardKey>& HMUI::__UIKeyboard____c__DisplayClass13_0::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::UnityW<::HMUI::UIKeyboardKey> const& HMUI::__UIKeyboard____c__DisplayClass13_0::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void HMUI::__UIKeyboard____c__DisplayClass13_0::__cordl_internal_set_key(::UnityW<::HMUI::UIKeyboardKey>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::UIKeyboard>& HMUI::__UIKeyboard____c__DisplayClass13_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::HMUI::UIKeyboard> const& HMUI::__UIKeyboard____c__DisplayClass13_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void HMUI::__UIKeyboard____c__DisplayClass13_0::__cordl_internal_set___4__this(::UnityW<::HMUI::UIKeyboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__UIKeyboard____c__DisplayClass13_0* HMUI::__UIKeyboard____c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__UIKeyboard____c__DisplayClass13_0*>());
}
inline void HMUI::__UIKeyboard____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__UIKeyboard____c__DisplayClass13_0::_Awake_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(),
                        "<Awake>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__UIKeyboard____c__DisplayClass13_0::__UIKeyboard____c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::HMUI::UIKeyboard.add_okButtonWasPressedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x396aef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "add_okButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_okButtonWasPressedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x396af8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "remove_okButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_keyWasPressedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::add_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x396b028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "add_keyWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_keyWasPressedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::remove_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x396b0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "remove_keyWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_deleteButtonWasPressedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x396b188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "add_deleteButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_deleteButtonWasPressedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x396b224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "remove_deleteButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::Awake)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x396b2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleKeyPress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::UnityEngine::KeyCode)>(&::HMUI::UIKeyboard::HandleKeyPress)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x396b5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "HandleKeyPress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleCapsLockPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::HandleCapsLockPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x396b6cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "HandleCapsLockPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.SetKeyboardCapitalization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(bool)>(&::HMUI::UIKeyboard::SetKeyboardCapitalization)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x396b6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "SetKeyboardCapitalization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HasFontStyle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::UIKeyboard::*)(::TMPro::TextMeshProUGUI*, ::TMPro::FontStyles)>(&::HMUI::UIKeyboard::HasFontStyle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x396b7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "HasFontStyle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x396b7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x396b7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__13_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__13_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x396b864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "<Awake>b__13_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__13_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__13_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x396b880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "<Awake>b__13_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::UIKeyboard::__cordl_internal_get__okButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::UIKeyboard::__cordl_internal_get__okButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____okButton;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____okButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::UIKeyboard::__cordl_internal_get_okButtonWasPressedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___okButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::UIKeyboard::__cordl_internal_get_okButtonWasPressedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___okButtonWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set_okButtonWasPressedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___okButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<char16_t>*& HMUI::UIKeyboard::__cordl_internal_get_keyWasPressedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<char16_t>*> const& HMUI::UIKeyboard::__cordl_internal_get_keyWasPressedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set_keyWasPressedEvent(::System::Action_1<char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::UIKeyboard::__cordl_internal_get_deleteButtonWasPressedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deleteButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::UIKeyboard::__cordl_internal_get_deleteButtonWasPressedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deleteButtonWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set_deleteButtonWasPressedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deleteButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& HMUI::UIKeyboard::__cordl_internal_get__buttonBinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& HMUI::UIKeyboard::__cordl_internal_get__buttonBinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonBinder;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::UIKeyboard::__cordl_internal_get__shouldCapitalize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldCapitalize;
}
constexpr bool const& HMUI::UIKeyboard::__cordl_internal_get__shouldCapitalize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldCapitalize;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__shouldCapitalize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldCapitalize = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>*& HMUI::UIKeyboard::__cordl_internal_get__letterBtnTexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____letterBtnTexts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>*> const& HMUI::UIKeyboard::__cordl_internal_get__letterBtnTexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____letterBtnTexts;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__letterBtnTexts(::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____letterBtnTexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::UIKeyboard::add_okButtonWasPressedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "add_okButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_okButtonWasPressedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "remove_okButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_keyWasPressedEvent(::System::Action_1<char16_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "add_keyWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_keyWasPressedEvent(::System::Action_1<char16_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "remove_keyWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_deleteButtonWasPressedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "add_deleteButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "remove_deleteButtonWasPressedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::HandleKeyPress(::UnityEngine::KeyCode  keyCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "HandleKeyPress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyCode);
}
inline void HMUI::UIKeyboard::HandleCapsLockPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "HandleCapsLockPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::SetKeyboardCapitalization(bool  capitalize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "SetKeyboardCapitalization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capitalize);
}
inline bool HMUI::UIKeyboard::HasFontStyle(::TMPro::TextMeshProUGUI*  text, ::TMPro::FontStyles  style)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "HasFontStyle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, style);
}
inline void HMUI::UIKeyboard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::UIKeyboard* HMUI::UIKeyboard::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::UIKeyboard*>());
}
inline void HMUI::UIKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "<Awake>b__13_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__13_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(),
                        "<Awake>b__13_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboard::UIKeyboard()   {
}
