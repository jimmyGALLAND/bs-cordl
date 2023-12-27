#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTlsSrpGroupVerifier)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsSrpGroupVerifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier);
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsSrpGroupVerifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1217))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DefaultTlsSrpGroupVerifier*
class CORDL_TYPE DefaultTlsSrpGroupVerifier : public ::System::Object {
public:
  // Declarations
  /// @brief Field mGroups, offset 0x10, size 0x8
  __declspec(property(get = __get_mGroups, put = __set_mGroups))::System::Collections::IList* mGroups;

  /// @brief Field DefaultGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultGroups, put = setStaticF_DefaultGroups))::System::Collections::IList* DefaultGroups;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*() noexcept;

  constexpr ::System::Collections::IList*& __get_mGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_mGroups() const;

  constexpr void __set_mGroups(::System::Collections::IList* value);

  static inline void setStaticF_DefaultGroups(::System::Collections::IList* value);

  static inline ::System::Collections::IList* getStaticF_DefaultGroups();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* New_ctor();

  /// @brief Method .ctor addr 0xf664d4 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier* New_ctor(::System::Collections::IList* groups);

  /// @brief Method .ctor addr 0xf66540 size 0x28 virtual false final false
  inline void _ctor(::System::Collections::IList* groups);

  /// @brief Method Accept addr 0xf66568 size 0x358 virtual true final false
  inline bool Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group);

  /// @brief Method AreGroupsEqual addr 0xf668c0 size 0x78 virtual true final false
  inline bool AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* a, ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* b);

  /// @brief Method AreParametersEqual addr 0xf66938 size 0x3c virtual true final false
  inline bool AreParametersEqual(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSrpGroupVerifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTlsSrpGroupVerifier(DefaultTlsSrpGroupVerifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSrpGroupVerifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTlsSrpGroupVerifier(DefaultTlsSrpGroupVerifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTlsSrpGroupVerifier();

public:
  /// @brief Field mGroups, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier*, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsSrpGroupVerifier");
