#pragma once
// IWYU pragma private; include "Mono/Math/BigInteger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Math::__BigInteger__Sign::__BigInteger__Sign(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Math::__BigInteger__Sign::__BigInteger__Sign()   {
}
constexpr ::Mono::Math::__BigInteger__Sign  Mono::Math::__BigInteger__Sign::Negative{static_cast<int32_t>(0xffffffff)};
constexpr ::Mono::Math::__BigInteger__Sign  Mono::Math::__BigInteger__Sign::Zero{static_cast<int32_t>(0x0)};
constexpr ::Mono::Math::__BigInteger__Sign  Mono::Math::__BigInteger__Sign::Positive{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Mono::Math::__BigInteger__ModulusRing._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::__BigInteger__ModulusRing::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__ModulusRing::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3bc1740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__ModulusRing.BarrettReduction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::__BigInteger__ModulusRing::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__ModulusRing::BarrettReduction)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3bc1a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "BarrettReduction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__ModulusRing.Multiply
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::__BigInteger__ModulusRing::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__ModulusRing::Multiply)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3bc2090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Multiply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__ModulusRing.Difference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::__BigInteger__ModulusRing::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__ModulusRing::Difference)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3bc220c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Difference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__ModulusRing.Pow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::__BigInteger__ModulusRing::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__ModulusRing::Pow)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3bc1814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Pow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__ModulusRing.Pow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::__BigInteger__ModulusRing::*)(uint32_t, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__ModulusRing::Pow)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3bc23c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Pow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mono::Math::BigInteger*& Mono::Math::__BigInteger__ModulusRing::__cordl_internal_get_mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Math::__BigInteger__ModulusRing::__cordl_internal_get_mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mod;
}
constexpr void Mono::Math::__BigInteger__ModulusRing::__cordl_internal_set_mod(::Mono::Math::BigInteger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Math::BigInteger*& Mono::Math::__BigInteger__ModulusRing::__cordl_internal_get_constant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constant;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& Mono::Math::__BigInteger__ModulusRing::__cordl_internal_get_constant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constant;
}
constexpr void Mono::Math::__BigInteger__ModulusRing::__cordl_internal_set_constant(::Mono::Math::BigInteger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___constant)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Math::__BigInteger__ModulusRing* Mono::Math::__BigInteger__ModulusRing::New_ctor(::Mono::Math::BigInteger*  modulus)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Math::__BigInteger__ModulusRing*>(modulus));
}
inline void Mono::Math::__BigInteger__ModulusRing::_ctor(::Mono::Math::BigInteger*  modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modulus);
}
inline void Mono::Math::__BigInteger__ModulusRing::BarrettReduction(::Mono::Math::BigInteger*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "BarrettReduction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__ModulusRing::Multiply(::Mono::Math::BigInteger*  a, ::Mono::Math::BigInteger*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Multiply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, a, b);
}
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__ModulusRing::Difference(::Mono::Math::BigInteger*  a, ::Mono::Math::BigInteger*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Difference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, a, b);
}
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__ModulusRing::Pow(::Mono::Math::BigInteger*  a, ::Mono::Math::BigInteger*  k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Pow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, a, k);
}
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__ModulusRing::Pow(uint32_t  b, ::Mono::Math::BigInteger*  exp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__ModulusRing*>::get(),
                        "Pow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, b, exp);
}
// Ctor Parameters []
constexpr ::Mono::Math::__BigInteger__ModulusRing::__BigInteger__ModulusRing()   {
}
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.Subtract
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__Kernel::Subtract)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3bbfe04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "Subtract",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.MinusEq
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__Kernel::MinusEq)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3bc1dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "MinusEq",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.PlusEq
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__Kernel::PlusEq)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3bc1f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "PlusEq",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.Compare
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::__BigInteger__Sign (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__Kernel::Compare)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3bbfcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.SingleByteDivideInPlace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::__BigInteger__Kernel::SingleByteDivideInPlace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3bc102c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "SingleByteDivideInPlace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.DwordMod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::__BigInteger__Kernel::DwordMod)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3bbffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "DwordMod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.DwordDivMod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Mono::Math::BigInteger*,::Array<::Mono::Math::BigInteger*>*> (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::__BigInteger__Kernel::DwordDivMod)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3bc2430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "DwordDivMod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.multiByteDivide
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Mono::Math::BigInteger*,::Array<::Mono::Math::BigInteger*>*> (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__Kernel::multiByteDivide)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x3bc002c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "multiByteDivide",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.LeftShift
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::__BigInteger__Kernel::LeftShift)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x3bc05bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "LeftShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.RightShift
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::__BigInteger__Kernel::RightShift)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3bc07a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "RightShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.Multiply
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint32_t,::Array<uint32_t>*>, uint32_t, uint32_t, ::ArrayW<uint32_t,::Array<uint32_t>*>, uint32_t, uint32_t, ::ArrayW<uint32_t,::Array<uint32_t>*>, uint32_t)>(&::Mono::Math::__BigInteger__Kernel::Multiply)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3bc04bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "Multiply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.MultiplyMod2p32pmod
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint32_t,::Array<uint32_t>*>, int32_t, int32_t, ::ArrayW<uint32_t,::Array<uint32_t>*>, int32_t, int32_t, ::ArrayW<uint32_t,::Array<uint32_t>*>, int32_t, int32_t)>(&::Mono::Math::__BigInteger__Kernel::MultiplyMod2p32pmod)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3bc1c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "MultiplyMod2p32pmod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.modInverse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::__BigInteger__Kernel::modInverse)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3bc25b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "modInverse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::__BigInteger__Kernel.modInverse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::__BigInteger__Kernel::modInverse)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x3bc1248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "modInverse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__Kernel::Subtract(::Mono::Math::BigInteger*  big, ::Mono::Math::BigInteger*  small)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "Subtract",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, big, small);
}
inline void Mono::Math::__BigInteger__Kernel::MinusEq(::Mono::Math::BigInteger*  big, ::Mono::Math::BigInteger*  small)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "MinusEq",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, big, small);
}
inline void Mono::Math::__BigInteger__Kernel::PlusEq(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "PlusEq",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::__BigInteger__Sign Mono::Math::__BigInteger__Kernel::Compare(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::__BigInteger__Sign, false>(nullptr, ___internal_method, bi1, bi2);
}
inline uint32_t Mono::Math::__BigInteger__Kernel::SingleByteDivideInPlace(::Mono::Math::BigInteger*  n, uint32_t  d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "SingleByteDivideInPlace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, n, d);
}
inline uint32_t Mono::Math::__BigInteger__Kernel::DwordMod(::Mono::Math::BigInteger*  n, uint32_t  d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "DwordMod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, n, d);
}
inline ::ArrayW<::Mono::Math::BigInteger*,::Array<::Mono::Math::BigInteger*>*> Mono::Math::__BigInteger__Kernel::DwordDivMod(::Mono::Math::BigInteger*  n, uint32_t  d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "DwordDivMod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Mono::Math::BigInteger*,::Array<::Mono::Math::BigInteger*>*>, false>(nullptr, ___internal_method, n, d);
}
inline ::ArrayW<::Mono::Math::BigInteger*,::Array<::Mono::Math::BigInteger*>*> Mono::Math::__BigInteger__Kernel::multiByteDivide(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "multiByteDivide",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Mono::Math::BigInteger*,::Array<::Mono::Math::BigInteger*>*>, false>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__Kernel::LeftShift(::Mono::Math::BigInteger*  bi, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "LeftShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi, n);
}
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__Kernel::RightShift(::Mono::Math::BigInteger*  bi, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "RightShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi, n);
}
inline void Mono::Math::__BigInteger__Kernel::Multiply(::ArrayW<uint32_t,::Array<uint32_t>*>  x, uint32_t  xOffset, uint32_t  xLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, uint32_t  yOffset, uint32_t  yLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  d, uint32_t  dOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "Multiply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
}
inline void Mono::Math::__BigInteger__Kernel::MultiplyMod2p32pmod(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOffset, int32_t  xLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOffest, int32_t  yLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  d, int32_t  dOffset, int32_t  mod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "MultiplyMod2p32pmod",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t,::Array<uint32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
}
inline uint32_t Mono::Math::__BigInteger__Kernel::modInverse(::Mono::Math::BigInteger*  bi, uint32_t  modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "modInverse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bi, modulus);
}
inline ::Mono::Math::BigInteger* Mono::Math::__BigInteger__Kernel::modInverse(::Mono::Math::BigInteger*  bi, ::Mono::Math::BigInteger*  modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::__BigInteger__Kernel*>::get(),
                        "modInverse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi, modulus);
}
// Ctor Parameters []
constexpr ::Mono::Math::__BigInteger__Kernel::__BigInteger__Kernel()   {
}
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)(::Mono::Math::__BigInteger__Sign, uint32_t)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3bbf96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::__BigInteger__Sign>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3bbf9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3bbfaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3bbb65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)(uint32_t)>(&::Mono::Math::BigInteger::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3bbfbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Implicit___Mono__Math__BigInteger_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(uint32_t)>(&::Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3bbad88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Implicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Implicit___Mono__Math__BigInteger_
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(int32_t)>(&::Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3bbb128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Implicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Subtraction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Subtraction)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3bbb1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Subtraction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Modulus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::op_Modulus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bbae4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Modulus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Modulus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Modulus)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3bbb33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Modulus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Division
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Division)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bc0494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Division",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Multiply
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Multiply)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3bbaf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Multiply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_LeftShift
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::BigInteger::op_LeftShift)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bc05b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_LeftShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_RightShift
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(::Mono::Math::BigInteger*, int32_t)>(&::Mono::Math::BigInteger::op_RightShift)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bc07a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_RightShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.get_Rng
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (*)()>(&::Mono::Math::BigInteger::get_Rng)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3bc091c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "get_Rng",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GenerateRandom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(int32_t, ::System::Security::Cryptography::RandomNumberGenerator*)>(&::Mono::Math::BigInteger::GenerateRandom)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3bc09c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GenerateRandom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RandomNumberGenerator*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GenerateRandom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(int32_t)>(&::Mono::Math::BigInteger::GenerateRandom)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3bc0b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GenerateRandom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.BitCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::BitCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3bbb0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "BitCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.TestBit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Math::BigInteger::*)(int32_t)>(&::Mono::Math::BigInteger::TestBit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3bc0b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "TestBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.SetBit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)(uint32_t)>(&::Mono::Math::BigInteger::SetBit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bc0c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "SetBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.SetBit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)(uint32_t, bool)>(&::Mono::Math::BigInteger::SetBit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3bc0c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "SetBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.LowestSetBit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::LowestSetBit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3bc0c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "LowestSetBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GetBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::GetBytes)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3bbbd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GetBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Equality
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3bbfc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Inequality
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, uint32_t)>(&::Mono::Math::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3bc0cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Inequality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Equality
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Equality)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bbb4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_Inequality
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_Inequality)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bbae50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Inequality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_GreaterThan
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_GreaterThan)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3bc0d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_GreaterThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_LessThan
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_LessThan)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3bbb114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_LessThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3bc0d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_GreaterThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3bc0d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_LessThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Math::BigInteger::*)(uint32_t)>(&::Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3bc0da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Math::BigInteger::*)(uint32_t, ::StringW)>(&::Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3bc0e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Normalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::Normalize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3bbfb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "Normalize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3bbb994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3bc10a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bc10f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Math::BigInteger::*)(::System::Object*)>(&::Mono::Math::BigInteger::Equals)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3bc1100;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ModInverse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::ModInverse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bbb338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ModInverse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.ModPow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::BigInteger::*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*)>(&::Mono::Math::BigInteger::ModPow)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3bbb86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ModPow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.GeneratePseudoPrime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (*)(int32_t)>(&::Mono::Math::BigInteger::GeneratePseudoPrime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3bbade0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GeneratePseudoPrime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::BigInteger.Incr2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::BigInteger::*)()>(&::Mono::Math::BigInteger::Incr2)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3bc1920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "Incr2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Mono::Math::BigInteger::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr uint32_t const& Mono::Math::BigInteger::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void Mono::Math::BigInteger::__cordl_internal_set_length(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& Mono::Math::BigInteger::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& Mono::Math::BigInteger::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Mono::Math::BigInteger::__cordl_internal_set_data(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Math::BigInteger::setStaticF_smallPrimes(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "smallPrimes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get>(std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t,::Array<uint32_t>*> Mono::Math::BigInteger::getStaticF_smallPrimes()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t,::Array<uint32_t>*>, "smallPrimes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get>();
}
inline void Mono::Math::BigInteger::setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get>(std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Math::BigInteger::getStaticF_rng()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get>();
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::Mono::Math::__BigInteger__Sign  sign, uint32_t  len)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Math::BigInteger*>(sign, len));
}
inline void Mono::Math::BigInteger::_ctor(::Mono::Math::__BigInteger__Sign  sign, uint32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::__BigInteger__Sign>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sign, len);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::Mono::Math::BigInteger*  bi)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Math::BigInteger*>(bi));
}
inline void Mono::Math::BigInteger::_ctor(::Mono::Math::BigInteger*  bi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bi);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::Mono::Math::BigInteger*  bi, uint32_t  len)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Math::BigInteger*>(bi, len));
}
inline void Mono::Math::BigInteger::_ctor(::Mono::Math::BigInteger*  bi, uint32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bi, len);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  inData)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Math::BigInteger*>(inData));
}
inline void Mono::Math::BigInteger::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  inData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inData);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::New_ctor(uint32_t  ui)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Math::BigInteger*>(ui));
}
inline void Mono::Math::BigInteger::_ctor(uint32_t  ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ui);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Implicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, value);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Implicit___Mono__Math__BigInteger_(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Implicit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, value);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Subtraction(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Subtraction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi1, bi2);
}
inline uint32_t Mono::Math::BigInteger::op_Modulus(::Mono::Math::BigInteger*  bi, uint32_t  ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Modulus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bi, ui);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Modulus(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Modulus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Division(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Division",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_Multiply(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Multiply",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi1, bi2);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_LeftShift(::Mono::Math::BigInteger*  bi1, int32_t  shiftVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_LeftShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi1, shiftVal);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::op_RightShift(::Mono::Math::BigInteger*  bi1, int32_t  shiftVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_RightShift",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bi1, shiftVal);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Math::BigInteger::get_Rng()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "get_Rng",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*, false>(nullptr, ___internal_method);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::GenerateRandom(int32_t  bits, ::System::Security::Cryptography::RandomNumberGenerator*  rng)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GenerateRandom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RandomNumberGenerator*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bits, rng);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::GenerateRandom(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GenerateRandom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bits);
}
inline int32_t Mono::Math::BigInteger::BitCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "BitCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Mono::Math::BigInteger::TestBit(int32_t  bitNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "TestBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bitNum);
}
inline void Mono::Math::BigInteger::SetBit(uint32_t  bitNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "SetBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bitNum);
}
inline void Mono::Math::BigInteger::SetBit(uint32_t  bitNum, bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "SetBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bitNum, value);
}
inline int32_t Mono::Math::BigInteger::LowestSetBit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "LowestSetBit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Mono::Math::BigInteger::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GetBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Mono::Math::BigInteger::op_Equality(::Mono::Math::BigInteger*  bi1, uint32_t  ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, ui);
}
inline bool Mono::Math::BigInteger::op_Inequality(::Mono::Math::BigInteger*  bi1, uint32_t  ui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Inequality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, ui);
}
inline bool Mono::Math::BigInteger::op_Equality(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Equality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_Inequality(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_Inequality",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_GreaterThan(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_GreaterThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_LessThan(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_LessThan",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_GreaterThanOrEqual(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_GreaterThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
inline bool Mono::Math::BigInteger::op_LessThanOrEqual(::Mono::Math::BigInteger*  bi1, ::Mono::Math::BigInteger*  bi2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "op_LessThanOrEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bi1, bi2);
}
inline ::StringW Mono::Math::BigInteger::ToString(uint32_t  radix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, radix);
}
inline ::StringW Mono::Math::BigInteger::ToString(uint32_t  radix, ::StringW  characterSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, radix, characterSet);
}
inline void Mono::Math::BigInteger::Normalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "Normalize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Math::BigInteger::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Mono::Math::BigInteger::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Mono::Math::BigInteger::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Mono::Math::BigInteger::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::ModInverse(::Mono::Math::BigInteger*  modulus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ModInverse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, modulus);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::ModPow(::Mono::Math::BigInteger*  exp, ::Mono::Math::BigInteger*  n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "ModPow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, exp, n);
}
inline ::Mono::Math::BigInteger* Mono::Math::BigInteger::GeneratePseudoPrime(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "GeneratePseudoPrime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(nullptr, ___internal_method, bits);
}
inline void Mono::Math::BigInteger::Incr2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::BigInteger*>::get(),
                        "Incr2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Math::BigInteger::BigInteger()   {
}
