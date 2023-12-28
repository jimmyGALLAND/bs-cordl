#pragma once
#include "HoudiniEngineUnity/zzzz__HFLayerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolumeLayer_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::*)()>(
    &::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21abd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerName;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__layerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__partID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__partID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partID;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__partID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapWidth;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapWidth;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__heightMapWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightMapWidth = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapHeight;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightMapHeight;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__heightMapHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightMapHeight = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strength;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strength = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__diffuseTexturePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diffuseTexturePath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__diffuseTexturePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diffuseTexturePath;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__diffuseTexturePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____diffuseTexturePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maskTexturePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskTexturePath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maskTexturePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maskTexturePath;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__maskTexturePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maskTexturePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__metallic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metallic;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__metallic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metallic;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__metallic(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metallic = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalTexturePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalTexturePath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalTexturePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalTexturePath;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__normalTexturePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalTexturePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalScale;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalScale;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__normalScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalScale = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__smoothness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothness;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__smoothness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothness;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__smoothness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smoothness = value;
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__specularColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specularColor;
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__specularColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specularColor;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__specularColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specularColor = value;
}
constexpr ::UnityEngine::Vector2& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileSize;
}
constexpr ::UnityEngine::Vector2 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileSize;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__tileSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileSize = value;
}
constexpr ::UnityEngine::Vector2& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileOffset;
}
constexpr ::UnityEngine::Vector2 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileOffset;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__tileOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileOffset = value;
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__uiExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__uiExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__uiExpanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiExpanded = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tile;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__tile(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tile = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalizedHeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedHeights;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalizedHeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedHeights;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__normalizedHeights(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalizedHeights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHeight;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minHeight;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__minHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minHeight = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHeight;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxHeight;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__maxHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxHeight = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightRange;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightRange;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__heightRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightRange = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeX;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeX;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__terrainSizeX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terrainSizeX = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeY;
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainSizeY;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__terrainSizeY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terrainSizeY = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minBounds;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minBounds;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__minBounds(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minBounds = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxBounds;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxBounds;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__maxBounds(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxBounds = value;
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__center() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____center;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__center() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____center;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__center(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____center = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerPath;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__layerPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layerPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__hasLayerAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLayerAttributes;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__hasLayerAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLayerAttributes;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__hasLayerAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasLayerAttributes = value;
}
constexpr ::HoudiniEngineUnity::HFLayerType& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerType;
}
constexpr ::HoudiniEngineUnity::HFLayerType const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerType;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__layerType(::HoudiniEngineUnity::HFLayerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layerType = value;
}
inline ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer* HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::HEU_LoadBufferVolumeLayer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
