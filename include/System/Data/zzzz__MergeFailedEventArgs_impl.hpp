#pragma once
// IWYU pragma private; include "System/Data/MergeFailedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__MergeFailedEventArgs_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::MergeFailedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::MergeFailedEventArgs::*)(::System::Data::DataTable*, ::StringW)>(&::System::Data::MergeFailedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x40ef31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::MergeFailedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::MergeFailedEventArgs.get_Conflict
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::MergeFailedEventArgs::*)()>(&::System::Data::MergeFailedEventArgs::get_Conflict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40ef38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::MergeFailedEventArgs*>::get(),
                        "get_Conflict",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::MergeFailedEventArgs::__cordl_internal_get__Table_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Table_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& System::Data::MergeFailedEventArgs::__cordl_internal_get__Table_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Table_k__BackingField;
}
constexpr void System::Data::MergeFailedEventArgs::__cordl_internal_set__Table_k__BackingField(::System::Data::DataTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Table_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Data::MergeFailedEventArgs::__cordl_internal_get__Conflict_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Conflict_k__BackingField;
}
constexpr ::StringW const& System::Data::MergeFailedEventArgs::__cordl_internal_get__Conflict_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Conflict_k__BackingField;
}
constexpr void System::Data::MergeFailedEventArgs::__cordl_internal_set__Conflict_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Conflict_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::MergeFailedEventArgs* System::Data::MergeFailedEventArgs::New_ctor(::System::Data::DataTable*  table, ::StringW  conflict)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::MergeFailedEventArgs*>(table, conflict));
}
inline void System::Data::MergeFailedEventArgs::_ctor(::System::Data::DataTable*  table, ::StringW  conflict)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::MergeFailedEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, conflict);
}
inline ::StringW System::Data::MergeFailedEventArgs::get_Conflict()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::MergeFailedEventArgs*>::get(),
                        "get_Conflict",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::MergeFailedEventArgs::MergeFailedEventArgs()   {
}
