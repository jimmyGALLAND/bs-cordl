#pragma once
// IWYU pragma private; include "UnityEngine/TerrainCollider.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__TerrainCollider_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainCollider.set_terrainData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TerrainCollider::*)(::UnityEngine::TerrainData*)>(&::UnityEngine::TerrainCollider::set_terrainData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x488a86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCollider*>::get(),
                        "set_terrainData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainCollider::set_terrainData(::UnityEngine::TerrainData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCollider*>::get(),
                        "set_terrainData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainCollider::TerrainCollider()   {
}
