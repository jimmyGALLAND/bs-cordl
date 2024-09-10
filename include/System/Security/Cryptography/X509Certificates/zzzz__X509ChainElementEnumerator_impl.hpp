#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ChainElementEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElementEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)(::System::Collections::IEnumerable*)>(&::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x43acecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElement* (::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x43ad188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x43ad278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x43ad31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x43ad3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr ::System::Collections::IEnumerator*& System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::__cordl_internal_set_enumerator(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::New_ctor(::System::Collections::IEnumerable*  enumerable)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>(enumerable));
}
inline void System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::_ctor(::System::Collections::IEnumerable*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainElement* System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainElement*, false>(this, ___internal_method);
}
inline ::System::Object* System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator::X509ChainElementEnumerator()   {
}
