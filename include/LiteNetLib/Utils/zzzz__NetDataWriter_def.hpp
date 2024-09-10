#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetDataWriter)
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Array;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NetDataWriter);
// Type: LiteNetLib.Utils::NetDataWriter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: ::LiteNetLib.Utils::NetDataWriter*
class CORDL_TYPE NetDataWriter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Data;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Field _autoResize, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoResize, put=__cordl_internal_set__autoResize)) bool  _autoResize;

/// @brief Field _data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _data;

/// @brief Field _position, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) int32_t  _position;

/// @brief Method CopyData, addr 0x3a3a424, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> CopyData() ;

/// @brief Method FromBytes, addr 0x3a3a0ac, size 0xa0, virtual false, abstract: false, final false
static inline ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, bool  copy) ;

/// @brief Method FromBytes, addr 0x3a3a1c0, size 0x8c, virtual false, abstract: false, final false
static inline ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length) ;

/// @brief Method FromString, addr 0x3a31ec0, size 0x70, virtual false, abstract: false, final false
static inline ::LiteNetLib::Utils::NetDataWriter* FromString(::StringW  value) ;

static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor() ;

static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor(bool  autoResize) ;

static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor(bool  autoResize, int32_t  initialSize) ;

/// @brief Method Put, addr 0x3a3a14c, size 0x74, virtual false, abstract: false, final false
inline void Put(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Put, addr 0x3a3a24c, size 0x6c, virtual false, abstract: false, final false
inline void Put(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  offset, int32_t  length) ;

/// @brief Method Put, addr 0x3a3adf4, size 0x4c, virtual false, abstract: false, final false
inline void Put(::System::Net::IPEndPoint*  endPoint) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Put(T  obj) ;

/// @brief Method Put, addr 0x3a3a2b8, size 0xcc, virtual false, abstract: false, final false
inline void Put(::StringW  value) ;

/// @brief Method Put, addr 0x3a3ad0c, size 0xe8, virtual false, abstract: false, final false
inline void Put(::StringW  value, int32_t  maxLength) ;

/// @brief Method Put, addr 0x3a3aa80, size 0x6c, virtual false, abstract: false, final false
inline void Put(bool  value) ;

/// @brief Method Put, addr 0x3a3a688, size 0x50, virtual false, abstract: false, final false
inline void Put(char16_t  value) ;

/// @brief Method Put, addr 0x3a3a4f8, size 0x50, virtual false, abstract: false, final false
inline void Put(double_t  value) ;

/// @brief Method Put, addr 0x3a3a4a8, size 0x50, virtual false, abstract: false, final false
inline void Put(float_t  value) ;

/// @brief Method Put, addr 0x3a3a728, size 0x50, virtual false, abstract: false, final false
inline void Put(int16_t  value) ;

/// @brief Method Put, addr 0x3a3a5e8, size 0x50, virtual false, abstract: false, final false
inline void Put(int32_t  value) ;

/// @brief Method Put, addr 0x3a3a548, size 0x50, virtual false, abstract: false, final false
inline void Put(int64_t  value) ;

/// @brief Method Put, addr 0x3a3a778, size 0x68, virtual false, abstract: false, final false
inline void Put(int8_t  value) ;

/// @brief Method Put, addr 0x3a3a6d8, size 0x50, virtual false, abstract: false, final false
inline void Put(uint16_t  value) ;

/// @brief Method Put, addr 0x3a3a638, size 0x50, virtual false, abstract: false, final false
inline void Put(uint32_t  value) ;

/// @brief Method Put, addr 0x3a3a598, size 0x50, virtual false, abstract: false, final false
inline void Put(uint64_t  value) ;

/// @brief Method Put, addr 0x3a3a7e0, size 0x68, virtual false, abstract: false, final false
inline void Put(uint8_t  value) ;

/// @brief Method PutArray, addr 0x3a3aaec, size 0xac, virtual false, abstract: false, final false
inline void PutArray(::System::Array*  arr, int32_t  sz) ;

/// @brief Method PutArray, addr 0x3a3abe8, size 0x88, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method PutArray, addr 0x3a3ac70, size 0x9c, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<::StringW,::Array<::StringW>*>  value, int32_t  maxLength) ;

/// @brief Method PutArray, addr 0x3a3abe0, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<bool,::Array<bool>*>  value) ;

/// @brief Method PutArray, addr 0x3a3aba8, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<double_t,::Array<double_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3aba0, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3abd8, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<int16_t,::Array<int16_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3abc0, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3abb0, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<int64_t,::Array<int64_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3abd0, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3abc8, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3abb8, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<uint64_t,::Array<uint64_t>*>  value) ;

/// @brief Method PutArray, addr 0x3a3ab98, size 0x8, virtual false, abstract: false, final false
inline void PutArray(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method PutBytesWithLength, addr 0x3a3a9f0, size 0x90, virtual false, abstract: false, final false
inline void PutBytesWithLength(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method PutBytesWithLength, addr 0x3a3a964, size 0x8c, virtual false, abstract: false, final false
inline void PutBytesWithLength(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  offset, int32_t  length) ;

/// @brief Method PutSBytesWithLength, addr 0x3a3a8d4, size 0x90, virtual false, abstract: false, final false
inline void PutSBytesWithLength(::ArrayW<int8_t,::Array<int8_t>*>  data) ;

/// @brief Method PutSBytesWithLength, addr 0x3a3a848, size 0x8c, virtual false, abstract: false, final false
inline void PutSBytesWithLength(::ArrayW<int8_t,::Array<int8_t>*>  data, int32_t  offset, int32_t  length) ;

/// @brief Method Reset, addr 0x3a3a41c, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Reset, addr 0x3a3a404, size 0x18, virtual false, abstract: false, final false
inline void Reset(int32_t  size) ;

/// @brief Method ResizeIfNeed, addr 0x3a3a384, size 0x80, virtual false, abstract: false, final false
inline void ResizeIfNeed(int32_t  newSize) ;

constexpr bool const& __cordl_internal_get__autoResize() const;

constexpr bool& __cordl_internal_get__autoResize() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__data() ;

constexpr int32_t const& __cordl_internal_get__position() const;

constexpr int32_t& __cordl_internal_get__position() ;

constexpr void __cordl_internal_set__autoResize(bool  value) ;

constexpr void __cordl_internal_set__data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__position(int32_t  value) ;

/// @brief Method .ctor, addr 0x3a2ae44, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3a3a0a0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  autoResize) ;

/// @brief Method .ctor, addr 0x3a3a02c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(bool  autoResize, int32_t  initialSize) ;

/// @brief Method get_Capacity, addr 0x3a3a010, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Data, addr 0x3a3a498, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Data() ;

/// @brief Method get_Length, addr 0x3a3a4a0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetDataWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetDataWriter(NetDataWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetDataWriter(NetDataWriter const& ) = delete;

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____data;

/// @brief Field _position, offset: 0x18, size: 0x4, def value: None
 int32_t  ____position;

/// @brief Field _autoResize, offset: 0x1c, size: 0x1, def value: None
 bool  ____autoResize;

/// @brief Field InitialSize offset 0xffffffff size 0x4
static constexpr int32_t  InitialSize{static_cast<int32_t>(0x40)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NetDataWriter, 0x20>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataWriter, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataWriter, ____position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::Utils::NetDataWriter, ____autoResize) == 0x1c, "Offset mismatch!");

} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NetDataWriter);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetDataWriter*, "LiteNetLib.Utils", "NetDataWriter");
