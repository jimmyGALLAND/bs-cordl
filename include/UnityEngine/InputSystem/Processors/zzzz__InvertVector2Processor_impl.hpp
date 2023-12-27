#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__InvertVector2Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector2Processor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::Processors::InvertVector2Processor::*)(
    ::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::InvertVector2Processor::Process)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af93e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector2Processor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::InvertVector2Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::InvertVector2Processor::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2af9408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector2Processor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::InvertVector2Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::InvertVector2Processor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2af94a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector2Processor::__get_invertX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___invertX;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector2Processor::__get_invertX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___invertX;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector2Processor::__set_invertX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___invertX = value;
}
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector2Processor::__get_invertY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___invertY;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector2Processor::__get_invertY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___invertY;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector2Processor::__set_invertY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___invertY = value;
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::Processors::InvertVector2Processor::Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(), "Process", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::InvertVector2Processor::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::InvertVector2Processor* UnityEngine::InputSystem::Processors::InvertVector2Processor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>());
}
inline void UnityEngine::InputSystem::Processors::InvertVector2Processor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector2Processor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::InvertVector2Processor::InvertVector2Processor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
