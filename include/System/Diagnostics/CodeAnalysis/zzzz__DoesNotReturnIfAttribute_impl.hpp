#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/DoesNotReturnIfAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__DoesNotReturnIfAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::*)(bool)>(&::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3de6708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute.get_ParameterValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::*)()>(&::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::get_ParameterValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3de6730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>::get(),
                        "get_ParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::__cordl_internal_get__ParameterValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterValue_k__BackingField;
}
constexpr bool const& System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::__cordl_internal_get__ParameterValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParameterValue_k__BackingField;
}
constexpr void System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::__cordl_internal_set__ParameterValue_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParameterValue_k__BackingField = value;
}
inline ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute* System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::New_ctor(bool  parameterValue)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>(parameterValue));
}
inline void System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::_ctor(bool  parameterValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterValue);
}
inline bool System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::get_ParameterValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute*>::get(),
                        "get_ParameterValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::DoesNotReturnIfAttribute::DoesNotReturnIfAttribute()   {
}
