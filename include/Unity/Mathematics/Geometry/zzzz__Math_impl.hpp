#pragma once
// IWYU pragma private; include "Unity/Mathematics/Geometry/Math.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/Geometry/zzzz__Math_def.hpp"
#include "Unity/Mathematics/Geometry/zzzz__MinMaxAABB_def.hpp"
#include "Unity/Mathematics/zzzz__RigidTransform_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Math.Transform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::RigidTransform, ::Unity::Mathematics::Geometry::MinMaxAABB)>(&::Unity::Mathematics::Geometry::Math::Transform)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x45ddea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::Geometry::Math*>::get(),
                        "Transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::RigidTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::Geometry::MinMaxAABB>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Math.Transform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::Geometry::MinMaxAABB)>(&::Unity::Mathematics::Geometry::Math::Transform)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x45de18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::Geometry::Math*>::get(),
                        "Transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::Geometry::MinMaxAABB>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Geometry::Math.Transform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::Geometry::MinMaxAABB (*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::Geometry::MinMaxAABB)>(&::Unity::Mathematics::Geometry::Math::Transform)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x45de244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::Geometry::Math*>::get(),
                        "Transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::Geometry::MinMaxAABB>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::Math::Transform(::Unity::Mathematics::RigidTransform  transform, ::Unity::Mathematics::Geometry::MinMaxAABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::Geometry::Math*>::get(),
                        "Transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::RigidTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::Geometry::MinMaxAABB>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB, false>(nullptr, ___internal_method, transform, aabb);
}
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::Math::Transform(::Unity::Mathematics::float4x4  transform, ::Unity::Mathematics::Geometry::MinMaxAABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::Geometry::Math*>::get(),
                        "Transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::Geometry::MinMaxAABB>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB, false>(nullptr, ___internal_method, transform, aabb);
}
inline ::Unity::Mathematics::Geometry::MinMaxAABB Unity::Mathematics::Geometry::Math::Transform(::Unity::Mathematics::float3x3  transform, ::Unity::Mathematics::Geometry::MinMaxAABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Mathematics::Geometry::Math*>::get(),
                        "Transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3x3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::Geometry::MinMaxAABB>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::Geometry::MinMaxAABB, false>(nullptr, ___internal_method, transform, aabb);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::Geometry::Math::Math()   {
}
