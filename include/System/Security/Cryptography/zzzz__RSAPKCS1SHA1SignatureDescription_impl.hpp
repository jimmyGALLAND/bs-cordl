#pragma once
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SHA1SignatureDescription_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::*)()>(
    &::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26edb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription* System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>());
}
inline void System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SHA1SignatureDescription::RSAPKCS1SHA1SignatureDescription() {}
