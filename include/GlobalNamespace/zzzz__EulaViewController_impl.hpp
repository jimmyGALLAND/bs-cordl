#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EulaViewController__ButtonType::__EulaViewController__ButtonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EulaViewController__ButtonType::__EulaViewController__ButtonType() {}
constexpr ::GlobalNamespace::__EulaViewController__ButtonType GlobalNamespace::__EulaViewController__ButtonType::Agree{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__EulaViewController__ButtonType GlobalNamespace::__EulaViewController__ButtonType::DoNotAgree{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController__InitData::*)(bool)>(
    &::GlobalNamespace::__EulaViewController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22b059c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController__InitData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__EulaViewController__InitData::__get_showDoNotAgreeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showDoNotAgreeButton;
}
constexpr bool const& GlobalNamespace::__EulaViewController__InitData::__get_showDoNotAgreeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___showDoNotAgreeButton;
}
constexpr void GlobalNamespace::__EulaViewController__InitData::__set_showDoNotAgreeButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___showDoNotAgreeButton = value;
}
inline ::GlobalNamespace::__EulaViewController__InitData* GlobalNamespace::__EulaViewController__InitData::New_ctor(bool showDoNotAgreeButton) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EulaViewController__InitData*>(showDoNotAgreeButton));
}
inline void GlobalNamespace::__EulaViewController__InitData::_ctor(bool showDoNotAgreeButton) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showDoNotAgreeButton);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EulaViewController__InitData::__EulaViewController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)(int32_t)>(
    &::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22b0504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(
    &::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b05c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(
    &::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x22b05c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(
    &::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b0744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(
    &::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22b074c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(
    &::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b078c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EulaViewController*& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaViewController*> const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set___4__this(::GlobalNamespace::EulaViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___delay;
}
constexpr float_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___delay;
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___delay = value;
}
constexpr float_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__startProgressBarWidth_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startProgressBarWidth_5__2;
}
constexpr float_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__startProgressBarWidth_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startProgressBarWidth_5__2;
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set__startProgressBarWidth_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startProgressBarWidth_5__2 = value;
}
constexpr float_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__elapsedTime_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elapsedTime_5__3;
}
constexpr float_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__elapsedTime_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____elapsedTime_5__3;
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set__elapsedTime_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____elapsedTime_5__3 = value;
}
inline ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>(__1__state));
}
inline void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__EulaViewController___EnableButtonsCoroutine_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(
    ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*)>(&::GlobalNamespace::EulaViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22aff24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(
    ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*)>(&::GlobalNamespace::EulaViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22affd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::EulaViewController::DidActivate)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x22b0084;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(bool, bool)>(&::GlobalNamespace::EulaViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22b0430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(bool, bool)>(&::GlobalNamespace::EulaViewController::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22b04f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.EnableButtonsCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::EulaViewController::*)(float_t)>(
    &::GlobalNamespace::EulaViewController::EnableButtonsCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22b03b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "EnableButtonsCoroutine",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22b052c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._DidActivate_b__18_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_DidActivate_b__18_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b053c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                               "<DidActivate>b__18_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._DidActivate_b__18_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_DidActivate_b__18_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b055c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                               "<DidActivate>b__18_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._DidActivate_b__18_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_DidActivate_b__18_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b057c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                               "<DidActivate>b__18_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EulaViewController::__get__agreeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____agreeButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EulaViewController::__get__agreeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____agreeButton;
}
constexpr void GlobalNamespace::EulaViewController::__set__agreeButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____agreeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EulaViewController::__get__doNotAgreeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____doNotAgreeButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EulaViewController::__get__doNotAgreeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____doNotAgreeButton;
}
constexpr void GlobalNamespace::EulaViewController::__set__doNotAgreeButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____doNotAgreeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::EulaViewController::__get__continueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____continueButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::EulaViewController::__get__continueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____continueButton;
}
constexpr void GlobalNamespace::EulaViewController::__set__continueButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continueButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::EulaViewController::__get__disableButtonsProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disableButtonsProgress;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::EulaViewController::__get__disableButtonsProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disableButtonsProgress;
}
constexpr void GlobalNamespace::EulaViewController::__set__disableButtonsProgress(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disableButtonsProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::EulaViewController::__get__disabledButtonDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledButtonDelay;
}
constexpr float_t const& GlobalNamespace::EulaViewController::__get__disabledButtonDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledButtonDelay;
}
constexpr void GlobalNamespace::EulaViewController::__set__disabledButtonDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____disabledButtonDelay = value;
}
constexpr ::HMUI::TextPageScrollView*& GlobalNamespace::EulaViewController::__get__textPageScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____textPageScrollView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> const& GlobalNamespace::EulaViewController::__get__textPageScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____textPageScrollView;
}
constexpr void GlobalNamespace::EulaViewController::__set__textPageScrollView(::HMUI::TextPageScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textPageScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LocalizedTextAsset*& GlobalNamespace::EulaViewController::__get__eulaLocalizedTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eulaLocalizedTextAsset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> const& GlobalNamespace::EulaViewController::__get__eulaLocalizedTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eulaLocalizedTextAsset;
}
constexpr void GlobalNamespace::EulaViewController::__set__eulaLocalizedTextAsset(::GlobalNamespace::LocalizedTextAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eulaLocalizedTextAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::EulaViewController::__get__updateNoticeLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____updateNoticeLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::EulaViewController::__get__updateNoticeLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____updateNoticeLocalizationKey;
}
constexpr void GlobalNamespace::EulaViewController::__set__updateNoticeLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updateNoticeLocalizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EulaViewController__InitData*& GlobalNamespace::EulaViewController::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EulaViewController__InitData*> const& GlobalNamespace::EulaViewController::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::EulaViewController::__set__initData(::GlobalNamespace::__EulaViewController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::EulaViewController::__get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____coroutineStarter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& GlobalNamespace::EulaViewController::__get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::EulaViewController::__set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*& GlobalNamespace::EulaViewController::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*> const& GlobalNamespace::EulaViewController::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::EulaViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EulaViewController::__get__showUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showUpdate;
}
constexpr bool const& GlobalNamespace::EulaViewController::__get__showUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showUpdate;
}
constexpr void GlobalNamespace::EulaViewController::__set__showUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showUpdate = value;
}
constexpr bool& GlobalNamespace::EulaViewController::__get__showOnlyContinueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showOnlyContinueButton;
}
constexpr bool const& GlobalNamespace::EulaViewController::__get__showOnlyContinueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showOnlyContinueButton;
}
constexpr void GlobalNamespace::EulaViewController::__set__showOnlyContinueButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showOnlyContinueButton = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::EulaViewController::__get__buttonsCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonsCoroutine;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& GlobalNamespace::EulaViewController::__get__buttonsCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonsCoroutine;
}
constexpr void GlobalNamespace::EulaViewController::__set__buttonsCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonsCoroutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EulaViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EulaViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::EulaViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::EulaViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "DidDeactivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::EulaViewController::Init(bool showUpdate, bool showOnlyContinueButton) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showUpdate, showOnlyContinueButton);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::EulaViewController::EnableButtonsCoroutine(float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), "EnableButtonsCoroutine",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, delay);
}
inline ::GlobalNamespace::EulaViewController* GlobalNamespace::EulaViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EulaViewController*>());
}
inline void GlobalNamespace::EulaViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EulaViewController::_DidActivate_b__18_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                             "<DidActivate>b__18_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EulaViewController::_DidActivate_b__18_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                             "<DidActivate>b__18_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EulaViewController::_DidActivate_b__18_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                                                             "<DidActivate>b__18_2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EulaViewController::EulaViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
