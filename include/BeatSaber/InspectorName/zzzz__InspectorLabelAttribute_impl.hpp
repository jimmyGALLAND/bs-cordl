#pragma once
// IWYU pragma private; include "BeatSaber/InspectorName/InspectorLabelAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BeatSaber/InspectorName/zzzz__InspectorLabelAttribute_def.hpp"
//  Writing Method size for method: ::BeatSaber::InspectorName::InspectorLabelAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::InspectorName::InspectorLabelAttribute::*)(::StringW)>(&::BeatSaber::InspectorName::InspectorLabelAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x226a1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::InspectorName::InspectorLabelAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::InspectorName::InspectorLabelAttribute::__cordl_internal_get_CustomLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomLabel;
}
constexpr ::StringW const& BeatSaber::InspectorName::InspectorLabelAttribute::__cordl_internal_get_CustomLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomLabel;
}
constexpr void BeatSaber::InspectorName::InspectorLabelAttribute::__cordl_internal_set_CustomLabel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CustomLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::InspectorName::InspectorLabelAttribute* BeatSaber::InspectorName::InspectorLabelAttribute::New_ctor(::StringW  customLabel)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::InspectorName::InspectorLabelAttribute*>(customLabel));
}
inline void BeatSaber::InspectorName::InspectorLabelAttribute::_ctor(::StringW  customLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::InspectorName::InspectorLabelAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customLabel);
}
// Ctor Parameters []
constexpr ::BeatSaber::InspectorName::InspectorLabelAttribute::InspectorLabelAttribute()   {
}
