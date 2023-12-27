#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IKeyUnwrapper)
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IKeyUnwrapper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IKeyUnwrapper);
// Type: Org.BouncyCastle.Crypto::IKeyUnwrapper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(987))
// CS Name: ::Org.BouncyCastle.Crypto::IKeyUnwrapper*
class CORDL_TYPE IKeyUnwrapper {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmDetails))::System::Object* AlgorithmDetails;

  /// @brief Method get_AlgorithmDetails addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* get_AlgorithmDetails();

  /// @brief Method Unwrap addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::IBlockResult* Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> cipherText, int32_t offset, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "IKeyUnwrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKeyUnwrapper(IKeyUnwrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKeyUnwrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyUnwrapper(IKeyUnwrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IKeyUnwrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IKeyUnwrapper*, "Org.BouncyCastle.Crypto", "IKeyUnwrapper");
