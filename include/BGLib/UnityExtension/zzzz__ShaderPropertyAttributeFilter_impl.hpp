#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyAttributeFilter.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::__ShaderPropertyAttributeFilter__PropType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::__ShaderPropertyAttributeFilter__PropType()   {
}
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::Any{static_cast<int32_t>(0x0)};
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::Color{static_cast<int32_t>(0x1)};
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::Vector{static_cast<int32_t>(0x2)};
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::Float{static_cast<int32_t>(0x3)};
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::Range{static_cast<int32_t>(0x4)};
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::Texture{static_cast<int32_t>(0x5)};
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType::Int{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyAttributeFilter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyAttributeFilter::*)(::StringW, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType)>(&::BGLib::UnityExtension::ShaderPropertyAttributeFilter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x226ad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyAttributeFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType& BGLib::UnityExtension::ShaderPropertyAttributeFilter::__cordl_internal_get_propType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType const& BGLib::UnityExtension::ShaderPropertyAttributeFilter::__cordl_internal_get_propType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr void BGLib::UnityExtension::ShaderPropertyAttributeFilter::__cordl_internal_set_propType(::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propType = value;
}
constexpr ::StringW& BGLib::UnityExtension::ShaderPropertyAttributeFilter::__cordl_internal_get_nameFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameFilter;
}
constexpr ::StringW const& BGLib::UnityExtension::ShaderPropertyAttributeFilter::__cordl_internal_get_nameFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameFilter;
}
constexpr void BGLib::UnityExtension::ShaderPropertyAttributeFilter::__cordl_internal_set_nameFilter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::UnityExtension::ShaderPropertyAttributeFilter* BGLib::UnityExtension::ShaderPropertyAttributeFilter::New_ctor(::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  propType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::ShaderPropertyAttributeFilter*>(nameFilter, propType));
}
inline void BGLib::UnityExtension::ShaderPropertyAttributeFilter::_ctor(::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  propType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyAttributeFilter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameFilter, propType);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyAttributeFilter::ShaderPropertyAttributeFilter()   {
}
