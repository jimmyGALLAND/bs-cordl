#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICipherParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ICipherParameters);
// Type: Org.BouncyCastle.Crypto::ICipherParameters
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::ICipherParameters*
class CORDL_TYPE ICipherParameters {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "ICipherParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ICipherParameters(ICipherParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ICipherParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICipherParameters(ICipherParameters const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ICipherParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ICipherParameters*, "Org.BouncyCastle.Crypto", "ICipherParameters");
