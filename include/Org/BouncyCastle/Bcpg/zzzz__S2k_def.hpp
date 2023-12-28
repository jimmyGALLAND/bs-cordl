#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(S2k)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::S2k);
// Type: Org.BouncyCastle.Bcpg::S2k
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554)), TypeDefinitionIndex(TypeDefinitionIndex(572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(586))
// CS Name: ::Org.BouncyCastle.Bcpg::S2k*
class CORDL_TYPE S2k : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type)) int32_t type;

  /// @brief Field algorithm, offset 0x14, size 0x4
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm;

  /// @brief Field iv, offset 0x18, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field itCount, offset 0x20, size 0x4
  __declspec(property(get = __get_itCount, put = __set_itCount)) int32_t itCount;

  /// @brief Field protectionMode, offset 0x24, size 0x4
  __declspec(property(get = __get_protectionMode, put = __set_protectionMode)) int32_t protectionMode;

  __declspec(property(get = get_Type)) int32_t Type;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_IterationCount)) int64_t IterationCount;

  __declspec(property(get = get_ProtectionMode)) int32_t ProtectionMode;

  constexpr int32_t& __get_type();

  constexpr int32_t const& __get_type() const;

  constexpr void __set_type(int32_t value);

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __get_algorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_iv() const;

  constexpr void __set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_itCount();

  constexpr int32_t const& __get_itCount() const;

  constexpr void __set_itCount(int32_t value);

  constexpr int32_t& __get_protectionMode();

  constexpr int32_t const& __get_protectionMode() const;

  constexpr void __set_protectionMode(int32_t value);

  static inline ::Org::BouncyCastle::Bcpg::S2k* New_ctor(::System::IO::Stream* inStr);

  /// @brief Method .ctor addr 0x11d3144 size 0x198 virtual false final false
  inline void _ctor(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Bcpg::S2k* New_ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm);

  /// @brief Method .ctor addr 0x11d32dc size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm);

  static inline ::Org::BouncyCastle::Bcpg::S2k* New_ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor addr 0x11d330c size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  static inline ::Org::BouncyCastle::Bcpg::S2k* New_ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int32_t itCount);

  /// @brief Method .ctor addr 0x11d3348 size 0x4c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int32_t itCount);

  /// @brief Method get_Type addr 0x11d3394 size 0x8 virtual true final false
  inline int32_t get_Type();

  /// @brief Method get_HashAlgorithm addr 0x11d339c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method GetIV addr 0x11d33a4 size 0x5c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetIV();

  /// @brief Method GetIterationCount addr 0x11d3400 size 0xc virtual false final false
  inline int64_t GetIterationCount();

  /// @brief Method get_IterationCount addr 0x11d340c size 0x20 virtual true final false
  inline int64_t get_IterationCount();

  /// @brief Method get_ProtectionMode addr 0x11d342c size 0x8 virtual true final false
  inline int32_t get_ProtectionMode();

  /// @brief Method Encode addr 0x11d3434 size 0xfc virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "S2k", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  S2k(S2k&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "S2k", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  S2k(S2k const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr S2k();

public:
  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  int32_t ___type;

  /// @brief Field algorithm, offset: 0x14, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___algorithm;

  /// @brief Field iv, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field itCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___itCount;

  /// @brief Field protectionMode, offset: 0x24, size: 0x4, def value: None
  int32_t ___protectionMode;

  /// @brief Field ExpBias offset 0xffffffff size 0x4
  static constexpr int32_t ExpBias{ static_cast<int32_t>(0x6) };

  /// @brief Field Simple offset 0xffffffff size 0x4
  static constexpr int32_t Simple{ static_cast<int32_t>(0x0) };

  /// @brief Field Salted offset 0xffffffff size 0x4
  static constexpr int32_t Salted{ static_cast<int32_t>(0x1) };

  /// @brief Field SaltedAndIterated offset 0xffffffff size 0x4
  static constexpr int32_t SaltedAndIterated{ static_cast<int32_t>(0x3) };

  /// @brief Field GnuDummyS2K offset 0xffffffff size 0x4
  static constexpr int32_t GnuDummyS2K{ static_cast<int32_t>(0x65) };

  /// @brief Field GnuProtectionModeNoPrivateKey offset 0xffffffff size 0x4
  static constexpr int32_t GnuProtectionModeNoPrivateKey{ static_cast<int32_t>(0x1) };

  /// @brief Field GnuProtectionModeDivertToCard offset 0xffffffff size 0x4
  static constexpr int32_t GnuProtectionModeDivertToCard{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::S2k, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::S2k);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::S2k*, "Org.BouncyCastle.Bcpg", "S2k");
