#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionVirtualizationController)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CollectionVirtualizationController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CollectionVirtualizationController);
// Type: UnityEngine.UIElements::CollectionVirtualizationController
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7371))
// CS Name: ::UnityEngine.UIElements::CollectionVirtualizationController*
class CORDL_TYPE CollectionVirtualizationController : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ScrollView, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ScrollView, put = __set_m_ScrollView))::UnityEngine::UIElements::ScrollView* m_ScrollView;

  __declspec(property(get = get_lastVisibleIndex)) int32_t lastVisibleIndex;

  __declspec(property(get = get_visibleItemCount)) int32_t visibleItemCount;

  __declspec(property(get = get_activeItems))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* activeItems;

  constexpr ::UnityEngine::UIElements::ScrollView*& __get_m_ScrollView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const& __get_m_ScrollView() const;

  constexpr void __set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value);

  /// @brief Method get_lastVisibleIndex addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_lastVisibleIndex();

  /// @brief Method get_visibleItemCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_visibleItemCount();

  static inline ::UnityEngine::UIElements::CollectionVirtualizationController* New_ctor(::UnityEngine::UIElements::ScrollView* scrollView);

  /// @brief Method .ctor addr 0x2e87ba4 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::ScrollView* scrollView);

  /// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Refresh(bool rebuild);

  /// @brief Method ScrollToItem addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ScrollToItem(int32_t id);

  /// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Resize(::UnityEngine::Vector2 size, int32_t layoutPass);

  /// @brief Method OnScroll addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnScroll(::UnityEngine::Vector2 offset);

  /// @brief Method GetIndexFromPosition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetIndexFromPosition(::UnityEngine::Vector2 position);

  /// @brief Method GetItemHeight addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t GetItemHeight(int32_t index);

  /// @brief Method OnFocus addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnFocus(::UnityEngine::UIElements::VisualElement* leafTarget);

  /// @brief Method OnBlur addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnBlur(::UnityEngine::UIElements::VisualElement* willFocus);

  /// @brief Method UpdateBackground addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateBackground();

  /// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems();

  /// @brief Method ReplaceActiveItem addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ReplaceActiveItem(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "CollectionVirtualizationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionVirtualizationController(CollectionVirtualizationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionVirtualizationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionVirtualizationController(CollectionVirtualizationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionVirtualizationController();

public:
  /// @brief Field m_ScrollView, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::ScrollView* ___m_ScrollView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CollectionVirtualizationController, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CollectionVirtualizationController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CollectionVirtualizationController*, "UnityEngine.UIElements", "CollectionVirtualizationController");
