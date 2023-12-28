#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectSecurity)
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
class CommonSecurityDescriptor;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
class AccessRule;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System {
class Type;
}
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
namespace System::Security::AccessControl {
class QualifiedAce;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Threading {
class ReaderWriterLock;
}
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::ObjectSecurity);
// Type: System.Security.AccessControl::ObjectSecurity
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3013)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3044))
// CS Name: ::System.Security.AccessControl::ObjectSecurity*
class CORDL_TYPE ObjectSecurity : public ::System::Object {
public:
  // Declarations
  /// @brief Field descriptor, offset 0x10, size 0x8
  __declspec(property(get = __get_descriptor, put = __set_descriptor))::System::Security::AccessControl::CommonSecurityDescriptor* descriptor;

  /// @brief Field sections_modified, offset 0x18, size 0x4
  __declspec(property(get = __get_sections_modified, put = __set_sections_modified))::System::Security::AccessControl::AccessControlSections sections_modified;

  /// @brief Field rw_lock, offset 0x20, size 0x8
  __declspec(property(get = __get_rw_lock, put = __set_rw_lock))::System::Threading::ReaderWriterLock* rw_lock;

  __declspec(property(put = set_AccessControlSectionsModified))::System::Security::AccessControl::AccessControlSections AccessControlSectionsModified;

  constexpr ::System::Security::AccessControl::CommonSecurityDescriptor*& __get_descriptor();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::CommonSecurityDescriptor*> const& __get_descriptor() const;

  constexpr void __set_descriptor(::System::Security::AccessControl::CommonSecurityDescriptor* value);

  constexpr ::System::Security::AccessControl::AccessControlSections& __get_sections_modified();

  constexpr ::System::Security::AccessControl::AccessControlSections const& __get_sections_modified() const;

  constexpr void __set_sections_modified(::System::Security::AccessControl::AccessControlSections value);

  constexpr ::System::Threading::ReaderWriterLock*& __get_rw_lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLock*> const& __get_rw_lock() const;

  constexpr void __set_rw_lock(::System::Threading::ReaderWriterLock* value);

  static inline ::System::Security::AccessControl::ObjectSecurity* New_ctor(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor);

  /// @brief Method .ctor addr 0x24847c8 size 0xc4 virtual false final false
  inline void _ctor(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor);

  static inline ::System::Security::AccessControl::ObjectSecurity* New_ctor(bool isContainer, bool isDS);

  /// @brief Method .ctor addr 0x2482be0 size 0xfc virtual false final false
  inline void _ctor(bool isContainer, bool isDS);

  /// @brief Method set_AccessControlSectionsModified addr 0x2484100 size 0x24 virtual false final false
  inline void set_AccessControlSectionsModified(::System::Security::AccessControl::AccessControlSections value);

  /// @brief Method AccessRuleFactory addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Security::AccessControl::AccessRule* AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference, int32_t accessMask, bool isInherited,
                                                                          ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                          ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                          ::System::Security::AccessControl::AccessControlType type);

  /// @brief Method ReadLock addr 0x24848fc size 0x20 virtual false final false
  inline void ReadLock();

  /// @brief Method ReadUnlock addr 0x248491c size 0x1c virtual false final false
  inline void ReadUnlock();

  /// @brief Method Writing addr 0x248488c size 0x70 virtual false final false
  inline void Writing();

  /// @brief Method WriteLock addr 0x24840e0 size 0x20 virtual false final false
  inline void WriteLock();

  /// @brief Method WriteUnlock addr 0x2484938 size 0x1c virtual false final false
  inline void WriteUnlock();

  /// @brief Method InternalGetAccessRules addr 0x2482ce8 size 0x324 virtual false final false
  inline ::System::Security::AccessControl::AuthorizationRuleCollection* InternalGetAccessRules(bool includeExplicit, bool includeInherited, ::System::Type* targetType);

  /// @brief Method InternalAccessRuleFactory addr 0x2484954 size 0x70 virtual true final false
  inline ::System::Security::AccessControl::AccessRule* InternalAccessRuleFactory(::System::Security::AccessControl::QualifiedAce* ace, ::System::Type* targetType,
                                                                                  ::System::Security::AccessControl::AccessControlType type);

  // Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectSecurity(ObjectSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectSecurity(ObjectSecurity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectSecurity();

public:
  /// @brief Field descriptor, offset: 0x10, size: 0x8, def value: None
  ::System::Security::AccessControl::CommonSecurityDescriptor* ___descriptor;

  /// @brief Field sections_modified, offset: 0x18, size: 0x4, def value: None
  ::System::Security::AccessControl::AccessControlSections ___sections_modified;

  /// @brief Field rw_lock, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ReaderWriterLock* ___rw_lock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ObjectSecurity, 0x28>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::ObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectSecurity*, "System.Security.AccessControl", "ObjectSecurity");
