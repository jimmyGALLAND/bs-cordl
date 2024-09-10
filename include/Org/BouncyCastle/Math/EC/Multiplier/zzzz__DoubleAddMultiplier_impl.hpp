#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/DoubleAddMultiplier.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__DoubleAddMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier.MultiplyPositive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x246b63c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::*)()>(&::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x246b7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint*  p, ::Org::BouncyCastle::Math::BigInteger*  k)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, p, k);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier* Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier*>());
}
inline void Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier::DoubleAddMultiplier()   {
}
