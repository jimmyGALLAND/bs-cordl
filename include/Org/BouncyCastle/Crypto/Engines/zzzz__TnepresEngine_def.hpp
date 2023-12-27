#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TnepresEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class TnepresEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::TnepresEngine);
// Type: Org.BouncyCastle.Crypto.Engines::TnepresEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(880))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::TnepresEngine*
class CORDL_TYPE TnepresEngine : public ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Method get_AlgorithmName addr 0xeee29c size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method MakeWorkingKey addr 0xeee2dc size 0x15e0 virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method EncryptBlock addr 0xeef8bc size 0x1540 virtual true final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DecryptBlock addr 0xef0dfc size 0x1738 virtual true final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  static inline ::Org::BouncyCastle::Crypto::Engines::TnepresEngine* New_ctor();

  /// @brief Method .ctor addr 0xef2534 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TnepresEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TnepresEngine(TnepresEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TnepresEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TnepresEngine(TnepresEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TnepresEngine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::TnepresEngine, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::TnepresEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::TnepresEngine*, "Org.BouncyCastle.Crypto.Engines", "TnepresEngine");
