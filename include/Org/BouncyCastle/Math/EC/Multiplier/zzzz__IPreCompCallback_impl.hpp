#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__IPreCompCallback_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback::*)(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(
        &::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback::Precompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback::Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, false>(this, ___internal_method, existing);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
