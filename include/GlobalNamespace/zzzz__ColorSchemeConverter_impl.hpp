#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeConverter_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeConverter.FromNetSerializable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (*)(::GlobalNamespace::ColorSchemeNetSerializable)>(&::GlobalNamespace::ColorSchemeConverter::FromNetSerializable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3a7e104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeConverter*>::get(),
                        "FromNetSerializable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemeNetSerializable>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemeConverter::FromNetSerializable(::GlobalNamespace::ColorSchemeNetSerializable  serialized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeConverter*>::get(),
                        "FromNetSerializable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemeNetSerializable>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(nullptr, ___internal_method, serialized);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeConverter::ColorSchemeConverter()   {
}
