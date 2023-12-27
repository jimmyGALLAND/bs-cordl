#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VRUIControls/zzzz__VRLaserPointer_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetLocalPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)(::UnityEngine::Vector3)>(
    &::VRUIControls::VRLaserPointer::SetLocalPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2eb8848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), "SetLocalPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetLocalScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)(::UnityEngine::Vector3)>(&::VRUIControls::VRLaserPointer::SetLocalScale)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2eb8890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), "SetLocalScale", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer.SetFadeDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)(float_t)>(&::VRUIControls::VRLaserPointer::SetFadeDistance)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2eb88d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), "SetFadeDistance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRLaserPointer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRLaserPointer::*)()>(&::VRUIControls::VRLaserPointer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb89d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MeshRenderer*& VRUIControls::VRLaserPointer::__get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& VRUIControls::VRLaserPointer::__get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderer;
}
constexpr void VRUIControls::VRLaserPointer::__set__renderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VRUIControls::VRLaserPointer::setStaticF__fadeStartNormalizedDistanceId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_fadeStartNormalizedDistanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t VRUIControls::VRLaserPointer::getStaticF__fadeStartNormalizedDistanceId() {
  return ::cordl_internals::getStaticField<int32_t, "_fadeStartNormalizedDistanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get>();
}
inline void VRUIControls::VRLaserPointer::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* VRUIControls::VRLaserPointer::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get>();
}
inline void VRUIControls::VRLaserPointer::SetLocalPosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), "SetLocalPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void VRUIControls::VRLaserPointer::SetLocalScale(::UnityEngine::Vector3 scale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), "SetLocalScale", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale);
}
inline void VRUIControls::VRLaserPointer::SetFadeDistance(float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), "SetFadeDistance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance);
}
inline ::VRUIControls::VRLaserPointer* VRUIControls::VRLaserPointer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::VRUIControls::VRLaserPointer*>());
}
inline void VRUIControls::VRLaserPointer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRLaserPointer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::VRUIControls::VRLaserPointer::VRLaserPointer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
