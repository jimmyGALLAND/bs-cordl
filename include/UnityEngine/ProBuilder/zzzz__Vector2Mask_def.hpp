#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Vector2Mask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Mask)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Vector2Mask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Vector2Mask);
// Type: UnityEngine.ProBuilder::Vector2Mask
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::Vector2Mask
struct CORDL_TYPE Vector2Mask {
public:
// Declarations
/// @brief Field XY, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_XY, put=setStaticF_XY)) ::UnityEngine::ProBuilder::Vector2Mask  XY;

 __declspec(property(get=get_x)) float_t  x;

 __declspec(property(get=get_y)) float_t  y;

/// @brief Method .ctor, addr 0x46b3fbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint8_t  mask) ;

/// @brief Method .ctor, addr 0x46b3f98, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  v, float_t  epsilon) ;

static inline ::UnityEngine::ProBuilder::Vector2Mask getStaticF_XY() ;

/// @brief Method get_x, addr 0x46b3f68, size 0x18, virtual false, abstract: false, final false
inline float_t get_x() ;

/// @brief Method get_y, addr 0x46b3f80, size 0x18, virtual false, abstract: false, final false
inline float_t get_y() ;

/// @brief Method op_BitwiseAnd, addr 0x46b4060, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector2Mask  left, ::UnityEngine::ProBuilder::Vector2Mask  right) ;

/// @brief Method op_BitwiseOr, addr 0x46b4054, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector2Mask  left, ::UnityEngine::ProBuilder::Vector2Mask  right) ;

/// @brief Method op_ExclusiveOr, addr 0x46b406c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector2Mask  left, ::UnityEngine::ProBuilder::Vector2Mask  right) ;

/// @brief Method op_Implicit, addr 0x46b402c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Vector2Mask op_Implicit___UnityEngine__ProBuilder__Vector2Mask(::UnityEngine::Vector2  v) ;

/// @brief Method op_Implicit, addr 0x46b3fc4, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::ProBuilder::Vector2Mask  mask) ;

/// @brief Method op_Multiply, addr 0x46b4078, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Multiply(::UnityEngine::ProBuilder::Vector2Mask  mask, float_t  value) ;

static inline void setStaticF_XY(::UnityEngine::ProBuilder::Vector2Mask  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Vector2Mask() ;

// Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Vector2Mask(uint8_t  m_Mask) noexcept;

/// @brief Field m_Mask, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_Mask;

/// @brief Field X offset 0xffffffff size 0x1
static constexpr uint8_t  X{static_cast<uint8_t>(0x1u)};

/// @brief Field Y offset 0xffffffff size 0x1
static constexpr uint8_t  Y{static_cast<uint8_t>(0x2u)};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Vector2Mask, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vector2Mask, m_Mask) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Vector2Mask, "UnityEngine.ProBuilder", "Vector2Mask");
