#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/GenericBezierCurveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurveData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GenericBezierCurveData)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
class GenericBezierCurveData;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData);
// Type: BGLib.UnityExtension.BezierCurves::GenericBezierCurveData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: ::BGLib.UnityExtension.BezierCurves::GenericBezierCurveData*
class CORDL_TYPE GenericBezierCurveData : public ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData {
public:
// Declarations
/// @brief Field _endPoint, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__endPoint, put=__cordl_internal_set__endPoint)) ::UnityEngine::Vector3  _endPoint;

/// @brief Field _startPoint, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPoint, put=__cordl_internal_set__startPoint)) ::UnityEngine::Vector3  _startPoint;

 __declspec(property(get=get_endPoint)) ::UnityEngine::Vector3  endPoint;

 __declspec(property(get=get_startPoint)) ::UnityEngine::Vector3  startPoint;

static inline ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData* New_ctor() ;

/// @brief Method RotatePointAroundPivot, addr 0x226c7b0, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 RotatePointAroundPivot(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  pivot, ::UnityEngine::Quaternion  rot) ;

/// @brief Method RotatePointsAroundPivot, addr 0x226c5ec, size 0x1c4, virtual false, abstract: false, final false
inline ::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData* RotatePointsAroundPivot(::UnityEngine::Vector3  pivot, ::UnityEngine::Quaternion  rot) ;

/// @brief Method SetEndPoint, addr 0x226c5e0, size 0xc, virtual false, abstract: false, final false
inline void SetEndPoint(::UnityEngine::Vector3  newValue) ;

/// @brief Method SetStartPoint, addr 0x226c5d4, size 0xc, virtual false, abstract: false, final false
inline void SetStartPoint(::UnityEngine::Vector3  newValue) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__endPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPoint() ;

constexpr void __cordl_internal_set__endPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startPoint(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x226c80c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_endPoint, addr 0x226c5c8, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_endPoint() ;

/// @brief Method get_startPoint, addr 0x226c5bc, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_startPoint() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericBezierCurveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericBezierCurveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericBezierCurveData(GenericBezierCurveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericBezierCurveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericBezierCurveData(GenericBezierCurveData const& ) = delete;

/// @brief Field _startPoint, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPoint;

/// @brief Field _endPoint, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____endPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData, 0x40>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData, ____startPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData, ____endPoint) == 0x34, "Offset mismatch!");

} // namespace end def BGLib::UnityExtension::BezierCurves
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*, "BGLib.UnityExtension.BezierCurves", "GenericBezierCurveData");
