#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ParametersWithRandom)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithRandom;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom);
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithRandom
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1073))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ParametersWithRandom*
class CORDL_TYPE ParametersWithRandom : public ::System::Object {
public:
  // Declarations
  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Crypto::ICipherParameters* parameters;

  /// @brief Field random, offset 0x18, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  __declspec(property(get = get_Random))::Org::BouncyCastle::Security::SecureRandom* Random;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Crypto::ICipherParameters* Parameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor addr 0xf3910c size 0xa4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method .ctor addr 0xf391b0 size 0x70 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetRandom addr 0xf39298 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Security::SecureRandom* GetRandom();

  /// @brief Method get_Random addr 0xf392a0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Security::SecureRandom* get_Random();

  /// @brief Method get_Parameters addr 0xf392a8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();

  // Ctor Parameters [CppParam { name: "", ty: "ParametersWithRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametersWithRandom(ParametersWithRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametersWithRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametersWithRandom(ParametersWithRandom const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametersWithRandom();

public:
  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherParameters* ___parameters;

  /// @brief Field random, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithRandom");
