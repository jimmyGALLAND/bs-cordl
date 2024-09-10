#pragma once
// IWYU pragma private; include "Oculus/Platform/AbuseReportOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbuseReportOptions)
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class AbuseReportOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AbuseReportOptions);
// Type: Oculus.Platform::AbuseReportOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::AbuseReportOptions*
class CORDL_TYPE AbuseReportOptions : public ::System::Object {
public:
// Declarations
/// @brief Field Handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Handle, put=__cordl_internal_set_Handle)) ::System::IntPtr  Handle;

/// @brief Method Finalize, addr 0x3eca1ac, size 0xd4, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Oculus::Platform::AbuseReportOptions* New_ctor() ;

/// @brief Method SetPreventPeopleChooser, addr 0x3ec9fc8, size 0x68, virtual false, abstract: false, final false
inline void SetPreventPeopleChooser(bool  value) ;

/// @brief Method SetReportType, addr 0x3eca0b4, size 0x68, virtual false, abstract: false, final false
inline void SetReportType(::Oculus::Platform::AbuseReportType  value) ;

constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

constexpr ::System::IntPtr& __cordl_internal_get_Handle() ;

constexpr void __cordl_internal_set_Handle(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x3ec9efc, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Explicit, addr 0x3eca1a0, size 0xc, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::AbuseReportOptions*  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbuseReportOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbuseReportOptions(AbuseReportOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbuseReportOptions(AbuseReportOptions const& ) = delete;

/// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AbuseReportOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::AbuseReportOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReportOptions*, "Oculus.Platform", "AbuseReportOptions");
