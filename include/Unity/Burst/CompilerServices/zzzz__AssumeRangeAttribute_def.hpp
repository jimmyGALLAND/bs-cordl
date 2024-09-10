#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/AssumeRangeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssumeRangeAttribute)
// Forward declare root types
namespace Unity::Burst::CompilerServices {
class AssumeRangeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::CompilerServices::AssumeRangeAttribute);
// Type: Unity.Burst.CompilerServices::AssumeRangeAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::CompilerServices {
// Is value type: false
// CS Name: ::Unity.Burst.CompilerServices::AssumeRangeAttribute*
class CORDL_TYPE AssumeRangeAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Unity::Burst::CompilerServices::AssumeRangeAttribute* New_ctor(int64_t  min, int64_t  max) ;

static inline ::Unity::Burst::CompilerServices::AssumeRangeAttribute* New_ctor(uint64_t  min, uint64_t  max) ;

/// @brief Method .ctor, addr 0x44a96dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  min, int64_t  max) ;

/// @brief Method .ctor, addr 0x44a96e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  min, uint64_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssumeRangeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssumeRangeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssumeRangeAttribute(AssumeRangeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssumeRangeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssumeRangeAttribute(AssumeRangeAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilerServices::AssumeRangeAttribute, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::CompilerServices
NEED_NO_BOX(::Unity::Burst::CompilerServices::AssumeRangeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilerServices::AssumeRangeAttribute*, "Unity.Burst.CompilerServices", "AssumeRangeAttribute");
