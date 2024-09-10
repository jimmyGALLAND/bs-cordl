#pragma once
// IWYU pragma private; include "Unity/Burst/NoAliasAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NoAliasAttribute)
// Forward declare root types
namespace Unity::Burst {
class NoAliasAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::NoAliasAttribute);
// Type: Unity.Burst::NoAliasAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::Unity.Burst::NoAliasAttribute*
class CORDL_TYPE NoAliasAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Unity::Burst::NoAliasAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x4479634, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoAliasAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoAliasAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoAliasAttribute(NoAliasAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoAliasAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoAliasAttribute(NoAliasAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::NoAliasAttribute, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst
NEED_NO_BOX(::Unity::Burst::NoAliasAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::NoAliasAttribute*, "Unity.Burst", "NoAliasAttribute");
