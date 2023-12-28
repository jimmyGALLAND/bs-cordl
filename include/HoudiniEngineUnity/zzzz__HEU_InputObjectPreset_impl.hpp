#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectPreset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputObjectPreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputObjectPreset::*)()>(&::HoudiniEngineUnity::HEU_InputObjectPreset::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x214e7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectPreset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_InputObjectPreset::__get__gameObjectName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__gameObjectName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectName;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__gameObjectName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_InputObjectPreset::__get__isSceneObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSceneObject;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__isSceneObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSceneObject;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__isSceneObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSceneObject = value;
}
constexpr bool& HoudiniEngineUnity::HEU_InputObjectPreset::__get__useTransformOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTransformOffset;
}
constexpr bool const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__useTransformOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useTransformOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__useTransformOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useTransformOffset = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectPreset::__get__translateOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translateOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__translateOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translateOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__translateOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____translateOffset = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectPreset::__get__rotateOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotateOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__rotateOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotateOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__rotateOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotateOffset = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_InputObjectPreset::__get__scaleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleOffset;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_InputObjectPreset::__get__scaleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleOffset;
}
constexpr void HoudiniEngineUnity::HEU_InputObjectPreset::__set__scaleOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleOffset = value;
}
inline ::HoudiniEngineUnity::HEU_InputObjectPreset* HoudiniEngineUnity::HEU_InputObjectPreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputObjectPreset*>());
}
inline void HoudiniEngineUnity::HEU_InputObjectPreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputObjectPreset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputObjectPreset::HEU_InputObjectPreset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
