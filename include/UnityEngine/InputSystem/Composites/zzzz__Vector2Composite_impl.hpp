#pragma once
#include "UnityEngine/InputSystem/Composites/zzzz__Vector2Composite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector2Composite_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector2Composite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode::__Vector2Composite__Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode::__Vector2Composite__Mode() {}
constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode UnityEngine::InputSystem::Composites::__Vector2Composite__Mode::Analog{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode UnityEngine::InputSystem::Composites::__Vector2Composite__Mode::DigitalNormalized{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode UnityEngine::InputSystem::Composites::__Vector2Composite__Mode::Digital{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector2Composite.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::Composites::Vector2Composite::*)(
    ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::Vector2Composite::ReadValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2a5ba08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector2Composite.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::Vector2Composite::*)(
    ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::Vector2Composite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a5bb6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector2Composite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Composites::Vector2Composite::*)()>(
    &::UnityEngine::InputSystem::Composites::Vector2Composite::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a5bbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector2Composite::__get_up() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___up;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector2Composite::__get_up() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___up;
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_up(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___up = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector2Composite::__get_down() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___down;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector2Composite::__get_down() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___down;
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_down(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___down = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector2Composite::__get_left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___left;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector2Composite::__get_left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___left;
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_left(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___left = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector2Composite::__get_right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___right;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector2Composite::__get_right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___right;
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_right(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___right = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::Vector2Composite::__get_normalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___normalize;
}
constexpr bool const& UnityEngine::InputSystem::Composites::Vector2Composite::__get_normalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___normalize;
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_normalize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___normalize = value;
}
constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode& UnityEngine::InputSystem::Composites::Vector2Composite::__get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode const& UnityEngine::InputSystem::Composites::Vector2Composite::__get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mode;
}
constexpr void UnityEngine::InputSystem::Composites::Vector2Composite::__set_mode(::UnityEngine::InputSystem::Composites::__Vector2Composite__Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mode = value;
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Composites::Vector2Composite::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(), "ReadValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::Vector2Composite::EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(), "EvaluateMagnitude", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, context);
}
inline ::UnityEngine::InputSystem::Composites::Vector2Composite* UnityEngine::InputSystem::Composites::Vector2Composite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Composites::Vector2Composite*>());
}
inline void UnityEngine::InputSystem::Composites::Vector2Composite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector2Composite*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::Vector2Composite::Vector2Composite() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
