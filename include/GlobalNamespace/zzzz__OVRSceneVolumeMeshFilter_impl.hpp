#pragma once
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__Mesh_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob::Execute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x278b6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::get(), "Execute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Results", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob(::GlobalNamespace::OVRSpace Space,
                                                                                                                                        ::Unity::Collections::NativeArray_1<int32_t> Results) noexcept {
  this->Space = Space;
  this->Results = Results;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob::Execute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x278b760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::get(), "Execute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Vertices", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob(::GlobalNamespace::OVRSpace Space,
                                                                                                                            ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices,
                                                                                                                            ::Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept {
  this->Space = Space;
  this->Vertices = Vertices;
  this->Triangles = Triangles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob::Execute)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x278b7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::get(), "Execute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Triangles", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshData", ty: "::UnityEngine::__Mesh__MeshData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices,
                                                                                                                              ::Unity::Collections::NativeArray_1<int32_t> Triangles,
                                                                                                                              ::UnityEngine::__Mesh__MeshData MeshData) noexcept {
  this->Vertices = Vertices;
  this->Triangles = Triangles;
  this->MeshData = MeshData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob::Execute)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x278b9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::get(), "Execute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::get(),
                                                                             "Execute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "MeshID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Convex", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob::__OVRSceneVolumeMeshFilter__BakeMeshJob(int32_t MeshID, bool Convex) noexcept {
  this->MeshID = MeshID;
  this->Convex = Convex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob::__OVRSceneVolumeMeshFilter__BakeMeshJob() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::*)(int32_t)>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x278b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x278ba10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x278ba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x278bf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(), "<>m__Finally1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278bfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x278bff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::*)()>(
    &::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278c030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter*& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneVolumeMeshFilter*> const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set___4__this(::GlobalNamespace::OVRSceneVolumeMeshFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSceneAnchor*& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__sceneAnchor_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchor_5__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__sceneAnchor_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneAnchor_5__2;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set__sceneAnchor_5__2(::GlobalNamespace::OVRSceneAnchor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneAnchor_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__Mesh__MeshDataArray& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__meshDataArray_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshDataArray_5__3;
}
constexpr ::UnityEngine::__Mesh__MeshDataArray const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__meshDataArray_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshDataArray_5__3;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set__meshDataArray_5__3(::UnityEngine::__Mesh__MeshDataArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshDataArray_5__3 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__disposeVerticesJob_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeVerticesJob_5__4;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__disposeVerticesJob_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeVerticesJob_5__4;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set__disposeVerticesJob_5__4(::Unity::Jobs::JobHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeVerticesJob_5__4 = value;
}
constexpr ::UnityEngine::MeshCollider*& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__collider_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collider_5__5;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__collider_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collider_5__5;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set__collider_5__5(::UnityEngine::MeshCollider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collider_5__5)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__meshCountResults_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshCountResults_5__6;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__meshCountResults_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshCountResults_5__6;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set__meshCountResults_5__6(::Unity::Collections::NativeArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshCountResults_5__6 = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__job_5__7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____job_5__7;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__get__job_5__7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____job_5__7;
}
constexpr void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__set__job_5__7(::Unity::Jobs::JobHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____job_5__7 = value;
}
inline ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7* GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>(__1__state));
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7::__OVRSceneVolumeMeshFilter___CreateVolumeMesh_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(
    &::GlobalNamespace::OVRSceneVolumeMeshFilter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278b508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(),
                                                                               "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.set_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)(bool)>(
    &::GlobalNamespace::OVRSceneVolumeMeshFilter::set_IsCompleted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x278b510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), "set_IsCompleted",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::Start)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x278b51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.CreateVolumeMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(
    &::GlobalNamespace::OVRSceneVolumeMeshFilter::CreateVolumeMesh)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x278b5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(),
                                                                               "CreateVolumeMesh", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter.IsJobDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Jobs::JobHandle)>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::IsJobDone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x278b680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), "IsJobDone", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneVolumeMeshFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneVolumeMeshFilter::*)()>(&::GlobalNamespace::OVRSceneVolumeMeshFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278b6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRSceneVolumeMeshFilter::__get__IsCompleted_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCompleted_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSceneVolumeMeshFilter::__get__IsCompleted_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsCompleted_k__BackingField;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter::__set__IsCompleted_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsCompleted_k__BackingField = value;
}
constexpr ::UnityEngine::Mesh*& GlobalNamespace::OVRSceneVolumeMeshFilter::__get__mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& GlobalNamespace::OVRSceneVolumeMeshFilter::__get__mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mesh;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter::__set__mesh(::UnityEngine::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshFilter*& GlobalNamespace::OVRSceneVolumeMeshFilter::__get__meshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& GlobalNamespace::OVRSceneVolumeMeshFilter::__get__meshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshFilter;
}
constexpr void GlobalNamespace::OVRSceneVolumeMeshFilter::__set__meshFilter(::UnityEngine::MeshFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::OVRSceneVolumeMeshFilter::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(),
                                                                             "get_IsCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter::set_IsCompleted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), "set_IsCompleted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneVolumeMeshFilter::CreateVolumeMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(),
                                                                             "CreateVolumeMesh", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneVolumeMeshFilter::IsJobDone(::Unity::Jobs::JobHandle job) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), "IsJobDone", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, job);
}
inline ::GlobalNamespace::OVRSceneVolumeMeshFilter* GlobalNamespace::OVRSceneVolumeMeshFilter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSceneVolumeMeshFilter*>());
}
inline void GlobalNamespace::OVRSceneVolumeMeshFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneVolumeMeshFilter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneVolumeMeshFilter::OVRSceneVolumeMeshFilter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
