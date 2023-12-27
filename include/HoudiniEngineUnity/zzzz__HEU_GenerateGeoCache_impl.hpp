#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_UnityMaterialInfo_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoGroup_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateGeoCache_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MeshIndexFormat_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType() {}
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::NONE{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::BOX{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SPHERE{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::MESH{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_BOX{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_SPHERE{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType::SIMPLE_CAPSULE{ static_cast<int32_t>(
    0x6) };
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::*)()>(
    &::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c1f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderType;
}
constexpr ::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderType;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderType(::GlobalNamespace::__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____colliderType = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderCenter;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderCenter;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____colliderCenter = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderSize;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderSize;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____colliderSize = value;
}
constexpr float_t& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderRadius;
}
constexpr float_t const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__colliderRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderRadius;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__colliderRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____colliderRadius = value;
}
constexpr bool& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__convexCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____convexCollider;
}
constexpr bool const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__convexCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____convexCollider;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__convexCollider(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____convexCollider = value;
}
constexpr ::StringW& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collisionGroupName;
}
constexpr ::StringW const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collisionGroupName;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collisionGroupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collisionVertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collisionVertices;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collisionVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collisionIndices;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__collisionIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collisionIndices;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__collisionIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collisionIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshTopology& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__meshTopology() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshTopology;
}
constexpr ::UnityEngine::MeshTopology const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__meshTopology() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshTopology;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__meshTopology(::UnityEngine::MeshTopology value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____meshTopology = value;
}
constexpr bool& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__isTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isTrigger;
}
constexpr bool const& HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__get__isTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isTrigger;
}
constexpr void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__set__isTrigger(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isTrigger = value;
}
inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo* HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>());
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo::__HEU_GenerateGeoCache__HEU_ColliderInfo() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::*)()>(
    &::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c45c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c._GetFinalMaterialsFromComparingNewWithPrevious_b__63_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::*)(::UnityEngine::Material*)>(
    &::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GetFinalMaterialsFromComparingNewWithPrevious_b__63_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21c45cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(), "<GetFinalMaterialsFromComparingNewWithPrevious>b__63_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c._GenerateLODMeshesFromGeoGroups_b__65_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::*)(float_t, float_t)>(
    &::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GenerateLODMeshesFromGeoGroups_b__65_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21c4628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(), "<GenerateLODMeshesFromGeoGroups>b__65_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::setStaticF___9(::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>(
      std::forward<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>(value));
}
inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::setStaticF___9__63_0(::System::Predicate_1<::UnityEngine::Material*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Material*>*, "<>9__63_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::Material*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Material*>* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::getStaticF___9__63_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Material*>*, "<>9__63_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>();
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::setStaticF___9__65_0(::System::Comparison_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<float_t>*, "<>9__65_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>(
      std::forward<::System::Comparison_1<float_t>*>(value));
}
inline ::System::Comparison_1<float_t>* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::getStaticF___9__65_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<float_t>*, "<>9__65_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get>();
}
inline ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c* HoudiniEngineUnity::__HEU_GenerateGeoCache____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>());
}
inline void HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GetFinalMaterialsFromComparingNewWithPrevious_b__63_0(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(), "<GetFinalMaterialsFromComparingNewWithPrevious>b__63_0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, material);
}
inline int32_t HoudiniEngineUnity::__HEU_GenerateGeoCache____c::_GenerateLODMeshesFromGeoGroups_b__65_0(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_GenerateGeoCache____c*>::get(), "<GenerateLODMeshesFromGeoGroups>b__65_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_GenerateGeoCache____c::__HEU_GenerateGeoCache____c() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.get_GeoID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "get_GeoID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.get_PartID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::get_PartID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "get_PartID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.get_AssetID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::get_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                                                               "get_AssetID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.set_AssetID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::set_AssetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "set_AssetID", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GetPopulatedGeoCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HoudiniEngineUnity::HEU_GenerateGeoCache* (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, int32_t, bool,
                                                                ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::StringW)>(
        &::HoudiniEngineUnity::HEU_GenerateGeoCache::GetPopulatedGeoCache)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x21b9148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GetPopulatedGeoCache", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.PopulateUnityMaterialData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateUnityMaterialData)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x21b9648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "PopulateUnityMaterialData", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GetMaterialKeyFromAttributeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, int32_t, ByRef<::StringW>, ByRef<::StringW>,
                                                                                              ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GetMaterialKeyFromAttributeIndex)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21bb85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GetMaterialKeyFromAttributeIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CreateMaterialInfoEntryFromAttributeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, int32_t)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMaterialInfoEntryFromAttributeIndex)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x21bb740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CreateMaterialInfoEntryFromAttributeIndex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.PopulateGeometryData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateGeometryData)> {
  constexpr static std::size_t size = 0x1ae4;
  constexpr static std::size_t addrs = 0x21b9c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "PopulateGeometryData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.ParseLODTransitionAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ByRef<::ArrayW<float_t, ::Array<float_t>*>>)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::ParseLODTransitionAttribute)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x21bb9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "ParseLODTransitionAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.UpdateColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateColliders)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x21bbb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "UpdateColliders", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.UpdateCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*)>(
        &::HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateCollider)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x21bbcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "UpdateCollider", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GetFinalMaterialsFromComparingNewWithPrevious
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::GameObject*, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>, ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>,
                         ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GetFinalMaterialsFromComparingNewWithPrevious)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x21bc308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GetFinalMaterialsFromComparingNewWithPrevious", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateMeshFromSingleGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutput*, int32_t,
                         bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromSingleGroup)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x21bc6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateMeshFromSingleGroup", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateLODMeshesFromGeoGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*,
                         ::HoudiniEngineUnity::HEU_GeneratedOutput*, int32_t, bool, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateLODMeshesFromGeoGroups)> {
  constexpr static std::size_t size = 0xb64;
  constexpr static std::size_t addrs = 0x21bd354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateLODMeshesFromGeoGroups", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateMeshFromGeoGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, int32_t, bool, bool, bool, bool, ByRef<::UnityEngine::Mesh*>,
    ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromGeoGroup)> {
  constexpr static std::size_t size = 0xaec;
  constexpr static std::size_t addrs = 0x21bc868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateMeshFromGeoGroup", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Mesh*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CombineQuadMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Mesh* (*)(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<int32_t>*, bool)>(
        &::HoudiniEngineUnity::HEU_GenerateGeoCache::CombineQuadMeshes)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x21be62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CombineQuadMeshes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CombineMeshes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Mesh* (*)(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<int32_t>*, bool, bool,
                                         ::HoudiniEngineUnity::HEU_MeshIndexFormat*)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CombineMeshes)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x21bebd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CombineMeshes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CreateMeshFromMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::Mesh* (*)(::HoudiniEngineUnity::HEU_MeshData*, bool, bool, ::HoudiniEngineUnity::HEU_MeshIndexFormat*)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMeshFromMeshData)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x21be390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CreateMeshFromMeshData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.TransferRegularAttributesToVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*,
                         ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<float_t, ::Array<float_t>*>, ByRef<::ArrayW<float_t, ::Array<float_t>*>>)>(
        &::HoudiniEngineUnity::HEU_GenerateGeoCache::TransferRegularAttributesToVertices)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x21bef60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "TransferRegularAttributesToVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateGeoGroupUsingGeoCacheVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, bool, bool, bool, bool,
                                                                                           bool, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>, ByRef<int32_t>)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCacheVertices)> {
  constexpr static std::size_t size = 0x2d00;
  constexpr static std::size_t addrs = 0x21bf24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateGeoGroupUsingGeoCacheVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.GenerateGeoGroupUsingGeoCachePoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, bool, bool, bool, bool,
                                                                                           bool, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>, ByRef<int32_t>)>(
    &::HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCachePoints)> {
  constexpr static std::size_t size = 0x226c;
  constexpr static std::size_t addrs = 0x21c22f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateGeoGroupUsingGeoCachePoints", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache.CalculateGroupMeshTopology
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshTopology (*)(
    ::System::Collections::Generic::List_1<int32_t>*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::CalculateGroupMeshTopology)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x21c1f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CalculateGroupMeshTopology", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GenerateGeoCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GenerateGeoCache::*)()>(&::HoudiniEngineUnity::HEU_GenerateGeoCache::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x21b944c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__AssetID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____AssetID_k__BackingField;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__AssetID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____AssetID_k__BackingField;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__AssetID_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____AssetID_k__BackingField = value;
}
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__geoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____geoInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__geoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____geoInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__geoInfo(::HoudiniEngineUnity::HAPI_GeoInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____geoInfo = value;
}
constexpr ::HoudiniEngineUnity::HAPI_PartInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_PartInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__partInfo(::HoudiniEngineUnity::HAPI_PartInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____partInfo = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__partName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partName;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__partName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__vertexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vertexList;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__vertexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vertexList;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__vertexList(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertexList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__faceCounts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____faceCounts;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__faceCounts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____faceCounts;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__faceCounts(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____faceCounts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__houdiniMaterialIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____houdiniMaterialIDs;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__houdiniMaterialIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____houdiniMaterialIDs;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__houdiniMaterialIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____houdiniMaterialIDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceUnityMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____singleFaceUnityMaterial;
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceUnityMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____singleFaceUnityMaterial;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__singleFaceUnityMaterial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____singleFaceUnityMaterial = value;
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceHoudiniMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____singleFaceHoudiniMaterial;
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__singleFaceHoudiniMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____singleFaceHoudiniMaterial;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__singleFaceHoudiniMaterial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____singleFaceHoudiniMaterial = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialInfos;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialInfos(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unityMaterialInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialAttrInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialAttrInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____unityMaterialAttrInfo = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialAttrName;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialAttrName;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrName(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unityMaterialAttrName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrStringsMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialAttrStringsMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__unityMaterialAttrStringsMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unityMaterialAttrStringsMap;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__unityMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unityMaterialAttrStringsMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrNameInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrNameInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrNameInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrNameInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrNameInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____substanceMaterialAttrNameInfo = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrName;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrName;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrName(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____substanceMaterialAttrName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrStringsMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrStringsMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrStringsMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrStringsMap;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrStringsMap(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____substanceMaterialAttrStringsMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndexInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrIndexInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndexInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrIndexInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrIndexInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____substanceMaterialAttrIndexInfo = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrIndex;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__substanceMaterialAttrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____substanceMaterialAttrIndex;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__substanceMaterialAttrIndex(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____substanceMaterialAttrIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__inUseMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inUseMaterials;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__inUseMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____inUseMaterials;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__inUseMaterials(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inUseMaterials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttrInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____posAttrInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttrInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____posAttrInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__posAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____posAttrInfo = value;
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttrInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uvsAttrInfo;
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttrInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uvsAttrInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__uvsAttrInfo(::ArrayW<::HoudiniEngineUnity::HAPI_AttributeInfo, ::Array<::HoudiniEngineUnity::HAPI_AttributeInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uvsAttrInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttrInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalAttrInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttrInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalAttrInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____normalAttrInfo = value;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttrInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorAttrInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttrInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorAttrInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colorAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____colorAttrInfo = value;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttrInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaAttrInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttrInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaAttrInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__alphaAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____alphaAttrInfo = value;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttrInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tangentAttrInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttrInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tangentAttrInfo;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__tangentAttrInfo(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____tangentAttrInfo = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____posAttr;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__posAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____posAttr;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__posAttr(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____posAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uvsAttr;
}
constexpr ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__uvsAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____uvsAttr;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__uvsAttr(::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uvsAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalAttr;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalAttr;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalAttr(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorAttr;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colorAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorAttr;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colorAttr(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaAttr;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__alphaAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaAttr;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__alphaAttr(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alphaAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tangentAttr;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__tangentAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tangentAttr;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__tangentAttr(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tangentAttr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groups;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groups;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groups(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasGroupGeometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasGroupGeometry;
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasGroupGeometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasGroupGeometry;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__hasGroupGeometry(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hasGroupGeometry = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitVertexIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupSplitVertexIndices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitVertexIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupSplitVertexIndices;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupSplitVertexIndices(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<int32_t, ::Array<int32_t>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupSplitVertexIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitFaceIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupSplitFaceIndices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupSplitFaceIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupSplitFaceIndices;
}
constexpr void
HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupSplitFaceIndices(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupSplitFaceIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupVertexOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupVertexOffsets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__groupVertexOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____groupVertexOffsets;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__groupVertexOffsets(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupVertexOffsets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionVertexList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____allCollisionVertexList;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionVertexList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____allCollisionVertexList;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__allCollisionVertexList(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allCollisionVertexList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionFaceIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____allCollisionFaceIndices;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__allCollisionFaceIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____allCollisionFaceIndices;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__allCollisionFaceIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allCollisionFaceIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalCosineThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalCosineThreshold;
}
constexpr float_t const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__normalCosineThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalCosineThreshold;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__normalCosineThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____normalCosineThreshold = value;
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasLODGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasLODGroups;
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__hasLODGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hasLODGroups;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__hasLODGroups(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hasLODGroups = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__LODTransitionValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LODTransitionValues;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__LODTransitionValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LODTransitionValues;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__LODTransitionValues(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LODTransitionValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__isMeshReadWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isMeshReadWrite;
}
constexpr bool const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__isMeshReadWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isMeshReadWrite;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__isMeshReadWrite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isMeshReadWrite = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colliderInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__colliderInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliderInfos;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__colliderInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colliderInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialCache;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__materialCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialIDToDataMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialIDToDataMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>*> const&
HoudiniEngineUnity::HEU_GenerateGeoCache::__get__materialIDToDataMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialIDToDataMap;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__materialIDToDataMap(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MaterialData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialIDToDataMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__assetCacheFolderPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____assetCacheFolderPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__assetCacheFolderPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____assetCacheFolderPath;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__assetCacheFolderPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetCacheFolderPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_MeshIndexFormat*& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__meshIndexFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshIndexFormat;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_MeshIndexFormat*> const& HoudiniEngineUnity::HEU_GenerateGeoCache::__get__meshIndexFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshIndexFormat;
}
constexpr void HoudiniEngineUnity::HEU_GenerateGeoCache::__set__meshIndexFormat(::HoudiniEngineUnity::HEU_MeshIndexFormat* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshIndexFormat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_GeoID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "get_GeoID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_PartID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "get_PartID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::get_AssetID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "get_AssetID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::set_AssetID(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "set_AssetID", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_GenerateGeoCache*
HoudiniEngineUnity::HEU_GenerateGeoCache::GetPopulatedGeoCache(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t geoID, int32_t partID, bool bUseLODGroups,
                                                               ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::StringW assetCacheFolderPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GetPopulatedGeoCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_GenerateGeoCache*, false>(nullptr, ___internal_method, session, assetID, geoID, partID, bUseLODGroups, materialCache,
                                                                                                 assetCacheFolderPath);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateUnityMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "PopulateUnityMaterialData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline int32_t HoudiniEngineUnity::HEU_GenerateGeoCache::GetMaterialKeyFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, int32_t attributeIndex,
                                                                                          ByRef<::StringW> unityMaterialName, ByRef<::StringW> substanceName, ByRef<int32_t> substanceIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GetMaterialKeyFromAttributeIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, geoCache, attributeIndex, unityMaterialName, substanceName, substanceIndex);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMaterialInfoEntryFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, int32_t materialAttributeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CreateMaterialInfoEntryFromAttributeIndex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, materialAttributeIndex);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::PopulateGeometryData(::HoudiniEngineUnity::HEU_SessionBase* session, bool bUseLODGroups) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "PopulateGeometryData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, bUseLODGroups);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::ParseLODTransitionAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                                                                  ByRef<::ArrayW<float_t, ::Array<float_t>*>> LODTransitionValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "ParseLODTransitionAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, LODTransitionValues);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateColliders(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "UpdateColliders", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, outputData);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::UpdateCollider(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData,
                                                                     ::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo* colliderInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "UpdateCollider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_GenerateGeoCache__HEU_ColliderInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, geoCache, outputData, colliderInfo);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::GetFinalMaterialsFromComparingNewWithPrevious(::UnityEngine::GameObject* gameObject,
                                                                                                    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> previousMaterials,
                                                                                                    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials,
                                                                                                    ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> finalMaterials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GetFinalMaterialsFromComparingNewWithPrevious", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObject, previousMaterials, newMaterials, finalMaterials);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromSingleGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup,
                                                                                  ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput,
                                                                                  int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateMeshFromSingleGroup", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroup, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents,
                                                          bGenerateNormals, bPartInstanced);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateLODMeshesFromGeoGroups(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                     ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* GeoGroupMeshes,
                                                                                     ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput,
                                                                                     int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals,
                                                                                     bool bPartInstanced) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateLODMeshesFromGeoGroups", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutput*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroupMeshes, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents,
                                                          bGenerateNormals, bPartInstanced);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateMeshFromGeoGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup,
                                                                               ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, int32_t defaultMaterialKey, bool bGenerateUVs,
                                                                               bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced, ByRef<::UnityEngine::Mesh*> newMesh,
                                                                               ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>> newMaterials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateMeshFromGeoGroup", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoGroup*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Mesh*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, GeoGroup, geoCache, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals,
                                                          bPartInstanced, newMesh, newMaterials);
}
inline ::UnityEngine::Mesh* HoudiniEngineUnity::HEU_GenerateGeoCache::CombineQuadMeshes(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap,
                                                                                        ::System::Collections::Generic::List_1<int32_t>* subMeshIndices, bool bGenerateNormals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CombineQuadMeshes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method, subMeshesMap, subMeshIndices, bGenerateNormals);
}
inline ::UnityEngine::Mesh* HoudiniEngineUnity::HEU_GenerateGeoCache::CombineMeshes(::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap,
                                                                                    ::System::Collections::Generic::List_1<int32_t>* submeshIndices, bool bGenerateUVs, bool bGenerateNormals,
                                                                                    ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CombineMeshes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::HoudiniEngineUnity::HEU_MeshData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method, subMeshesMap, submeshIndices, bGenerateUVs, bGenerateNormals, meshIndexFormat);
}
inline ::UnityEngine::Mesh* HoudiniEngineUnity::HEU_GenerateGeoCache::CreateMeshFromMeshData(::HoudiniEngineUnity::HEU_MeshData* submesh, bool bGenerateUVs, bool bGenerateNormals,
                                                                                             ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CreateMeshFromMeshData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MeshIndexFormat*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(nullptr, ___internal_method, submesh, bGenerateUVs, bGenerateNormals, meshIndexFormat);
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::TransferRegularAttributesToVertices(::ArrayW<int32_t, ::Array<int32_t>*> groupVertexList, ::ArrayW<int32_t, ::Array<int32_t>*> allFaceCounts,
                                                                                          ::System::Collections::Generic::List_1<int32_t>* groupFaces,
                                                                                          ::System::Collections::Generic::List_1<int32_t>* groupVertexOffset,
                                                                                          ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo, ::ArrayW<float_t, ::Array<float_t>*> inData,
                                                                                          ByRef<::ArrayW<float_t, ::Array<float_t>*>> outData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "TransferRegularAttributesToVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t, ::Array<float_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, groupVertexList, allFaceCounts, groupFaces, groupVertexOffset, attribInfo, inData, outData);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCacheVertices(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache,
                                                                                            bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced,
                                                                                            ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> LODGroupMeshes,
                                                                                            ByRef<int32_t> defaultMaterialKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateGeoGroupUsingGeoCacheVertices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced,
                                                          LODGroupMeshes, defaultMaterialKey);
}
inline bool HoudiniEngineUnity::HEU_GenerateGeoCache::GenerateGeoGroupUsingGeoCachePoints(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache,
                                                                                          bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced,
                                                                                          ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*> LODGroupMeshes,
                                                                                          ByRef<int32_t> defaultMaterialKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "GenerateGeoGroupUsingGeoCachePoints", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced,
                                                          LODGroupMeshes, defaultMaterialKey);
}
inline ::UnityEngine::MeshTopology HoudiniEngineUnity::HEU_GenerateGeoCache::CalculateGroupMeshTopology(::System::Collections::Generic::List_1<int32_t>* groupFaces,
                                                                                                        ::ArrayW<int32_t, ::Array<int32_t>*> allFaceCounts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), "CalculateGroupMeshTopology", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology, false>(nullptr, ___internal_method, groupFaces, allFaceCounts);
}
inline ::HoudiniEngineUnity::HEU_GenerateGeoCache* HoudiniEngineUnity::HEU_GenerateGeoCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_GenerateGeoCache*>());
}
inline void HoudiniEngineUnity::HEU_GenerateGeoCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GenerateGeoCache*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_GenerateGeoCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
