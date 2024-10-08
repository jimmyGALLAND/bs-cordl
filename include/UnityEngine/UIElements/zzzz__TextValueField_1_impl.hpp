#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextValueField_1.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldMouseDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__DeltaSpeed_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextValueField_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template<typename TValueType>
constexpr ::StringW& UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::__cordl_internal_get__formatString_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatString_k__BackingField;
}
template<typename TValueType>
constexpr ::StringW const& UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::__cordl_internal_get__formatString_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatString_k__BackingField;
}
template<typename TValueType>
constexpr void UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::__cordl_internal_set__formatString_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____formatString_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TValueType>
inline ::UnityEngine::UIElements::TextValueField_1<TValueType>* UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::get_textValueFieldParent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                        "get_textValueFieldParent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextValueField_1<TValueType>*, false>(this, ___internal_method);
}
template<typename TValueType>
inline ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>* UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>());
}
template<typename TValueType>
inline void UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline bool UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::AcceptCharacter(char16_t  c)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                    103
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
template<typename TValueType>
inline ::StringW UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::get_allowedCharacters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                    104
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename TValueType>
inline ::StringW UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::get_formatString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                        "get_formatString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::set_formatString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                        "set_formatString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename TValueType>
inline void UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::ApplyInputDeviceDelta(::UnityEngine::Vector3  delta, ::UnityEngine::UIElements::DeltaSpeed  speed, TValueType  startValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                    105
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delta, speed, startValue);
}
template<typename TValueType>
inline void UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::StartDragging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                        "StartDragging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::StopDragging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                        "StopDragging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline ::StringW UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::ValueToString(TValueType  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                    106
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
template<typename TValueType>
inline TValueType UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::StringToValue(::StringW  str)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get(),
                    100
                )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method, str);
}
// Ctor Parameters []
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>::__TextValueField_1__TextValueInput()   {
}
/// @brief Convert operator to "::UnityEngine::UIElements::IValueField_1<TValueType>"
template<typename TValueType>
constexpr  UnityEngine::UIElements::TextValueField_1<TValueType>::operator ::UnityEngine::UIElements::IValueField_1<TValueType>*() noexcept {
return static_cast<::UnityEngine::UIElements::IValueField_1<TValueType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IValueField_1<TValueType>"
template<typename TValueType>
constexpr ::UnityEngine::UIElements::IValueField_1<TValueType>* UnityEngine::UIElements::TextValueField_1<TValueType>::i___UnityEngine__UIElements__IValueField_1_TValueType_() noexcept {
return static_cast<::UnityEngine::UIElements::IValueField_1<TValueType>*>(static_cast<void*>(this));
}
template<typename TValueType>
constexpr ::UnityEngine::UIElements::BaseFieldMouseDragger*& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_Dragger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dragger;
}
template<typename TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseFieldMouseDragger*> const& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_Dragger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Dragger;
}
template<typename TValueType>
constexpr void UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_set_m_Dragger(::UnityEngine::UIElements::BaseFieldMouseDragger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dragger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TValueType>
constexpr bool& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_UpdateTextFromValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateTextFromValue;
}
template<typename TValueType>
constexpr bool const& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_UpdateTextFromValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateTextFromValue;
}
template<typename TValueType>
constexpr void UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_set_m_UpdateTextFromValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateTextFromValue = value;
}
template<typename TValueType>
constexpr bool& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_ForceUpdateDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForceUpdateDisplay;
}
template<typename TValueType>
constexpr bool const& UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_get_m_ForceUpdateDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForceUpdateDisplay;
}
template<typename TValueType>
constexpr void UnityEngine::UIElements::TextValueField_1<TValueType>::__cordl_internal_set_m_ForceUpdateDisplay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ForceUpdateDisplay = value;
}
template<typename TValueType>
inline ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>* UnityEngine::UIElements::TextValueField_1<TValueType>::get_textValueInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                        "get_textValueInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*, false>(this, ___internal_method);
}
template<typename TValueType>
inline ::StringW UnityEngine::UIElements::TextValueField_1<TValueType>::get_formatString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                        "get_formatString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template<typename TValueType>
inline ::UnityEngine::UIElements::TextValueField_1<TValueType>* UnityEngine::UIElements::TextValueField_1<TValueType>::New_ctor(::StringW  label, int32_t  maxLength, ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*  textValueInput)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextValueField_1<TValueType>*>(label, maxLength, textValueInput));
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::_ctor(::StringW  label, int32_t  maxLength, ::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*  textValueInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__TextValueField_1__TextValueInput<TValueType>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, maxLength, textValueInput);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::ApplyInputDeviceDelta(::UnityEngine::Vector3  delta, ::UnityEngine::UIElements::DeltaSpeed  speed, TValueType  startValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    127
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delta, speed, startValue);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::StartDragging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                        "StartDragging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::StopDragging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                        "StopDragging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline TValueType UnityEngine::UIElements::TextValueField_1<TValueType>::get_value()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    107
                )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::set_value(TValueType  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    108
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::UpdateValueFromText()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    120
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::UpdateTextFromValue()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    121
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::OnIsReadOnlyChanged(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                        "OnIsReadOnlyChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template<typename TValueType>
inline bool UnityEngine::UIElements::TextValueField_1<TValueType>::CanTryParse(::StringW  textString)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    128
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, textString);
}
template<typename TValueType>
template<typename TDraggerType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::AddLabelDragger()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    "AddLabelDragger",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDraggerType>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDraggerType>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::EnableLabelDragger(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                        "EnableLabelDragger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::SetValueWithoutNotify(TValueType  newValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    117
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::OnViewDataReady()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    96
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::RegisterEditingCallbacks()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    114
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TValueType>
inline void UnityEngine::UIElements::TextValueField_1<TValueType>::UnregisterEditingCallbacks()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextValueField_1<TValueType>*>::get(),
                    115
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename TValueType>
constexpr ::UnityEngine::UIElements::TextValueField_1<TValueType>::TextValueField_1()   {
}
