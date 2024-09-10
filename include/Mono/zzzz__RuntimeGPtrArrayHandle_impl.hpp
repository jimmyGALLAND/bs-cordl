#pragma once
// IWYU pragma private; include "Mono/RuntimeGPtrArrayHandle.hpp"
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::RuntimeGPtrArrayHandle::*)(::System::IntPtr)>(&::Mono::RuntimeGPtrArrayHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3bc50f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Length
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::RuntimeGPtrArrayHandle::*)()>(&::Mono::RuntimeGPtrArrayHandle::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3bc5110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Item
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bc512c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.Lookup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::Lookup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3bc5130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "Lookup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.GPtrArrayFree
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>)>(&::Mono::RuntimeGPtrArrayHandle::GPtrArrayFree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bc5194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "GPtrArrayFree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.DestroyAndFree
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Mono::RuntimeGPtrArrayHandle>)>(&::Mono::RuntimeGPtrArrayHandle::DestroyAndFree)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3bc5198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "DestroyAndFree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Mono::RuntimeGPtrArrayHandle::_ctor(::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline int32_t Mono::RuntimeGPtrArrayHandle::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::IntPtr Mono::RuntimeGPtrArrayHandle::get_Item(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, i);
}
inline ::System::IntPtr Mono::RuntimeGPtrArrayHandle::Lookup(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "Lookup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, i);
}
inline void Mono::RuntimeGPtrArrayHandle::GPtrArrayFree(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "GPtrArrayFree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Mono::RuntimeGPtrArrayHandle::DestroyAndFree(ByRef<::Mono::RuntimeGPtrArrayHandle>  h)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                        "DestroyAndFree",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h);
}
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle()   {
}
