#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Buffer)
namespace System {
class Array;
}
// Forward declare root types
namespace System {
class Buffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Buffer);
// Type: System::Buffer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2548))
// CS Name: ::System::Buffer*
class CORDL_TYPE Buffer : public ::System::Object {
public:
  // Declarations
  /// @brief Method InternalBlockCopy addr 0x25dbef0 size 0x4 virtual false final false
  static inline bool InternalBlockCopy(::System::Array* src, int32_t srcOffsetBytes, ::System::Array* dst, int32_t dstOffsetBytes, int32_t byteCount);

  /// @brief Method IndexOfByte addr 0x25dbef4 size 0x110 virtual false final false
  static inline int32_t IndexOfByte(::cordl_internals::Ptr<uint8_t> src, uint8_t value, int32_t index, int32_t count);

  /// @brief Method _ByteLength addr 0x25dc004 size 0x4 virtual false final false
  static inline int32_t _ByteLength(::System::Array* array);

  /// @brief Method ZeroMemory addr 0x25dc008 size 0x24 virtual false final false
  static inline void ZeroMemory(::cordl_internals::Ptr<uint8_t> src, int64_t len);

  /// @brief Method Memcpy addr 0x25dc02c size 0x34 virtual false final false
  static inline void Memcpy(::cordl_internals::Ptr<uint8_t> pDest, int32_t destIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, int32_t len);

  /// @brief Method InternalMemcpy addr 0x25dc0cc size 0x4 virtual false final false
  static inline void InternalMemcpy(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t count);

  /// @brief Method ByteLength addr 0x25dc0d0 size 0x9c virtual false final false
  static inline int32_t ByteLength(::System::Array* array);

  /// @brief Method BlockCopy addr 0x25dc16c size 0x1c0 virtual false final false
  static inline void BlockCopy(::System::Array* src, int32_t srcOffset, ::System::Array* dst, int32_t dstOffset, int32_t count);

  /// @brief Method MemoryCopy addr 0x25dc32c size 0x80 virtual false final false
  static inline void MemoryCopy(::cordl_internals::Ptr<void> source, ::cordl_internals::Ptr<void> destination, int64_t destinationSizeInBytes, int64_t sourceBytesToCopy);

  /// @brief Method memcpy4 addr 0x25dc3d8 size 0x8c virtual false final false
  static inline void memcpy4(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy2 addr 0x25dc464 size 0x7c virtual false final false
  static inline void memcpy2(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method memcpy1 addr 0x25dc4e0 size 0xac virtual false final false
  static inline void memcpy1(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t size);

  /// @brief Method Memcpy addr 0x25dc060 size 0x6c virtual false final false
  static inline void Memcpy(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, int32_t len, bool useICall);

  /// @brief Method Memmove addr 0x25dc3ac size 0x2c virtual false final false
  static inline void Memmove(::cordl_internals::Ptr<uint8_t> dest, ::cordl_internals::Ptr<uint8_t> src, uint32_t len);

  /// @brief Method Memmove addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Memmove(ByRef<T> destination, ByRef<T> source, uint64_t elementCount);

  // Ctor Parameters [CppParam { name: "", ty: "Buffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Buffer(Buffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Buffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Buffer(Buffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Buffer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffer, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Buffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffer*, "System", "Buffer");
