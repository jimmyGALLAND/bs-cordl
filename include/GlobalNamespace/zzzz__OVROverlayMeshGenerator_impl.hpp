#pragma once
#include "GlobalNamespace/zzzz__OVROverlay_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::__OVROverlayMeshGenerator__CubeFace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::__OVROverlayMeshGenerator__CubeFace() {}
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Right{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Left{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Top{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Bottom{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Front{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::Back{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace GlobalNamespace::__OVROverlayMeshGenerator__CubeFace::COUNT{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x274a6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.SetOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::OVROverlay*)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::SetOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x274a818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "SetOverlay", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetBoundingRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::GlobalNamespace::OVROverlayMeshGenerator::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x274a820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetBoundingRect", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x274a964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x274a968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Update)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x274a96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.UpdateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(
    ::GlobalNamespace::__OVROverlay__OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x274af90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "UpdateMesh", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GenerateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*,
    ::GlobalNamespace::__OVROverlay__OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x274b270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GenerateMesh", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x274d010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereUV", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereVert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x274d048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereVert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*,
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect, float_t, int32_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildSphere)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x274b5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildSphere", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace, ::UnityEngine::Vector2, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x274d09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeUV", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeVert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace, ::UnityEngine::Vector2, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x274d1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeVert", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildCube
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*,
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildCube)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x274bd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildCube", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                         ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildQuad)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x274c290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildQuad", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildHemicylinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                         ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Rect, int32_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0x274c9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildHemicylinder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x274d2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Mesh*& GlobalNamespace::OVROverlayMeshGenerator::__get__Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Mesh;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Mesh(::UnityEngine::Mesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVROverlayMeshGenerator::__get__Verts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Verts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__Verts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Verts;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Verts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& GlobalNamespace::OVROverlayMeshGenerator::__get__UV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____UV;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__UV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____UV;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UV)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::OVROverlayMeshGenerator::__get__Tris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Tris;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__Tris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Tris;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Tris(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Tris)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVROverlay*& GlobalNamespace::OVROverlayMeshGenerator::__get__Overlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Overlay;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__Overlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Overlay;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Overlay(::GlobalNamespace::OVROverlay* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Overlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshFilter*& GlobalNamespace::OVROverlayMeshGenerator::__get__MeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____MeshFilter;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__MeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____MeshFilter;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__MeshFilter(::UnityEngine::MeshFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MeshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshCollider*& GlobalNamespace::OVROverlayMeshGenerator::__get__MeshCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____MeshCollider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshCollider*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__MeshCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____MeshCollider;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__MeshCollider(::UnityEngine::MeshCollider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MeshCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::OVROverlayMeshGenerator::__get__MeshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____MeshRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__MeshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____MeshRenderer;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__MeshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MeshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::OVROverlayMeshGenerator::__get__CameraRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____CameraRoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__CameraRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____CameraRoot;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__CameraRoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CameraRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::OVROverlayMeshGenerator::__get__Transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__Transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Transform;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape& GlobalNamespace::OVROverlayMeshGenerator::__get__LastShape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastShape;
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayShape const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastShape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastShape;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastShape(::GlobalNamespace::__OVROverlay__OverlayShape value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LastShape = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVROverlayMeshGenerator::__get__LastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastPosition;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LastPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVROverlayMeshGenerator::__get__LastRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastRotation;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LastRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVROverlayMeshGenerator::__get__LastScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastScale;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LastScale = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastDestRectLeft;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastDestRectLeft;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastDestRectLeft(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LastDestRectLeft = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastDestRectRight;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastDestRectRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastDestRectRight;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastDestRectRight(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LastDestRectRight = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__get__LastSrcRectLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastSrcRectLeft;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastSrcRectLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastSrcRectLeft;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastSrcRectLeft(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LastSrcRectLeft = value;
}
constexpr ::UnityEngine::Texture*& GlobalNamespace::OVROverlayMeshGenerator::__get__LastTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> const& GlobalNamespace::OVROverlayMeshGenerator::__get__LastTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LastTexture;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__LastTexture(::UnityEngine::Texture* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____LastTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVROverlayMeshGenerator::__get__Awake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Awake;
}
constexpr bool const& GlobalNamespace::OVROverlayMeshGenerator::__get__Awake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Awake;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__set__Awake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____Awake = value;
}
inline void GlobalNamespace::OVROverlayMeshGenerator::setStaticF_BottomLeft(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "BottomLeft",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayMeshGenerator::getStaticF_BottomLeft() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "BottomLeft",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>();
}
inline void GlobalNamespace::OVROverlayMeshGenerator::setStaticF_RightVector(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "RightVector",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayMeshGenerator::getStaticF_RightVector() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "RightVector",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>();
}
inline void GlobalNamespace::OVROverlayMeshGenerator::setStaticF_UpVector(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "UpVector",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVROverlayMeshGenerator::getStaticF_UpVector() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "UpVector",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get>();
}
inline void GlobalNamespace::OVROverlayMeshGenerator::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::SetOverlay(::GlobalNamespace::OVROverlay* overlay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "SetOverlay", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overlay);
}
inline ::UnityEngine::Rect GlobalNamespace::OVROverlayMeshGenerator::GetBoundingRect(::UnityEngine::Rect a, ::UnityEngine::Rect b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetBoundingRect", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method, a, b);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh(::GlobalNamespace::__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                 ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "UpdateMesh", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shape, position, rotation, scale, rect);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, ::System::Collections::Generic::List_1<int32_t>* tris,
                                                                   ::GlobalNamespace::__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                   ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GenerateMesh", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlay__OverlayShape>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uvs, tris, shape, position, rotation, scale, rect);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV(float_t theta, float_t phi, float_t expand_coef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereUV", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, theta, phi, expand_coef);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert(float_t theta, float_t phi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereVert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, theta, phi);
}
/// @param worldScale: float_t (default: 800.0)
/// @param latitudes: int32_t (default: static_cast<int32_t>(0x80))
/// @param longitudes: int32_t (default: static_cast<int32_t>(0x80))
/// @param expand_coef: float_t (default: 1.0)
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                  ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect,
                                                                  float_t worldScale, int32_t latitudes, int32_t longitudes, float_t expand_coef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildSphere", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, rect, worldScale, latitudes, longitudes, expand_coef);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeUV", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, face, sideUV, expand_coef);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert(::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeVert", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVROverlayMeshGenerator__CubeFace>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, face, sideUV, expand_coef);
}
/// @param worldScale: float_t (default: 800.0)
/// @param subQuads: int32_t (default: static_cast<int32_t>(0x1))
/// @param expand_coef: float_t (default: 1.01)
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, float_t worldScale, int32_t subQuads,
                                                                float_t expand_coef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildCube", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, worldScale, subQuads, expand_coef);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildQuad", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, rect);
}
/// @param longitudes: int32_t (default: static_cast<int32_t>(0x80))
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                        ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, int32_t longitudes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildHemicylinder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, scale, rect, longitudes);
}
inline ::GlobalNamespace::OVROverlayMeshGenerator* GlobalNamespace::OVROverlayMeshGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVROverlayMeshGenerator*>());
}
inline void GlobalNamespace::OVROverlayMeshGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayMeshGenerator::OVROverlayMeshGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
