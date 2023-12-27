#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::__DiscreteButtonControl__WriteMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::__DiscreteButtonControl__WriteMode() {}
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::WriteDisabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::WriteNullAndMaxValue{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b0a588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b0a634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(float_t, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b0a6d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0a7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___minValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_minValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___minValue = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_maxValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxValue = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_wrapAtValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___wrapAtValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_wrapAtValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___wrapAtValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_wrapAtValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___wrapAtValue = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_nullValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nullValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_nullValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nullValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_nullValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nullValue = value;
}
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_writeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writeMode;
}
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_writeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writeMode;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_writeMode(::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___writeMode = value;
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), "FinishSetup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), "ReadUnprocessedValueFromState",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState(float_t value, ::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), "WriteValueIntoState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* UnityEngine::InputSystem::Controls::DiscreteButtonControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>());
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::DiscreteButtonControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
