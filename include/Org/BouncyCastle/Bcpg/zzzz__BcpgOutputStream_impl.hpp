#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/BcpgOutputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Wrap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::BcpgOutputStream* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Wrap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25f9e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "Wrap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25f9dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25f9edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag, int64_t, bool)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x25fa0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag, int64_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25fa208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x25fa2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteNewPacketLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int64_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteNewPacketLength)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x25fa3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteNewPacketLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::PacketTag, bool, bool, int64_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteHeader)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25f9f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.PartialFlush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(bool)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::PartialFlush)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25fa4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "PartialFlush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePartial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25fa520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePartial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePartial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x25fa588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePartial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25fa674;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Write)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x25fa6a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteShort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int16_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteShort)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25fa6dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int32_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteInt)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x25fa770;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteLong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int64_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteLong)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25fa824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePacket
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::ContainedPacket*)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25fa918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePacket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::ContainedPacket*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePacket
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::PacketTag, ::ArrayW<uint8_t,::Array<uint8_t>*>, bool)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25fa940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePacket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::BcpgObject*)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25f9e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteObjects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*,::Array<::Org::BouncyCastle::Bcpg::BcpgObject*>*>)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObjects)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25fa988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*,::Array<::Org::BouncyCastle::Bcpg::BcpgObject*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x25fa9f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Finish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Finish)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25faa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "Finish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Close)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25faa58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_outStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outStr;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_outStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outStr;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_outStr(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___outStr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialBuffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialBuffer;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partialBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialBufferLength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialBufferLength;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialBufferLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partialBufferLength = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialPower;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialPower;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialPower(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partialPower = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialOffset;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partialOffset;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partialOffset = value;
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::Wrap(::System::IO::Stream*  outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "Wrap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgOutputStream*, false>(nullptr, ___internal_method, outStr);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream*  outStr)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr));
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream*  outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag));
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr, tag);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag, int64_t  length, bool  oldFormat)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag, length, oldFormat));
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag, int64_t  length, bool  oldFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr, tag, length, oldFormat);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag, int64_t  length)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag, length));
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag, int64_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr, tag, length);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag, buffer));
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream*  outStr, ::Org::BouncyCastle::Bcpg::PacketTag  tag, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr, tag, buffer);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteNewPacketLength(int64_t  bodyLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteNewPacketLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bodyLen);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteHeader(::Org::BouncyCastle::Bcpg::PacketTag  tag, bool  oldPackets, bool  partial, int64_t  bodyLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tag, oldPackets, partial, bodyLen);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::PartialFlush(bool  isLast)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "PartialFlush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isLast);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePartial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  off, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePartial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, off, len);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteByte(uint8_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                    40
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                    38
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteShort(int16_t  n)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                    43
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteInt(int32_t  n)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                    44
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteLong(int64_t  n)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                    45
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket(::Org::BouncyCastle::Bcpg::ContainedPacket*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePacket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::ContainedPacket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket(::Org::BouncyCastle::Bcpg::PacketTag  tag, ::ArrayW<uint8_t,::Array<uint8_t>*>  body, bool  oldFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WritePacket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tag, body, oldFormat);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObject(::Org::BouncyCastle::Bcpg::BcpgObject*  bcpgObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgObject);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObjects(::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*,::Array<::Org::BouncyCastle::Bcpg::BcpgObject*>*>  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "WriteObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*,::Array<::Org::BouncyCastle::Bcpg::BcpgObject*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Flush()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Finish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                        "Finish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Close()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream::BcpgOutputStream()   {
}
