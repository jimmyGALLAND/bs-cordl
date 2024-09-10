#pragma once
// IWYU pragma private; include "Oculus/Haptics/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Haptics/zzzz__Utils_def.hpp"
#include "Oculus/Haptics/zzzz__Controller_def.hpp"
#include "Oculus/Haptics/zzzz__Ffi_def.hpp"
//  Writing Method size for method: ::Oculus::Haptics::Utils.ControllerToFfiController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Haptics::__Ffi__Controller (*)(::Oculus::Haptics::Controller)>(&::Oculus::Haptics::Utils::ControllerToFfiController)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ec5684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Utils*>::get(),
                        "ControllerToFfiController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Controller>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Utils.Map
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Oculus::Haptics::Utils::Map)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ec5e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Utils*>::get(),
                        "Map",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Haptics::__Ffi__Controller Oculus::Haptics::Utils::ControllerToFfiController(::Oculus::Haptics::Controller  controller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Utils*>::get(),
                        "ControllerToFfiController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Haptics::Controller>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::__Ffi__Controller, false>(nullptr, ___internal_method, controller);
}
inline float_t Oculus::Haptics::Utils::Map(int32_t  input, int32_t  inMin, int32_t  inMax, int32_t  outMin, int32_t  outMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::Utils*>::get(),
                        "Map",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, input, inMin, inMax, outMin, outMax);
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Utils::Utils()   {
}
