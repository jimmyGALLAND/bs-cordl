#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomNumberGenerator)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RandomNumberGenerator);
// Type: System.Security.Cryptography::RandomNumberGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2946))
// CS Name: ::System.Security.Cryptography::RandomNumberGenerator*
class CORDL_TYPE RandomNumberGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  static inline ::System::Security::Cryptography::RandomNumberGenerator* New_ctor();

  /// @brief Method .ctor addr 0x245ff5c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Create addr 0x245ff64 size 0x5c virtual false final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* Create();

  /// @brief Method Dispose addr 0x245ffc0 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x246002c size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method GetBytes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  // Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomNumberGenerator(RandomNumberGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomNumberGenerator(RandomNumberGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomNumberGenerator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RandomNumberGenerator, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RandomNumberGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RandomNumberGenerator*, "System.Security.Cryptography", "RandomNumberGenerator");
