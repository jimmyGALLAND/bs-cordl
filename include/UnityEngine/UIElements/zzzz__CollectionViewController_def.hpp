#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionViewController)
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CollectionViewController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CollectionViewController);
// Type: UnityEngine.UIElements::CollectionViewController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7365))
// CS Name: ::UnityEngine.UIElements::CollectionViewController*
class CORDL_TYPE CollectionViewController : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_View, offset 0x10, size 0x8
  __declspec(property(get = __get_m_View, put = __set_m_View))::UnityEngine::UIElements::BaseVerticalCollectionView* m_View;

  /// @brief Field m_ItemsSource, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ItemsSource, put = __set_m_ItemsSource))::System::Collections::IList* m_ItemsSource;

  /// @brief Field itemsSourceChanged, offset 0x20, size 0x8
  __declspec(property(get = __get_itemsSourceChanged, put = __set_itemsSourceChanged))::System::Action* itemsSourceChanged;

  /// @brief Field itemIndexChanged, offset 0x28, size 0x8
  __declspec(property(get = __get_itemIndexChanged, put = __set_itemIndexChanged))::System::Action_2<int32_t, int32_t>* itemIndexChanged;

  __declspec(property(get = get_itemsSource, put = set_itemsSource))::System::Collections::IList* itemsSource;

  __declspec(property(get = get_view))::UnityEngine::UIElements::BaseVerticalCollectionView* view;

  constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& __get_m_View();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> const& __get_m_View() const;

  constexpr void __set_m_View(::UnityEngine::UIElements::BaseVerticalCollectionView* value);

  constexpr ::System::Collections::IList*& __get_m_ItemsSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_m_ItemsSource() const;

  constexpr void __set_m_ItemsSource(::System::Collections::IList* value);

  constexpr ::System::Action*& __get_itemsSourceChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_itemsSourceChanged() const;

  constexpr void __set_itemsSourceChanged(::System::Action* value);

  constexpr ::System::Action_2<int32_t, int32_t>*& __get_itemIndexChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, int32_t>*> const& __get_itemIndexChanged() const;

  constexpr void __set_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method add_itemsSourceChanged addr 0x2e86ca0 size 0x9c virtual false final false
  inline void add_itemsSourceChanged(::System::Action* value);

  /// @brief Method remove_itemsSourceChanged addr 0x2e86d3c size 0x9c virtual false final false
  inline void remove_itemsSourceChanged(::System::Action* value);

  /// @brief Method add_itemIndexChanged addr 0x2e86dd8 size 0xb0 virtual false final false
  inline void add_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method remove_itemIndexChanged addr 0x2e86e88 size 0xb0 virtual false final false
  inline void remove_itemIndexChanged(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method get_itemsSource addr 0x2e86f38 size 0x8 virtual false final false
  inline ::System::Collections::IList* get_itemsSource();

  /// @brief Method set_itemsSource addr 0x2e8639c size 0x2c virtual false final false
  inline void set_itemsSource(::System::Collections::IList* value);

  /// @brief Method get_view addr 0x2e86f5c size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::BaseVerticalCollectionView* get_view();

  /// @brief Method SetView addr 0x2e86f64 size 0x94 virtual false final false
  inline void SetView(::UnityEngine::UIElements::BaseVerticalCollectionView* view);

  /// @brief Method GetItemCount addr 0x2e86ff8 size 0xb0 virtual true final false
  inline int32_t GetItemCount();

  /// @brief Method GetIdForIndex addr 0x2e870a8 size 0x38 virtual true final false
  inline int32_t GetIdForIndex(int32_t index);

  /// @brief Method GetItemForIndex addr 0x2e870e0 size 0x13c virtual true final false
  inline ::System::Object* GetItemForIndex(int32_t index);

  /// @brief Method InvokeMakeItem addr 0x2e8721c size 0x38 virtual true final false
  inline void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method InvokeBindItem addr 0x2e85b88 size 0xc8 virtual true final false
  inline void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method InvokeUnbindItem addr 0x2e87254 size 0x24 virtual true final false
  inline void InvokeUnbindItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem, int32_t index);

  /// @brief Method InvokeDestroyItem addr 0x2e87278 size 0x24 virtual true final false
  inline void InvokeDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem* reusableItem);

  /// @brief Method MakeItem addr 0x2e8729c size 0xdc virtual true final false
  inline ::UnityEngine::UIElements::VisualElement* MakeItem();

  /// @brief Method BindItem addr 0x2e87378 size 0x1d0 virtual true final false
  inline void BindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method UnbindItem addr 0x2e87548 size 0x34 virtual true final false
  inline void UnbindItem(::UnityEngine::UIElements::VisualElement* element, int32_t index);

  /// @brief Method DestroyItem addr 0x2e8757c size 0x34 virtual true final false
  inline void DestroyItem(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method RaiseItemsSourceChanged addr 0x2e86f40 size 0x1c virtual false final false
  inline void RaiseItemsSourceChanged();

  /// @brief Method RaiseItemIndexChanged addr 0x2e86694 size 0x1c virtual false final false
  inline void RaiseItemIndexChanged(int32_t srcIndex, int32_t dstIndex);

  static inline ::UnityEngine::UIElements::CollectionViewController* New_ctor();

  /// @brief Method .ctor addr 0x2e86c98 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CollectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionViewController(CollectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionViewController(CollectionViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionViewController();

public:
  /// @brief Field m_View, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVerticalCollectionView* ___m_View;

  /// @brief Field m_ItemsSource, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___m_ItemsSource;

  /// @brief Field itemsSourceChanged, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___itemsSourceChanged;

  /// @brief Field itemIndexChanged, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<int32_t, int32_t>* ___itemIndexChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CollectionViewController, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CollectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CollectionViewController*, "UnityEngine.UIElements", "CollectionViewController");
