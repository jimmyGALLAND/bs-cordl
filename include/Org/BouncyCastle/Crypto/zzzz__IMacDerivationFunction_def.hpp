#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMacDerivationFunction)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IMacDerivationFunction);
// Type: Org.BouncyCastle.Crypto::IMacDerivationFunction
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(909))
// CS Name: ::Org.BouncyCastle.Crypto::IMacDerivationFunction*
class CORDL_TYPE IMacDerivationFunction {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Method GetMac addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::IMac* GetMac();

  // Ctor Parameters [CppParam { name: "", ty: "IMacDerivationFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMacDerivationFunction(IMacDerivationFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMacDerivationFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMacDerivationFunction(IMacDerivationFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IMacDerivationFunction);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IMacDerivationFunction*, "Org.BouncyCastle.Crypto", "IMacDerivationFunction");
