#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FastPriorityQueueNode)
// Forward declare root types
namespace Priority_Queue {
class FastPriorityQueueNode;
}
// Write type traits
MARK_REF_PTR_T(::Priority_Queue::FastPriorityQueueNode);
// Type: Priority_Queue::FastPriorityQueueNode
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Priority_Queue {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6093))
// CS Name: ::Priority_Queue::FastPriorityQueueNode*
class CORDL_TYPE FastPriorityQueueNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Priority>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__Priority_k__BackingField, put = __set__Priority_k__BackingField)) float_t _Priority_k__BackingField;

  /// @brief Field <QueueIndex>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__QueueIndex_k__BackingField, put = __set__QueueIndex_k__BackingField)) int32_t _QueueIndex_k__BackingField;

  __declspec(property(get = get_Priority, put = set_Priority)) float_t Priority;

  __declspec(property(get = get_QueueIndex, put = set_QueueIndex)) int32_t QueueIndex;

  constexpr float_t& __get__Priority_k__BackingField();

  constexpr float_t const& __get__Priority_k__BackingField() const;

  constexpr void __set__Priority_k__BackingField(float_t value);

  constexpr int32_t& __get__QueueIndex_k__BackingField();

  constexpr int32_t const& __get__QueueIndex_k__BackingField() const;

  constexpr void __set__QueueIndex_k__BackingField(int32_t value);

  /// @brief Method get_Priority addr 0x2321e08 size 0x8 virtual false final false
  inline float_t get_Priority();

  /// @brief Method set_Priority addr 0x2321e10 size 0x8 virtual false final false
  inline void set_Priority(float_t value);

  /// @brief Method get_QueueIndex addr 0x2321e18 size 0x8 virtual false final false
  inline int32_t get_QueueIndex();

  /// @brief Method set_QueueIndex addr 0x2321e20 size 0x8 virtual false final false
  inline void set_QueueIndex(int32_t value);

  static inline ::Priority_Queue::FastPriorityQueueNode* New_ctor();

  /// @brief Method .ctor addr 0x2321e28 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueueNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastPriorityQueueNode(FastPriorityQueueNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueueNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastPriorityQueueNode(FastPriorityQueueNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastPriorityQueueNode();

public:
  /// @brief Field <Priority>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t ____Priority_k__BackingField;

  /// @brief Field <QueueIndex>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____QueueIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Priority_Queue::FastPriorityQueueNode, 0x18>, "Size mismatch!");

} // namespace Priority_Queue
NEED_NO_BOX(::Priority_Queue::FastPriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(::Priority_Queue::FastPriorityQueueNode*, "Priority_Queue", "FastPriorityQueueNode");
