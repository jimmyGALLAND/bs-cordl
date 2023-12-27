#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPacketPool_1)
namespace GlobalNamespace {
class IPacketPool;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IPacketPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IPacketPool_1);
// Type: ::IPacketPool`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12808))
// CS Name: ::IPacketPool`1<T>*
class CORDL_TYPE IPacketPool_1 {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPacketPool"
  constexpr operator ::GlobalNamespace::IPacketPool*() noexcept;

  /// @brief Method Obtain addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T Obtain();

  /// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Release(T t);

  // Ctor Parameters [CppParam { name: "", ty: "IPacketPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPacketPool_1(IPacketPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPacketPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPacketPool_1(IPacketPool_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IPacketPool_1, "", "IPacketPool`1");
