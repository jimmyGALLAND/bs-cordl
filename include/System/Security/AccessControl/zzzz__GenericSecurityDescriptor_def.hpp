#pragma once
// IWYU pragma private; include "System/Security/AccessControl/GenericSecurityDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GenericSecurityDescriptor)
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class GenericSecurityDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::GenericSecurityDescriptor);
// Type: System.Security.AccessControl::GenericSecurityDescriptor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::GenericSecurityDescriptor*
class CORDL_TYPE GenericSecurityDescriptor : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_Group)) ::System::Security::Principal::SecurityIdentifier*  Group;

 __declspec(property(put=set_Owner)) ::System::Security::Principal::SecurityIdentifier*  Owner;

static inline ::System::Security::AccessControl::GenericSecurityDescriptor* New_ctor() ;

/// @brief Method .ctor, addr 0x3c34780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_Group, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Group(::System::Security::Principal::SecurityIdentifier*  value) ;

/// @brief Method set_Owner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Owner(::System::Security::Principal::SecurityIdentifier*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericSecurityDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericSecurityDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericSecurityDescriptor(GenericSecurityDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericSecurityDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericSecurityDescriptor(GenericSecurityDescriptor const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::GenericSecurityDescriptor, 0x10>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::GenericSecurityDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::GenericSecurityDescriptor*, "System.Security.AccessControl", "GenericSecurityDescriptor");
