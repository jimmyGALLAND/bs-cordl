#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpExperimental_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ExperimentalPacket_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x10ad744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::ExperimentalPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::__get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::ExperimentalPacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::__get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::__set_p(::Org::BouncyCastle::Bcpg::ExperimentalPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental* Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental*>(bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgIn);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::PgpExperimental() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
