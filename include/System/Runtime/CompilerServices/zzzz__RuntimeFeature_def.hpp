#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuntimeFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeFeature)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeFeature;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::RuntimeFeature);
// Type: System.Runtime.CompilerServices::RuntimeFeature
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::RuntimeFeature*
class CORDL_TYPE RuntimeFeature : public ::System::Object {
public:
// Declarations
/// @brief Method get_IsDynamicCodeSupported, addr 0x3c8803c, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsDynamicCodeSupported() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFeature", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeFeature(RuntimeFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFeature", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeFeature(RuntimeFeature const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::RuntimeFeature, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeFeature);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeFeature*, "System.Runtime.CompilerServices", "RuntimeFeature");
