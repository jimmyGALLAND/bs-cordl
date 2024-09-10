#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyIDAttribute::*)(::StringW, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType)>(&::BGLib::UnityExtension::ShaderPropertyIDAttribute::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x226ad6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDAttribute.GetTargetName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::UnityExtension::ShaderPropertyIDAttribute::*)()>(&::BGLib::UnityExtension::ShaderPropertyIDAttribute::GetTargetName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr ::BGLib::UnityExtension::ShaderPropertyAttributeFilter*& BGLib::UnityExtension::ShaderPropertyIDAttribute::__cordl_internal_get_filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::UnityExtension::ShaderPropertyAttributeFilter*> const& BGLib::UnityExtension::ShaderPropertyIDAttribute::__cordl_internal_get_filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr void BGLib::UnityExtension::ShaderPropertyIDAttribute::__cordl_internal_set_filter(::BGLib::UnityExtension::ShaderPropertyAttributeFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param nameFilter: ::StringW (default: u"")
/// @param filterPropType: ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType (default: static_cast<int32_t>(0x0))
inline ::BGLib::UnityExtension::ShaderPropertyIDAttribute* BGLib::UnityExtension::ShaderPropertyIDAttribute::New_ctor(::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  filterPropType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>(nameFilter, filterPropType));
}
/// @param nameFilter: ::StringW (default: u"")
/// @param filterPropType: ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType (default: static_cast<int32_t>(0x0))
inline void BGLib::UnityExtension::ShaderPropertyIDAttribute::_ctor(::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  filterPropType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameFilter, filterPropType);
}
inline ::StringW BGLib::UnityExtension::ShaderPropertyIDAttribute::GetTargetName()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDAttribute*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyIDAttribute::ShaderPropertyIDAttribute()   {
}
