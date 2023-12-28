#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationTabEvent_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationTabEvent)
namespace UnityEngine::UIElements {
struct __NavigationTabEvent__Direction;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __NavigationTabEvent__Direction;
}
namespace UnityEngine::UIElements {
class NavigationTabEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__NavigationTabEvent__Direction);
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationTabEvent);
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7251))
// CS Name: ::NavigationTabEvent::Direction
struct CORDL_TYPE __NavigationTabEvent__Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NavigationTabEvent__Direction_Unwrapped
  enum struct ____NavigationTabEvent__Direction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Next = static_cast<int32_t>(0x1),
    __E_Previous = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NavigationTabEvent__Direction_Unwrapped() const noexcept {
    return static_cast<____NavigationTabEvent__Direction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NavigationTabEvent__Direction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationTabEvent__Direction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__NavigationTabEvent__Direction const None;

  /// @brief Field Next value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__NavigationTabEvent__Direction const Next;

  /// @brief Field Previous value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__NavigationTabEvent__Direction const Previous;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigationTabEvent__Direction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigationTabEvent
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7248)), TypeDefinitionIndex(TypeDefinitionIndex(7251)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7248), inst: 4704
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7252)) CS Name: ::UnityEngine.UIElements::NavigationTabEvent*
class CORDL_TYPE NavigationTabEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationTabEvent*> {
public:
  // Declarations
  using Direction = ::UnityEngine::UIElements::__NavigationTabEvent__Direction;

  /// @brief Field <direction>k__BackingField, offset 0x7c, size 0x4
  __declspec(property(get = __get__direction_k__BackingField, put = __set__direction_k__BackingField))::UnityEngine::UIElements::__NavigationTabEvent__Direction _direction_k__BackingField;

  __declspec(property(put = set_direction))::UnityEngine::UIElements::__NavigationTabEvent__Direction direction;

  constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction& __get__direction_k__BackingField();

  constexpr ::UnityEngine::UIElements::__NavigationTabEvent__Direction const& __get__direction_k__BackingField() const;

  constexpr void __set__direction_k__BackingField(::UnityEngine::UIElements::__NavigationTabEvent__Direction value);

  /// @brief Method set_direction addr 0x2e530e0 size 0x8 virtual false final false
  inline void set_direction(::UnityEngine::UIElements::__NavigationTabEvent__Direction value);

  /// @brief Method DetermineMoveDirection addr 0x2e530e8 size 0x1c virtual false final false
  static inline ::UnityEngine::UIElements::__NavigationTabEvent__Direction DetermineMoveDirection(int32_t moveValue);

  /// @brief Method GetPooled addr 0x2e53104 size 0x8c virtual false final false
  static inline ::UnityEngine::UIElements::NavigationTabEvent* GetPooled(int32_t moveValue);

  /// @brief Method Init addr 0x2e53190 size 0x50 virtual true final false
  inline void Init();

  static inline ::UnityEngine::UIElements::NavigationTabEvent* New_ctor();

  /// @brief Method .ctor addr 0x2e531e0 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NavigationTabEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationTabEvent(NavigationTabEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationTabEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationTabEvent(NavigationTabEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationTabEvent();

public:
  /// @brief Field <direction>k__BackingField, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::UIElements::__NavigationTabEvent__Direction ____direction_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationTabEvent, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigationTabEvent__Direction, "UnityEngine.UIElements", "NavigationTabEvent/Direction");
NEED_NO_BOX(::UnityEngine::UIElements::NavigationTabEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationTabEvent*, "UnityEngine.UIElements", "NavigationTabEvent");
