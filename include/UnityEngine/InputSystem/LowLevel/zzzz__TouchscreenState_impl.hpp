#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer::__TouchscreenState___primaryTouchData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer::__TouchscreenState___primaryTouchData_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer::__TouchscreenState___touchData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer::__TouchscreenState___touchData_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ae9164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_Format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_primaryTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState> (
    ::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae9194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_primaryTouch", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_touches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState> (
    ::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae9198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_touches", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::TouchscreenState.get_format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ae91a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                               "get_format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::TouchscreenState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::TouchscreenState::__get_primaryTouchData() {
  return this->___primaryTouchData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::TouchscreenState::__get_primaryTouchData() const {
  return this->___primaryTouchData;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchscreenState::__set_primaryTouchData(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer value) {
  this->___primaryTouchData = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::TouchscreenState::__get_touchData() {
  return this->___touchData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::TouchscreenState::__get_touchData() const {
  return this->___touchData;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchscreenState::__set_touchData(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer value) {
  this->___touchData = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_Format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState> UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_primaryTouch", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState>, false>(this, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState> UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_touches", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TouchState>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                                                                             "get_format", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "primaryTouchData", ty: "::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer", modifiers: "", def_value: Some("{}") },
// CppParam { name: "touchData", ty: "::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState::TouchscreenState(::UnityEngine::InputSystem::LowLevel::__TouchscreenState___primaryTouchData_e__FixedBuffer primaryTouchData,
                                                                                   ::UnityEngine::InputSystem::LowLevel::__TouchscreenState___touchData_e__FixedBuffer touchData) noexcept {
  this->primaryTouchData = primaryTouchData;
  this->touchData = touchData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState::TouchscreenState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
