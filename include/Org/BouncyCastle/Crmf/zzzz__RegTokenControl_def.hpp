#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegTokenControl)
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class RegTokenControl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::RegTokenControl);
// Type: Org.BouncyCastle.Crmf::RegTokenControl
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(713))
// CS Name: ::Org.BouncyCastle.Crmf::RegTokenControl*
class CORDL_TYPE RegTokenControl : public ::System::Object {
public:
  // Declarations
  /// @brief Field token, offset 0x10, size 0x8
  __declspec(property(get = __get_token, put = __set_token))::Org::BouncyCastle::Asn1::DerUtf8String* token;

  /// @brief Field type, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_type, put = setStaticF_type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* type;

  __declspec(property(get = get_Type))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Type;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
  constexpr operator ::Org::BouncyCastle::Crmf::IControl*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& __get_token();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerUtf8String*> const& __get_token() const;

  constexpr void __set_token(::Org::BouncyCastle::Asn1::DerUtf8String* value);

  static inline void setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_type();

  static inline ::Org::BouncyCastle::Crmf::RegTokenControl* New_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token);

  /// @brief Method .ctor addr 0x120e290 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token);

  static inline ::Org::BouncyCastle::Crmf::RegTokenControl* New_ctor(::StringW token);

  /// @brief Method .ctor addr 0x1212fc0 size 0x7c virtual false final false
  inline void _ctor(::StringW token);

  /// @brief Method get_Type addr 0x121303c size 0x58 virtual true final true
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type();

  /// @brief Method get_Value addr 0x1213094 size 0x8 virtual true final true
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "RegTokenControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegTokenControl(RegTokenControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegTokenControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegTokenControl(RegTokenControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegTokenControl();

public:
  /// @brief Field token, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerUtf8String* ___token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::RegTokenControl, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::RegTokenControl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::RegTokenControl*, "Org.BouncyCastle.Crmf", "RegTokenControl");
