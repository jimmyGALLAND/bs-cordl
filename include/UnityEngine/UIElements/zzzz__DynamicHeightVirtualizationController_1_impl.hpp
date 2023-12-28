#pragma once
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicHeightVirtualizationController_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<int32_t, float_t>*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ItemHeightCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemHeightCache;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, float_t>*> const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ItemHeightCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ItemHeightCache;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ItemHeightCache(::System::Collections::Generic::Dictionary_2<int32_t, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ItemHeightCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_WaitingCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingCache;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_WaitingCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitingCache;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_WaitingCache(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WaitingCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedFirstVisibleItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedFirstVisibleItem;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedFirstVisibleItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedFirstVisibleItem;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ForcedFirstVisibleItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForcedFirstVisibleItem = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedLastVisibleItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedLastVisibleItem;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ForcedLastVisibleItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForcedLastVisibleItem;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ForcedLastVisibleItem(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForcedLastVisibleItem = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StickToBottom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StickToBottom;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StickToBottom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StickToBottom;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_StickToBottom(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StickToBottom = value;
}
template <typename T> constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AverageHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AverageHeight;
}
template <typename T> constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AverageHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AverageHeight;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_AverageHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AverageHeight = value;
}
template <typename T> constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AccumulatedHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedHeight;
}
template <typename T> constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_AccumulatedHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatedHeight;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_AccumulatedHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccumulatedHeight = value;
}
template <typename T> constexpr float_t& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StoredPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoredPadding;
}
template <typename T> constexpr float_t const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_StoredPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StoredPadding;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_StoredPadding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StoredPadding = value;
}
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_FillCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillCallback;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_FillCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillCallback;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_FillCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FillCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_GeometryChangedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryChangedCallback;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*> const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_GeometryChangedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GeometryChangedCallback;
}
template <typename T>
constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_GeometryChangedCallback(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GeometryChangedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ScheduledItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledItem;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const&
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_ScheduledItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScheduledItem;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_ScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScheduledItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Predicate_1<int32_t>*& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_IndexOutOfBoundsPredicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOutOfBoundsPredicate;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<int32_t>*> const& UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__get_m_IndexOutOfBoundsPredicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IndexOutOfBoundsPredicate;
}
template <typename T> constexpr void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__set_m_IndexOutOfBoundsPredicate(::System::Predicate_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IndexOutOfBoundsPredicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::setStaticF_InitialAverageHeight(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "InitialAverageHeight",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::getStaticF_InitialAverageHeight() {
  return ::cordl_internals::getStaticField<int32_t, "InitialAverageHeight",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get>();
}
template <typename T>
inline ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*
UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>(collectionView));
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* collectionView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVerticalCollectionView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collectionView);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Refresh(bool rebuild) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "Refresh",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rebuild);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ScrollToItem(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "ScrollToItem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Resize(::UnityEngine::Vector2 size, int32_t layoutPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "Resize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, layoutPass);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnScroll(::UnityEngine::Vector2 scrollOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "OnScroll",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scrollOffset);
}
template <typename T> inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::NeedsFill() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "NeedsFill",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::Fill() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "Fill",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetIndexFromPosition(::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetIndexFromPosition",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, position);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetItemHeight(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetItemHeight",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, index);
}
template <typename T> inline int32_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetFirstVisibleItem(float_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetFirstVisibleItem",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, offset);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UpdateScrollViewContainer(int32_t index, float_t previousHeight, float_t newHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "UpdateScrollViewContainer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, previousHeight, newHeight);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ApplyScrollViewUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "ApplyScrollViewUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnViewportGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "OnViewportGeometryChanged", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetContentHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(),
                                               "GetContentHeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline float_t UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetContentHeightForIndex(int32_t lastIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetContentHeightForIndex",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lastIndex);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::RegisterItemHeight(int32_t index, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "RegisterItemHeight", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, height);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::UnregisterItemHeight(int32_t index, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "UnregisterItemHeight", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, height);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::OnRecycledItemGeometryChanged(::UnityEngine::UIElements::ReusableCollectionItem* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "OnRecycledItemGeometryChanged",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ReusableCollectionItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline T UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::GetOrMakeItem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "GetOrMakeItem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ReplaceActiveItem(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "ReplaceActiveItem",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::ReleaseItem(int32_t activeItemsIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "ReleaseItem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeItemsIndex);
}
template <typename T> inline bool UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::IsIndexOutOfBounds(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "IsIndexOutOfBounds",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
template <typename T> inline void UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::__ctor_b__13_0(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>*>::get(), "<.ctor>b__13_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>::DynamicHeightVirtualizationController_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
