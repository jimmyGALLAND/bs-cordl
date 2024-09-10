#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectionUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionUtilities)
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class ReflectionUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::ReflectionUtilities);
// Type: Unity.Properties.Internal::ReflectionUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::ReflectionUtilities*
class CORDL_TYPE ReflectionUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method SanitizeMemberName, addr 0x487d114, size 0x108, virtual false, abstract: false, final false
static inline ::StringW SanitizeMemberName(::System::Reflection::MemberInfo*  info) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtilities(ReflectionUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtilities(ReflectionUtilities const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::ReflectionUtilities, 0x10>, "Size mismatch!");

} // namespace end def Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::ReflectionUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ReflectionUtilities*, "Unity.Properties.Internal", "ReflectionUtilities");
