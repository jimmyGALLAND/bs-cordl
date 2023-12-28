#pragma once
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe153fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0._CreatePopTween_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_CreatePopTween_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe16090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(),
                                    "<CreatePopTween>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_partTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_partTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__set_partTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_originalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalScale;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_originalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalScale;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__set_originalScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalScale = value;
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>());
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_CreatePopTween_b__0(float_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(),
                                  "<CreatePopTween>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__AvatarTweenController____c__DisplayClass54_0() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)(int32_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe15404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe160c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                    "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xe160cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(
        &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe162d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe162e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                    "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(
        &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe16320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                    "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::WaitForSeconds*& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get__waitYieldInstruction_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitYieldInstruction_5__2;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSeconds*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get__waitYieldInstruction_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitYieldInstruction_5__2;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set__waitYieldInstruction_5__2(::UnityEngine::WaitForSeconds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitYieldInstruction_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>(__1__state));
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                  "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                  "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                                  "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__AvatarTweenController___AppearAnimation_d__55() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)(int32_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe15efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe16328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                    "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xe1632c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(
        &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe165a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe165b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                    "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(
        &::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe165f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                    "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*
BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>(__1__state));
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                  "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                  "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                                  "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__AvatarTweenController___DisappearAnimation_d__60() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe14f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "Awake",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe14fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "OnDisable",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe1505c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "OnDestroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PresentAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PresentAvatar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe12a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PresentAvatar",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.HideAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::HideAvatar)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe131e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "HideAvatar",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe15130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopAll",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe152bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHead",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe152c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHands",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopClothes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe152cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopClothes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe1515c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHead",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHands
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe1521c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHands",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopClothes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe151bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopClothes",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.CreatePopTween
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Tweening::Tween_1<float_t>* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Transform*, float_t)>(
        &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::CreatePopTween)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe152d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "CreatePopTween", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearAnimation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe15060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearAnimation",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearBody)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xe1542c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearBody",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearHead)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xe156dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearHead",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearLeftHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearLeftHand)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xe1598c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearLeftHand",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearRightHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearRightHand)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xe15c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearRightHand",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.DisappearAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::DisappearAnimation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe150c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                                                 "DisappearAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.StopAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::StopAll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe14fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "StopAll",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe15f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearBody_b__56_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearBody>b__56_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearBody_b__56_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearBody>b__56_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearHead_b__57_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearHead>b__57_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearHead_b__57_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearHead>b__57_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearLeftHand_b__58_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearLeftHand>b__58_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearLeftHand_b__58_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearLeftHand>b__58_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearRightHand_b__59_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearRightHand>b__59_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearRightHand_b__59_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe1603c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearRightHand>b__59_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._DisappearAnimation_b__60_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<DisappearAnimation>b__60_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._DisappearAnimation_b__60_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<DisappearAnimation>b__60_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__avatarTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headParent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headParent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__headParent(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__leftHandTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__rightHandTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHandTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__bodyTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bodyTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__headInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__leftHandInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__rightHandInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHandInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyInnerTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__bodyInnerTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bodyInnerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popDuration;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popDuration;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popDuration = value;
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popEaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popEaseType;
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popEaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popEaseType;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popEaseType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popEaseType = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__headPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__handsPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__handsPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__handsPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handsPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__clothesPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__clothesPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__clothesPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__allPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__allPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__allPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearDuration;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearDuration;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearDuration = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearSpacing;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearSpacing;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearSpacing = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeight;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeight;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearHeight = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__squashFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squashFactor;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__squashFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squashFactor;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__squashFactor(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____squashFactor = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearDuration;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearDuration;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearDuration = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearHeight;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearHeight;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearHeight = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearSquash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearSquash;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearSquash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearSquash;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearSquash(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearSquash = value;
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleEase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleEase;
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleEase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleEase;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearScaleEase(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearScaleEase = value;
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionEase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionEase;
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionEase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionEase;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearPositionEase(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearPositionEase = value;
}
constexpr ::Tweening::TimeTweeningManager*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__tweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ICoroutineStarter*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__sharedCoroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedCoroutineStarter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__sharedCoroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedCoroutineStarter;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__sharedCoroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sharedCoroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popHeadTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popHeadTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popHeadTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popHeadTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popHeadTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popHeadTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popLeftHandTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popLeftHandTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popLeftHandTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popLeftHandTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popLeftHandTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popLeftHandTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popRightHandTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popRightHandTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popRightHandTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popRightHandTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popRightHandTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popRightHandTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popClothesTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popClothesTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popClothesTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popClothesTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popClothesTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popClothesTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearHeadPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearHeadPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearHeadScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearHeadScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearBodyPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearBodyPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearBodyScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearBodyScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearRightHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearRightHandPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearRightHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearRightHandScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearLeftHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearLeftHandPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearLeftHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearLeftHandScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disappearScaleTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disappearPositionTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalPosition;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__avatarLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalScale;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalScale;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__avatarLocalScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarLocalScale = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "Awake",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "OnDisable",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "OnDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PresentAvatar() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PresentAvatar",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::HideAvatar() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "HideAvatar",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopAll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopAll",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHead",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHands",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopClothes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead(float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHead",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, popAmount);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands(float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopHands",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, popAmount);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes(float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "PopClothes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, popAmount);
}
inline ::Tweening::Tween_1<float_t>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::CreatePopTween(::UnityEngine::Transform* partTransform, float_t popAmount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "CreatePopTween", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::Tween_1<float_t>*, false>(this, ___internal_method, partTransform, popAmount);
}
inline ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearAnimation",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearBody() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearBody",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearHead() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearHead",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearLeftHand() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearLeftHand",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearRightHand() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "AppearRightHand",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::DisappearAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                                               "DisappearAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::StopAll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "StopAll",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>());
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearBody>b__56_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearBody>b__56_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearHead>b__57_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearHead>b__57_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearLeftHand>b__58_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearLeftHand>b__58_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearRightHand>b__59_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<AppearRightHand>b__59_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<DisappearAnimation>b__60_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(), "<DisappearAnimation>b__60_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AvatarTweenController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
