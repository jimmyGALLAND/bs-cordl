#pragma once
// IWYU pragma private; include "UnityEngine/CapsuleCollider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CapsuleCollider)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CapsuleCollider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CapsuleCollider);
// Type: UnityEngine::CapsuleCollider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::CapsuleCollider*
class CORDL_TYPE CapsuleCollider : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_center, put=set_center)) ::UnityEngine::Vector3  center;

 __declspec(property(get=get_direction, put=set_direction)) int32_t  direction;

 __declspec(property(get=get_height, put=set_height)) float_t  height;

 __declspec(property(get=get_radius, put=set_radius)) float_t  radius;

/// @brief Method CalculateTransform, addr 0x4874408, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 CalculateTransform() ;

/// @brief Method CalculateTransform_Injected, addr 0x4874474, size 0x44, virtual false, abstract: false, final false
inline void CalculateTransform_Injected(ByRef<::UnityEngine::Matrix4x4>  ret) ;

/// @brief Method GetGlobalExtents, addr 0x4874378, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetGlobalExtents() ;

/// @brief Method GetGlobalExtents_Injected, addr 0x48743c4, size 0x44, virtual false, abstract: false, final false
inline void GetGlobalExtents_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

static inline ::UnityEngine::CapsuleCollider* New_ctor() ;

/// @brief Method .ctor, addr 0x48744b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_center, addr 0x48740b0, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_center_Injected, addr 0x487410c, size 0x44, virtual false, abstract: false, final false
inline void get_center_Injected(ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_direction, addr 0x48742f8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_direction() ;

/// @brief Method get_height, addr 0x4874270, size 0x3c, virtual false, abstract: false, final false
inline float_t get_height() ;

/// @brief Method get_radius, addr 0x48741e8, size 0x3c, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method set_center, addr 0x4874150, size 0x54, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_center_Injected, addr 0x48741a4, size 0x44, virtual false, abstract: false, final false
inline void set_center_Injected(ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_direction, addr 0x4874334, size 0x44, virtual false, abstract: false, final false
inline void set_direction(int32_t  value) ;

/// @brief Method set_height, addr 0x48742ac, size 0x4c, virtual false, abstract: false, final false
inline void set_height(float_t  value) ;

/// @brief Method set_radius, addr 0x4874224, size 0x4c, virtual false, abstract: false, final false
inline void set_radius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapsuleCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CapsuleCollider(CapsuleCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapsuleCollider(CapsuleCollider const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CapsuleCollider, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::CapsuleCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CapsuleCollider*, "UnityEngine", "CapsuleCollider");
