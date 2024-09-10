#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_def.hpp"
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>::_ctor(::cordl_internals::Ptr<void>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
template<typename T>
inline ByRef<T> Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<ByRef<T>, false>(this, ___internal_method);
}
/// @param alignment: uint32_t (default: static_cast<uint32_t>(0x4020000u))
template<typename T>
template<typename TContext>
inline ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T> Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>::GetOrCreate(uint32_t  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>>::get(),
                    "GetOrCreate",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>, false>(nullptr, ___internal_method, alignment);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") }]
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>::__BurstLike__SharedStatic_1(::cordl_internals::Ptr<void>  _buffer) noexcept  {
this->_buffer = _buffer;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic_1<T>::__BurstLike__SharedStatic_1()   {
}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic.GetOrCreateSharedStaticInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(int64_t, int64_t, uint32_t, uint32_t)>(&::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic::GetOrCreateSharedStaticInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x47ce04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic*>::get(),
                        "GetOrCreateSharedStaticInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::cordl_internals::Ptr<void> Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic::GetOrCreateSharedStaticInternal(int64_t  getHashCode64, int64_t  getSubHashCode64, uint32_t  sizeOf, uint32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic*>::get(),
                        "GetOrCreateSharedStaticInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, getHashCode64, getSubHashCode64, sizeOf, alignment);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::__BurstLike__SharedStatic::__BurstLike__SharedStatic()   {
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstLike::BurstLike()   {
}
