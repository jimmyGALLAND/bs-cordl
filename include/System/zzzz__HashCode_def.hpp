#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashCode)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct HashCode;
}
// Write type traits
MARK_VAL_T(::System::HashCode);
// Type: System::HashCode
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2407))
// CS Name: ::System::HashCode
struct CORDL_TYPE HashCode {
public:
  // Declarations
  /// @brief Field s_seed, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_seed, put = setStaticF_s_seed)) uint32_t s_seed;

  static inline void setStaticF_s_seed(uint32_t value);

  static inline uint32_t getStaticF_s_seed();

  /// @brief Method GenerateGlobalSeed addr 0x25a8664 size 0x24 virtual false final false
  static inline uint32_t GenerateGlobalSeed();

  /// @brief Method Combine addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  static inline int32_t Combine(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6, T7 value7);

  /// @brief Method Rol addr 0x25a8688 size 0xc virtual false final false
  static inline uint32_t Rol(uint32_t value, int32_t count);

  /// @brief Method Initialize addr 0x25a8694 size 0xb8 virtual false final false
  static inline void Initialize(ByRef<uint32_t> v1, ByRef<uint32_t> v2, ByRef<uint32_t> v3, ByRef<uint32_t> v4);

  /// @brief Method Round addr 0x25a874c size 0x78 virtual false final false
  static inline uint32_t Round(uint32_t hash, uint32_t input);

  /// @brief Method QueueRound addr 0x25a87c4 size 0x78 virtual false final false
  static inline uint32_t QueueRound(uint32_t hash, uint32_t queuedValue);

  /// @brief Method MixState addr 0x25a883c size 0x88 virtual false final false
  static inline uint32_t MixState(uint32_t v1, uint32_t v2, uint32_t v3, uint32_t v4);

  /// @brief Method MixEmptyState addr 0x25a88c4 size 0x64 virtual false final false
  static inline uint32_t MixEmptyState();

  /// @brief Method MixFinal addr 0x25a8928 size 0x28 virtual false final false
  static inline uint32_t MixFinal(uint32_t hash);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void Add(T value);

  /// @brief Method Add addr 0x25a8950 size 0x288 virtual false final false
  inline void Add(int32_t value);

  /// @brief Method ToHashCode addr 0x25a8bd8 size 0x220 virtual false final false
  inline int32_t ToHashCode();

  /// @brief Method GetHashCode addr 0x25a8df8 size 0x4c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x25a8e68 size 0x4c virtual true final false
  inline bool Equals(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "_v1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v3", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v4", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_queue1", ty: "uint32_t", modifiers: "", def_value: None
  // }, CppParam { name: "_queue2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_queue3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty:
  // "uint32_t", modifiers: "", def_value: None }]
  constexpr HashCode(uint32_t _v1, uint32_t _v2, uint32_t _v3, uint32_t _v4, uint32_t _queue1, uint32_t _queue2, uint32_t _queue3, uint32_t _length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashCode();

  /// @brief Field _v1, offset: 0x0, size: 0x4, def value: None
  uint32_t _v1;

  /// @brief Field _v2, offset: 0x4, size: 0x4, def value: None
  uint32_t _v2;

  /// @brief Field _v3, offset: 0x8, size: 0x4, def value: None
  uint32_t _v3;

  /// @brief Field _v4, offset: 0xc, size: 0x4, def value: None
  uint32_t _v4;

  /// @brief Field _queue1, offset: 0x10, size: 0x4, def value: None
  uint32_t _queue1;

  /// @brief Field _queue2, offset: 0x14, size: 0x4, def value: None
  uint32_t _queue2;

  /// @brief Field _queue3, offset: 0x18, size: 0x4, def value: None
  uint32_t _queue3;

  /// @brief Field _length, offset: 0x1c, size: 0x4, def value: None
  uint32_t _length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::HashCode, 0x20>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::HashCode, "System", "HashCode");
