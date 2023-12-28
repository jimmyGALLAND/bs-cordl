#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
#include "GlobalNamespace/zzzz__BezierPath_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__VertexPath__Vertex::__VertexPath__Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 normal) noexcept {
  this->position = position;
  this->tangent = tangent;
  this->normal = normal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VertexPath__Vertex::__VertexPath__Vertex() {}
//  Writing Method size for method: ::GlobalNamespace::VertexPath.get_length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VertexPath::*)()>(&::GlobalNamespace::VertexPath::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x230c4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "get_length",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x230bf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.UpdateByBezierPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*)>(
    &::GlobalNamespace::VertexPath::UpdateByBezierPath)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x230c070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "UpdateByBezierPath", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.TimeAtPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::TimeAtPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x230ca68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "TimeAtPoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.GetVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(int32_t, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>,
                                                                                                                          ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::VertexPath::GetVertex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x230caa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "GetVertex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.GetPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VertexPath::*)(int32_t)>(&::GlobalNamespace::VertexPath::GetPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x230cb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "GetPoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.SplitBezierPathIntoFixNumberOfSegments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*, int32_t)>(
    &::GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x230c504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "SplitBezierPathIntoFixNumberOfSegments", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VertexPath.AddVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VertexPath::*)(
    ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float_t, ByRef<::UnityEngine::Vector3>, ByRef<float_t>,
    ByRef<::GlobalNamespace::__VertexPath__Vertex>, ByRef<int32_t>)>(&::GlobalNamespace::VertexPath::AddVertex)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x230cb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "AddVertex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__VertexPath__Vertex>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VertexPath::__get_vertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexCount;
}
constexpr int32_t const& GlobalNamespace::VertexPath::__get_vertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexCount;
}
constexpr void GlobalNamespace::VertexPath::__set_vertexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexCount = value;
}
constexpr ::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*>& GlobalNamespace::VertexPath::__get__localVertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localVertices;
}
constexpr ::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*> const& GlobalNamespace::VertexPath::__get__localVertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localVertices;
}
constexpr void GlobalNamespace::VertexPath::__set__localVertices(::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localVertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::VertexPath::__get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr float_t const& GlobalNamespace::VertexPath::__get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void GlobalNamespace::VertexPath::__set__length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::VertexPath::__get__cumulativeLengthAtEachVertex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cumulativeLengthAtEachVertex;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::VertexPath::__get__cumulativeLengthAtEachVertex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cumulativeLengthAtEachVertex;
}
constexpr void GlobalNamespace::VertexPath::__set__cumulativeLengthAtEachVertex(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cumulativeLengthAtEachVertex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::VertexPath::__get__anchorVertexMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorVertexMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::VertexPath::__get__anchorVertexMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anchorVertexMap;
}
constexpr void GlobalNamespace::VertexPath::__set__anchorVertexMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anchorVertexMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::VertexPath::setStaticF__back(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "_back", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VertexPath::getStaticF__back() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_back", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get>();
}
inline float_t GlobalNamespace::VertexPath::get_length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "get_length",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VertexPath* GlobalNamespace::VertexPath::New_ctor(int32_t numberOfPathSegments) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VertexPath*>(numberOfPathSegments));
}
inline void GlobalNamespace::VertexPath::_ctor(int32_t numberOfPathSegments) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfPathSegments);
}
inline void GlobalNamespace::VertexPath::UpdateByBezierPath(::GlobalNamespace::BezierPath* bezierPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "UpdateByBezierPath", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bezierPath);
}
inline float_t GlobalNamespace::VertexPath::TimeAtPoint(int32_t pointIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "TimeAtPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, pointIndex);
}
inline void GlobalNamespace::VertexPath::GetVertex(int32_t index, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> tangent, ByRef<::UnityEngine::Vector3> normal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "GetVertex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, position, tangent, normal);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VertexPath::GetPoint(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "GetPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, index);
}
inline void GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments(::GlobalNamespace::BezierPath* bezierPath, int32_t numberOfVertexSegments) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "SplitBezierPathIntoFixNumberOfSegments", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierPath*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bezierPath, numberOfVertexSegments);
}
inline void GlobalNamespace::VertexPath::AddVertex(ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1, ByRef<::UnityEngine::Vector3> p2, ByRef<::UnityEngine::Vector3> p3, float_t t,
                                                   ByRef<::UnityEngine::Vector3> lastRotationAxis, ByRef<float_t> currentPathLength, ByRef<::GlobalNamespace::__VertexPath__Vertex> lastVertex,
                                                   ByRef<int32_t> vertCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VertexPath*>::get(), "AddVertex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__VertexPath__Vertex>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p0, p1, p2, p3, t, lastRotationAxis, currentPathLength, lastVertex, vertCount);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VertexPath::VertexPath() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
