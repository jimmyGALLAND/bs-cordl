#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptedValueBuilder)
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crmf {
class IEncryptedValuePadder;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class EncryptedValueBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::EncryptedValueBuilder);
// Type: Org.BouncyCastle.Crmf::EncryptedValueBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(701))
// CS Name: ::Org.BouncyCastle.Crmf::EncryptedValueBuilder*
class CORDL_TYPE EncryptedValueBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field wrapper, offset 0x10, size 0x8
  __declspec(property(get = __get_wrapper, put = __set_wrapper))::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper;

  /// @brief Field encryptor, offset 0x18, size 0x8
  __declspec(property(get = __get_encryptor, put = __set_encryptor))::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor;

  /// @brief Field padder, offset 0x20, size 0x8
  __declspec(property(get = __get_padder, put = __set_padder))::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder;

  constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& __get_wrapper();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IKeyWrapper*> const& __get_wrapper() const;

  constexpr void __set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value);

  constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*& __get_encryptor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*> const& __get_encryptor() const;

  constexpr void __set_encryptor(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* value);

  constexpr ::Org::BouncyCastle::Crmf::IEncryptedValuePadder*& __get_padder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crmf::IEncryptedValuePadder*> const& __get_padder() const;

  constexpr void __set_padder(::Org::BouncyCastle::Crmf::IEncryptedValuePadder* value);

  static inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor);

  /// @brief Method .ctor addr 0x1210854 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor);

  static inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor,
                                                                           ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder);

  /// @brief Method .ctor addr 0x1210884 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor, ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder);

  /// @brief Method Build addr 0x12108c0 size 0x30 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::ArrayW<char16_t, ::Array<char16_t>*> revocationPassphrase);

  /// @brief Method Build addr 0x12110d8 size 0x144 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::Org::BouncyCastle::X509::X509Certificate* holder);

  /// @brief Method Build addr 0x121121c size 0x5b4 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo);

  /// @brief Method EncryptData addr 0x12109a4 size 0x734 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method PadData addr 0x12108f0 size 0xb4 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PadData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValueBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedValueBuilder(EncryptedValueBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValueBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedValueBuilder(EncryptedValueBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedValueBuilder();

public:
  /// @brief Field wrapper, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IKeyWrapper* ___wrapper;

  /// @brief Field encryptor, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* ___encryptor;

  /// @brief Field padder, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* ___padder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::EncryptedValueBuilder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::EncryptedValueBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::EncryptedValueBuilder*, "Org.BouncyCastle.Crmf", "EncryptedValueBuilder");
