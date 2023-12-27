#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IFixedSizePriorityQueue_2)
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IFixedSizePriorityQueue_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::IFixedSizePriorityQueue_2);
// Type: Priority_Queue::IFixedSizePriorityQueue`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6097))
// CS Name: ::Priority_Queue::IFixedSizePriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE IFixedSizePriorityQueue_2 {
public:
  // Declarations
  __declspec(property(get = get_MaxSize)) int32_t MaxSize;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Resize(int32_t maxNodes);

  /// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_MaxSize();

  /// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ResetNode(TItem node);

  // Ctor Parameters [CppParam { name: "", ty: "IFixedSizePriorityQueue_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFixedSizePriorityQueue_2(IFixedSizePriorityQueue_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFixedSizePriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFixedSizePriorityQueue_2(IFixedSizePriorityQueue_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::IFixedSizePriorityQueue_2, "Priority_Queue", "IFixedSizePriorityQueue`2");
