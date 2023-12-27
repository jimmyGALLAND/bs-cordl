#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEncryptedValuePadder)
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class IEncryptedValuePadder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::IEncryptedValuePadder);
// Type: Org.BouncyCastle.Crmf::IEncryptedValuePadder
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(702))
// CS Name: ::Org.BouncyCastle.Crmf::IEncryptedValuePadder*
class CORDL_TYPE IEncryptedValuePadder {
public:
  // Declarations
  /// @brief Method GetPaddedData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPaddedData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetUnpaddedData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetUnpaddedData(::ArrayW<uint8_t, ::Array<uint8_t>*> paddedData);

  // Ctor Parameters [CppParam { name: "", ty: "IEncryptedValuePadder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEncryptedValuePadder(IEncryptedValuePadder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEncryptedValuePadder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEncryptedValuePadder(IEncryptedValuePadder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::IEncryptedValuePadder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::IEncryptedValuePadder*, "Org.BouncyCastle.Crmf", "IEncryptedValuePadder");
