#pragma once
// IWYU pragma private; include "Unity/Burst/FunctionPointer_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Burst/zzzz__IFunctionPointer_def.hpp"
/// @brief Convert operator to "::Unity::Burst::IFunctionPointer"
template<typename T>
constexpr  Unity::Burst::FunctionPointer_1<T>::operator ::Unity::Burst::IFunctionPointer*()  {
return static_cast<::Unity::Burst::IFunctionPointer*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Burst::IFunctionPointer"
template<typename T>
constexpr ::Unity::Burst::IFunctionPointer* Unity::Burst::FunctionPointer_1<T>::i___Unity__Burst__IFunctionPointer()  {
return static_cast<::Unity::Burst::IFunctionPointer*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template<typename T>
inline void Unity::Burst::FunctionPointer_1<T>::_ctor(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::FunctionPointer_1<T>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
template<typename T>
inline ::System::IntPtr Unity::Burst::FunctionPointer_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::FunctionPointer_1<T>>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method);
}
template<typename T>
inline void Unity::Burst::FunctionPointer_1<T>::CheckIsCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::FunctionPointer_1<T>>::get(),
                        "CheckIsCreated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline T Unity::Burst::FunctionPointer_1<T>::get_Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::FunctionPointer_1<T>>::get(),
                        "get_Invoke",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline bool Unity::Burst::FunctionPointer_1<T>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::FunctionPointer_1<T>>::get(),
                        "get_IsCreated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T>
inline ::Unity::Burst::IFunctionPointer* Unity::Burst::FunctionPointer_1<T>::Unity_Burst_IFunctionPointer_FromIntPtr(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::FunctionPointer_1<T>>::get(),
                        "Unity.Burst.IFunctionPointer.FromIntPtr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Burst::IFunctionPointer*, false>(this, ___internal_method, ptr);
}
// Ctor Parameters [CppParam { name: "_ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Unity::Burst::FunctionPointer_1<T>::FunctionPointer_1(::System::IntPtr  _ptr) noexcept  {
this->_ptr = _ptr;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Burst::FunctionPointer_1<T>::FunctionPointer_1()   {
}
