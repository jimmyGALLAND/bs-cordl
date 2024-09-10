#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/ObjectBasedBezierCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_1_def.hpp"
CORDL_MODULE_EXPORT(ObjectBasedBezierCurve)
namespace BGLib::UnityExtension::BezierCurves {
struct CurveData;
}
namespace BGLib::UnityExtension::BezierCurves {
class ObjectBasedBezierCurveData;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
class ObjectBasedBezierCurve;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve);
// Type: BGLib.UnityExtension.BezierCurves::ObjectBasedBezierCurve
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: ::BGLib.UnityExtension.BezierCurves::ObjectBasedBezierCurve*
class CORDL_TYPE ObjectBasedBezierCurve : public ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*> {
public:
// Declarations
 __declspec(property(get=get_isReady)) bool  isReady;

/// @brief Method GetBezierCurveData, addr 0x226c944, size 0xf4, virtual true, abstract: false, final false
inline ::BGLib::UnityExtension::BezierCurves::CurveData GetBezierCurveData() ;

static inline ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve* New_ctor() ;

/// @brief Method SetBezierCurveData, addr 0x226ca38, size 0x90, virtual true, abstract: false, final false
inline void SetBezierCurveData(::BGLib::UnityExtension::BezierCurves::CurveData  newValue) ;

/// @brief Method .ctor, addr 0x226cac8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isReady, addr 0x226c894, size 0x18, virtual true, abstract: false, final false
inline bool get_isReady() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectBasedBezierCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectBasedBezierCurve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectBasedBezierCurve(ObjectBasedBezierCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectBasedBezierCurve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectBasedBezierCurve(ObjectBasedBezierCurve const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve, 0x28>, "Size mismatch!");

} // namespace end def BGLib::UnityExtension::BezierCurves
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*, "BGLib.UnityExtension.BezierCurves", "ObjectBasedBezierCurve");
