#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/PkcsException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__PkcsException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PkcsException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::PkcsException::*)(::StringW)>(&::Org::BouncyCastle::Pkcs::PkcsException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2518ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkcs::PkcsException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkcs::PkcsException::*)(::StringW, ::System::Exception*)>(&::Org::BouncyCastle::Pkcs::PkcsException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25186f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Pkcs::PkcsException* Org::BouncyCastle::Pkcs::PkcsException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::PkcsException*>(message));
}
inline void Org::BouncyCastle::Pkcs::PkcsException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Org::BouncyCastle::Pkcs::PkcsException* Org::BouncyCastle::Pkcs::PkcsException::New_ctor(::StringW  message, ::System::Exception*  underlying)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkcs::PkcsException*>(message, underlying));
}
inline void Org::BouncyCastle::Pkcs::PkcsException::_ctor(::StringW  message, ::System::Exception*  underlying)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkcs::PkcsException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, underlying);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkcs::PkcsException::PkcsException()   {
}
