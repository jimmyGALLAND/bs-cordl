#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/CurveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CurveData)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
struct CurveData;
}
// Write type traits
MARK_VAL_T(::BGLib::UnityExtension::BezierCurves::CurveData);
// Type: BGLib.UnityExtension.BezierCurves::CurveData
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: true
// CS Name: ::BGLib.UnityExtension.BezierCurves::CurveData
struct CORDL_TYPE CurveData {
public:
// Declarations
/// @brief Method Evaluate, addr 0x226ba34, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Evaluate(float_t  t) ;

/// @brief Method RotatePointAroundPivot, addr 0x226c190, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 RotatePointAroundPivot(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  pivot, ::UnityEngine::Quaternion  rot) ;

/// @brief Method RotatePointsAroundPivot, addr 0x226c054, size 0x13c, virtual false, abstract: false, final false
inline ::BGLib::UnityExtension::BezierCurves::CurveData RotatePointsAroundPivot(::UnityEngine::Vector3  pivot, ::UnityEngine::Quaternion  rot) ;

// Ctor Parameters []
// @brief default ctor
constexpr CurveData() ;

// Ctor Parameters [CppParam { name: "startPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "startControlPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "endControlPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr CurveData(::UnityEngine::Vector3  startPoint, ::UnityEngine::Vector3  endPoint, ::UnityEngine::Vector3  startControlPoint, ::UnityEngine::Vector3  endControlPoint) noexcept;

/// @brief Field startPoint, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  startPoint;

/// @brief Field endPoint, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  endPoint;

/// @brief Field startControlPoint, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  startControlPoint;

/// @brief Field endControlPoint, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  endControlPoint;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::CurveData, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveData, startPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveData, endPoint) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveData, startControlPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveData, endControlPoint) == 0x24, "Offset mismatch!");

} // namespace end def BGLib::UnityExtension::BezierCurves
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::CurveData, "BGLib.UnityExtension.BezierCurves", "CurveData");
