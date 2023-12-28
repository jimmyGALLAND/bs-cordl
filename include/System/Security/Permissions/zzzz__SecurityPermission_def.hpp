#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__SecurityPermissionFlag_def.hpp"
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
CORDL_MODULE_EXPORT(SecurityPermission)
namespace System::Security::Permissions {
struct SecurityPermissionFlag;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class SecurityElement;
}
namespace System::Security::Permissions {
struct PermissionState;
}
// Forward declare root types
namespace System::Security::Permissions {
class SecurityPermission;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Permissions::SecurityPermission);
// Type: System.Security.Permissions::SecurityPermission
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Permissions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2907)), TypeDefinitionIndex(TypeDefinitionIndex(2882))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2906))
// CS Name: ::System.Security.Permissions::SecurityPermission*
class CORDL_TYPE SecurityPermission : public ::System::Security::CodeAccessPermission {
public:
  // Declarations
  /// @brief Field flags, offset 0x10, size 0x4
  __declspec(property(get = __get_flags, put = __set_flags))::System::Security::Permissions::SecurityPermissionFlag flags;

  __declspec(property(put = set_Flags))::System::Security::Permissions::SecurityPermissionFlag Flags;

  constexpr ::System::Security::Permissions::SecurityPermissionFlag& __get_flags();

  constexpr ::System::Security::Permissions::SecurityPermissionFlag const& __get_flags() const;

  constexpr void __set_flags(::System::Security::Permissions::SecurityPermissionFlag value);

  static inline ::System::Security::Permissions::SecurityPermission* New_ctor(::System::Security::Permissions::PermissionState state);

  /// @brief Method .ctor addr 0x2456e8c size 0x40 virtual false final false
  inline void _ctor(::System::Security::Permissions::PermissionState state);

  static inline ::System::Security::Permissions::SecurityPermission* New_ctor(::System::Security::Permissions::SecurityPermissionFlag flag);

  /// @brief Method .ctor addr 0x2456ecc size 0x2c virtual false final false
  inline void _ctor(::System::Security::Permissions::SecurityPermissionFlag flag);

  /// @brief Method set_Flags addr 0x2456ef8 size 0xb8 virtual false final false
  inline void set_Flags(::System::Security::Permissions::SecurityPermissionFlag value);

  /// @brief Method IsUnrestricted addr 0x2456fb0 size 0x14 virtual true final true
  inline bool IsUnrestricted();

  /// @brief Method IsSubsetOf addr 0x2456fc4 size 0x58 virtual true final false
  inline bool IsSubsetOf(::System::Security::IPermission* target);

  /// @brief Method ToXml addr 0x24570d0 size 0xec virtual true final false
  inline ::System::Security::SecurityElement* ToXml();

  /// @brief Method IsEmpty addr 0x24570c0 size 0x10 virtual false final false
  inline bool IsEmpty();

  /// @brief Method Cast addr 0x245701c size 0xa4 virtual false final false
  inline ::System::Security::Permissions::SecurityPermission* Cast(::System::Security::IPermission* target);

  // Ctor Parameters [CppParam { name: "", ty: "SecurityPermission", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityPermission(SecurityPermission&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityPermission", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityPermission(SecurityPermission const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityPermission();

public:
  /// @brief Field flags, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Permissions::SecurityPermissionFlag ___flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Permissions::SecurityPermission, 0x18>, "Size mismatch!");

} // namespace System::Security::Permissions
NEED_NO_BOX(::System::Security::Permissions::SecurityPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::SecurityPermission*, "System.Security.Permissions", "SecurityPermission");
