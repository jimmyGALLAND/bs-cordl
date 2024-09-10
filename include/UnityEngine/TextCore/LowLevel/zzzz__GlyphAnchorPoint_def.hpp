#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphAnchorPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GlyphAnchorPoint)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAnchorPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint);
// Type: UnityEngine.TextCore.LowLevel::GlyphAnchorPoint
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphAnchorPoint
struct CORDL_TYPE GlyphAnchorPoint {
public:
// Declarations
 __declspec(property(get=get_xCoordinate)) float_t  xCoordinate;

 __declspec(property(get=get_yCoordinate)) float_t  yCoordinate;

/// @brief Method get_xCoordinate, addr 0x488d1e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_xCoordinate() ;

/// @brief Method get_yCoordinate, addr 0x488d1e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_yCoordinate() ;

// Ctor Parameters []
// @brief default ctor
constexpr GlyphAnchorPoint() ;

// Ctor Parameters [CppParam { name: "m_XCoordinate", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YCoordinate", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlyphAnchorPoint(float_t  m_XCoordinate, float_t  m_YCoordinate) noexcept;

/// @brief Field m_XCoordinate, offset: 0x0, size: 0x4, def value: None
 float_t  m_XCoordinate;

/// @brief Field m_YCoordinate, offset: 0x4, size: 0x4, def value: None
 float_t  m_YCoordinate;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, m_XCoordinate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, m_YCoordinate) == 0x4, "Offset mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, "UnityEngine.TextCore.LowLevel", "GlyphAnchorPoint");
