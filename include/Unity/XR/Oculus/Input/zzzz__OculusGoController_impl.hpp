#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusGoController.hpp"
#include "Unity/XR/Oculus/Input/zzzz__GearVRTrackedController_impl.hpp"
#include "Unity/XR/Oculus/Input/zzzz__OculusGoController_def.hpp"
//  Writing Method size for method: ::Unity::XR::Oculus::Input::OculusGoController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::Oculus::Input::OculusGoController::*)()>(&::Unity::XR::Oculus::Input::OculusGoController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47a6738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Input::OculusGoController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Unity::XR::Oculus::Input::OculusGoController* Unity::XR::Oculus::Input::OculusGoController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::Oculus::Input::OculusGoController*>());
}
inline void Unity::XR::Oculus::Input::OculusGoController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Input::OculusGoController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::Input::OculusGoController::OculusGoController()   {
}
