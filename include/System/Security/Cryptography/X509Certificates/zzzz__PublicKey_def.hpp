#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PublicKey)
namespace System::Security::Cryptography {
class AsnEncodedData;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::PublicKey);
// Type: System.Security.Cryptography.X509Certificates::PublicKey
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::PublicKey*
class CORDL_TYPE PublicKey : public ::System::Object {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::ArrayW<uint8_t, ::Array<uint8_t>*> Empty;

  __declspec(property(get = get_EncodedKeyValue))::System::Security::Cryptography::AsnEncodedData* EncodedKeyValue;

  __declspec(property(get = get_EncodedParameters))::System::Security::Cryptography::AsnEncodedData* EncodedParameters;

  __declspec(property(get = get_Key))::System::Security::Cryptography::AsymmetricAlgorithm* Key;

  __declspec(property(get = get_Oid))::System::Security::Cryptography::Oid* Oid;

  /// @brief Field _keyValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keyValue, put = __cordl_internal_set__keyValue))::System::Security::Cryptography::AsnEncodedData* _keyValue;

  /// @brief Field _oid, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__oid, put = __cordl_internal_set__oid))::System::Security::Cryptography::Oid* _oid;

  /// @brief Field _params, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params))::System::Security::Cryptography::AsnEncodedData* _params;

  /// @brief Method DecodeDSA, addr 0x2eab730, size 0x4ac, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* DecodeDSA(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPublicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawParameters);

  /// @brief Method DecodeRSA, addr 0x2eab378, size 0x3b8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* DecodeRSA(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPublicKey);

  /// @brief Method GetUnsignedBigInteger, addr 0x2eabbe4, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetUnsignedBigInteger(::ArrayW<uint8_t, ::Array<uint8_t>*> integer);

  static inline ::System::Security::Cryptography::X509Certificates::PublicKey* New_ctor(::System::Security::Cryptography::Oid* oid, ::System::Security::Cryptography::AsnEncodedData* parameters,
                                                                                        ::System::Security::Cryptography::AsnEncodedData* keyValue);

  constexpr ::System::Security::Cryptography::AsnEncodedData*& __cordl_internal_get__keyValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::AsnEncodedData*> const& __cordl_internal_get__keyValue() const;

  constexpr ::System::Security::Cryptography::Oid*& __cordl_internal_get__oid();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Oid*> const& __cordl_internal_get__oid() const;

  constexpr ::System::Security::Cryptography::AsnEncodedData*& __cordl_internal_get__params();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::AsnEncodedData*> const& __cordl_internal_get__params() const;

  constexpr void __cordl_internal_set__keyValue(::System::Security::Cryptography::AsnEncodedData* value);

  constexpr void __cordl_internal_set__oid(::System::Security::Cryptography::Oid* value);

  constexpr void __cordl_internal_set__params(::System::Security::Cryptography::AsnEncodedData* value);

  /// @brief Method .ctor, addr 0x2eab050, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::Oid* oid, ::System::Security::Cryptography::AsnEncodedData* parameters, ::System::Security::Cryptography::AsnEncodedData* keyValue);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Empty();

  /// @brief Method get_EncodedKeyValue, addr 0x2eab1c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsnEncodedData* get_EncodedKeyValue();

  /// @brief Method get_EncodedParameters, addr 0x2eab1cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsnEncodedData* get_EncodedParameters();

  /// @brief Method get_Key, addr 0x2eab1d4, size 0x1a4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_Key();

  /// @brief Method get_Oid, addr 0x2eabbdc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::Oid* get_Oid();

  static inline void setStaticF_Empty(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublicKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicKey(PublicKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicKey(PublicKey const&) = delete;

  /// @brief Field _keyValue, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::AsnEncodedData* ____keyValue;

  /// @brief Field _params, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::AsnEncodedData* ____params;

  /// @brief Field _oid, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::Oid* ____oid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::PublicKey, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::PublicKey, ____keyValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::PublicKey, ____params) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::PublicKey, ____oid) == 0x20, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::PublicKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::PublicKey*, "System.Security.Cryptography.X509Certificates", "PublicKey");
