#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/BatchQueryJobStruct_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__BatchQueryJobStruct_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
template<typename T>
inline void Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::setStaticF_jobReflectionData(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>>::get>(std::forward<::System::IntPtr>(value));
}
template<typename T>
inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>>::get>();
}
template<typename T>
inline ::System::IntPtr Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Jobs::LowLevel::Unsafe::BatchQueryJobStruct_1<T>::BatchQueryJobStruct_1()   {
}
