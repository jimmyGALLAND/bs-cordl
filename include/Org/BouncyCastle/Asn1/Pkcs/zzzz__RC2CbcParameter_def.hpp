#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2CbcParameter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class RC2CbcParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter);
// Type: Org.BouncyCastle.Asn1.Pkcs::RC2CbcParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(247))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::RC2CbcParameter*
class CORDL_TYPE RC2CbcParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field iv, offset 0x18, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::Org::BouncyCastle::Asn1::Asn1OctetString* iv;

  __declspec(property(get = get_RC2ParameterVersion))::Org::BouncyCastle::Math::BigInteger* RC2ParameterVersion;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_iv();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_iv() const;

  constexpr void __set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method GetInstance addr 0xf8d5a8 size 0x164 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor addr 0xf8d880 size 0x7c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* New_ctor(int32_t parameterVersion, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor addr 0xf8d8fc size 0xb4 virtual false final false
  inline void _ctor(int32_t parameterVersion, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf8d70c size 0x174 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_RC2ParameterVersion addr 0xf8d9b0 size 0x14 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_RC2ParameterVersion();

  /// @brief Method GetIV addr 0xf8d9c4 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method ToAsn1Object addr 0xf8da3c size 0x118 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "RC2CbcParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2CbcParameter(RC2CbcParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2CbcParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2CbcParameter(RC2CbcParameter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2CbcParameter();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field iv, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter*, "Org.BouncyCastle.Asn1.Pkcs", "RC2CbcParameter");
