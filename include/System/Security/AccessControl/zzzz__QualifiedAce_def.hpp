#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__KnownAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QualifiedAce)
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceType;
}
// Forward declare root types
namespace System::Security::AccessControl {
class QualifiedAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::QualifiedAce);
// Type: System.Security.AccessControl::QualifiedAce
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3039))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3046))
// CS Name: ::System.Security.AccessControl::QualifiedAce*
class CORDL_TYPE QualifiedAce : public ::System::Security::AccessControl::KnownAce {
public:
  // Declarations
  /// @brief Field opaque, offset 0x20, size 0x8
  __declspec(property(get = __get_opaque, put = __set_opaque))::ArrayW<uint8_t, ::Array<uint8_t>*> opaque;

  __declspec(property(get = get_AceQualifier))::System::Security::AccessControl::AceQualifier AceQualifier;

  __declspec(property(get = get_IsCallback)) bool IsCallback;

  __declspec(property(get = get_OpaqueLength)) int32_t OpaqueLength;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_opaque();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_opaque() const;

  constexpr void __set_opaque(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Security::AccessControl::QualifiedAce* New_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  /// @brief Method .ctor addr 0x2480ba0 size 0x28 virtual false final false
  inline void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags, ::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  static inline ::System::Security::AccessControl::QualifiedAce* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor addr 0x2480db8 size 0x4 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method get_AceQualifier addr 0x2481bb4 size 0xbc virtual false final false
  inline ::System::Security::AccessControl::AceQualifier get_AceQualifier();

  /// @brief Method get_IsCallback addr 0x24823d8 size 0x3c virtual false final false
  inline bool get_IsCallback();

  /// @brief Method get_OpaqueLength addr 0x2480f50 size 0x18 virtual false final false
  inline int32_t get_OpaqueLength();

  /// @brief Method GetOpaque addr 0x2481114 size 0x74 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOpaque();

  /// @brief Method SetOpaque addr 0x2480e70 size 0xa8 virtual false final false
  inline void SetOpaque(::ArrayW<uint8_t, ::Array<uint8_t>*> opaque);

  // Ctor Parameters [CppParam { name: "", ty: "QualifiedAce", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QualifiedAce(QualifiedAce&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QualifiedAce", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QualifiedAce(QualifiedAce const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QualifiedAce();

public:
  /// @brief Field opaque, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___opaque;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::QualifiedAce, 0x28>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::QualifiedAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::QualifiedAce*, "System.Security.AccessControl", "QualifiedAce");
