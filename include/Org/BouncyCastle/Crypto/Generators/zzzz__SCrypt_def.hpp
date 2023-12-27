#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SCrypt)
namespace System {
class Array;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class SCrypt;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::SCrypt);
// Type: Org.BouncyCastle.Crypto.Generators::SCrypt
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(924))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::SCrypt*
class CORDL_TYPE SCrypt : public ::System::Object {
public:
  // Declarations
  /// @brief Method Generate addr 0xf0631c size 0x334 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> P, ::ArrayW<uint8_t, ::Array<uint8_t>*> S, int32_t N, int32_t r, int32_t p, int32_t dkLen);

  /// @brief Method MFcrypt addr 0xf06660 size 0x1e8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> MFcrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> P, ::ArrayW<uint8_t, ::Array<uint8_t>*> S, int32_t N, int32_t r, int32_t p, int32_t dkLen);

  /// @brief Method SingleIterationPBKDF2 addr 0xf06848 size 0x114 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SingleIterationPBKDF2(::ArrayW<uint8_t, ::Array<uint8_t>*> P, ::ArrayW<uint8_t, ::Array<uint8_t>*> S, int32_t dkLen);

  /// @brief Method SMix addr 0xf0695c size 0x3c4 virtual false final false
  static inline void SMix(::ArrayW<uint32_t, ::Array<uint32_t>*> B, int32_t BOff, int32_t N, int32_t d, int32_t r);

  /// @brief Method BlockMix addr 0xf06d20 size 0x11c virtual false final false
  static inline void BlockMix(::ArrayW<uint32_t, ::Array<uint32_t>*> B, ::ArrayW<uint32_t, ::Array<uint32_t>*> X1, ::ArrayW<uint32_t, ::Array<uint32_t>*> X2, ::ArrayW<uint32_t, ::Array<uint32_t>*> Y,
                              int32_t r);

  /// @brief Method Xor addr 0xf06e3c size 0x80 virtual false final false
  static inline void Xor(::ArrayW<uint32_t, ::Array<uint32_t>*> a, ::ArrayW<uint32_t, ::Array<uint32_t>*> b, int32_t bOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> output);

  /// @brief Method Clear addr 0xf06ebc size 0x30 virtual false final false
  static inline void Clear(::System::Array* array);

  /// @brief Method ClearAll addr 0xf06eec size 0x5c virtual false final false
  static inline void ClearAll(::ArrayW<::System::Array*, ::Array<::System::Array*>*> arrays);

  /// @brief Method IsPowerOf2 addr 0xf06650 size 0x10 virtual false final false
  static inline bool IsPowerOf2(int32_t x);

  static inline ::Org::BouncyCastle::Crypto::Generators::SCrypt* New_ctor();

  /// @brief Method .ctor addr 0xf06f48 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SCrypt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SCrypt(SCrypt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SCrypt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SCrypt(SCrypt const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SCrypt();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::SCrypt, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::SCrypt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::SCrypt*, "Org.BouncyCastle.Crypto.Generators", "SCrypt");
