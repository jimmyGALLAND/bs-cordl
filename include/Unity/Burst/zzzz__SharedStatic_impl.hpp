#pragma once
// IWYU pragma private; include "Unity/Burst/SharedStatic.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_def.hpp"
//  Writing Method size for method: ::Unity::Burst::__SharedStatic__PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::__SharedStatic__PreserveAttribute::*)()>(&::Unity::Burst::__SharedStatic__PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447974c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__SharedStatic__PreserveAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Burst::__SharedStatic__PreserveAttribute* Unity::Burst::__SharedStatic__PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::__SharedStatic__PreserveAttribute*>());
}
inline void Unity::Burst::__SharedStatic__PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__SharedStatic__PreserveAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::__SharedStatic__PreserveAttribute::__SharedStatic__PreserveAttribute()   {
}
//  Writing Method size for method: ::Unity::Burst::SharedStatic.CheckSizeOf
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t)>(&::Unity::Burst::SharedStatic::CheckSizeOf)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x447963c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic*>::get(),
                        "CheckSizeOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::SharedStatic.CheckResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>)>(&::Unity::Burst::SharedStatic::CheckResult)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x44796a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic*>::get(),
                        "CheckResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::SharedStatic.GetOrCreateSharedStaticInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(int64_t, int64_t, uint32_t, uint32_t)>(&::Unity::Burst::SharedStatic::GetOrCreateSharedStaticInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x44796fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic*>::get(),
                        "GetOrCreateSharedStaticInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::SharedStatic::CheckSizeOf(uint32_t  sizeOf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic*>::get(),
                        "CheckSizeOf",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sizeOf);
}
inline void Unity::Burst::SharedStatic::CheckResult(::cordl_internals::Ptr<void>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic*>::get(),
                        "CheckResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result);
}
inline ::cordl_internals::Ptr<void> Unity::Burst::SharedStatic::GetOrCreateSharedStaticInternal(int64_t  getHashCode64, int64_t  getSubHashCode64, uint32_t  sizeOf, uint32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic*>::get(),
                        "GetOrCreateSharedStaticInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, getHashCode64, getSubHashCode64, sizeOf, alignment);
}
// Ctor Parameters []
constexpr ::Unity::Burst::SharedStatic::SharedStatic()   {
}
