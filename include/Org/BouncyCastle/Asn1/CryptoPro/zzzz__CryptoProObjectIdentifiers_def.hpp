#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CryptoProObjectIdentifiers)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class CryptoProObjectIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers);
// Type: Org.BouncyCastle.Asn1.CryptoPro::CryptoProObjectIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(125))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::CryptoProObjectIdentifiers*
class CORDL_TYPE CryptoProObjectIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field GostR3411, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3411, put = setStaticF_GostR3411))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3411;

  /// @brief Field GostR3411Hmac, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3411Hmac, put = setStaticF_GostR3411Hmac))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3411Hmac;

  /// @brief Field GostR28147Cbc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR28147Cbc, put = setStaticF_GostR28147Cbc))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR28147Cbc;

  /// @brief Field ID_Gost28147_89_CryptoPro_A_ParamSet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ID_Gost28147_89_CryptoPro_A_ParamSet,
                             put = setStaticF_ID_Gost28147_89_CryptoPro_A_ParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ID_Gost28147_89_CryptoPro_A_ParamSet;

  /// @brief Field GostR3410x94, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94, put = setStaticF_GostR3410x94))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94;

  /// @brief Field GostR3410x2001, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x2001, put = setStaticF_GostR3410x2001))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x2001;

  /// @brief Field GostR3411x94WithGostR3410x94, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3411x94WithGostR3410x94, put = setStaticF_GostR3411x94WithGostR3410x94))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3411x94WithGostR3410x94;

  /// @brief Field GostR3411x94WithGostR3410x2001, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3411x94WithGostR3410x2001,
                             put = setStaticF_GostR3411x94WithGostR3410x2001))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3411x94WithGostR3410x2001;

  /// @brief Field GostR3411x94CryptoProParamSet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3411x94CryptoProParamSet,
                             put = setStaticF_GostR3411x94CryptoProParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3411x94CryptoProParamSet;

  /// @brief Field GostR3410x94CryptoProA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94CryptoProA, put = setStaticF_GostR3410x94CryptoProA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94CryptoProA;

  /// @brief Field GostR3410x94CryptoProB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94CryptoProB, put = setStaticF_GostR3410x94CryptoProB))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94CryptoProB;

  /// @brief Field GostR3410x94CryptoProC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94CryptoProC, put = setStaticF_GostR3410x94CryptoProC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94CryptoProC;

  /// @brief Field GostR3410x94CryptoProD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94CryptoProD, put = setStaticF_GostR3410x94CryptoProD))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94CryptoProD;

  /// @brief Field GostR3410x94CryptoProXchA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94CryptoProXchA, put = setStaticF_GostR3410x94CryptoProXchA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94CryptoProXchA;

  /// @brief Field GostR3410x94CryptoProXchB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94CryptoProXchB, put = setStaticF_GostR3410x94CryptoProXchB))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94CryptoProXchB;

  /// @brief Field GostR3410x94CryptoProXchC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x94CryptoProXchC, put = setStaticF_GostR3410x94CryptoProXchC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x94CryptoProXchC;

  /// @brief Field GostR3410x2001CryptoProA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x2001CryptoProA, put = setStaticF_GostR3410x2001CryptoProA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x2001CryptoProA;

  /// @brief Field GostR3410x2001CryptoProB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x2001CryptoProB, put = setStaticF_GostR3410x2001CryptoProB))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x2001CryptoProB;

  /// @brief Field GostR3410x2001CryptoProC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x2001CryptoProC, put = setStaticF_GostR3410x2001CryptoProC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x2001CryptoProC;

  /// @brief Field GostR3410x2001CryptoProXchA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x2001CryptoProXchA, put = setStaticF_GostR3410x2001CryptoProXchA))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x2001CryptoProXchA;

  /// @brief Field GostR3410x2001CryptoProXchB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostR3410x2001CryptoProXchB, put = setStaticF_GostR3410x2001CryptoProXchB))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostR3410x2001CryptoProXchB;

  /// @brief Field GostElSgDH3410Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostElSgDH3410Default, put = setStaticF_GostElSgDH3410Default))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostElSgDH3410Default;

  /// @brief Field GostElSgDH3410x1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GostElSgDH3410x1, put = setStaticF_GostElSgDH3410x1))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GostElSgDH3410x1;

  static inline void setStaticF_GostR3411(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411();

  static inline void setStaticF_GostR3411Hmac(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411Hmac();

  static inline void setStaticF_GostR28147Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR28147Cbc();

  static inline void setStaticF_ID_Gost28147_89_CryptoPro_A_ParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ID_Gost28147_89_CryptoPro_A_ParamSet();

  static inline void setStaticF_GostR3410x94(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94();

  static inline void setStaticF_GostR3410x2001(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001();

  static inline void setStaticF_GostR3411x94WithGostR3410x94(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411x94WithGostR3410x94();

  static inline void setStaticF_GostR3411x94WithGostR3410x2001(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411x94WithGostR3410x2001();

  static inline void setStaticF_GostR3411x94CryptoProParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3411x94CryptoProParamSet();

  static inline void setStaticF_GostR3410x94CryptoProA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProA();

  static inline void setStaticF_GostR3410x94CryptoProB(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProB();

  static inline void setStaticF_GostR3410x94CryptoProC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProC();

  static inline void setStaticF_GostR3410x94CryptoProD(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProD();

  static inline void setStaticF_GostR3410x94CryptoProXchA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProXchA();

  static inline void setStaticF_GostR3410x94CryptoProXchB(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProXchB();

  static inline void setStaticF_GostR3410x94CryptoProXchC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x94CryptoProXchC();

  static inline void setStaticF_GostR3410x2001CryptoProA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProA();

  static inline void setStaticF_GostR3410x2001CryptoProB(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProB();

  static inline void setStaticF_GostR3410x2001CryptoProC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProC();

  static inline void setStaticF_GostR3410x2001CryptoProXchA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProXchA();

  static inline void setStaticF_GostR3410x2001CryptoProXchB(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostR3410x2001CryptoProXchB();

  static inline void setStaticF_GostElSgDH3410Default(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostElSgDH3410Default();

  static inline void setStaticF_GostElSgDH3410x1(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GostElSgDH3410x1();

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers* New_ctor();

  /// @brief Method .ctor addr 0xe89a7c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CryptoProObjectIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoProObjectIdentifiers(CryptoProObjectIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoProObjectIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoProObjectIdentifiers(CryptoProObjectIdentifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoProObjectIdentifiers();

public:
  /// @brief Field GostID offset 0xffffffff size 0x8
  static constexpr ::ConstString GostID{ u"1.2.643.2.2" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::CryptoProObjectIdentifiers*, "Org.BouncyCastle.Asn1.CryptoPro", "CryptoProObjectIdentifiers");
