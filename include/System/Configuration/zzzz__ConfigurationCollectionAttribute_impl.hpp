#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationCollectionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationCollectionAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationCollectionAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::ConfigurationCollectionAttribute::*)(::System::Type*)>(&::System::Configuration::ConfigurationCollectionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ff96b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationCollectionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Configuration::ConfigurationCollectionAttribute* System::Configuration::ConfigurationCollectionAttribute::New_ctor(::System::Type*  itemType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Configuration::ConfigurationCollectionAttribute*>(itemType));
}
inline void System::Configuration::ConfigurationCollectionAttribute::_ctor(::System::Type*  itemType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationCollectionAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemType);
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationCollectionAttribute::ConfigurationCollectionAttribute()   {
}
