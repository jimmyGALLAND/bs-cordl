#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/GenericBezierCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_1_def.hpp"
CORDL_MODULE_EXPORT(GenericBezierCurve)
namespace BGLib::UnityExtension::BezierCurves {
struct CurveData;
}
namespace BGLib::UnityExtension::BezierCurves {
class GenericBezierCurveData;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
class GenericBezierCurve;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::GenericBezierCurve);
// Type: BGLib.UnityExtension.BezierCurves::GenericBezierCurve
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: ::BGLib.UnityExtension.BezierCurves::GenericBezierCurve*
class CORDL_TYPE GenericBezierCurve : public ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<::BGLib::UnityExtension::BezierCurves::GenericBezierCurveData*> {
public:
// Declarations
 __declspec(property(get=get_isReady)) bool  isReady;

/// @brief Method GetBezierCurveData, addr 0x226c1f4, size 0x1c4, virtual true, abstract: false, final false
inline ::BGLib::UnityExtension::BezierCurves::CurveData GetBezierCurveData() ;

static inline ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve* New_ctor() ;

/// @brief Method SetBezierCurveData, addr 0x226c3b8, size 0x1bc, virtual true, abstract: false, final false
inline void SetBezierCurveData(::BGLib::UnityExtension::BezierCurves::CurveData  newValue) ;

/// @brief Method .ctor, addr 0x226c574, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isReady, addr 0x226c1ec, size 0x8, virtual true, abstract: false, final false
inline bool get_isReady() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericBezierCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericBezierCurve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericBezierCurve(GenericBezierCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericBezierCurve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericBezierCurve(GenericBezierCurve const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve, 0x28>, "Size mismatch!");

} // namespace end def BGLib::UnityExtension::BezierCurves
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::GenericBezierCurve);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*, "BGLib.UnityExtension.BezierCurves", "GenericBezierCurve");
