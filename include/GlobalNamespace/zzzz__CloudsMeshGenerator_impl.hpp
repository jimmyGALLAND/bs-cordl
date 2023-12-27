#pragma once
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__CloudsMeshGenerator_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__CloudsMeshGenerator_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "precisionOpaqueMesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lowPolyMesh", ty: "::UnityEngine::Mesh*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sizeModifier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomThreshold", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "weight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "precisionVertexCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lowPolyVertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "generatedCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CloudsMeshGenerator__Cloud::__CloudsMeshGenerator__Cloud(::UnityEngine::Mesh* precisionOpaqueMesh, ::UnityEngine::Mesh* lowPolyMesh, float_t sizeModifier,
                                                                                        float_t bottomThreshold, int32_t weight, int32_t precisionVertexCount, int32_t lowPolyVertexCount,
                                                                                        int32_t generatedCount) noexcept {
  this->precisionOpaqueMesh = precisionOpaqueMesh;
  this->lowPolyMesh = lowPolyMesh;
  this->sizeModifier = sizeModifier;
  this->bottomThreshold = bottomThreshold;
  this->weight = weight;
  this->precisionVertexCount = precisionVertexCount;
  this->lowPolyVertexCount = lowPolyVertexCount;
  this->generatedCount = generatedCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CloudsMeshGenerator__Cloud::__CloudsMeshGenerator__Cloud() {}
// Ctor Parameters [CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalizedRadius", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "meshCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cloudIDs", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "sizeMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CloudsMeshGenerator__Ring::__CloudsMeshGenerator__Ring(float_t radius, float_t normalizedRadius, int32_t meshCount, ::ArrayW<int32_t, ::Array<int32_t>*> cloudIDs,
                                                                                      float_t sizeMultiplier) noexcept {
  this->radius = radius;
  this->normalizedRadius = normalizedRadius;
  this->meshCount = meshCount;
  this->cloudIDs = cloudIDs;
  this->sizeMultiplier = sizeMultiplier;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CloudsMeshGenerator__Ring::__CloudsMeshGenerator__Ring() {}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius::__CloudsMeshGenerator__ProhibitedRadius(::UnityEngine::Transform* transform, float_t distance, float_t radius) noexcept {
  this->transform = transform;
  this->distance = distance;
  this->radius = radius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius::__CloudsMeshGenerator__ProhibitedRadius() {}
// Ctor Parameters [CppParam { name: "normalizedStart", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalizedEnd", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "absoluteStart", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "absoluteEnd", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk::__CloudsMeshGenerator__RadiusChunk(float_t normalizedStart, float_t normalizedEnd, float_t absoluteStart,
                                                                                                    float_t absoluteEnd) noexcept {
  this->normalizedStart = normalizedStart;
  this->normalizedEnd = normalizedEnd;
  this->absoluteStart = absoluteStart;
  this->absoluteEnd = absoluteEnd;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk::__CloudsMeshGenerator__RadiusChunk() {}
//  Writing Method size for method: ::GlobalNamespace::CloudsMeshGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CloudsMeshGenerator::*)()>(&::GlobalNamespace::CloudsMeshGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x221dd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudsMeshGenerator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MeshFilter*& GlobalNamespace::CloudsMeshGenerator::__get__meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshFilter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& GlobalNamespace::CloudsMeshGenerator::__get__meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshFilter;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__meshFilter(::UnityEngine::MeshFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::CloudsMeshGenerator::__get__meshName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshName;
}
constexpr ::StringW const& GlobalNamespace::CloudsMeshGenerator::__get__meshName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshName;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__meshName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::CloudsMeshGenerator::__get__pauseGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pauseGenerator;
}
constexpr bool const& GlobalNamespace::CloudsMeshGenerator::__get__pauseGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pauseGenerator;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__pauseGenerator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____pauseGenerator = value;
}
constexpr bool& GlobalNamespace::CloudsMeshGenerator::__get__bottomPushEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomPushEnabled;
}
constexpr bool const& GlobalNamespace::CloudsMeshGenerator::__get__bottomPushEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomPushEnabled;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__bottomPushEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bottomPushEnabled = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__bottomPushDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomPushDistance;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__bottomPushDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomPushDistance;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__bottomPushDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bottomPushDistance = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CloudsMeshGenerator::__get__bottomScaleTopBottom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomScaleTopBottom;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CloudsMeshGenerator::__get__bottomScaleTopBottom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomScaleTopBottom;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__bottomScaleTopBottom(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bottomScaleTopBottom = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__bottomHorizontalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomHorizontalScale;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__bottomHorizontalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bottomHorizontalScale;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__bottomHorizontalScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bottomHorizontalScale = value;
}
constexpr bool& GlobalNamespace::CloudsMeshGenerator::__get__drawRingGizmos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawRingGizmos;
}
constexpr bool const& GlobalNamespace::CloudsMeshGenerator::__get__drawRingGizmos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____drawRingGizmos;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__drawRingGizmos(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____drawRingGizmos = value;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>&
GlobalNamespace::CloudsMeshGenerator::__get__prohibitedRadii() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prohibitedRadii;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> const&
GlobalNamespace::CloudsMeshGenerator::__get__prohibitedRadii() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prohibitedRadii;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__prohibitedRadii(
    ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prohibitedRadii)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CloudsMeshGenerator::__get__meshSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshSize;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CloudsMeshGenerator::__get__meshSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshSize;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__meshSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____meshSize = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__sizeRandomness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sizeRandomness;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__sizeRandomness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sizeRandomness;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__sizeRandomness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____sizeRandomness = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__ratioRandomness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ratioRandomness;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__ratioRandomness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ratioRandomness;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__ratioRandomness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____ratioRandomness = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__perMeshRadiusOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____perMeshRadiusOffset;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__perMeshRadiusOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____perMeshRadiusOffset;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__perMeshRadiusOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____perMeshRadiusOffset = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::CloudsMeshGenerator::__get__possibleColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____possibleColors;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& GlobalNamespace::CloudsMeshGenerator::__get__possibleColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____possibleColors;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__possibleColors(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____possibleColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CloudsMeshGenerator::__get__randomSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomSeed;
}
constexpr int32_t const& GlobalNamespace::CloudsMeshGenerator::__get__randomSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomSeed;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__randomSeed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____randomSeed = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__heightRandomness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightRandomness;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__heightRandomness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightRandomness;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__heightRandomness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____heightRandomness = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__ringRotationRandomness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ringRotationRandomness;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__ringRotationRandomness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ringRotationRandomness;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__ringRotationRandomness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____ringRotationRandomness = value;
}
constexpr int32_t& GlobalNamespace::CloudsMeshGenerator::__get__ringCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ringCount;
}
constexpr int32_t const& GlobalNamespace::CloudsMeshGenerator::__get__ringCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ringCount;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__ringCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____ringCount = value;
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__meshesPerRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshesPerRadius;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__meshesPerRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshesPerRadius;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__meshesPerRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____meshesPerRadius = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CloudsMeshGenerator::__get__radiusCloseFar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____radiusCloseFar;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CloudsMeshGenerator::__get__radiusCloseFar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____radiusCloseFar;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__radiusCloseFar(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____radiusCloseFar = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::CloudsMeshGenerator::__get__sizeCloseFar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sizeCloseFar;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CloudsMeshGenerator::__get__sizeCloseFar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sizeCloseFar;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__sizeCloseFar(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____sizeCloseFar = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CloudsMeshGenerator::__get__heightCloseFar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightCloseFar;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::CloudsMeshGenerator::__get__heightCloseFar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____heightCloseFar;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__heightCloseFar(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heightCloseFar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::CloudsMeshGenerator::__get__lowPolyThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lowPolyThreshold;
}
constexpr float_t const& GlobalNamespace::CloudsMeshGenerator::__get__lowPolyThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lowPolyThreshold;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__lowPolyThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lowPolyThreshold = value;
}
constexpr bool& GlobalNamespace::CloudsMeshGenerator::__get__flipNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flipNormals;
}
constexpr bool const& GlobalNamespace::CloudsMeshGenerator::__get__flipNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flipNormals;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__flipNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____flipNormals = value;
}
constexpr bool& GlobalNamespace::CloudsMeshGenerator::__get__curveMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____curveMesh;
}
constexpr bool const& GlobalNamespace::CloudsMeshGenerator::__get__curveMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____curveMesh;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__curveMesh(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____curveMesh = value;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*>& GlobalNamespace::CloudsMeshGenerator::__get__clouds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clouds;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*> const& GlobalNamespace::CloudsMeshGenerator::__get__clouds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____clouds;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__clouds(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clouds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CloudsMeshGenerator::__get__meshCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshCount;
}
constexpr int32_t const& GlobalNamespace::CloudsMeshGenerator::__get__meshCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshCount;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__meshCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____meshCount = value;
}
constexpr int32_t& GlobalNamespace::CloudsMeshGenerator::__get__vertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vertexCount;
}
constexpr int32_t const& GlobalNamespace::CloudsMeshGenerator::__get__vertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vertexCount;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__vertexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____vertexCount = value;
}
constexpr ::UnityEngine::Mesh*& GlobalNamespace::CloudsMeshGenerator::__get__generatedMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____generatedMesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& GlobalNamespace::CloudsMeshGenerator::__get__generatedMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____generatedMesh;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__generatedMesh(::UnityEngine::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____generatedMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::CloudsMeshGenerator::__get__meshBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshBounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::CloudsMeshGenerator::__get__meshBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshBounds;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__meshBounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____meshBounds = value;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*>&
GlobalNamespace::CloudsMeshGenerator::__get__radiusChunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____radiusChunks;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*> const&
GlobalNamespace::CloudsMeshGenerator::__get__radiusChunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____radiusChunks;
}
constexpr void
GlobalNamespace::CloudsMeshGenerator::__set__radiusChunks(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____radiusChunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*>& GlobalNamespace::CloudsMeshGenerator::__get__rings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rings;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*> const& GlobalNamespace::CloudsMeshGenerator::__get__rings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rings;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__rings(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>&
GlobalNamespace::CloudsMeshGenerator::__get__sortedProhibitedRadii() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sortedProhibitedRadii;
}
constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> const&
GlobalNamespace::CloudsMeshGenerator::__get__sortedProhibitedRadii() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sortedProhibitedRadii;
}
constexpr void GlobalNamespace::CloudsMeshGenerator::__set__sortedProhibitedRadii(
    ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sortedProhibitedRadii)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::CloudsMeshGenerator* GlobalNamespace::CloudsMeshGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CloudsMeshGenerator*>());
}
inline void GlobalNamespace::CloudsMeshGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudsMeshGenerator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CloudsMeshGenerator::CloudsMeshGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
