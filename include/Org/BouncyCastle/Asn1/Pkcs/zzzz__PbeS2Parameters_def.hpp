#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PbeS2Parameters)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class KeyDerivationFunc;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptionScheme;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PbeS2Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters);
// Type: Org.BouncyCastle.Asn1.Pkcs::PbeS2Parameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(241))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::PbeS2Parameters*
class CORDL_TYPE PbeS2Parameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field func, offset 0x10, size 0x8
  __declspec(property(get = __get_func, put = __set_func))::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* func;

  /// @brief Field scheme, offset 0x18, size 0x8
  __declspec(property(get = __get_scheme, put = __set_scheme))::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* scheme;

  __declspec(property(get = get_KeyDerivationFunc))::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* KeyDerivationFunc;

  __declspec(property(get = get_EncryptionScheme))::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* EncryptionScheme;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*& __get_func();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*> const& __get_func() const;

  constexpr void __set_func(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* value);

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*& __get_scheme();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*> const& __get_scheme() const;

  constexpr void __set_scheme(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* value);

  /// @brief Method GetInstance addr 0xf899bc size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* keyDevFunc,
                                                                           ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* encScheme);

  /// @brief Method .ctor addr 0xf89cec size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* keyDevFunc, ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* encScheme);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf89a60 size 0x28c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_KeyDerivationFunc addr 0xf89ea0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* get_KeyDerivationFunc();

  /// @brief Method get_EncryptionScheme addr 0xf89ea8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* get_EncryptionScheme();

  /// @brief Method ToAsn1Object addr 0xf89eb0 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PbeS2Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbeS2Parameters(PbeS2Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbeS2Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbeS2Parameters(PbeS2Parameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbeS2Parameters();

public:
  /// @brief Field func, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* ___func;

  /// @brief Field scheme, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* ___scheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*, "Org.BouncyCastle.Asn1.Pkcs", "PbeS2Parameters");
