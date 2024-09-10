#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary_2.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr  BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TKey,typename TValue>
constexpr ::UnityEngine::ISerializationCallbackReceiver* BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<TKey>*& BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get_keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
template<typename TKey,typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TKey>*> const& BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get_keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
template<typename TKey,typename TValue>
constexpr void BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::__cordl_internal_set_keys(::System::Collections::Generic::List_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::List_1<TValue>*& BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get_values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
template<typename TKey,typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TValue>*> const& BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::__cordl_internal_get_values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
template<typename TKey,typename TValue>
constexpr void BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::__cordl_internal_set_values(::System::Collections::Generic::List_1<TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TKey,typename TValue>
inline void BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>* BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>*>());
}
template<typename TKey,typename TValue>
inline void BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::BGLib::UnityExtension::SerializableDictionary_2<TKey,TValue>::SerializableDictionary_2()   {
}
