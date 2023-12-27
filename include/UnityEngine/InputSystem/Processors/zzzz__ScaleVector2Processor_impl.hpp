#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__ScaleVector2Processor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector2Processor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::Processors::ScaleVector2Processor::*)(
    ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::ScaleVector2Processor::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2af9bec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector2Processor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::ScaleVector2Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::ScaleVector2Processor::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2af9bfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::ScaleVector2Processor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::ScaleVector2Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::ScaleVector2Processor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2af9c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___x;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___x;
}
constexpr void UnityEngine::InputSystem::Processors::ScaleVector2Processor::__set_x(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___x = value;
}
constexpr float_t& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___y;
}
constexpr float_t const& UnityEngine::InputSystem::Processors::ScaleVector2Processor::__get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___y;
}
constexpr void UnityEngine::InputSystem::Processors::ScaleVector2Processor::__set_y(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___y = value;
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Processors::ScaleVector2Processor::Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(), "Process", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::ScaleVector2Processor::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::ScaleVector2Processor* UnityEngine::InputSystem::Processors::ScaleVector2Processor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>());
}
inline void UnityEngine::InputSystem::Processors::ScaleVector2Processor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::ScaleVector2Processor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::ScaleVector2Processor::ScaleVector2Processor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
