#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "HMUI/zzzz__UIKeyboardKey_def.hpp"
//  Writing Method size for method: ::HMUI::__UIKeyboard____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__UIKeyboard____c__DisplayClass13_0::*)()>(&::HMUI::__UIKeyboard____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211e254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__UIKeyboard____c__DisplayClass13_0._Awake_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__UIKeyboard____c__DisplayClass13_0::*)()>(&::HMUI::__UIKeyboard____c__DisplayClass13_0::_Awake_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x211e51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(),
                                                                               "<Awake>b__2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::UIKeyboardKey*& HMUI::__UIKeyboard____c__DisplayClass13_0::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboardKey*> const& HMUI::__UIKeyboard____c__DisplayClass13_0::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___key;
}
constexpr void HMUI::__UIKeyboard____c__DisplayClass13_0::__set_key(::HMUI::UIKeyboardKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::UIKeyboard*& HMUI::__UIKeyboard____c__DisplayClass13_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> const& HMUI::__UIKeyboard____c__DisplayClass13_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__UIKeyboard____c__DisplayClass13_0::__set___4__this(::HMUI::UIKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__UIKeyboard____c__DisplayClass13_0* HMUI::__UIKeyboard____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__UIKeyboard____c__DisplayClass13_0*>());
}
inline void HMUI::__UIKeyboard____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__UIKeyboard____c__DisplayClass13_0::_Awake_b__2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIKeyboard____c__DisplayClass13_0*>::get(), "<Awake>b__2",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__UIKeyboard____c__DisplayClass13_0::__UIKeyboard____c__DisplayClass13_0() {}
//  Writing Method size for method: ::HMUI::UIKeyboard.add_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x211db4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_okButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x211dbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_okButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_keyWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::add_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211dc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_keyWasPressedEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_keyWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::remove_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211dd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_keyWasPressedEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x211dde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x211de80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::Awake)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x211df1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleKeyPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::UnityEngine::KeyCode)>(&::HMUI::UIKeyboard::HandleKeyPress)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x211e25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleKeyPress", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleCapsLockPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::HandleCapsLockPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x211e344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleCapsLockPressed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.SetKeyboardCapitalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(bool)>(&::HMUI::UIKeyboard::SetKeyboardCapitalization)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x211e35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "SetKeyboardCapitalization", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HasFontStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::UIKeyboard::*)(::TMPro::TextMeshProUGUI*, ::TMPro::FontStyles)>(&::HMUI::UIKeyboard::HasFontStyle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x211e448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HasFontStyle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x211e468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x211e474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__13_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__13_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211e4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__13_0",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__13_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__13_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x211e500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__13_1",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& HMUI::UIKeyboard::__get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____okButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& HMUI::UIKeyboard::__get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____okButton;
}
constexpr void HMUI::UIKeyboard::__set__okButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____okButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::UIKeyboard::__get_okButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::UIKeyboard::__get_okButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__set_okButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___okButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<char16_t>*& HMUI::UIKeyboard::__get_keyWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<char16_t>*> const& HMUI::UIKeyboard::__get_keyWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__set_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::UIKeyboard::__get_deleteButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___deleteButtonWasPressedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::UIKeyboard::__get_deleteButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___deleteButtonWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__set_deleteButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deleteButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& HMUI::UIKeyboard::__get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& HMUI::UIKeyboard::__get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::UIKeyboard::__set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::UIKeyboard::__get__shouldCapitalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shouldCapitalize;
}
constexpr bool const& HMUI::UIKeyboard::__get__shouldCapitalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shouldCapitalize;
}
constexpr void HMUI::UIKeyboard::__set__shouldCapitalize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____shouldCapitalize = value;
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*& HMUI::UIKeyboard::__get__letterBtnTexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____letterBtnTexts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*> const& HMUI::UIKeyboard::__get__letterBtnTexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____letterBtnTexts;
}
constexpr void HMUI::UIKeyboard::__set__letterBtnTexts(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____letterBtnTexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::UIKeyboard::add_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_okButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_okButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_keyWasPressedEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_keyWasPressedEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::Awake() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::HandleKeyPress(::UnityEngine::KeyCode keyCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleKeyPress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyCode);
}
inline void HMUI::UIKeyboard::HandleCapsLockPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleCapsLockPressed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::SetKeyboardCapitalization(bool capitalize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "SetKeyboardCapitalization", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capitalize);
}
inline bool HMUI::UIKeyboard::HasFontStyle(::TMPro::TextMeshProUGUI* text, ::TMPro::FontStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HasFontStyle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, style);
}
inline void HMUI::UIKeyboard::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::UIKeyboard* HMUI::UIKeyboard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::UIKeyboard*>());
}
inline void HMUI::UIKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__13_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__13_0",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__13_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__13_1",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboard::UIKeyboard() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
