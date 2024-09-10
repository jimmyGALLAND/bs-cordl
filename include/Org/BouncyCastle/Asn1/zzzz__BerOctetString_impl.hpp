#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerOctetString.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25e75c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25e7a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x25e7a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25e7ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_octets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___octets;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_octets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___octets;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_set_octets(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___octets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_chunkSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_chunkSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_set_chunkSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkSize = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerOctetString*& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_currentChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChunk;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerOctetString*> const& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_currentChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChunk;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_set_currentChunk(::Org::BouncyCastle::Asn1::DerOctetString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentChunk)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_nextChunkPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextChunkPos;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_get_nextChunkPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextChunkPos;
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__cordl_internal_set_nextChunkPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextChunkPos = value;
}
inline ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator* Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  octets, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>(octets, chunkSize));
}
inline void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  octets, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, octets, chunkSize);
}
inline ::System::Object* Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__BerOctetString__ChunkEnumerator()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.FromSequence
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::BerOctetString* (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::BerOctetString::FromSequence)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25e2218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "FromSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.ToBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>)>(&::Org::BouncyCastle::Asn1::BerOctetString::ToBytes)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25e70b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "ToBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.ToOctetStringArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> (*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::Asn1::BerOctetString::ToOctetStringArray)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x25e7194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "ToOctetStringArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25e7380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25e73ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25dfae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25e7468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, int32_t)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25e7490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, int32_t)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25e750c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::BerOctetString::*)()>(&::Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25e7538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.GetObjects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::BerOctetString::*)()>(&::Org::BouncyCastle::Asn1::BerOctetString::GetObjects)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25e75f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "GetObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.Encode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&::Org::BouncyCastle::Asn1::BerOctetString::Encode)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x25e75fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Org::BouncyCastle::Asn1::BerOctetString::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::BerOctetString::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_chunkSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_chunkSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_set_chunkSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkSize = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_octs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___octs;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> const& Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_get_octs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___octs;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString::__cordl_internal_set_octs(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___octs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::setStaticF_DefaultChunkSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DefaultChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Asn1::BerOctetString::getStaticF_DefaultChunkSize()  {
return ::cordl_internals::getStaticField<int32_t, "DefaultChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get>();
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::FromSequence(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "FromSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::BerOctetString*, false>(nullptr, ___internal_method, seq);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Asn1::BerOctetString::ToBytes(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "ToBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, octs);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> Org::BouncyCastle::Asn1::BerOctetString::ToOctetStringArray(::System::Collections::IEnumerable*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "ToOctetStringArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, false>(nullptr, ___internal_method, e);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::System::Collections::IEnumerable*  e)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetString*>(e));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::System::Collections::IEnumerable*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetString*>(str));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetString*>(octs));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, octs);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetString*>(str, chunkSize));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str, chunkSize);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetString*>(octs, chunkSize));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, octs, chunkSize);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::BerOctetString*>(str, octs, chunkSize));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str, octs, chunkSize);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::BerOctetString::GetObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                        "GetObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, derOut);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOctetString::BerOctetString()   {
}
