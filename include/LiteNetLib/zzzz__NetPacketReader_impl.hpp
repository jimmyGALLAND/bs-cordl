#pragma once
// IWYU pragma private; include "LiteNetLib/NetPacketReader.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_impl.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetPacketReader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)(::LiteNetLib::NetManager*, ::LiteNetLib::NetEvent*)>(&::LiteNetLib::NetPacketReader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3a2c4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.SetSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPacketReader::SetSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3a2c50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        "SetSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.RecycleInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)()>(&::LiteNetLib::NetPacketReader::RecycleInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3a2c5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        "RecycleInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.Recycle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)()>(&::LiteNetLib::NetPacketReader::Recycle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3a2c84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        "Recycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPacketReader::__cordl_internal_get__packet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packet;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPacketReader::__cordl_internal_get__packet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____packet;
}
constexpr void LiteNetLib::NetPacketReader::__cordl_internal_set__packet(::LiteNetLib::NetPacket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetManager*& LiteNetLib::NetPacketReader::__cordl_internal_get__manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& LiteNetLib::NetPacketReader::__cordl_internal_get__manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager;
}
constexpr void LiteNetLib::NetPacketReader::__cordl_internal_set__manager(::LiteNetLib::NetManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetEvent*& LiteNetLib::NetPacketReader::__cordl_internal_get__evt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____evt;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetEvent*> const& LiteNetLib::NetPacketReader::__cordl_internal_get__evt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____evt;
}
constexpr void LiteNetLib::NetPacketReader::__cordl_internal_set__evt(::LiteNetLib::NetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____evt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::LiteNetLib::NetPacketReader* LiteNetLib::NetPacketReader::New_ctor(::LiteNetLib::NetManager*  manager, ::LiteNetLib::NetEvent*  evt)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::NetPacketReader*>(manager, evt));
}
inline void LiteNetLib::NetPacketReader::_ctor(::LiteNetLib::NetManager*  manager, ::LiteNetLib::NetEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, evt);
}
inline void LiteNetLib::NetPacketReader::SetSource(::LiteNetLib::NetPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        "SetSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPacketReader::RecycleInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        "RecycleInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NetPacketReader::Recycle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader*>::get(),
                        "Recycle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPacketReader::NetPacketReader()   {
}
