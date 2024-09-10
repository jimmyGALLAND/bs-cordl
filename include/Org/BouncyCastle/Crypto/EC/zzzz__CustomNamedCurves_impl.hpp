#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/EC/CustomNamedCurves.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/EC/zzzz__CustomNamedCurves_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECPoint_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/EC/zzzz__CustomNamedCurves_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ee7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22ee7bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__Curve25519Holder::__CustomNamedCurves__Curve25519Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ee934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22ee93c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP128R1Holder::__CustomNamedCurves__SecP128R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eeb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x22eeb10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160K1Holder::__CustomNamedCurves__SecP160K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eef88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22eef90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R1Holder::__CustomNamedCurves__SecP160R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ef15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22ef164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP160R2Holder::__CustomNamedCurves__SecP160R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ef330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x22ef338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192K1Holder::__CustomNamedCurves__SecP192K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ef7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22ef7b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP192R1Holder::__CustomNamedCurves__SecP192R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ef984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x22ef98c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224K1Holder::__CustomNamedCurves__SecP224K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22efe04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22efe0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP224R1Holder::__CustomNamedCurves__SecP224R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22effd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x22effe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256K1Holder::__CustomNamedCurves__SecP256K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f0458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f0460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP256R1Holder::__CustomNamedCurves__SecP256R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f062c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f0634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP384R1Holder::__CustomNamedCurves__SecP384R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f0800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f0808;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecP521R1Holder::__CustomNamedCurves__SecP521R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f09d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f09dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R1Holder::__CustomNamedCurves__SecT113R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f0ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f0bb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT113R2Holder::__CustomNamedCurves__SecT113R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f0d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f0d84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R1Holder::__CustomNamedCurves__SecT131R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f0f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f0f58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT131R2Holder::__CustomNamedCurves__SecT131R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f1124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22f112c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163K1Holder::__CustomNamedCurves__SecT163K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f12a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f12ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R1Holder::__CustomNamedCurves__SecT163R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f1478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f1480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT163R2Holder::__CustomNamedCurves__SecT163R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f164c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f1654;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R1Holder::__CustomNamedCurves__SecT193R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f1820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f1828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT193R2Holder::__CustomNamedCurves__SecT193R2Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f19f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22f19fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233K1Holder::__CustomNamedCurves__SecT233K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f1b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f1b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT233R1Holder::__CustomNamedCurves__SecT233R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f1d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22f1d50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT239K1Holder::__CustomNamedCurves__SecT239K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f1ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22f1ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283K1Holder::__CustomNamedCurves__SecT283K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f2048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f2050;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT283R1Holder::__CustomNamedCurves__SecT283R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f221c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22f2224;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409K1Holder::__CustomNamedCurves__SecT409K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f239c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f23a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT409R1Holder::__CustomNamedCurves__SecT409R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f2570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22f2578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571K1Holder::__CustomNamedCurves__SecT571K1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f26f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22f26f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SecT571R1Holder::__CustomNamedCurves__SecT571R1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f28c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder.CreateParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::*)()>(&::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::CreateParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22f28cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>::get>(std::forward<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>(value));
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>());
}
inline void Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::CreateParameters()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::__CustomNamedCurves__SM2P256V1Holder::__CustomNamedCurves__SM2P256V1Holder()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ecac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureBasepoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22ecac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureBasepoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22ecbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.ConfigureCurveGlv
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22ecbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurveGlv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x22ecc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveWithOid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x22ecdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveWithOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.DefineCurveAlias
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x22ed100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveAlias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x22ee248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetByOid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x22ee3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetOid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::StringW)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22ee4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.GetName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22ee62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves.get_Names
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (*)()>(&::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22ee72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "get_Names",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToCurve(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToCurve()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_nameToOid(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "nameToOid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_nameToOid()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "nameToOid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToCurve(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToCurve()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToCurve", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_oidToName(::System::Collections::IDictionary*  value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary*, "oidToName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_oidToName()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "oidToName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::setStaticF_names(::System::Collections::IList*  value)  {
::cordl_internals::setStaticField<::System::Collections::IList*, "names", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>(std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::getStaticF_names()  {
return ::cordl_internals::getStaticField<::System::Collections::IList*, "names", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get>();
}
inline ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>());
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::StringW  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureBasepoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECPoint*, false>(nullptr, ___internal_method, curve, encoding);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(nullptr, ___internal_method, curve);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::ConfigureCurveGlv(::Org::BouncyCastle::Math::EC::ECCurve*  c, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "ConfigureCurveGlv",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*, false>(nullptr, ___internal_method, c, p);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurve(::StringW  name, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveWithOid(::StringW  name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*  holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveWithOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, oid, holder);
}
inline void Org::BouncyCastle::Crypto::EC::CustomNamedCurves::DefineCurveAlias(::StringW  name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "DefineCurveAlias",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, oid);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, name);
}
inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetByOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters*, false>(nullptr, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetOid(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetOid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(nullptr, ___internal_method, name);
}
inline ::StringW Org::BouncyCastle::Crypto::EC::CustomNamedCurves::GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "GetName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Crypto::EC::CustomNamedCurves::get_Names()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::EC::CustomNamedCurves*>::get(),
                        "get_Names",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::EC::CustomNamedCurves::CustomNamedCurves()   {
}
