#pragma once
// IWYU pragma private; include "Unity/Properties/ContainerPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template<typename TContainer>
constexpr ::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*& Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertiesList;
}
template<typename TContainer>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*> const& Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertiesList;
}
template<typename TContainer>
constexpr void Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_set_m_PropertiesList(::System::Collections::Generic::List_1<::Unity::Properties::IProperty_1<TContainer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PropertiesList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TContainer>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<TContainer>*>*& Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertiesHash;
}
template<typename TContainer>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<TContainer>*>*> const& Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_get_m_PropertiesHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertiesHash;
}
template<typename TContainer>
constexpr void Unity::Properties::ContainerPropertyBag_1<TContainer>::__cordl_internal_set_m_PropertiesHash(::System::Collections::Generic::Dictionary_2<::StringW,::Unity::Properties::IProperty_1<TContainer>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PropertiesHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template<typename TContainer>
template<typename TValue>
inline void Unity::Properties::ContainerPropertyBag_1<TContainer>::AddProperty(::Unity::Properties::Property_2<TContainer,TValue>*  property)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>::get(),
                    "AddProperty",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::Property_2<TContainer,TValue>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property);
}
template<typename TContainer>
inline bool Unity::Properties::ContainerPropertyBag_1<TContainer>::TryGetProperty(ByRef<TContainer>  container, ::StringW  name, ByRef<::Unity::Properties::IProperty_1<TContainer>*>  property)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>::get(),
                        "TryGetProperty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Properties::IProperty_1<TContainer>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, container, name, property);
}
template<typename TContainer>
inline ::Unity::Properties::ContainerPropertyBag_1<TContainer>* Unity::Properties::ContainerPropertyBag_1<TContainer>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>());
}
template<typename TContainer>
inline void Unity::Properties::ContainerPropertyBag_1<TContainer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::ContainerPropertyBag_1<TContainer>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template<typename TContainer>
constexpr ::Unity::Properties::ContainerPropertyBag_1<TContainer>::ContainerPropertyBag_1()   {
}
