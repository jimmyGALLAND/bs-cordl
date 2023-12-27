#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinHexDecoder)
// Forward declare root types
namespace System::Xml {
class BinHexDecoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::BinHexDecoder);
// Type: System.Xml::BinHexDecoder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11432))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11406))
// CS Name: ::System.Xml::BinHexDecoder*
class CORDL_TYPE BinHexDecoder : public ::System::Xml::IncrementalReadDecoder {
public:
  // Declarations
  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field curIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_curIndex, put = __set_curIndex)) int32_t curIndex;

  /// @brief Field endIndex, offset 0x1c, size 0x4
  __declspec(property(get = __get_endIndex, put = __set_endIndex)) int32_t endIndex;

  /// @brief Field hasHalfByteCached, offset 0x20, size 0x1
  __declspec(property(get = __get_hasHalfByteCached, put = __set_hasHalfByteCached)) bool hasHalfByteCached;

  /// @brief Field cachedHalfByte, offset 0x21, size 0x1
  __declspec(property(get = __get_cachedHalfByte, put = __set_cachedHalfByte)) uint8_t cachedHalfByte;

  __declspec(property(get = get_IsFull)) bool IsFull;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_curIndex();

  constexpr int32_t const& __get_curIndex() const;

  constexpr void __set_curIndex(int32_t value);

  constexpr int32_t& __get_endIndex();

  constexpr int32_t const& __get_endIndex() const;

  constexpr void __set_endIndex(int32_t value);

  constexpr bool& __get_hasHalfByteCached();

  constexpr bool const& __get_hasHalfByteCached() const;

  constexpr void __set_hasHalfByteCached(bool value);

  constexpr uint8_t& __get_cachedHalfByte();

  constexpr uint8_t const& __get_cachedHalfByte() const;

  constexpr void __set_cachedHalfByte(uint8_t value);

  /// @brief Method get_IsFull addr 0x284dc04 size 0x10 virtual true final false
  inline bool get_IsFull();

  /// @brief Method Decode addr 0x284dc14 size 0x158 virtual true final false
  inline int32_t Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  /// @brief Method Decode addr 0x284df38 size 0x1e8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, bool allowOddChars);

  /// @brief Method Decode addr 0x284dd6c size 0x1cc virtual false final false
  static inline void Decode(::cordl_internals::Ptr<char16_t> pChars, ::cordl_internals::Ptr<char16_t> pCharsEndPos, ::cordl_internals::Ptr<uint8_t> pBytes,
                            ::cordl_internals::Ptr<uint8_t> pBytesEndPos, ByRef<bool> hasHalfByteCached, ByRef<uint8_t> cachedHalfByte, ByRef<int32_t> charsDecoded, ByRef<int32_t> bytesDecoded);

  // Ctor Parameters [CppParam { name: "", ty: "BinHexDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinHexDecoder(BinHexDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinHexDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinHexDecoder(BinHexDecoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinHexDecoder();

public:
  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field curIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___curIndex;

  /// @brief Field endIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___endIndex;

  /// @brief Field hasHalfByteCached, offset: 0x20, size: 0x1, def value: None
  bool ___hasHalfByteCached;

  /// @brief Field cachedHalfByte, offset: 0x21, size: 0x1, def value: None
  uint8_t ___cachedHalfByte;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BinHexDecoder, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::BinHexDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinHexDecoder*, "System.Xml", "BinHexDecoder");
