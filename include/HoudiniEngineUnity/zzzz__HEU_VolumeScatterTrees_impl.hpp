#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TreePrototypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeScatterTrees.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeScatterTrees::*)(::HoudiniEngineUnity::HEU_VolumeScatterTrees*)>(
    &::HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x21ea13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeScatterTrees._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeScatterTrees::*)()>(&::HoudiniEngineUnity::HEU_VolumeScatterTrees::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>"
constexpr HoudiniEngineUnity::HEU_VolumeScatterTrees::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__treePrototypInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____treePrototypInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>*> const&
HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__treePrototypInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____treePrototypInfos;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__treePrototypInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____treePrototypInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__colors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__heightScales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightScales;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__heightScales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightScales;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__heightScales(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heightScales)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__lightmapColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapColors;
}
constexpr ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__lightmapColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapColors;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__lightmapColors(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightmapColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positions;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__positions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__prototypeIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prototypeIndices;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__prototypeIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prototypeIndices;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__prototypeIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prototypeIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__rotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotations;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__rotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotations;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__rotations(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__widthScales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____widthScales;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__widthScales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____widthScales;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__widthScales(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____widthScales)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__terrainTiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainTiles;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__terrainTiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainTiles;
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__terrainTiles(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainTiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeScatterTrees* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_VolumeScatterTrees* HoudiniEngineUnity::HEU_VolumeScatterTrees::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>());
}
inline void HoudiniEngineUnity::HEU_VolumeScatterTrees::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeScatterTrees*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees::HEU_VolumeScatterTrees() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
