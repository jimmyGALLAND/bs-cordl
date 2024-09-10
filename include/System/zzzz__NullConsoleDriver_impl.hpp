#pragma once
// IWYU pragma private; include "System/NullConsoleDriver.hpp"
#include "System/zzzz__ConsoleKeyInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__NullConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
//  Writing Method size for method: ::System::NullConsoleDriver.ReadKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (::System::NullConsoleDriver::*)(bool)>(&::System::NullConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3daa978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(),
                        "ReadKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::NullConsoleDriver._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::NullConsoleDriver::*)()>(&::System::NullConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3da34cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr  System::NullConsoleDriver::operator ::System::IConsoleDriver*() noexcept {
return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* System::NullConsoleDriver::i___System__IConsoleDriver() noexcept {
return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
inline void System::NullConsoleDriver::setStaticF_EmptyConsoleKeyInfo(::System::ConsoleKeyInfo  value)  {
::cordl_internals::setStaticField<::System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get>(std::forward<::System::ConsoleKeyInfo>(value));
}
inline ::System::ConsoleKeyInfo System::NullConsoleDriver::getStaticF_EmptyConsoleKeyInfo()  {
return ::cordl_internals::getStaticField<::System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get>();
}
inline ::System::ConsoleKeyInfo System::NullConsoleDriver::ReadKey(bool  intercept)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(),
                        "ReadKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(this, ___internal_method, intercept);
}
inline ::System::NullConsoleDriver* System::NullConsoleDriver::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::NullConsoleDriver*>());
}
inline void System::NullConsoleDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::NullConsoleDriver::NullConsoleDriver()   {
}
