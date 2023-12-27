#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTerrain_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTerrain_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeInfo_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::*)()>(
    &::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21cb510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightFieldName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightFieldName;
}
constexpr ::StringW const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightFieldName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightFieldName;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightFieldName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heightFieldName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__parentNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____parentNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__parentNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____parentNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__parentNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____parentNodeID = value;
}
constexpr float_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__voxelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____voxelSize;
}
constexpr float_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__voxelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____voxelSize;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__voxelSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____voxelSize = value;
}
constexpr ::UnityEngine::Terrain*& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__terrain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____terrain;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__terrain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____terrain;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__terrain(::UnityEngine::Terrain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::TerrainData*& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__terrainData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____terrainData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainData*> const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__terrainData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____terrainData;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__terrainData(::UnityEngine::TerrainData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__numPointsX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numPointsX;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__numPointsX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numPointsX;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__numPointsX(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____numPointsX = value;
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__numPointsY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numPointsY;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__numPointsY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____numPointsY;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__numPointsY(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____numPointsY = value;
}
constexpr ::HoudiniEngineUnity::HAPI_Transform& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr ::HoudiniEngineUnity::HAPI_Transform const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__transform(::HoudiniEngineUnity::HAPI_Transform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____transform = value;
}
constexpr float_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightScale;
}
constexpr float_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightScale;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____heightScale = value;
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightfieldNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightfieldNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightfieldNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightfieldNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightfieldNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____heightfieldNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____heightNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__maskNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maskNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__maskNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maskNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__maskNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maskNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__mergeNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mergeNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__mergeNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mergeNodeID;
}
constexpr void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__mergeNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mergeNodeID = value;
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>());
}
inline void HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)()>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21c8f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.CreateInputNodeWithDataUpload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::UnityEngine::GameObject*, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x21c8f9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetMaskLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x21ca5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetMaskLayer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.IsThisInputObjectSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21ca968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.CreateHeightFieldInputNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x21c95ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "CreateHeightFieldInputNode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.UploadHeightValuesWithTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x21c9728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadHeightValuesWithTransform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.UploadAlphaMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>, ByRef<bool>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x21c9f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadAlphaMaps", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetHeightFieldData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::ArrayW<float_t, ::Array<float_t>*>, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(
    &::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x21ca6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetHeightFieldData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTerrainDataAttributesToHeightField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21cae54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainDataAttributesToHeightField", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTerrainLayerAttributesToHeightField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainLayer*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21cb2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainLayerAttributesToHeightField", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTreePrototypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x21cb008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreePrototypes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTreeInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainData*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21cb4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreeInstances", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.GenerateTerrainDataFromGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* (
    ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x21c91a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "GenerateTerrainDataFromGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::HEU_InputInterfaceTerrain* HoudiniEngineUnity::HEU_InputInterfaceTerrain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>());
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTerrain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject,
                                                                                         ByRef<int32_t> inputNodeID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "CreateInputNodeWithDataUpload", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, connectNodeID, inputObject, inputNodeID);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt,
                                                                        ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetMaskLayer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt, baseVolumeInfo);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "IsThisInputObjectSupported",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputObject);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                      ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "CreateHeightFieldInputNode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase* session,
                                                                                           ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt,
                                                                                           ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadHeightValuesWithTransform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt, volumeInfo);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain* idt,
                                                                           ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo, ByRef<bool> bMaskSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "UploadAlphaMaps", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, idt, baseVolumeInfo, bMaskSet);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t volumeNodeID, int32_t partID,
                                                                              ::ArrayW<float_t, ::Array<float_t>*> heightValues, ::StringW heightFieldName,
                                                                              ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetHeightFieldData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, volumeNodeID, partID, heightValues, heightFieldName, baseVolumeInfo);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                                                 ::UnityEngine::TerrainData* terrainData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainDataAttributesToHeightField", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoNodeID, partID, terrainData);
}
inline bool HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                                                  ::UnityEngine::TerrainLayer* terrainLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTerrainLayerAttributesToHeightField", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoNodeID, partID, terrainLayer);
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                             ::UnityEngine::TerrainData* terrainData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreePrototypes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoNodeID, partID, terrainData);
}
inline void HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoNodeID, int32_t partID,
                                                                            ::UnityEngine::TerrainData* terrainData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "SetTreeInstances", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoNodeID, partID, terrainData);
}
inline ::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*
HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject(::UnityEngine::GameObject* inputObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain*>::get(), "GenerateTerrainDataFromGameObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_InputInterfaceTerrain__HEU_InputDataTerrain*, false>(this, ___internal_method, inputObject);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputInterfaceTerrain() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
