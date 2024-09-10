#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowedIf.hpp"
#include "GlobalNamespace/zzzz__ComparisonOperation_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowedIf_def.hpp"
#include "GlobalNamespace/zzzz__ComparisonOperation_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIf._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullAllowedIf::*)(::StringW, ::System::Object*, ::GlobalNamespace::__NullAllowed__Context)>(&::GlobalNamespace::NullAllowedIf::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2252bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowedIf*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIf._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullAllowedIf::*)(::StringW, ::GlobalNamespace::ComparisonOperation, ::System::Object*, ::GlobalNamespace::__NullAllowed__Context)>(&::GlobalNamespace::NullAllowedIf::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2252bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowedIf*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ComparisonOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowedIf.IsNullAllowedFor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NullAllowedIf::*)(::System::Object*, ::GlobalNamespace::__NullAllowed__Context)>(&::GlobalNamespace::NullAllowedIf::IsNullAllowedFor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2252c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowedIf*>::get(),
                        "IsNullAllowedFor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NullAllowedIf::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::NullAllowedIf::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr void GlobalNamespace::NullAllowedIf::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& GlobalNamespace::NullAllowedIf::__cordl_internal_get__valueToCompare()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueToCompare;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::NullAllowedIf::__cordl_internal_get__valueToCompare() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueToCompare;
}
constexpr void GlobalNamespace::NullAllowedIf::__cordl_internal_set__valueToCompare(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueToCompare)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ComparisonOperation& GlobalNamespace::NullAllowedIf::__cordl_internal_get__comparisonOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparisonOperation;
}
constexpr ::GlobalNamespace::ComparisonOperation const& GlobalNamespace::NullAllowedIf::__cordl_internal_get__comparisonOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparisonOperation;
}
constexpr void GlobalNamespace::NullAllowedIf::__cordl_internal_set__comparisonOperation(::GlobalNamespace::ComparisonOperation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comparisonOperation = value;
}
/// @param context: ::GlobalNamespace::__NullAllowed__Context (default: static_cast<int32_t>(0x0))
inline ::GlobalNamespace::NullAllowedIf* GlobalNamespace::NullAllowedIf::New_ctor(::StringW  propertyName, ::System::Object*  equalsTo, ::GlobalNamespace::__NullAllowed__Context  context)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NullAllowedIf*>(propertyName, equalsTo, context));
}
/// @param context: ::GlobalNamespace::__NullAllowed__Context (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::NullAllowedIf::_ctor(::StringW  propertyName, ::System::Object*  equalsTo, ::GlobalNamespace::__NullAllowed__Context  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowedIf*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, equalsTo, context);
}
/// @param context: ::GlobalNamespace::__NullAllowed__Context (default: static_cast<int32_t>(0x0))
inline ::GlobalNamespace::NullAllowedIf* GlobalNamespace::NullAllowedIf::New_ctor(::StringW  propertyName, ::GlobalNamespace::ComparisonOperation  comparisonOperation, ::System::Object*  valueToCompare, ::GlobalNamespace::__NullAllowed__Context  context)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NullAllowedIf*>(propertyName, comparisonOperation, valueToCompare, context));
}
/// @param context: ::GlobalNamespace::__NullAllowed__Context (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::NullAllowedIf::_ctor(::StringW  propertyName, ::GlobalNamespace::ComparisonOperation  comparisonOperation, ::System::Object*  valueToCompare, ::GlobalNamespace::__NullAllowed__Context  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowedIf*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ComparisonOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, comparisonOperation, valueToCompare, context);
}
inline bool GlobalNamespace::NullAllowedIf::IsNullAllowedFor(::System::Object*  value, ::GlobalNamespace::__NullAllowed__Context  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowedIf*>::get(),
                        "IsNullAllowedFor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, context);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowedIf::NullAllowedIf()   {
}
