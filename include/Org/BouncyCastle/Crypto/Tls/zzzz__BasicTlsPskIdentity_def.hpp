#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicTlsPskIdentity)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class BasicTlsPskIdentity;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity);
// Type: Org.BouncyCastle.Crypto.Tls::BasicTlsPskIdentity
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1181))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::BasicTlsPskIdentity*
class CORDL_TYPE BasicTlsPskIdentity : public ::System::Object {
public:
  // Declarations
  /// @brief Field mIdentity, offset 0x10, size 0x8
  __declspec(property(get = __get_mIdentity, put = __set_mIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> mIdentity;

  /// @brief Field mPsk, offset 0x18, size 0x8
  __declspec(property(get = __get_mPsk, put = __set_mPsk))::ArrayW<uint8_t, ::Array<uint8_t>*> mPsk;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mIdentity() const;

  constexpr void __set_mIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPsk();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPsk() const;

  constexpr void __set_mPsk(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  /// @brief Method .ctor addr 0xf5d1d4 size 0x8c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  static inline ::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity* New_ctor(::StringW identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  /// @brief Method .ctor addr 0xf5d260 size 0x8c virtual false final false
  inline void _ctor(::StringW identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> psk);

  /// @brief Method SkipIdentityHint addr 0xf5d2ec size 0x4 virtual true final false
  inline void SkipIdentityHint();

  /// @brief Method NotifyIdentityHint addr 0xf5d2f0 size 0x4 virtual true final false
  inline void NotifyIdentityHint(::ArrayW<uint8_t, ::Array<uint8_t>*> psk_identity_hint);

  /// @brief Method GetPskIdentity addr 0xf5d2f4 size 0x8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPskIdentity();

  /// @brief Method GetPsk addr 0xf5d2fc size 0x5c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPsk();

  // Ctor Parameters [CppParam { name: "", ty: "BasicTlsPskIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicTlsPskIdentity(BasicTlsPskIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicTlsPskIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicTlsPskIdentity(BasicTlsPskIdentity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicTlsPskIdentity();

public:
  /// @brief Field mIdentity, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mIdentity;

  /// @brief Field mPsk, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPsk;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity*, "Org.BouncyCastle.Crypto.Tls", "BasicTlsPskIdentity");
