#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessWaitHandle.hpp"
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Diagnostics/zzzz__ProcessWaitHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ProcessWaitHandle._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessWaitHandle::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(&::System::Diagnostics::ProcessWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x439ca34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessWaitHandle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::ProcessWaitHandle* System::Diagnostics::ProcessWaitHandle::New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  processHandle)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::ProcessWaitHandle*>(processHandle));
}
inline void System::Diagnostics::ProcessWaitHandle::_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle*  processHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessWaitHandle*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processHandle);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ProcessWaitHandle::ProcessWaitHandle()   {
}
