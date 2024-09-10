#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CollectionStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CollectionStore_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStore._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::Store::X509CollectionStore::*)(::System::Collections::ICollection*)>(&::Org::BouncyCastle::X509::Store::X509CollectionStore::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x259efec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStore*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::Store::X509CollectionStore.GetMatches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::Store::X509CollectionStore::*)(::Org::BouncyCastle::X509::Store::IX509Selector*)>(&::Org::BouncyCastle::X509::Store::X509CollectionStore::GetMatches)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x259f060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStore*>::get(),
                        "GetMatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Selector*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Store"
constexpr  Org::BouncyCastle::X509::Store::X509CollectionStore::operator ::Org::BouncyCastle::X509::Store::IX509Store*() noexcept {
return static_cast<::Org::BouncyCastle::X509::Store::IX509Store*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Store"
constexpr ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::X509::Store::X509CollectionStore::i___Org__BouncyCastle__X509__Store__IX509Store() noexcept {
return static_cast<::Org::BouncyCastle::X509::Store::IX509Store*>(static_cast<void*>(this));
}
constexpr ::System::Collections::ICollection*& Org::BouncyCastle::X509::Store::X509CollectionStore::__cordl_internal_get__local()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& Org::BouncyCastle::X509::Store::X509CollectionStore::__cordl_internal_get__local() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr void Org::BouncyCastle::X509::Store::X509CollectionStore::__cordl_internal_set__local(::System::Collections::ICollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____local)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::X509::Store::X509CollectionStore* Org::BouncyCastle::X509::Store::X509CollectionStore::New_ctor(::System::Collections::ICollection*  collection)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::Store::X509CollectionStore*>(collection));
}
inline void Org::BouncyCastle::X509::Store::X509CollectionStore::_ctor(::System::Collections::ICollection*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStore*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::Store::X509CollectionStore::GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector*  selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::Store::X509CollectionStore*>::get(),
                        "GetMatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Selector*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, selector);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::Store::X509CollectionStore::X509CollectionStore()   {
}
