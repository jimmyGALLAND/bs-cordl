#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/Processors/zzzz__InvertVector3Processor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)(
    ::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::Processors::InvertVector3Processor::Process)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2af94f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::InvertVector3Processor::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2af952c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Processors::InvertVector3Processor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Processors::InvertVector3Processor::*)()>(
    &::UnityEngine::InputSystem::Processors::InvertVector3Processor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2af95f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__get_invertX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertX;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__get_invertX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertX;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__set_invertX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertX = value;
}
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__get_invertY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertY;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__get_invertY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertY;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__set_invertY(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertY = value;
}
constexpr bool& UnityEngine::InputSystem::Processors::InvertVector3Processor::__get_invertZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertZ;
}
constexpr bool const& UnityEngine::InputSystem::Processors::InvertVector3Processor::__get_invertZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertZ;
}
constexpr void UnityEngine::InputSystem::Processors::InvertVector3Processor::__set_invertZ(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertZ = value;
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Processors::InvertVector3Processor::Process(::UnityEngine::Vector3 value, ::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(), "Process", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, value, control);
}
inline ::StringW UnityEngine::InputSystem::Processors::InvertVector3Processor::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Processors::InvertVector3Processor* UnityEngine::InputSystem::Processors::InvertVector3Processor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>());
}
inline void UnityEngine::InputSystem::Processors::InvertVector3Processor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Processors::InvertVector3Processor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Processors::InvertVector3Processor::InvertVector3Processor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
