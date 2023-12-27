#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetDataWriter)
namespace System {
class Array;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::NetDataWriter);
// Type: LiteNetLib.Utils::NetDataWriter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14195))
// CS Name: ::LiteNetLib.Utils::NetDataWriter*
class CORDL_TYPE NetDataWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _position, offset 0x18, size 0x4
  __declspec(property(get = __get__position, put = __set__position)) int32_t _position;

  /// @brief Field _autoResize, offset 0x1c, size 0x1
  __declspec(property(get = __get__autoResize, put = __set__autoResize)) bool _autoResize;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Data))::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  __declspec(property(get = get_Length)) int32_t Length;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__data() const;

  constexpr void __set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__position();

  constexpr int32_t const& __get__position() const;

  constexpr void __set__position(int32_t value);

  constexpr bool& __get__autoResize();

  constexpr bool const& __get__autoResize() const;

  constexpr void __set__autoResize(bool value);

  /// @brief Method get_Capacity addr 0x220a898 size 0x1c virtual false final false
  inline int32_t get_Capacity();

  static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor();

  /// @brief Method .ctor addr 0x21fac80 size 0xc virtual false final false
  inline void _ctor();

  static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor(bool autoResize);

  /// @brief Method .ctor addr 0x220a924 size 0xc virtual false final false
  inline void _ctor(bool autoResize);

  static inline ::LiteNetLib::Utils::NetDataWriter* New_ctor(bool autoResize, int32_t initialSize);

  /// @brief Method .ctor addr 0x220a8b4 size 0x70 virtual false final false
  inline void _ctor(bool autoResize, int32_t initialSize);

  /// @brief Method FromBytes addr 0x220a930 size 0xa0 virtual false final false
  static inline ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, bool copy);

  /// @brief Method FromBytes addr 0x220aa44 size 0x8c virtual false final false
  static inline ::LiteNetLib::Utils::NetDataWriter* FromBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method FromString addr 0x2201f28 size 0x70 virtual false final false
  static inline ::LiteNetLib::Utils::NetDataWriter* FromString(::StringW value);

  /// @brief Method ResizeIfNeed addr 0x220ac08 size 0x80 virtual false final false
  inline void ResizeIfNeed(int32_t newSize);

  /// @brief Method Reset addr 0x220ac88 size 0x18 virtual false final false
  inline void Reset(int32_t size);

  /// @brief Method Reset addr 0x220aca0 size 0x8 virtual false final false
  inline void Reset();

  /// @brief Method CopyData addr 0x220aca8 size 0x74 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CopyData();

  /// @brief Method get_Data addr 0x220ad1c size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Data();

  /// @brief Method get_Length addr 0x220ad24 size 0x8 virtual false final false
  inline int32_t get_Length();

  /// @brief Method Put addr 0x220ad2c size 0x50 virtual false final false
  inline void Put(float_t value);

  /// @brief Method Put addr 0x220ad7c size 0x50 virtual false final false
  inline void Put(double_t value);

  /// @brief Method Put addr 0x220adcc size 0x50 virtual false final false
  inline void Put(int64_t value);

  /// @brief Method Put addr 0x220ae1c size 0x50 virtual false final false
  inline void Put(uint64_t value);

  /// @brief Method Put addr 0x220ae6c size 0x50 virtual false final false
  inline void Put(int32_t value);

  /// @brief Method Put addr 0x220aebc size 0x50 virtual false final false
  inline void Put(uint32_t value);

  /// @brief Method Put addr 0x220af0c size 0x50 virtual false final false
  inline void Put(char16_t value);

  /// @brief Method Put addr 0x220af5c size 0x50 virtual false final false
  inline void Put(uint16_t value);

  /// @brief Method Put addr 0x220afac size 0x50 virtual false final false
  inline void Put(int16_t value);

  /// @brief Method Put addr 0x220affc size 0x68 virtual false final false
  inline void Put(int8_t value);

  /// @brief Method Put addr 0x220b064 size 0x68 virtual false final false
  inline void Put(uint8_t value);

  /// @brief Method Put addr 0x220aad0 size 0x6c virtual false final false
  inline void Put(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method Put addr 0x220a9d0 size 0x74 virtual false final false
  inline void Put(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method PutSBytesWithLength addr 0x220b0cc size 0x8c virtual false final false
  inline void PutSBytesWithLength(::ArrayW<int8_t, ::Array<int8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method PutSBytesWithLength addr 0x220b158 size 0x90 virtual false final false
  inline void PutSBytesWithLength(::ArrayW<int8_t, ::Array<int8_t>*> data);

  /// @brief Method PutBytesWithLength addr 0x220b1e8 size 0x8c virtual false final false
  inline void PutBytesWithLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method PutBytesWithLength addr 0x220b274 size 0x90 virtual false final false
  inline void PutBytesWithLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Put addr 0x220b304 size 0x6c virtual false final false
  inline void Put(bool value);

  /// @brief Method PutArray addr 0x220b370 size 0xac virtual false final false
  inline void PutArray(::System::Array* arr, int32_t sz);

  /// @brief Method PutArray addr 0x220b41c size 0x8 virtual false final false
  inline void PutArray(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method PutArray addr 0x220b424 size 0x8 virtual false final false
  inline void PutArray(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method PutArray addr 0x220b42c size 0x8 virtual false final false
  inline void PutArray(::ArrayW<double_t, ::Array<double_t>*> value);

  /// @brief Method PutArray addr 0x220b434 size 0x8 virtual false final false
  inline void PutArray(::ArrayW<int64_t, ::Array<int64_t>*> value);

  /// @brief Method PutArray addr 0x220b43c size 0x8 virtual false final false
  inline void PutArray(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method PutArray addr 0x220b444 size 0x8 virtual false final false
  inline void PutArray(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method PutArray addr 0x220b44c size 0x8 virtual false final false
  inline void PutArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method PutArray addr 0x220b454 size 0x8 virtual false final false
  inline void PutArray(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  /// @brief Method PutArray addr 0x220b45c size 0x8 virtual false final false
  inline void PutArray(::ArrayW<int16_t, ::Array<int16_t>*> value);

  /// @brief Method PutArray addr 0x220b464 size 0x8 virtual false final false
  inline void PutArray(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method PutArray addr 0x220b46c size 0x88 virtual false final false
  inline void PutArray(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method PutArray addr 0x220b4f4 size 0x9c virtual false final false
  inline void PutArray(::ArrayW<::StringW, ::Array<::StringW>*> value, int32_t maxLength);

  /// @brief Method Put addr 0x220b678 size 0x4c virtual false final false
  inline void Put(::System::Net::IPEndPoint* endPoint);

  /// @brief Method Put addr 0x220ab3c size 0xcc virtual false final false
  inline void Put(::StringW value);

  /// @brief Method Put addr 0x220b590 size 0xe8 virtual false final false
  inline void Put(::StringW value, int32_t maxLength);

  /// @brief Method Put addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void Put(T obj);

  // Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDataWriter(NetDataWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDataWriter(NetDataWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDataWriter();

public:
  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____data;

  /// @brief Field _position, offset: 0x18, size: 0x4, def value: None
  int32_t ____position;

  /// @brief Field _autoResize, offset: 0x1c, size: 0x1, def value: None
  bool ____autoResize;

  /// @brief Field InitialSize offset 0xffffffff size 0x4
  static constexpr int32_t InitialSize{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NetDataWriter, 0x20>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::NetDataWriter);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetDataWriter*, "LiteNetLib.Utils", "NetDataWriter");
