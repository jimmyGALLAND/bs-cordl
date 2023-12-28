#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateKeyInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo);
// Type: Org.BouncyCastle.Asn1.Pkcs::PrivateKeyInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(246))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::PrivateKeyInfo*
class CORDL_TYPE PrivateKeyInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field privateKeyAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_privateKeyAlgorithm, put = __set_privateKeyAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm;

  /// @brief Field privateKey, offset 0x20, size 0x8
  __declspec(property(get = __get_privateKey, put = __set_privateKey))::Org::BouncyCastle::Asn1::Asn1OctetString* privateKey;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::Org::BouncyCastle::Asn1::Asn1Set* attributes;

  /// @brief Field publicKey, offset 0x30, size 0x8
  __declspec(property(get = __get_publicKey, put = __set_publicKey))::Org::BouncyCastle::Asn1::DerBitString* publicKey;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_Attributes))::Org::BouncyCastle::Asn1::Asn1Set* Attributes;

  __declspec(property(get = get_HasPublicKey)) bool HasPublicKey;

  __declspec(property(get = get_PrivateKeyAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* PrivateKeyAlgorithm;

  __declspec(property(get = get_PrivateKeyData))::Org::BouncyCastle::Asn1::Asn1OctetString* PrivateKeyData;

  __declspec(property(get = get_PublicKeyData))::Org::BouncyCastle::Asn1::DerBitString* PublicKeyData;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_privateKeyAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_privateKeyAlgorithm() const;

  constexpr void __set_privateKeyAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_privateKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_privateKey() const;

  constexpr void __set_privateKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_attributes() const;

  constexpr void __set_attributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_publicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_publicKey() const;

  constexpr void __set_publicKey(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance addr 0xf8cd30 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xf8cd48 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetVersionValue addr 0xf8d110 size 0x124 virtual false final false
  static inline int32_t GetVersionValue(::Org::BouncyCastle::Asn1::DerInteger* version);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                          ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey);

  /// @brief Method .ctor addr 0xf8d234 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                          ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method .ctor addr 0xf8d390 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm,
                                                                          ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor addr 0xf8d240 size 0x150 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* privateKeyAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable* privateKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf8cdec size 0x324 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version addr 0xf8d398 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_Attributes addr 0xf8d3a0 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Attributes();

  /// @brief Method get_HasPublicKey addr 0xf8d3a8 size 0x10 virtual true final false
  inline bool get_HasPublicKey();

  /// @brief Method get_PrivateKeyAlgorithm addr 0xf8d3b8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_PrivateKeyAlgorithm();

  /// @brief Method get_PrivateKeyData addr 0xf8d3c0 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_PrivateKeyData();

  /// @brief Method ParsePrivateKey addr 0xf8d3c8 size 0x28 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ParsePrivateKey();

  /// @brief Method ParsePublicKey addr 0xf8d3f0 size 0x2c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ParsePublicKey();

  /// @brief Method get_PublicKeyData addr 0xf8d41c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_PublicKeyData();

  /// @brief Method ToAsn1Object addr 0xf8d424 size 0x184 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKeyInfo(PrivateKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKeyInfo(PrivateKeyInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKeyInfo();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field privateKeyAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___privateKeyAlgorithm;

  /// @brief Field privateKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___privateKey;

  /// @brief Field attributes, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___attributes;

  /// @brief Field publicKey, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___publicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, "Org.BouncyCastle.Asn1.Pkcs", "PrivateKeyInfo");
