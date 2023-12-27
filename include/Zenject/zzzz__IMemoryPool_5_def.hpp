#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMemoryPool_5)
namespace Zenject {
template <typename TValue> class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue> class IMemoryPool_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IMemoryPool_5);
// Type: Zenject::IMemoryPool`5
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11033))
// CS Name: ::Zenject::IMemoryPool`5<TParam1,TParam2,TParam3,TParam4,TValue>*
class CORDL_TYPE IMemoryPool_5 {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  /// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4);

  // Ctor Parameters [CppParam { name: "", ty: "IMemoryPool_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMemoryPool_5(IMemoryPool_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMemoryPool_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMemoryPool_5(IMemoryPool_5 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IMemoryPool_5, "Zenject", "IMemoryPool`5");
