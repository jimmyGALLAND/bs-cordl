#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Timeout)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::Timeout);
// Type: Org.BouncyCastle.Crypto.Tls::Timeout
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1286))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::Timeout*
class CORDL_TYPE Timeout : public ::System::Object {
public:
  // Declarations
  /// @brief Field durationMillis, offset 0x10, size 0x8
  __declspec(property(get = __get_durationMillis, put = __set_durationMillis)) int64_t durationMillis;

  /// @brief Field startMillis, offset 0x18, size 0x8
  __declspec(property(get = __get_startMillis, put = __set_startMillis)) int64_t startMillis;

  constexpr int64_t& __get_durationMillis();

  constexpr int64_t const& __get_durationMillis() const;

  constexpr void __set_durationMillis(int64_t value);

  constexpr int64_t& __get_startMillis();

  constexpr int64_t const& __get_startMillis() const;

  constexpr void __set_startMillis(int64_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* New_ctor(int64_t durationMillis);

  /// @brief Method .ctor addr 0xf9887c size 0x70 virtual false final false
  inline void _ctor(int64_t durationMillis);

  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* New_ctor(int64_t durationMillis, int64_t currentTimeMillis);

  /// @brief Method .ctor addr 0xf988ec size 0x94 virtual false final false
  inline void _ctor(int64_t durationMillis, int64_t currentTimeMillis);

  /// @brief Method RemainingMillis addr 0xf98980 size 0x64 virtual false final false
  inline int64_t RemainingMillis(int64_t currentTimeMillis);

  /// @brief Method ConstrainWaitMillis addr 0xf989e4 size 0xc8 virtual false final false
  static inline int32_t ConstrainWaitMillis(int32_t waitMillis, ::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis);

  /// @brief Method ForWaitMillis addr 0xf98ae0 size 0x60 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* ForWaitMillis(int32_t waitMillis);

  /// @brief Method ForWaitMillis addr 0xf98b40 size 0xd8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* ForWaitMillis(int32_t waitMillis, int64_t currentTimeMillis);

  /// @brief Method GetWaitMillis addr 0xf98aac size 0x34 virtual false final false
  static inline int32_t GetWaitMillis(::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis);

  /// @brief Method HasExpired addr 0xf98c18 size 0x1c virtual false final false
  static inline bool HasExpired(::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis);

  // Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Timeout(Timeout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Timeout(Timeout const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Timeout();

public:
  /// @brief Field durationMillis, offset: 0x10, size: 0x8, def value: None
  int64_t ___durationMillis;

  /// @brief Field startMillis, offset: 0x18, size: 0x8, def value: None
  int64_t ___startMillis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::Timeout, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::Timeout);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::Timeout*, "Org.BouncyCastle.Crypto.Tls", "Timeout");
