#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/MicrophoneAvailabilityState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MicrophoneAvailabilityState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MicrophoneAvailabilityState::*)(::System::IntPtr)>(&::Oculus::Platform::Models::MicrophoneAvailabilityState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f017dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MicrophoneAvailabilityState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::MicrophoneAvailabilityState::__cordl_internal_get_MicrophoneAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneAvailable;
}
constexpr bool const& Oculus::Platform::Models::MicrophoneAvailabilityState::__cordl_internal_get_MicrophoneAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MicrophoneAvailable;
}
constexpr void Oculus::Platform::Models::MicrophoneAvailabilityState::__cordl_internal_set_MicrophoneAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MicrophoneAvailable = value;
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::Models::MicrophoneAvailabilityState::New_ctor(::System::IntPtr  o)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MicrophoneAvailabilityState*>(o));
}
inline void Oculus::Platform::Models::MicrophoneAvailabilityState::_ctor(::System::IntPtr  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MicrophoneAvailabilityState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MicrophoneAvailabilityState::MicrophoneAvailabilityState()   {
}
