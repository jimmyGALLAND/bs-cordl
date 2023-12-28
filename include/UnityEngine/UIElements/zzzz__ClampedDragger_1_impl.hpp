#pragma once
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::__ClampedDragger_1__DragDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::__ClampedDragger_1__DragDirection() {}
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::None{ static_cast<int32_t>(0x0) };
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::LowToHigh{ static_cast<int32_t>(0x1) };
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::HighToLow{ static_cast<int32_t>(0x2) };
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::Free{ static_cast<int32_t>(0x4) };
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::ClampedDragger_1<T>::__get_dragging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragging;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::ClampedDragger_1<T>::__get_dragging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragging;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set_dragging(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dragging)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>& UnityEngine::UIElements::ClampedDragger_1<T>::__get__dragDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragDirection_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> const& UnityEngine::UIElements::ClampedDragger_1<T>::__get__dragDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragDirection_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set__dragDirection_k__BackingField(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dragDirection_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::BaseSlider_1<T>*& UnityEngine::UIElements::ClampedDragger_1<T>::__get__slider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseSlider_1<T>*> const& UnityEngine::UIElements::ClampedDragger_1<T>::__get__slider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set__slider_k__BackingField(::UnityEngine::UIElements::BaseSlider_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slider_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ClampedDragger_1<T>::__get__startMousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startMousePosition_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ClampedDragger_1<T>::__get__startMousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startMousePosition_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set__startMousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startMousePosition_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::add_dragging(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), "add_dragging",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::remove_dragging(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), "remove_dragging",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::ClampedDragger_1<T>::get_dragDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                                                                             "get_dragDirection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_dragDirection(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), "set_dragDirection", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_slider(::UnityEngine::UIElements::BaseSlider_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), "set_slider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<T>::get_startMousePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                                                                             "get_startMousePosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_startMousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), "set_startMousePosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<T>::get_delta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                                                                             "get_delta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::ClampedDragger_1<T>* UnityEngine::UIElements::ClampedDragger_1<T>::New_ctor(::UnityEngine::UIElements::BaseSlider_1<T>* slider, ::System::Action* clickHandler,
                                                                                                              ::System::Action* dragHandler) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ClampedDragger_1<T>*>(slider, clickHandler, dragHandler));
}
template <typename T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::_ctor(::UnityEngine::UIElements::BaseSlider_1<T>* slider, ::System::Action* clickHandler, ::System::Action* dragHandler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, slider, clickHandler, dragHandler);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), "ProcessDownEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, localPosition, pointerId);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::ProcessMoveEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(), "ProcessMoveEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, localPosition);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1<T>::ClampedDragger_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
