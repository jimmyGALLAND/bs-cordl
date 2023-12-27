#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultSignatureResult)
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultSignatureResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult);
// Type: Org.BouncyCastle.Crypto.Operators::DefaultSignatureResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1000))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::DefaultSignatureResult*
class CORDL_TYPE DefaultSignatureResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field mSigner, offset 0x10, size 0x8
  __declspec(property(get = __get_mSigner, put = __set_mSigner))::Org::BouncyCastle::Crypto::ISigner* mSigner;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __get_mSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __get_mSigner() const;

  constexpr void __set_mSigner(::Org::BouncyCastle::Crypto::ISigner* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult* New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method .ctor addr 0xf2dd90 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method Collect addr 0xf2ddb8 size 0xa4 virtual true final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Collect();

  /// @brief Method Collect addr 0xf2de5c size 0x40 virtual true final true
  inline int32_t Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSignatureResult(DefaultSignatureResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSignatureResult(DefaultSignatureResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSignatureResult();

public:
  /// @brief Field mSigner, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___mSigner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*, "Org.BouncyCastle.Crypto.Operators", "DefaultSignatureResult");
