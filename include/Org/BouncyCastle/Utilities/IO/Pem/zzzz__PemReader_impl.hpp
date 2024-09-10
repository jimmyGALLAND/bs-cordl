#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/Pem/PemReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemReader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)(::System::IO::TextReader*)>(&::Org::BouncyCastle::Utilities::IO::Pem::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2504418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemReader.get_Reader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextReader* (::Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)()>(&::Org::BouncyCastle::Utilities::IO::Pem::PemReader::get_Reader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250448c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        "get_Reader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemReader.ReadPemObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObject* (::Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)()>(&::Org::BouncyCastle::Utilities::IO::Pem::PemReader::ReadPemObject)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2504494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        "ReadPemObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemReader.LoadObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObject* (::Org::BouncyCastle::Utilities::IO::Pem::PemReader::*)(::StringW)>(&::Org::BouncyCastle::Utilities::IO::Pem::PemReader::LoadObject)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x25045e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        "LoadObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextReader*& Org::BouncyCastle::Utilities::IO::Pem::PemReader::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& Org::BouncyCastle::Utilities::IO::Pem::PemReader::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void Org::BouncyCastle::Utilities::IO::Pem::PemReader::__cordl_internal_set_reader(::System::IO::TextReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemReader* Org::BouncyCastle::Utilities::IO::Pem::PemReader::New_ctor(::System::IO::TextReader*  reader)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>(reader));
}
inline void Org::BouncyCastle::Utilities::IO::Pem::PemReader::_ctor(::System::IO::TextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::IO::TextReader* Org::BouncyCastle::Utilities::IO::Pem::PemReader::get_Reader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        "get_Reader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::TextReader*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Org::BouncyCastle::Utilities::IO::Pem::PemReader::ReadPemObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        "ReadPemObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Org::BouncyCastle::Utilities::IO::Pem::PemReader::LoadObject(::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemReader*>::get(),
                        "LoadObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemReader::PemReader()   {
}
