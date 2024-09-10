#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromRendererAttribute.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDFromRendererAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::*)(::StringW, ::StringW, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType)>(&::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x226ae2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute.GetTargetName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::*)()>(&::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::GetTargetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226ae58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::__cordl_internal_get_propertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr ::StringW const& BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::__cordl_internal_get_propertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyName;
}
constexpr void BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::__cordl_internal_set_propertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param nameFilter: ::StringW (default: u"")
/// @param filterPropType: ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType (default: static_cast<int32_t>(0x0))
inline ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute* BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::New_ctor(::StringW  propertyName, ::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  filterPropType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>(propertyName, nameFilter, filterPropType));
}
/// @param nameFilter: ::StringW (default: u"")
/// @param filterPropType: ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType (default: static_cast<int32_t>(0x0))
inline void BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::_ctor(::StringW  propertyName, ::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  filterPropType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, nameFilter, filterPropType);
}
inline ::StringW BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::GetTargetName()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::ShaderPropertyIDFromRendererAttribute()   {
}
